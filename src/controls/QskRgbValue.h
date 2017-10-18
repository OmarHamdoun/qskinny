/******************************************************************************
 * QSkinny - Copyright (C) 2016 Uwe Rathmann
 * This file may be used under the terms of the QSkinny License, Version 1.0
 *****************************************************************************/

#ifndef QSK_RGB_VALUE_H
#define QSK_RGB_VALUE_H

#include "QskGlobal.h"
#include <QColor>

#define QSK_RGB_VALUES \
    /* Web colors */ \
    RGB( Black, 0xff000000 ) \
    RGB( Navy, 0xff000080 ) \
    RGB( DarkBlue, 0xff00008b ) \
    RGB( MediumBlue, 0xff0000cd ) \
    RGB( Blue, 0xff0000ff ) \
    RGB( DarkGreen, 0xff006400 ) \
    RGB( Green, 0xff008000 ) \
    RGB( Teal, 0xff008080 ) \
    RGB( DarkCyan, 0xff008b8b ) \
    RGB( DeepSkyBlue, 0xff00bfff ) \
    RGB( DarkTurquoise, 0xff00ced1 ) \
    RGB( MediumSpringGreen, 0xff00fa9a ) \
    RGB( Lime, 0xff00ff00 ) \
    RGB( SpringGreen, 0xff00ff7f ) \
    RGB( Cyan, 0xff00ffff ) \
    RGB( Aqua, 0xff00ffff ) \
    RGB( MidnightBlue, 0xff191970 ) \
    RGB( DodgerBlue, 0xff1e90ff ) \
    RGB( LightSeaGreen, 0xff20b2aa ) \
    RGB( ForestGreen, 0xff228b22 ) \
    RGB( SeaGreen, 0xff2e8b57 ) \
    RGB( DarkSlateGrey, 0xff2f4f4f ) \
    RGB( Limegreen, 0xff32cd32 ) \
    RGB( MediumSeaGreen, 0xff3cb371 ) \
    RGB( Turquoise, 0xff40e0d0 ) \
    RGB( RoyalBlue, 0xff4169e1 ) \
    RGB( SteelBlue, 0xff4682b4 ) \
    RGB( DarkSlateBlue, 0xff483d8b ) \
    RGB( MediumTurquoise, 0xff48d1cc ) \
    RGB( Indigo, 0xff4b0082 ) \
    RGB( DarkOliveGreen, 0xff556b2f ) \
    RGB( CadetBlue, 0xff5f9ea0 ) \
    RGB( CornflowerBlue, 0xff6495ed ) \
    RGB( MediumAquamarine, 0xff66cdaa ) \
    RGB( DimGrey, 0xff696969 ) \
    RGB( SlateBlue, 0xff6a5acd ) \
    RGB( OliveDrab, 0xff6b8e23 ) \
    RGB( SlateGrey, 0xff708090 ) \
    RGB( LightSlateGrey, 0xff778899 ) \
    RGB( MediumSlateBlue, 0xff7b68ee ) \
    RGB( LawnGreen, 0xff7cfc00 ) \
    RGB( Chartreuse, 0xff7fff00 ) \
    RGB( Aquamarine, 0xff7fffd4 ) \
    RGB( Maroon, 0xff800000 ) \
    RGB( Purple, 0xff800080 ) \
    RGB( Olive, 0xff808080 ) \
    RGB( Grey, 0xff808080 ) \
    RGB( SkyBlue, 0xff87ceeb ) \
    RGB( LightSkyBlue, 0xff87cefa ) \
    RGB( BlueViolet, 0xff8a2be2 ) \
    RGB( DarkRed, 0xff8b0000 ) \
    RGB( DarkMagenta, 0xff8b008b ) \
    RGB( SaddleBown, 0xff8b4513 ) \
    RGB( DarkSeaGreen, 0xff8fbc8f ) \
    RGB( LightGreen, 0xff90ee90 ) \
    RGB( MediumPurple, 0xff9370db ) \
    RGB( DarkViolet, 0xff9400d3 ) \
    RGB( PaleGreen, 0xff98fb98 ) \
    RGB( DarkOrchid, 0xff9932cc ) \
    RGB( YellowGreen, 0xff9acd32 ) \
    RGB( Sienna, 0xffa0522d ) \
    RGB( Brown, 0xffa52a2a ) \
    RGB( DarkGrey, 0xffa9a9a9 ) \
    RGB( LightBlue, 0xffadd8e6 ) \
    RGB( GreenYellow, 0xffadff2f ) \
    RGB( PaleTurquoise, 0xffafeeee ) \
    RGB( LightSteelBlue, 0xffb0c4de ) \
    RGB( PowderBlue, 0xffb0e0e6 ) \
    RGB( FireBrick, 0xffb22222 ) \
    RGB( DarkGoldenrod, 0xffb8860b ) \
    RGB( MediumOrchid, 0xffba55d3 ) \
    RGB( RosyBrown, 0xffbc8f8f ) \
    RGB( DarkKhaki, 0xffbdb76b ) \
    RGB( Silver, 0xffc0c0c0 ) \
    RGB( MediumVioletRed, 0xffc71585 ) \
    RGB( IndianRed, 0xffcd5c5c ) \
    RGB( Peru, 0xffcd853f ) \
    RGB( Chocolate, 0xffd2691e ) \
    RGB( Tan, 0xffd2b48c ) \
    RGB( LightGrey, 0xffd3d3d3 ) \
    RGB( Thistle, 0xffd8bfd8 ) \
    RGB( Orchid, 0xffda70d6 ) \
    RGB( Goldenrod, 0xffdaa520 ) \
    RGB( PaleVioletRed, 0xffdb7093 ) \
    RGB( Crimson, 0xffdc143c ) \
    RGB( Gainsboro, 0xffdcdcdc ) \
    RGB( Plum, 0xffdda0dd ) \
    RGB( Burlywood, 0xffdeb887 ) \
    RGB( LightCyan, 0xffe0ffff ) \
    RGB( Lavender, 0xffe6e6fa ) \
    RGB( DarkSalmon, 0xffe9967a ) \
    RGB( Violet, 0xffee82ee ) \
    RGB( PaleGoldenrod, 0xffeee8aa ) \
    RGB( LightCoral, 0xfff08080 ) \
    RGB( Khaki, 0xfff0e68c ) \
    RGB( AliceBlue, 0xfff0f8ff ) \
    RGB( Honeydew, 0xfff0fff0 ) \
    RGB( Azure, 0xfff0ffff ) \
    RGB( SandyBrown, 0xfff4a460 ) \
    RGB( Wheat, 0xfff5deb3 ) \
    RGB( Beige, 0xfff5f5dc ) \
    RGB( WhiteSmoke, 0xfff5f5f5 ) \
    RGB( MintCream, 0xfff5fffa ) \
    RGB( GhostWhite, 0xfff8f8ff ) \
    RGB( Salmon, 0xfffa8072 ) \
    RGB( AntiqueWhite, 0xfffaebd7 ) \
    RGB( Linen, 0xfffaf0e6 ) \
    RGB( LightGoldenrodYellow, 0xfffafad2 ) \
    RGB( OldLace, 0xfffdf5e6 ) \
    RGB( Red, 0xffff0000 ) \
    RGB( Fuchsia, 0xffff00ff ) \
    RGB( Magenta, 0xffff00ff ) \
    RGB( DeepPink, 0xffff1493 ) \
    RGB( OrangeRed, 0xffff4500 ) \
    RGB( Tomato, 0xffff6347 ) \
    RGB( HotPink, 0xffff69b4 ) \
    RGB( Coral, 0xffff7f50 ) \
    RGB( DarkOrange, 0xffff8c00 ) \
    RGB( LightSalmon, 0xffffa07a ) \
    RGB( Orange, 0xffffa500 ) \
    RGB( LightPink, 0xffffb6c1 ) \
    RGB( Pink, 0xffffc0cb ) \
    RGB( Gold, 0xffffd700 ) \
    RGB( PeachPuff, 0xffffdab9 ) \
    RGB( NavajoWhite, 0xffffdead ) \
    RGB( Moccasin, 0xffffe4b5 ) \
    RGB( Bisque, 0xffffe4c4 ) \
    RGB( MistyRose, 0xffffe4e1 ) \
    RGB( BlanchedAlmond, 0xffffebcd ) \
    RGB( PapayaWhip, 0xffffefd5 ) \
    RGB( LavenderBlush, 0xfffff0f5 ) \
    RGB( Seashell, 0xfffff5ee ) \
    RGB( Cornsilk, 0xfffff8dc ) \
    RGB( LemonChiffon, 0xfffffacd ) \
    RGB( FloralWhite, 0xfffffaf0 ) \
    RGB( Snow, 0xfffffafa ) \
    RGB( Yellow, 0xffffff00 ) \
    RGB( LightYellow, 0xffffffe0 ) \
    RGB( Ivory, 0xfffffff0 ) \
    RGB( White, 0xffffffff ) \
    /* Material colors from https://material.google.com/style/color.html */ \
    RGB( Red50, 0xffffebee ) \
    RGB( Red100, 0xffffcdd2 ) \
    RGB( Red200, 0xffef9a9a ) \
    RGB( Red300, 0xffe57373 ) \
    RGB( Red400, 0xffef5350 ) \
    RGB( Red500, 0xfff44336 ) \
    RGB( Red600, 0xffe53935 ) \
    RGB( Red700, 0xffd32f2f ) \
    RGB( Red800, 0xffc62828 ) \
    RGB( Red900, 0xffb71c1c ) \
    RGB( RedA100, 0xffff8a80 ) \
    RGB( RedA200, 0xffff5252 ) \
    RGB( RedA400, 0xffff1744 ) \
    RGB( RedA700, 0xffd50000 ) \
    \
    RGB( Pink50, 0xfffce4ec ) \
    RGB( Pink100, 0xfff8bbd0 ) \
    RGB( Pink200, 0xfff48fb1 ) \
    RGB( Pink300, 0xfff06292 ) \
    RGB( Pink400, 0xffec407a ) \
    RGB( Pink500, 0xffe91e63 ) \
    RGB( Pink600, 0xffd81b60 ) \
    RGB( Pink700, 0xffc2185b ) \
    RGB( Pink800, 0xffad1457 ) \
    RGB( Pink900, 0xff880e4f ) \
    RGB( PinkA100, 0xffff80ab ) \
    RGB( PinkA200, 0xffff4081 ) \
    RGB( PinkA400, 0xfff50057 ) \
    RGB( PinkA700, 0xffc51162 ) \
    \
    RGB( Purple50, 0xfff3e5f5 ) \
    RGB( Purple100, 0xffe1bee7 ) \
    RGB( Purple200, 0xffce93d8 ) \
    RGB( Purple300, 0xffba68c8 ) \
    RGB( Purple400, 0xffab47bc ) \
    RGB( Purple500, 0xff9c27b0 ) \
    RGB( Purple600, 0xff8e24aa ) \
    RGB( Purple700, 0xff7b1fa2 ) \
    RGB( Purple800, 0xff6a1b9a ) \
    RGB( Purple900, 0xff4a148c ) \
    RGB( PurpleA100, 0xffea80fc ) \
    RGB( PurpleA200, 0xffe040fb ) \
    RGB( PurpleA400, 0xffd500f9 ) \
    RGB( PurpleA700, 0xffaa00ff ) \
    \
    RGB( DeepPurple50, 0xffede7f6 ) \
    RGB( DeepPurple100, 0xffd1c4e9 ) \
    RGB( DeepPurple200, 0xffb39ddb ) \
    RGB( DeepPurple300, 0xff9575cd ) \
    RGB( DeepPurple400, 0xff7e57c2 ) \
    RGB( DeepPurple500, 0xff673ab7 ) \
    RGB( DeepPurple600, 0xff5e35b1 ) \
    RGB( DeepPurple700, 0xff512da8 ) \
    RGB( DeepPurple800, 0xff4527a0 ) \
    RGB( DeepPurple900, 0xff311b92 ) \
    RGB( DeepPurpleA100, 0xffb388ff ) \
    RGB( DeepPurpleA200, 0xff7c4dff ) \
    RGB( DeepPurpleA400, 0xff651fff ) \
    RGB( DeepPurpleA700, 0xff6200ea ) \
    \
    RGB( Indigo50, 0xffe8eaf6 ) \
    RGB( Indigo100, 0xffc5cae9 ) \
    RGB( Indigo200, 0xff9fa8da ) \
    RGB( Indigo300, 0xff7986cb ) \
    RGB( Indigo400, 0xff5c6bc0 ) \
    RGB( Indigo500, 0xff3f51b5 ) \
    RGB( Indigo600, 0xff3949ab ) \
    RGB( Indigo700, 0xff303f9f ) \
    RGB( Indigo800, 0xff283593 ) \
    RGB( Indigo900, 0xff1a237e ) \
    RGB( IndigoA100, 0xff8c9eff ) \
    RGB( IndigoA200, 0xff536dfe ) \
    RGB( IndigoA400, 0xff3d5afe ) \
    RGB( IndigoA700, 0xff304ffe ) \
    \
    RGB( Blue50, 0xffe3f2fd ) \
    RGB( Blue100, 0xffbbdefb ) \
    RGB( Blue200, 0xff90caf9 ) \
    RGB( Blue300, 0xff64b5f6 ) \
    RGB( Blue400, 0xff42a5f5 ) \
    RGB( Blue500, 0xff2196f3 ) \
    RGB( Blue600, 0xff1e88e5 ) \
    RGB( Blue700, 0xff1976d2 ) \
    RGB( Blue800, 0xff1565c0 ) \
    RGB( Blue900, 0xff0d47a1 ) \
    RGB( BlueA100, 0xff82b1ff ) \
    RGB( BlueA200, 0xff448aff ) \
    RGB( BlueA400, 0xff2979ff ) \
    RGB( BlueA700, 0xff2962ff ) \
    \
    RGB( LightBlue50, 0xffe1f5fe ) \
    RGB( LightBlue100, 0xffb3e5fc ) \
    RGB( LightBlue200, 0xff81d4fa ) \
    RGB( LightBlue300, 0xff4fc3f7 ) \
    RGB( LightBlue400, 0xff29b6f6 ) \
    RGB( LightBlue500, 0xff03a9f4 ) \
    RGB( LightBlue600, 0xff039be5 ) \
    RGB( LightBlue700, 0xff0288d1 ) \
    RGB( LightBlue800, 0xff0277bd ) \
    RGB( LightBlue900, 0xff01579b ) \
    RGB( LightBlueA100, 0xff80d8ff ) \
    RGB( LightBlueA200, 0xff40c4ff ) \
    RGB( LightBlueA400, 0xff00b0ff ) \
    RGB( LightBlueA700, 0xff0091ea ) \
    \
    RGB( Cyan50, 0xffe0f7fa ) \
    RGB( Cyan100, 0xffb2ebf2 ) \
    RGB( Cyan200, 0xff80deea ) \
    RGB( Cyan300, 0xff4dd0e1 ) \
    RGB( Cyan400, 0xff26c6da ) \
    RGB( Cyan500, 0xff00bcd4 ) \
    RGB( Cyan600, 0xff00acc1 ) \
    RGB( Cyan700, 0xff0097a7 ) \
    RGB( Cyan800, 0xff00838f ) \
    RGB( Cyan900, 0xff006064 ) \
    RGB( CyanA100, 0xff84ffff ) \
    RGB( CyanA200, 0xff18ffff ) \
    RGB( CyanA400, 0xff00e5ff ) \
    RGB( CyanA700, 0xff00b8d4 ) \
    \
    RGB( Teal50, 0xffe0f2f1 ) \
    RGB( Teal100, 0xffb2dfdb ) \
    RGB( Teal200, 0xff80cbc4 ) \
    RGB( Teal300, 0xff4db6ac ) \
    RGB( Teal400, 0xff26a69a ) \
    RGB( Teal500, 0xff009688 ) \
    RGB( Teal600, 0xff00897b ) \
    RGB( Teal700, 0xff00796b ) \
    RGB( Teal800, 0xff00695c ) \
    RGB( Teal900, 0xff004d40 ) \
    RGB( TealA100, 0xffa7ffeb ) \
    RGB( TealA200, 0xff64ffda ) \
    RGB( TealA400, 0xff1de9b6 ) \
    RGB( TealA700, 0xff00bfa5 ) \
    \
    RGB( Green50, 0xffe8f5e9 ) \
    RGB( Green100, 0xffc8e6c9 ) \
    RGB( Green200, 0xffa5d6a7 ) \
    RGB( Green300, 0xff81c784 ) \
    RGB( Green400, 0xff66bb6a ) \
    RGB( Green500, 0xff4caf50 ) \
    RGB( Green600, 0xff43a047 ) \
    RGB( Green700, 0xff388e3c ) \
    RGB( Green800, 0xff2e7d32 ) \
    RGB( Green900, 0xff1b5e20 ) \
    RGB( GreenA100, 0xffb9f6ca ) \
    RGB( GreenA200, 0xff69f0ae ) \
    RGB( GreenA400, 0xff00e676 ) \
    RGB( GreenA700, 0xff00c853 ) \
    \
    RGB( LightGreen50, 0xfff1f8e9 ) \
    RGB( LightGreen100, 0xffdcedc8 ) \
    RGB( LightGreen200, 0xffc5e1a5 ) \
    RGB( LightGreen300, 0xffaed581 ) \
    RGB( LightGreen400, 0xff9ccc65 ) \
    RGB( LightGreen500, 0xff8bc34a ) \
    RGB( LightGreen600, 0xff7cb342 ) \
    RGB( LightGreen700, 0xff689f38 ) \
    RGB( LightGreen800, 0xff558b2f ) \
    RGB( LightGreen900, 0xff33691e ) \
    RGB( LightGreenA100, 0xffccff90 ) \
    RGB( LightGreenA200, 0xffb2ff59 ) \
    RGB( LightGreenA400, 0xff76ff03 ) \
    RGB( LightGreenA700, 0xff64dd17 ) \
    \
    RGB( Lime50, 0xfff9fbe7 ) \
    RGB( Lime100, 0xfff0f4c3 ) \
    RGB( Lime200, 0xffe6ee9c ) \
    RGB( Lime300, 0xffdce775 ) \
    RGB( Lime400, 0xffd4e157 ) \
    RGB( Lime500, 0xffcddc39 ) \
    RGB( Lime600, 0xffc0ca33 ) \
    RGB( Lime700, 0xffafb42b ) \
    RGB( Lime800, 0xff9e9d24 ) \
    RGB( Lime900, 0xff827717 ) \
    RGB( LimeA100, 0xfff4ff81 ) \
    RGB( LimeA200, 0xffeeff41 ) \
    RGB( LimeA400, 0xffc6ff00 ) \
    RGB( LimeA700, 0xffaeea00 ) \
    \
    RGB( Yellow50, 0xfffffde7 ) \
    RGB( Yellow100, 0xfffff9c4 ) \
    RGB( Yellow200, 0xfffff59d ) \
    RGB( Yellow300, 0xfffff176 ) \
    RGB( Yellow400, 0xffffee58 ) \
    RGB( Yellow500, 0xffffeb3b ) \
    RGB( Yellow600, 0xfffdd835 ) \
    RGB( Yellow700, 0xfffbc02d ) \
    RGB( Yellow800, 0xfff9a825 ) \
    RGB( Yellow900, 0xfff57f17 ) \
    RGB( YellowA100, 0xffffff8d ) \
    RGB( YellowA200, 0xffffff00 ) \
    RGB( YellowA400, 0xffffea00 ) \
    RGB( YellowA700, 0xffffd600 ) \
    \
    RGB( Amber50, 0xfffff8e1 ) \
    RGB( Amber100, 0xffffecb3 ) \
    RGB( Amber200, 0xffffe082 ) \
    RGB( Amber300, 0xffffd54f ) \
    RGB( Amber400, 0xffffca28 ) \
    RGB( Amber500, 0xffffc107 ) \
    RGB( Amber600, 0xffffb300 ) \
    RGB( Amber700, 0xffffa000 ) \
    RGB( Amber800, 0xffff8f00 ) \
    RGB( Amber900, 0xffff6f00 ) \
    RGB( AmberA100, 0xffffe57f ) \
    RGB( AmberA200, 0xffffd740 ) \
    RGB( AmberA400, 0xffffc400 ) \
    RGB( AmberA700, 0xffffab00 ) \
    \
    RGB( Orange50, 0xfffff3e0 ) \
    RGB( Orange100, 0xffffe0b2 ) \
    RGB( Orange200, 0xffffcc80 ) \
    RGB( Orange300, 0xffffb74d ) \
    RGB( Orange400, 0xffffa726 ) \
    RGB( Orange500, 0xffff9800 ) \
    RGB( Orange600, 0xfffb8c00 ) \
    RGB( Orange700, 0xfff57c00 ) \
    RGB( Orange800, 0xffef6c00 ) \
    RGB( Orange900, 0xffe65100 ) \
    RGB( OrangeA100, 0xffffd180 ) \
    RGB( OrangeA200, 0xffffab40 ) \
    RGB( OrangeA400, 0xffff9100 ) \
    RGB( OrangeA700, 0xffff6d00 ) \
    \
    RGB( DeepOrange50, 0xfffbe9e7 ) \
    RGB( DeepOrange100, 0xffffccbc ) \
    RGB( DeepOrange200, 0xffffab91 ) \
    RGB( DeepOrange300, 0xffff8a65 ) \
    RGB( DeepOrange400, 0xffff7043 ) \
    RGB( DeepOrange500, 0xffff5722 ) \
    RGB( DeepOrange600, 0xfff4511e ) \
    RGB( DeepOrange700, 0xffe64a19 ) \
    RGB( DeepOrange800, 0xffd84315 ) \
    RGB( DeepOrange900, 0xffbf360c ) \
    RGB( DeepOrangeA100, 0xffff9e80 ) \
    RGB( DeepOrangeA200, 0xffff6e40 ) \
    RGB( DeepOrangeA400, 0xffff3d00 ) \
    RGB( DeepOrangeA700, 0xffdd2c00 ) \
    \
    RGB( Brown50, 0xffefebe9 ) \
    RGB( Brown100, 0xffd7ccc8 ) \
    RGB( Brown200, 0xffbcaaa4 ) \
    RGB( Brown300, 0xffa1887f ) \
    RGB( Brown400, 0xff8d6e63 ) \
    RGB( Brown500, 0xff795548 ) \
    RGB( Brown600, 0xff6d4c41 ) \
    RGB( Brown700, 0xff5d4037 ) \
    RGB( Brown800, 0xff4e342e ) \
    RGB( Brown900, 0xff3e2723 ) \
    \
    RGB( Grey50, 0xfffafafa ) \
    RGB( Grey100, 0xfff5f5f5 ) \
    RGB( Grey200, 0xffeeeeee ) \
    RGB( Grey300, 0xffe0e0e0 ) \
    RGB( Grey400, 0xffbdbdbd ) \
    RGB( Grey500, 0xff9e9e9e ) \
    RGB( Grey600, 0xff757575 ) \
    RGB( Grey700, 0xff616161 ) \
    RGB( Grey800, 0xff424242 ) \
    RGB( Grey900, 0xff212121 ) \
    \
    RGB( BlueGrey50, 0xffeceff1 ) \
    RGB( BlueGrey100, 0xffcfd8dc ) \
    RGB( BlueGrey200, 0xffb0bec5 ) \
    RGB( BlueGrey300, 0xff90a4ae ) \
    RGB( BlueGrey400, 0xff78909c ) \
    RGB( BlueGrey500, 0xff607d8b ) \
    RGB( BlueGrey600, 0xff546e7a ) \
    RGB( BlueGrey700, 0xff455a64 ) \
    RGB( BlueGrey800, 0xff37474f ) \
    RGB( BlueGrey900, 0xff263238 ) \
    \
    RGB( AlphaMask, 0xff000000 ) \
    RGB( ColorMask, 0x00ffffff )

namespace QskRgbValue
{
#define RGB(name, value) static constexpr const unsigned int name = value;
QSK_RGB_VALUES
#undef RGB

    QSK_EXPORT QRgb interpolated( QRgb rgb1, QRgb rgb2, qreal ratio );
    QSK_EXPORT QColor interpolated( const QColor& c1, const QColor& c2, qreal ratio );

    inline QColor toTransparent( const QColor& c1, int alpha = 0 )
    {
        return QColor::fromRgba( ( c1.rgb() & ColorMask ) | ( alpha & AlphaMask ) ); 
    }

    inline QRgb toTransparent( QRgb rgb, int alpha = 0 )
    {
        return ( rgb & ColorMask ) | ( alpha & AlphaMask ); 
    }
}

#endif
