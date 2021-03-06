/******************************************************************************
 * QSkinny - Copyright (C) 2016 Uwe Rathmann
 * This file may be used under the terms of the QSkinny License, Version 1.0
 *****************************************************************************/

#include "QskPlainTextRenderer.h"
#include "QskTextColors.h"
#include "QskTextOptions.h"

#include <qfontmetrics.h>
#include <qmath.h>
#include <qsgnode.h>

QSK_QT_PRIVATE_BEGIN
#include <private/qsgadaptationlayer_p.h>

#if QT_VERSION < QT_VERSION_CHECK( 5, 8, 0 )
#include <private/qsgcontext_p.h>
typedef QSGRenderContext RenderContext;
#else
#include <private/qsgdefaultrendercontext_p.h>
typedef QSGDefaultRenderContext RenderContext;
#endif

QSK_QT_PRIVATE_END

#define GlyphFlag static_cast< QSGNode::Flag >( 0x800 )

QSizeF QskPlainTextRenderer::textSize(
    const QString& text, const QFont& font, const QskTextOptions& options )
{
    // result differs from QskTextRenderer::implicitSizeHint ???
    return textRect( text, font, options, QSizeF( 10e6, 10e6 ) ).size();
}

QRectF QskPlainTextRenderer::textRect(
    const QString& text, const QFont& font, const QskTextOptions& options,
    const QSizeF& size )
{
    const QFontMetricsF fm( font );
    const QRectF r( 0, 0, size.width(), size.height() );

    return fm.boundingRect( r, options.textFlags(), text );
}

static qreal qskLayoutText( QTextLayout* layout,
    qreal lineWidth, const QskTextOptions& options )
{
    const auto maxLineCount = ( options.wrapMode() == QskTextOptions::NoWrap )
        ? 1 : options.maximumLineCount();

    int lineNumber = 0;
    int characterPosition = 0;
    qreal y = 0;

    Q_FOREVER
    {
        if ( ++lineNumber > maxLineCount )
            break;

        if ( lineNumber == maxLineCount )
        {
            const auto elideMode = options.elideMode();
            const auto engine = layout->engine();

            const auto textLength = engine->text.length();
            if ( elideMode != Qt::ElideNone && textLength > characterPosition )
            {
                if ( lineNumber == 1 || elideMode == Qt::ElideRight )
                {
                    auto option = layout->textOption();
                    option.setWrapMode( QTextOption::WrapAnywhere );
                    layout->setTextOption( option );

                    auto elidedText = engine->elidedText(
                        elideMode, QFixed::fromReal( lineWidth ),
                        Qt::TextShowMnemonic, characterPosition );

                    elidedText = elidedText.leftJustified( textLength - characterPosition );

                    engine->text.replace( characterPosition, elidedText.length(), elidedText );
                    Q_ASSERT( engine->text.length() == textLength );
                }
            }
        }

        auto line = layout->createLine();
        if ( !line.isValid() )
            break;

        line.setPosition( QPointF( 0, y ) );
        line.setLineWidth( lineWidth );
        characterPosition = line.textStart() + line.textLength();

        y += line.leading() + line.height();
    }

    return y;
}

static void qskRenderText(
    QQuickItem* item, QSGNode* parentNode, const QTextLayout& layout, qreal baseLine,
    const QColor& color, QQuickText::TextStyle style, const QColor& styleColor )
{
    auto renderContext = RenderContext::from( QOpenGLContext::currentContext() );
    auto sgContext = renderContext->sceneGraphContext();

    // Clear out foreign nodes (e.g. from QskRichTextRenderer)
    QSGNode* node = parentNode->firstChild();
    while ( node )
    {
        auto sibling = node->nextSibling();
        if ( !( node->flags() & GlyphFlag ) )
        {
            parentNode->removeChildNode( node );
            delete node;
        }
        node = sibling;
    }

    auto glyphNode = static_cast< QSGGlyphNode* >( parentNode->firstChild() );

    const QPointF position( 0, baseLine );

    for ( int i = 0; i < layout.lineCount(); ++i )
    {
        const auto glyphRuns = layout.lineAt( i ).glyphRuns();

        for ( const auto& glyphRun : glyphRuns )
        {
            if ( glyphNode == nullptr )
            {
                const bool preferNativeGlyphNode = false; // QskTextOptions?

                glyphNode = sgContext->createGlyphNode( renderContext, preferNativeGlyphNode );
                glyphNode->setOwnerElement( item );
                glyphNode->setFlags( QSGNode::OwnedByParent | GlyphFlag );
            }

            glyphNode->setStyle( style );
            glyphNode->setColor( color );
            glyphNode->setStyleColor( styleColor );
            glyphNode->setGlyphs( position, glyphRun );
            glyphNode->update();

            if ( glyphNode->parent() != parentNode )
                parentNode->appendChildNode( glyphNode );

            glyphNode = static_cast< QSGGlyphNode* >( glyphNode->nextSibling() );
        }
    }

    // Remove leftover glyphs
    while ( glyphNode )
    {
        auto sibling = glyphNode->nextSibling();
        if ( glyphNode->flags() & GlyphFlag )
        {
            parentNode->removeChildNode( glyphNode );
            delete glyphNode;
        }
        glyphNode = static_cast< QSGGlyphNode* >( sibling );
    }
}

void QskPlainTextRenderer::updateNode( const QString& text,
    const QFont& font, const QskTextOptions& options,
    Qsk::TextStyle style, const QskTextColors& colors,
    Qt::Alignment alignment, const QRectF& rect,
    const QQuickItem* item, QSGTransformNode* node )
{
    QTextOption textOption( alignment );
    textOption.setWrapMode( static_cast< QTextOption::WrapMode >( options.wrapMode() ) );

    QTextLayout layout;
    layout.setFont( font );
    layout.setTextOption( textOption );
    layout.setText( text );

    layout.beginLayout();
    const qreal textHeight = qskLayoutText( &layout, rect.width(), options );
    layout.endLayout();

    const qreal y0 = QFontMetricsF( font ).ascent();

    qreal yBaseline = y0;

    if ( alignment & Qt::AlignVCenter )
    {
        yBaseline += ( rect.height() - textHeight ) * 0.5;
    }
    else if ( alignment & Qt::AlignBottom )
    {
        yBaseline += rect.height() - textHeight;
    }

    if ( yBaseline != y0 )
    {
        /*
            We need to have a stable algo for rounding the text base line,
            so that texts don't start wobbling, when processing transitions
            between margins/paddings.
         */

        const int bh = int( layout.boundingRect().height() );
        yBaseline = ( bh % 2 ) ? qFloor( yBaseline ) : qCeil( yBaseline );
    }

    qskRenderText(
        const_cast< QQuickItem* >( item ), node, layout, yBaseline,
        colors.textColor, static_cast< QQuickText::TextStyle >( style ),
        colors.styleColor );
}

void QskPlainTextRenderer::updateNodeColor(
    QSGNode* parentNode, const QColor& textColor,
    Qsk::TextStyle style, const QColor& styleColor )
{
    auto glyphNode = static_cast< QSGGlyphNode* >( parentNode->firstChild() );
    while ( glyphNode )
    {
        if ( glyphNode->flags() & GlyphFlag )
        {
            glyphNode->setColor( textColor );
            glyphNode->setStyle( static_cast< QQuickText::TextStyle >( style ) );
            glyphNode->setStyleColor( styleColor );
            glyphNode->update();
        }
        glyphNode = static_cast< QSGGlyphNode* >( glyphNode->nextSibling() );
    }
}
