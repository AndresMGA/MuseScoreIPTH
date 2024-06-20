/****************************************************************************
** Meta object code from reading C++ file 'elements.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/engraving/api/v1/elements.h"
#include "engraving/api/v1/part.h"
#include "engraving/api/v1/tie.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEEngravingItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEEngravingItemENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::EngravingItem",
    "clone",
    "apiv1::EngravingItem*",
    "",
    "subtypeName",
    "_name",
    "parent",
    "staff",
    "apiv1::Staff*",
    "offsetX",
    "offsetY",
    "posX",
    "posY",
    "pagePos",
    "bbox",
    "subtype",
    "selected",
    "generated",
    "color",
    "visible",
    "z",
    "small",
    "showCourtesy",
    "lineType",
    "line",
    "fixed",
    "fixedLine",
    "headType",
    "headScheme",
    "headGroup",
    "articulationAnchor",
    "direction",
    "stemDirection",
    "noStem",
    "slurDirection",
    "leadingSpace",
    "mirrorHead",
    "dotPosition",
    "tuning",
    "pause",
    "barlineType",
    "barlineSpan",
    "barlineSpanFrom",
    "barlineSpanTo",
    "offset",
    "fret",
    "string",
    "ghost",
    "play",
    "timesigNominal",
    "timesigActual",
    "growLeft",
    "growRight",
    "boxHeight",
    "boxWidth",
    "topGap",
    "bottomGap",
    "leftMargin",
    "rightMargin",
    "topMargin",
    "bottomMargin",
    "layoutBreakType",
    "autoscale",
    "size",
    "scale",
    "lockAspectRatio",
    "sizeIsSpatium",
    "text",
    "beamPos",
    "beamMode",
    "beamNoSlope",
    "userLen",
    "space",
    "tempo",
    "tempoFollowText",
    "accidentalBracket",
    "numeratorString",
    "denominatorString",
    "fbprefix",
    "fbdigit",
    "fbsuffix",
    "fbcontinuationline",
    "ottavaType",
    "numbersOnly",
    "trillType",
    "vibratoType",
    "hairpinCircledTip",
    "hairpinType",
    "hairpinHeight",
    "hairpinContHeight",
    "veloChange",
    "singleNoteDynamics",
    "veloChangeMethod",
    "veloChangeSpeed",
    "dynamicRange",
    "changeMethod",
    "placement",
    "velocity",
    "jumpTo",
    "playUntil",
    "continueAt",
    "label",
    "markerType",
    "arpUserLen1",
    "arpUserLen2",
    "measureNumberMode",
    "glissType",
    "glissText",
    "glissShowText",
    "glissandoStyle",
    "glissEaseIn",
    "glissEaseOut",
    "diagonal",
    "groups",
    "lineStyle",
    "lineColor",
    "lineWidth",
    "timeStretch",
    "ornamentStyle",
    "timesig",
    "timesigGlobal",
    "timesigStretch",
    "timesigType",
    "spannerTick",
    "spannerTicks",
    "spannerTrack2",
    "userOff2",
    "breakMmr",
    "repeatCount",
    "userStretch",
    "noOffset",
    "irregular",
    "anchor",
    "slurUoff1",
    "slurUoff2",
    "slurUoff3",
    "slurUoff4",
    "staffMove",
    "verse",
    "syllabic",
    "lyricTicks",
    "volta_ending",
    "lineVisible",
    "mag",
    "useDrumset",
    "durationType",
    "role",
    "track",
    "fretStrings",
    "fretFrets",
    "fretOffset",
    "fretNumPos",
    "systemBracket",
    "gap",
    "autoplace",
    "dashLineLen",
    "dashGapLen",
    "symbol",
    "playRepeats",
    "createSystemHeader",
    "staffLines",
    "lineDistance",
    "stepOffset",
    "staffShowBarlines",
    "staffShowLedgerlines",
    "staffStemless",
    "staffGenClef",
    "staffGenTimesig",
    "staffGenKeysig",
    "staffYoffset",
    "bracketSpan",
    "bracketColumn",
    "inameLayoutPosition",
    "subStyle",
    "fontFace",
    "fontSize",
    "fontStyle",
    "frameType",
    "frameWidth",
    "framePadding",
    "frameRound",
    "frameFgColor",
    "frameBgColor",
    "sizeSpatiumDependent",
    "align",
    "systemFlag",
    "beginText",
    "beginTextAlign",
    "beginTextPlace",
    "beginHookType",
    "beginHookHeight",
    "beginFontFace",
    "beginFontSize",
    "beginFontStyle",
    "beginTextOffset",
    "continueText",
    "continueTextAlign",
    "continueTextPlace",
    "continueFontFace",
    "continueFontSize",
    "continueFontStyle",
    "continueTextOffset",
    "endText",
    "endTextAlign",
    "endTextPlace",
    "endHookType",
    "endHookHeight",
    "endFontFace",
    "endFontSize",
    "endFontStyle",
    "endTextOffset",
    "posAbove",
    "voice",
    "position",
    "harmonyType"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEEngravingItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
     208,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    3, 0x102,  209 /* Public | MethodIsConst  */,
       4,    0,   33,    3, 0x102,  210 /* Public | MethodIsConst  */,
       5,    0,   34,    3, 0x102,  211 /* Public | MethodIsConst  */,

 // methods: parameters
    0x80000000 | 2,
    QMetaType::QString,
    QMetaType::QString,

 // properties: name, type, flags
       6, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       7, 0x80000000 | 8, 0x00015009, uint(-1), 0,
       9, QMetaType::QReal, 0x00015103, uint(-1), 0,
      10, QMetaType::QReal, 0x00015103, uint(-1), 0,
      11, QMetaType::QReal, 0x00015001, uint(-1), 0,
      12, QMetaType::QReal, 0x00015001, uint(-1), 0,
      13, QMetaType::QPointF, 0x00015001, uint(-1), 0,
      14, QMetaType::QRectF, 0x00015001, uint(-1), 0,
      15, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      16, QMetaType::Bool, 0x00015001, uint(-1), 0,
      17, QMetaType::Bool, 0x00015001, uint(-1), 0,
      18, QMetaType::QColor, 0x00015003, uint(-1), 0,
      19, QMetaType::Bool, 0x00015003, uint(-1), 0,
      20, QMetaType::Int, 0x00015003, uint(-1), 0,
      21, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      22, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      23, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      24, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      25, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      26, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      27, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      28, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      29, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      30, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      31, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      32, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      33, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      34, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      35, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      36, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      37, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      38, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      39, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      40, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      41, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      42, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      43, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      44, QMetaType::QPointF, 0x00015003, uint(-1), 0,
      45, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      46, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      47, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      48, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      49, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      50, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      51, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      52, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      53, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      54, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      55, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      56, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      57, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      58, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      59, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      60, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      61, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      62, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      63, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      64, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      65, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      66, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      67, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      68, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      69, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      70, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      71, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      72, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      73, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      74, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      75, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      76, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      77, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      78, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      79, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      80, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      81, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      82, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      83, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      84, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      85, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      86, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      87, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      88, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      89, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      90, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      91, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      92, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      93, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      94, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      95, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      96, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      97, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      98, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      99, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     100, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     101, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     102, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     103, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     104, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     105, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     106, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     107, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     108, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     109, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     110, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     111, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     112, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     113, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     114, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     115, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     116, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     117, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     118, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     119, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     120, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     121, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     122, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     123, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     124, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     125, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     126, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     127, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     128, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     129, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     130, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     131, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     132, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     133, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     134, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     135, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     136, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     137, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     138, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     139, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     140, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     141, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     142, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     143, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     144, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     145, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     146, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     147, QMetaType::Int, 0x00015003, uint(-1), 0,
     148, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     149, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     150, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     151, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     152, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     153, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     154, QMetaType::Bool, 0x00015003, uint(-1), 0,
     155, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     156, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     157, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     158, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     159, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     160, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     161, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     162, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     163, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     164, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     165, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     166, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     167, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     168, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     169, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     170, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     171, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     172, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     173, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     174, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     175, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     176, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     177, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     178, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     179, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     180, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     181, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     182, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     183, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     184, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     185, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     186, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     187, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     188, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     189, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     190, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     191, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     192, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     193, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     194, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     195, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     196, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     197, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     198, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     199, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     200, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     201, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     202, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     203, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     204, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     205, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     206, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     207, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     208, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     209, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     210, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     211, QMetaType::QVariant, 0x00015003, uint(-1), 0,
     212, QMetaType::Int, 0x00015003, uint(-1), 0,
     213, QMetaType::QVariant, 0x00015001, uint(-1), 0,
     214, QMetaType::QVariant, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::EngravingItem::staticMetaObject = { {
    QMetaObject::SuperData::link<apiv1::ScoreElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEEngravingItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEEngravingItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEEngravingItemENDCLASS_t,
        // property 'parent'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem*, std::true_type>,
        // property 'staff'
        QtPrivate::TypeAndForceComplete<apiv1::Staff*, std::true_type>,
        // property 'offsetX'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'offsetY'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'posX'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'posY'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pagePos'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'bbox'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'subtype'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'generated'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'z'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'small'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'showCourtesy'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lineType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'line'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fixed'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fixedLine'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'headType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'headScheme'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'headGroup'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'articulationAnchor'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'direction'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'stemDirection'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'noStem'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'slurDirection'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'leadingSpace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'mirrorHead'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'dotPosition'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'tuning'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'pause'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'barlineType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'barlineSpan'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'barlineSpanFrom'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'barlineSpanTo'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'offset'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'fret'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'string'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'ghost'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'play'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'timesigNominal'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'timesigActual'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'growLeft'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'growRight'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'boxHeight'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'boxWidth'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'topGap'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'bottomGap'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'leftMargin'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'rightMargin'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'topMargin'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'bottomMargin'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'layoutBreakType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'autoscale'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'size'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'scale'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lockAspectRatio'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'sizeIsSpatium'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beamPos'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beamMode'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beamNoSlope'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'userLen'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'space'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'tempo'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'tempoFollowText'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'accidentalBracket'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'numeratorString'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'denominatorString'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fbprefix'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fbdigit'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fbsuffix'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fbcontinuationline'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'ottavaType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'numbersOnly'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'trillType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'vibratoType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'hairpinCircledTip'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'hairpinType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'hairpinHeight'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'hairpinContHeight'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'veloChange'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'singleNoteDynamics'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'veloChangeMethod'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'veloChangeSpeed'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'dynamicRange'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'changeMethod'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'placement'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'velocity'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'jumpTo'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'playUntil'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueAt'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'markerType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'arpUserLen1'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'arpUserLen2'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'measureNumberMode'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'glissType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'glissText'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'glissShowText'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'glissandoStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'glissEaseIn'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'glissEaseOut'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'diagonal'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'groups'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lineStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lineColor'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lineWidth'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'timeStretch'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'ornamentStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'timesig'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'timesigGlobal'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'timesigStretch'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'timesigType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'spannerTick'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'spannerTicks'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'spannerTrack2'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'userOff2'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'breakMmr'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'repeatCount'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'userStretch'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'noOffset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'irregular'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'anchor'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'slurUoff1'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'slurUoff2'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'slurUoff3'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'slurUoff4'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffMove'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'verse'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'syllabic'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lyricTicks'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'volta_ending'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lineVisible'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'mag'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'useDrumset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'durationType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'role'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'track'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'fretStrings'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fretFrets'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fretOffset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fretNumPos'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'systemBracket'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'gap'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'autoplace'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dashLineLen'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'dashGapLen'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'symbol'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'playRepeats'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'createSystemHeader'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffLines'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'lineDistance'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'stepOffset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffShowBarlines'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffShowLedgerlines'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffStemless'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffGenClef'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffGenTimesig'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffGenKeysig'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'staffYoffset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'bracketSpan'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'bracketColumn'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'inameLayoutPosition'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'subStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fontFace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fontSize'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'fontStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'frameType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'frameWidth'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'framePadding'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'frameRound'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'frameFgColor'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'frameBgColor'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'sizeSpatiumDependent'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'align'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'systemFlag'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginText'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginTextAlign'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginTextPlace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginHookType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginHookHeight'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginFontFace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginFontSize'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginFontStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'beginTextOffset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueText'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueTextAlign'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueTextPlace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueFontFace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueFontSize'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueFontStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'continueTextOffset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endText'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endTextAlign'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endTextPlace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endHookType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endHookHeight'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endFontFace'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endFontSize'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endFontStyle'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'endTextOffset'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'posAbove'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'voice'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'position'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'harmonyType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EngravingItem, std::true_type>,
        // method 'clone'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        // method 'subtypeName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method '_name'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::EngravingItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EngravingItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { apiv1::EngravingItem* _r = _t->clone();
            if (_a[0]) *reinterpret_cast< apiv1::EngravingItem**>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->subtypeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->_name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EngravingItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< apiv1::EngravingItem**>(_v) = _t->parent(); break;
        case 1: *reinterpret_cast< apiv1::Staff**>(_v) = _t->staff(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->offsetX(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->offsetY(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->posX(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->posY(); break;
        case 6: *reinterpret_cast< QPointF*>(_v) = _t->pagePos(); break;
        case 7: *reinterpret_cast< QRectF*>(_v) = _t->bbox(); break;
        case 8: *reinterpret_cast< QVariant*>(_v) = _t->get_subtype(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->get_selected(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->get_generated(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->get_color(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->get_visible(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->get_z(); break;
        case 14: *reinterpret_cast< QVariant*>(_v) = _t->get_small(); break;
        case 15: *reinterpret_cast< QVariant*>(_v) = _t->get_showCourtesy(); break;
        case 16: *reinterpret_cast< QVariant*>(_v) = _t->get_lineType(); break;
        case 17: *reinterpret_cast< QVariant*>(_v) = _t->get_line(); break;
        case 18: *reinterpret_cast< QVariant*>(_v) = _t->get_fixed(); break;
        case 19: *reinterpret_cast< QVariant*>(_v) = _t->get_fixedLine(); break;
        case 20: *reinterpret_cast< QVariant*>(_v) = _t->get_headType(); break;
        case 21: *reinterpret_cast< QVariant*>(_v) = _t->get_headScheme(); break;
        case 22: *reinterpret_cast< QVariant*>(_v) = _t->get_headGroup(); break;
        case 23: *reinterpret_cast< QVariant*>(_v) = _t->get_articulationAnchor(); break;
        case 24: *reinterpret_cast< QVariant*>(_v) = _t->get_direction(); break;
        case 25: *reinterpret_cast< QVariant*>(_v) = _t->get_stemDirection(); break;
        case 26: *reinterpret_cast< QVariant*>(_v) = _t->get_noStem(); break;
        case 27: *reinterpret_cast< QVariant*>(_v) = _t->get_slurDirection(); break;
        case 28: *reinterpret_cast< QVariant*>(_v) = _t->get_leadingSpace(); break;
        case 29: *reinterpret_cast< QVariant*>(_v) = _t->get_mirrorHead(); break;
        case 30: *reinterpret_cast< QVariant*>(_v) = _t->get_dotPosition(); break;
        case 31: *reinterpret_cast< QVariant*>(_v) = _t->get_tuning(); break;
        case 32: *reinterpret_cast< QVariant*>(_v) = _t->get_pause(); break;
        case 33: *reinterpret_cast< QVariant*>(_v) = _t->get_barlineType(); break;
        case 34: *reinterpret_cast< QVariant*>(_v) = _t->get_barlineSpan(); break;
        case 35: *reinterpret_cast< QVariant*>(_v) = _t->get_barlineSpanFrom(); break;
        case 36: *reinterpret_cast< QVariant*>(_v) = _t->get_barlineSpanTo(); break;
        case 37: *reinterpret_cast< QPointF*>(_v) = _t->get_offset(); break;
        case 38: *reinterpret_cast< QVariant*>(_v) = _t->get_fret(); break;
        case 39: *reinterpret_cast< QVariant*>(_v) = _t->get_string(); break;
        case 40: *reinterpret_cast< QVariant*>(_v) = _t->get_ghost(); break;
        case 41: *reinterpret_cast< QVariant*>(_v) = _t->get_play(); break;
        case 42: *reinterpret_cast< QVariant*>(_v) = _t->get_timesigNominal(); break;
        case 43: *reinterpret_cast< QVariant*>(_v) = _t->get_timesigActual(); break;
        case 44: *reinterpret_cast< QVariant*>(_v) = _t->get_growLeft(); break;
        case 45: *reinterpret_cast< QVariant*>(_v) = _t->get_growRight(); break;
        case 46: *reinterpret_cast< QVariant*>(_v) = _t->get_boxHeight(); break;
        case 47: *reinterpret_cast< QVariant*>(_v) = _t->get_boxWidth(); break;
        case 48: *reinterpret_cast< QVariant*>(_v) = _t->get_topGap(); break;
        case 49: *reinterpret_cast< QVariant*>(_v) = _t->get_bottomGap(); break;
        case 50: *reinterpret_cast< QVariant*>(_v) = _t->get_leftMargin(); break;
        case 51: *reinterpret_cast< QVariant*>(_v) = _t->get_rightMargin(); break;
        case 52: *reinterpret_cast< QVariant*>(_v) = _t->get_topMargin(); break;
        case 53: *reinterpret_cast< QVariant*>(_v) = _t->get_bottomMargin(); break;
        case 54: *reinterpret_cast< QVariant*>(_v) = _t->get_layoutBreakType(); break;
        case 55: *reinterpret_cast< QVariant*>(_v) = _t->get_autoscale(); break;
        case 56: *reinterpret_cast< QVariant*>(_v) = _t->get_size(); break;
        case 57: *reinterpret_cast< QVariant*>(_v) = _t->get_scale(); break;
        case 58: *reinterpret_cast< QVariant*>(_v) = _t->get_lockAspectRatio(); break;
        case 59: *reinterpret_cast< QVariant*>(_v) = _t->get_sizeIsSpatium(); break;
        case 60: *reinterpret_cast< QVariant*>(_v) = _t->get_text(); break;
        case 61: *reinterpret_cast< QVariant*>(_v) = _t->get_beamPos(); break;
        case 62: *reinterpret_cast< QVariant*>(_v) = _t->get_beamMode(); break;
        case 63: *reinterpret_cast< QVariant*>(_v) = _t->get_beamNoSlope(); break;
        case 64: *reinterpret_cast< QVariant*>(_v) = _t->get_userLen(); break;
        case 65: *reinterpret_cast< QVariant*>(_v) = _t->get_space(); break;
        case 66: *reinterpret_cast< QVariant*>(_v) = _t->get_tempo(); break;
        case 67: *reinterpret_cast< QVariant*>(_v) = _t->get_tempoFollowText(); break;
        case 68: *reinterpret_cast< QVariant*>(_v) = _t->get_accidentalBracket(); break;
        case 69: *reinterpret_cast< QVariant*>(_v) = _t->get_numeratorString(); break;
        case 70: *reinterpret_cast< QVariant*>(_v) = _t->get_denominatorString(); break;
        case 71: *reinterpret_cast< QVariant*>(_v) = _t->get_fbprefix(); break;
        case 72: *reinterpret_cast< QVariant*>(_v) = _t->get_fbdigit(); break;
        case 73: *reinterpret_cast< QVariant*>(_v) = _t->get_fbsuffix(); break;
        case 74: *reinterpret_cast< QVariant*>(_v) = _t->get_fbcontinuationline(); break;
        case 75: *reinterpret_cast< QVariant*>(_v) = _t->get_ottavaType(); break;
        case 76: *reinterpret_cast< QVariant*>(_v) = _t->get_numbersOnly(); break;
        case 77: *reinterpret_cast< QVariant*>(_v) = _t->get_trillType(); break;
        case 78: *reinterpret_cast< QVariant*>(_v) = _t->get_vibratoType(); break;
        case 79: *reinterpret_cast< QVariant*>(_v) = _t->get_hairpinCircledTip(); break;
        case 80: *reinterpret_cast< QVariant*>(_v) = _t->get_hairpinType(); break;
        case 81: *reinterpret_cast< QVariant*>(_v) = _t->get_hairpinHeight(); break;
        case 82: *reinterpret_cast< QVariant*>(_v) = _t->get_hairpinContHeight(); break;
        case 83: *reinterpret_cast< QVariant*>(_v) = _t->get_veloChange(); break;
        case 84: *reinterpret_cast< QVariant*>(_v) = _t->get_singleNoteDynamics(); break;
        case 85: *reinterpret_cast< QVariant*>(_v) = _t->get_veloChangeMethod(); break;
        case 86: *reinterpret_cast< QVariant*>(_v) = _t->get_veloChangeSpeed(); break;
        case 87: *reinterpret_cast< QVariant*>(_v) = _t->get_dynamicRange(); break;
        case 88: *reinterpret_cast< QVariant*>(_v) = _t->get_changeMethod(); break;
        case 89: *reinterpret_cast< QVariant*>(_v) = _t->get_placement(); break;
        case 90: *reinterpret_cast< QVariant*>(_v) = _t->get_velocity(); break;
        case 91: *reinterpret_cast< QVariant*>(_v) = _t->get_jumpTo(); break;
        case 92: *reinterpret_cast< QVariant*>(_v) = _t->get_playUntil(); break;
        case 93: *reinterpret_cast< QVariant*>(_v) = _t->get_continueAt(); break;
        case 94: *reinterpret_cast< QVariant*>(_v) = _t->get_label(); break;
        case 95: *reinterpret_cast< QVariant*>(_v) = _t->get_markerType(); break;
        case 96: *reinterpret_cast< QVariant*>(_v) = _t->get_arpUserLen1(); break;
        case 97: *reinterpret_cast< QVariant*>(_v) = _t->get_arpUserLen2(); break;
        case 98: *reinterpret_cast< QVariant*>(_v) = _t->get_measureNumberMode(); break;
        case 99: *reinterpret_cast< QVariant*>(_v) = _t->get_glissType(); break;
        case 100: *reinterpret_cast< QVariant*>(_v) = _t->get_glissText(); break;
        case 101: *reinterpret_cast< QVariant*>(_v) = _t->get_glissShowText(); break;
        case 102: *reinterpret_cast< QVariant*>(_v) = _t->get_glissandoStyle(); break;
        case 103: *reinterpret_cast< QVariant*>(_v) = _t->get_glissEaseIn(); break;
        case 104: *reinterpret_cast< QVariant*>(_v) = _t->get_glissEaseOut(); break;
        case 105: *reinterpret_cast< QVariant*>(_v) = _t->get_diagonal(); break;
        case 106: *reinterpret_cast< QVariant*>(_v) = _t->get_groups(); break;
        case 107: *reinterpret_cast< QVariant*>(_v) = _t->get_lineStyle(); break;
        case 108: *reinterpret_cast< QVariant*>(_v) = _t->get_lineColor(); break;
        case 109: *reinterpret_cast< QVariant*>(_v) = _t->get_lineWidth(); break;
        case 110: *reinterpret_cast< QVariant*>(_v) = _t->get_timeStretch(); break;
        case 111: *reinterpret_cast< QVariant*>(_v) = _t->get_ornamentStyle(); break;
        case 112: *reinterpret_cast< QVariant*>(_v) = _t->get_timesig(); break;
        case 113: *reinterpret_cast< QVariant*>(_v) = _t->get_timesigGlobal(); break;
        case 114: *reinterpret_cast< QVariant*>(_v) = _t->get_timesigStretch(); break;
        case 115: *reinterpret_cast< QVariant*>(_v) = _t->get_timesigType(); break;
        case 116: *reinterpret_cast< QVariant*>(_v) = _t->get_spannerTick(); break;
        case 117: *reinterpret_cast< QVariant*>(_v) = _t->get_spannerTicks(); break;
        case 118: *reinterpret_cast< QVariant*>(_v) = _t->get_spannerTrack2(); break;
        case 119: *reinterpret_cast< QVariant*>(_v) = _t->get_userOff2(); break;
        case 120: *reinterpret_cast< QVariant*>(_v) = _t->get_breakMmr(); break;
        case 121: *reinterpret_cast< QVariant*>(_v) = _t->get_repeatCount(); break;
        case 122: *reinterpret_cast< QVariant*>(_v) = _t->get_userStretch(); break;
        case 123: *reinterpret_cast< QVariant*>(_v) = _t->get_noOffset(); break;
        case 124: *reinterpret_cast< QVariant*>(_v) = _t->get_irregular(); break;
        case 125: *reinterpret_cast< QVariant*>(_v) = _t->get_anchor(); break;
        case 126: *reinterpret_cast< QVariant*>(_v) = _t->get_slurUoff1(); break;
        case 127: *reinterpret_cast< QVariant*>(_v) = _t->get_slurUoff2(); break;
        case 128: *reinterpret_cast< QVariant*>(_v) = _t->get_slurUoff3(); break;
        case 129: *reinterpret_cast< QVariant*>(_v) = _t->get_slurUoff4(); break;
        case 130: *reinterpret_cast< QVariant*>(_v) = _t->get_staffMove(); break;
        case 131: *reinterpret_cast< QVariant*>(_v) = _t->get_verse(); break;
        case 132: *reinterpret_cast< QVariant*>(_v) = _t->get_syllabic(); break;
        case 133: *reinterpret_cast< QVariant*>(_v) = _t->get_lyricTicks(); break;
        case 134: *reinterpret_cast< QVariant*>(_v) = _t->get_volta_ending(); break;
        case 135: *reinterpret_cast< QVariant*>(_v) = _t->get_lineVisible(); break;
        case 136: *reinterpret_cast< QVariant*>(_v) = _t->get_mag(); break;
        case 137: *reinterpret_cast< QVariant*>(_v) = _t->get_useDrumset(); break;
        case 138: *reinterpret_cast< QVariant*>(_v) = _t->get_durationType(); break;
        case 139: *reinterpret_cast< QVariant*>(_v) = _t->get_role(); break;
        case 140: *reinterpret_cast< int*>(_v) = _t->get_track(); break;
        case 141: *reinterpret_cast< QVariant*>(_v) = _t->get_fretStrings(); break;
        case 142: *reinterpret_cast< QVariant*>(_v) = _t->get_fretFrets(); break;
        case 143: *reinterpret_cast< QVariant*>(_v) = _t->get_fretOffset(); break;
        case 144: *reinterpret_cast< QVariant*>(_v) = _t->get_fretNumPos(); break;
        case 145: *reinterpret_cast< QVariant*>(_v) = _t->get_systemBracket(); break;
        case 146: *reinterpret_cast< QVariant*>(_v) = _t->get_gap(); break;
        case 147: *reinterpret_cast< bool*>(_v) = _t->get_autoplace(); break;
        case 148: *reinterpret_cast< QVariant*>(_v) = _t->get_dashLineLen(); break;
        case 149: *reinterpret_cast< QVariant*>(_v) = _t->get_dashGapLen(); break;
        case 150: *reinterpret_cast< QVariant*>(_v) = _t->get_symbol(); break;
        case 151: *reinterpret_cast< QVariant*>(_v) = _t->get_playRepeats(); break;
        case 152: *reinterpret_cast< QVariant*>(_v) = _t->get_createSystemHeader(); break;
        case 153: *reinterpret_cast< QVariant*>(_v) = _t->get_staffLines(); break;
        case 154: *reinterpret_cast< QVariant*>(_v) = _t->get_lineDistance(); break;
        case 155: *reinterpret_cast< QVariant*>(_v) = _t->get_stepOffset(); break;
        case 156: *reinterpret_cast< QVariant*>(_v) = _t->get_staffShowBarlines(); break;
        case 157: *reinterpret_cast< QVariant*>(_v) = _t->get_staffShowLedgerlines(); break;
        case 158: *reinterpret_cast< QVariant*>(_v) = _t->get_staffStemless(); break;
        case 159: *reinterpret_cast< QVariant*>(_v) = _t->get_staffGenClef(); break;
        case 160: *reinterpret_cast< QVariant*>(_v) = _t->get_staffGenTimesig(); break;
        case 161: *reinterpret_cast< QVariant*>(_v) = _t->get_staffGenKeysig(); break;
        case 162: *reinterpret_cast< QVariant*>(_v) = _t->get_staffYoffset(); break;
        case 163: *reinterpret_cast< QVariant*>(_v) = _t->get_bracketSpan(); break;
        case 164: *reinterpret_cast< QVariant*>(_v) = _t->get_bracketColumn(); break;
        case 165: *reinterpret_cast< QVariant*>(_v) = _t->get_inameLayoutPosition(); break;
        case 166: *reinterpret_cast< QVariant*>(_v) = _t->get_subStyle(); break;
        case 167: *reinterpret_cast< QVariant*>(_v) = _t->get_fontFace(); break;
        case 168: *reinterpret_cast< QVariant*>(_v) = _t->get_fontSize(); break;
        case 169: *reinterpret_cast< QVariant*>(_v) = _t->get_fontStyle(); break;
        case 170: *reinterpret_cast< QVariant*>(_v) = _t->get_frameType(); break;
        case 171: *reinterpret_cast< QVariant*>(_v) = _t->get_frameWidth(); break;
        case 172: *reinterpret_cast< QVariant*>(_v) = _t->get_framePadding(); break;
        case 173: *reinterpret_cast< QVariant*>(_v) = _t->get_frameRound(); break;
        case 174: *reinterpret_cast< QVariant*>(_v) = _t->get_frameFgColor(); break;
        case 175: *reinterpret_cast< QVariant*>(_v) = _t->get_frameBgColor(); break;
        case 176: *reinterpret_cast< QVariant*>(_v) = _t->get_sizeSpatiumDependent(); break;
        case 177: *reinterpret_cast< QVariant*>(_v) = _t->get_align(); break;
        case 178: *reinterpret_cast< QVariant*>(_v) = _t->get_systemFlag(); break;
        case 179: *reinterpret_cast< QVariant*>(_v) = _t->get_beginText(); break;
        case 180: *reinterpret_cast< QVariant*>(_v) = _t->get_beginTextAlign(); break;
        case 181: *reinterpret_cast< QVariant*>(_v) = _t->get_beginTextPlace(); break;
        case 182: *reinterpret_cast< QVariant*>(_v) = _t->get_beginHookType(); break;
        case 183: *reinterpret_cast< QVariant*>(_v) = _t->get_beginHookHeight(); break;
        case 184: *reinterpret_cast< QVariant*>(_v) = _t->get_beginFontFace(); break;
        case 185: *reinterpret_cast< QVariant*>(_v) = _t->get_beginFontSize(); break;
        case 186: *reinterpret_cast< QVariant*>(_v) = _t->get_beginFontStyle(); break;
        case 187: *reinterpret_cast< QVariant*>(_v) = _t->get_beginTextOffset(); break;
        case 188: *reinterpret_cast< QVariant*>(_v) = _t->get_continueText(); break;
        case 189: *reinterpret_cast< QVariant*>(_v) = _t->get_continueTextAlign(); break;
        case 190: *reinterpret_cast< QVariant*>(_v) = _t->get_continueTextPlace(); break;
        case 191: *reinterpret_cast< QVariant*>(_v) = _t->get_continueFontFace(); break;
        case 192: *reinterpret_cast< QVariant*>(_v) = _t->get_continueFontSize(); break;
        case 193: *reinterpret_cast< QVariant*>(_v) = _t->get_continueFontStyle(); break;
        case 194: *reinterpret_cast< QVariant*>(_v) = _t->get_continueTextOffset(); break;
        case 195: *reinterpret_cast< QVariant*>(_v) = _t->get_endText(); break;
        case 196: *reinterpret_cast< QVariant*>(_v) = _t->get_endTextAlign(); break;
        case 197: *reinterpret_cast< QVariant*>(_v) = _t->get_endTextPlace(); break;
        case 198: *reinterpret_cast< QVariant*>(_v) = _t->get_endHookType(); break;
        case 199: *reinterpret_cast< QVariant*>(_v) = _t->get_endHookHeight(); break;
        case 200: *reinterpret_cast< QVariant*>(_v) = _t->get_endFontFace(); break;
        case 201: *reinterpret_cast< QVariant*>(_v) = _t->get_endFontSize(); break;
        case 202: *reinterpret_cast< QVariant*>(_v) = _t->get_endFontStyle(); break;
        case 203: *reinterpret_cast< QVariant*>(_v) = _t->get_endTextOffset(); break;
        case 204: *reinterpret_cast< QVariant*>(_v) = _t->get_posAbove(); break;
        case 205: *reinterpret_cast< int*>(_v) = _t->get_voice(); break;
        case 206: *reinterpret_cast< QVariant*>(_v) = _t->get_position(); break;
        case 207: *reinterpret_cast< QVariant*>(_v) = _t->get_harmonyType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EngravingItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setOffsetX(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setOffsetY(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->set_subtype(*reinterpret_cast< QVariant*>(_v)); break;
        case 11: _t->set_color(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->set_visible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->set_z(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->set_small(*reinterpret_cast< QVariant*>(_v)); break;
        case 15: _t->set_showCourtesy(*reinterpret_cast< QVariant*>(_v)); break;
        case 16: _t->set_lineType(*reinterpret_cast< QVariant*>(_v)); break;
        case 17: _t->set_line(*reinterpret_cast< QVariant*>(_v)); break;
        case 18: _t->set_fixed(*reinterpret_cast< QVariant*>(_v)); break;
        case 19: _t->set_fixedLine(*reinterpret_cast< QVariant*>(_v)); break;
        case 20: _t->set_headType(*reinterpret_cast< QVariant*>(_v)); break;
        case 21: _t->set_headScheme(*reinterpret_cast< QVariant*>(_v)); break;
        case 22: _t->set_headGroup(*reinterpret_cast< QVariant*>(_v)); break;
        case 23: _t->set_articulationAnchor(*reinterpret_cast< QVariant*>(_v)); break;
        case 24: _t->set_direction(*reinterpret_cast< QVariant*>(_v)); break;
        case 25: _t->set_stemDirection(*reinterpret_cast< QVariant*>(_v)); break;
        case 26: _t->set_noStem(*reinterpret_cast< QVariant*>(_v)); break;
        case 27: _t->set_slurDirection(*reinterpret_cast< QVariant*>(_v)); break;
        case 28: _t->set_leadingSpace(*reinterpret_cast< QVariant*>(_v)); break;
        case 29: _t->set_mirrorHead(*reinterpret_cast< QVariant*>(_v)); break;
        case 30: _t->set_dotPosition(*reinterpret_cast< QVariant*>(_v)); break;
        case 31: _t->set_tuning(*reinterpret_cast< QVariant*>(_v)); break;
        case 32: _t->set_pause(*reinterpret_cast< QVariant*>(_v)); break;
        case 33: _t->set_barlineType(*reinterpret_cast< QVariant*>(_v)); break;
        case 34: _t->set_barlineSpan(*reinterpret_cast< QVariant*>(_v)); break;
        case 35: _t->set_barlineSpanFrom(*reinterpret_cast< QVariant*>(_v)); break;
        case 36: _t->set_barlineSpanTo(*reinterpret_cast< QVariant*>(_v)); break;
        case 37: _t->set_offset(*reinterpret_cast< QPointF*>(_v)); break;
        case 38: _t->set_fret(*reinterpret_cast< QVariant*>(_v)); break;
        case 39: _t->set_string(*reinterpret_cast< QVariant*>(_v)); break;
        case 40: _t->set_ghost(*reinterpret_cast< QVariant*>(_v)); break;
        case 41: _t->set_play(*reinterpret_cast< QVariant*>(_v)); break;
        case 42: _t->set_timesigNominal(*reinterpret_cast< QVariant*>(_v)); break;
        case 43: _t->set_timesigActual(*reinterpret_cast< QVariant*>(_v)); break;
        case 44: _t->set_growLeft(*reinterpret_cast< QVariant*>(_v)); break;
        case 45: _t->set_growRight(*reinterpret_cast< QVariant*>(_v)); break;
        case 46: _t->set_boxHeight(*reinterpret_cast< QVariant*>(_v)); break;
        case 47: _t->set_boxWidth(*reinterpret_cast< QVariant*>(_v)); break;
        case 48: _t->set_topGap(*reinterpret_cast< QVariant*>(_v)); break;
        case 49: _t->set_bottomGap(*reinterpret_cast< QVariant*>(_v)); break;
        case 50: _t->set_leftMargin(*reinterpret_cast< QVariant*>(_v)); break;
        case 51: _t->set_rightMargin(*reinterpret_cast< QVariant*>(_v)); break;
        case 52: _t->set_topMargin(*reinterpret_cast< QVariant*>(_v)); break;
        case 53: _t->set_bottomMargin(*reinterpret_cast< QVariant*>(_v)); break;
        case 54: _t->set_layoutBreakType(*reinterpret_cast< QVariant*>(_v)); break;
        case 55: _t->set_autoscale(*reinterpret_cast< QVariant*>(_v)); break;
        case 56: _t->set_size(*reinterpret_cast< QVariant*>(_v)); break;
        case 57: _t->set_scale(*reinterpret_cast< QVariant*>(_v)); break;
        case 58: _t->set_lockAspectRatio(*reinterpret_cast< QVariant*>(_v)); break;
        case 59: _t->set_sizeIsSpatium(*reinterpret_cast< QVariant*>(_v)); break;
        case 60: _t->set_text(*reinterpret_cast< QVariant*>(_v)); break;
        case 61: _t->set_beamPos(*reinterpret_cast< QVariant*>(_v)); break;
        case 62: _t->set_beamMode(*reinterpret_cast< QVariant*>(_v)); break;
        case 63: _t->set_beamNoSlope(*reinterpret_cast< QVariant*>(_v)); break;
        case 64: _t->set_userLen(*reinterpret_cast< QVariant*>(_v)); break;
        case 65: _t->set_space(*reinterpret_cast< QVariant*>(_v)); break;
        case 66: _t->set_tempo(*reinterpret_cast< QVariant*>(_v)); break;
        case 67: _t->set_tempoFollowText(*reinterpret_cast< QVariant*>(_v)); break;
        case 68: _t->set_accidentalBracket(*reinterpret_cast< QVariant*>(_v)); break;
        case 69: _t->set_numeratorString(*reinterpret_cast< QVariant*>(_v)); break;
        case 70: _t->set_denominatorString(*reinterpret_cast< QVariant*>(_v)); break;
        case 71: _t->set_fbprefix(*reinterpret_cast< QVariant*>(_v)); break;
        case 72: _t->set_fbdigit(*reinterpret_cast< QVariant*>(_v)); break;
        case 73: _t->set_fbsuffix(*reinterpret_cast< QVariant*>(_v)); break;
        case 74: _t->set_fbcontinuationline(*reinterpret_cast< QVariant*>(_v)); break;
        case 75: _t->set_ottavaType(*reinterpret_cast< QVariant*>(_v)); break;
        case 76: _t->set_numbersOnly(*reinterpret_cast< QVariant*>(_v)); break;
        case 77: _t->set_trillType(*reinterpret_cast< QVariant*>(_v)); break;
        case 78: _t->set_vibratoType(*reinterpret_cast< QVariant*>(_v)); break;
        case 79: _t->set_hairpinCircledTip(*reinterpret_cast< QVariant*>(_v)); break;
        case 80: _t->set_hairpinType(*reinterpret_cast< QVariant*>(_v)); break;
        case 81: _t->set_hairpinHeight(*reinterpret_cast< QVariant*>(_v)); break;
        case 82: _t->set_hairpinContHeight(*reinterpret_cast< QVariant*>(_v)); break;
        case 83: _t->set_veloChange(*reinterpret_cast< QVariant*>(_v)); break;
        case 84: _t->set_singleNoteDynamics(*reinterpret_cast< QVariant*>(_v)); break;
        case 85: _t->set_veloChangeMethod(*reinterpret_cast< QVariant*>(_v)); break;
        case 86: _t->set_veloChangeSpeed(*reinterpret_cast< QVariant*>(_v)); break;
        case 87: _t->set_dynamicRange(*reinterpret_cast< QVariant*>(_v)); break;
        case 88: _t->set_changeMethod(*reinterpret_cast< QVariant*>(_v)); break;
        case 89: _t->set_placement(*reinterpret_cast< QVariant*>(_v)); break;
        case 90: _t->set_velocity(*reinterpret_cast< QVariant*>(_v)); break;
        case 91: _t->set_jumpTo(*reinterpret_cast< QVariant*>(_v)); break;
        case 92: _t->set_playUntil(*reinterpret_cast< QVariant*>(_v)); break;
        case 93: _t->set_continueAt(*reinterpret_cast< QVariant*>(_v)); break;
        case 94: _t->set_label(*reinterpret_cast< QVariant*>(_v)); break;
        case 95: _t->set_markerType(*reinterpret_cast< QVariant*>(_v)); break;
        case 96: _t->set_arpUserLen1(*reinterpret_cast< QVariant*>(_v)); break;
        case 97: _t->set_arpUserLen2(*reinterpret_cast< QVariant*>(_v)); break;
        case 98: _t->set_measureNumberMode(*reinterpret_cast< QVariant*>(_v)); break;
        case 99: _t->set_glissType(*reinterpret_cast< QVariant*>(_v)); break;
        case 100: _t->set_glissText(*reinterpret_cast< QVariant*>(_v)); break;
        case 101: _t->set_glissShowText(*reinterpret_cast< QVariant*>(_v)); break;
        case 102: _t->set_glissandoStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 103: _t->set_glissEaseIn(*reinterpret_cast< QVariant*>(_v)); break;
        case 104: _t->set_glissEaseOut(*reinterpret_cast< QVariant*>(_v)); break;
        case 105: _t->set_diagonal(*reinterpret_cast< QVariant*>(_v)); break;
        case 106: _t->set_groups(*reinterpret_cast< QVariant*>(_v)); break;
        case 107: _t->set_lineStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 108: _t->set_lineColor(*reinterpret_cast< QVariant*>(_v)); break;
        case 109: _t->set_lineWidth(*reinterpret_cast< QVariant*>(_v)); break;
        case 110: _t->set_timeStretch(*reinterpret_cast< QVariant*>(_v)); break;
        case 111: _t->set_ornamentStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 112: _t->set_timesig(*reinterpret_cast< QVariant*>(_v)); break;
        case 113: _t->set_timesigGlobal(*reinterpret_cast< QVariant*>(_v)); break;
        case 114: _t->set_timesigStretch(*reinterpret_cast< QVariant*>(_v)); break;
        case 115: _t->set_timesigType(*reinterpret_cast< QVariant*>(_v)); break;
        case 116: _t->set_spannerTick(*reinterpret_cast< QVariant*>(_v)); break;
        case 117: _t->set_spannerTicks(*reinterpret_cast< QVariant*>(_v)); break;
        case 118: _t->set_spannerTrack2(*reinterpret_cast< QVariant*>(_v)); break;
        case 119: _t->set_userOff2(*reinterpret_cast< QVariant*>(_v)); break;
        case 120: _t->set_breakMmr(*reinterpret_cast< QVariant*>(_v)); break;
        case 121: _t->set_repeatCount(*reinterpret_cast< QVariant*>(_v)); break;
        case 122: _t->set_userStretch(*reinterpret_cast< QVariant*>(_v)); break;
        case 123: _t->set_noOffset(*reinterpret_cast< QVariant*>(_v)); break;
        case 124: _t->set_irregular(*reinterpret_cast< QVariant*>(_v)); break;
        case 125: _t->set_anchor(*reinterpret_cast< QVariant*>(_v)); break;
        case 126: _t->set_slurUoff1(*reinterpret_cast< QVariant*>(_v)); break;
        case 127: _t->set_slurUoff2(*reinterpret_cast< QVariant*>(_v)); break;
        case 128: _t->set_slurUoff3(*reinterpret_cast< QVariant*>(_v)); break;
        case 129: _t->set_slurUoff4(*reinterpret_cast< QVariant*>(_v)); break;
        case 130: _t->set_staffMove(*reinterpret_cast< QVariant*>(_v)); break;
        case 131: _t->set_verse(*reinterpret_cast< QVariant*>(_v)); break;
        case 132: _t->set_syllabic(*reinterpret_cast< QVariant*>(_v)); break;
        case 133: _t->set_lyricTicks(*reinterpret_cast< QVariant*>(_v)); break;
        case 134: _t->set_volta_ending(*reinterpret_cast< QVariant*>(_v)); break;
        case 135: _t->set_lineVisible(*reinterpret_cast< QVariant*>(_v)); break;
        case 136: _t->set_mag(*reinterpret_cast< QVariant*>(_v)); break;
        case 137: _t->set_useDrumset(*reinterpret_cast< QVariant*>(_v)); break;
        case 138: _t->set_durationType(*reinterpret_cast< QVariant*>(_v)); break;
        case 139: _t->set_role(*reinterpret_cast< QVariant*>(_v)); break;
        case 140: _t->set_track(*reinterpret_cast< int*>(_v)); break;
        case 141: _t->set_fretStrings(*reinterpret_cast< QVariant*>(_v)); break;
        case 142: _t->set_fretFrets(*reinterpret_cast< QVariant*>(_v)); break;
        case 143: _t->set_fretOffset(*reinterpret_cast< QVariant*>(_v)); break;
        case 144: _t->set_fretNumPos(*reinterpret_cast< QVariant*>(_v)); break;
        case 145: _t->set_systemBracket(*reinterpret_cast< QVariant*>(_v)); break;
        case 146: _t->set_gap(*reinterpret_cast< QVariant*>(_v)); break;
        case 147: _t->set_autoplace(*reinterpret_cast< bool*>(_v)); break;
        case 148: _t->set_dashLineLen(*reinterpret_cast< QVariant*>(_v)); break;
        case 149: _t->set_dashGapLen(*reinterpret_cast< QVariant*>(_v)); break;
        case 150: _t->set_symbol(*reinterpret_cast< QVariant*>(_v)); break;
        case 151: _t->set_playRepeats(*reinterpret_cast< QVariant*>(_v)); break;
        case 152: _t->set_createSystemHeader(*reinterpret_cast< QVariant*>(_v)); break;
        case 153: _t->set_staffLines(*reinterpret_cast< QVariant*>(_v)); break;
        case 154: _t->set_lineDistance(*reinterpret_cast< QVariant*>(_v)); break;
        case 155: _t->set_stepOffset(*reinterpret_cast< QVariant*>(_v)); break;
        case 156: _t->set_staffShowBarlines(*reinterpret_cast< QVariant*>(_v)); break;
        case 157: _t->set_staffShowLedgerlines(*reinterpret_cast< QVariant*>(_v)); break;
        case 158: _t->set_staffStemless(*reinterpret_cast< QVariant*>(_v)); break;
        case 159: _t->set_staffGenClef(*reinterpret_cast< QVariant*>(_v)); break;
        case 160: _t->set_staffGenTimesig(*reinterpret_cast< QVariant*>(_v)); break;
        case 161: _t->set_staffGenKeysig(*reinterpret_cast< QVariant*>(_v)); break;
        case 162: _t->set_staffYoffset(*reinterpret_cast< QVariant*>(_v)); break;
        case 163: _t->set_bracketSpan(*reinterpret_cast< QVariant*>(_v)); break;
        case 164: _t->set_bracketColumn(*reinterpret_cast< QVariant*>(_v)); break;
        case 165: _t->set_inameLayoutPosition(*reinterpret_cast< QVariant*>(_v)); break;
        case 166: _t->set_subStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 167: _t->set_fontFace(*reinterpret_cast< QVariant*>(_v)); break;
        case 168: _t->set_fontSize(*reinterpret_cast< QVariant*>(_v)); break;
        case 169: _t->set_fontStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 170: _t->set_frameType(*reinterpret_cast< QVariant*>(_v)); break;
        case 171: _t->set_frameWidth(*reinterpret_cast< QVariant*>(_v)); break;
        case 172: _t->set_framePadding(*reinterpret_cast< QVariant*>(_v)); break;
        case 173: _t->set_frameRound(*reinterpret_cast< QVariant*>(_v)); break;
        case 174: _t->set_frameFgColor(*reinterpret_cast< QVariant*>(_v)); break;
        case 175: _t->set_frameBgColor(*reinterpret_cast< QVariant*>(_v)); break;
        case 176: _t->set_sizeSpatiumDependent(*reinterpret_cast< QVariant*>(_v)); break;
        case 177: _t->set_align(*reinterpret_cast< QVariant*>(_v)); break;
        case 178: _t->set_systemFlag(*reinterpret_cast< QVariant*>(_v)); break;
        case 179: _t->set_beginText(*reinterpret_cast< QVariant*>(_v)); break;
        case 180: _t->set_beginTextAlign(*reinterpret_cast< QVariant*>(_v)); break;
        case 181: _t->set_beginTextPlace(*reinterpret_cast< QVariant*>(_v)); break;
        case 182: _t->set_beginHookType(*reinterpret_cast< QVariant*>(_v)); break;
        case 183: _t->set_beginHookHeight(*reinterpret_cast< QVariant*>(_v)); break;
        case 184: _t->set_beginFontFace(*reinterpret_cast< QVariant*>(_v)); break;
        case 185: _t->set_beginFontSize(*reinterpret_cast< QVariant*>(_v)); break;
        case 186: _t->set_beginFontStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 187: _t->set_beginTextOffset(*reinterpret_cast< QVariant*>(_v)); break;
        case 188: _t->set_continueText(*reinterpret_cast< QVariant*>(_v)); break;
        case 189: _t->set_continueTextAlign(*reinterpret_cast< QVariant*>(_v)); break;
        case 190: _t->set_continueTextPlace(*reinterpret_cast< QVariant*>(_v)); break;
        case 191: _t->set_continueFontFace(*reinterpret_cast< QVariant*>(_v)); break;
        case 192: _t->set_continueFontSize(*reinterpret_cast< QVariant*>(_v)); break;
        case 193: _t->set_continueFontStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 194: _t->set_continueTextOffset(*reinterpret_cast< QVariant*>(_v)); break;
        case 195: _t->set_endText(*reinterpret_cast< QVariant*>(_v)); break;
        case 196: _t->set_endTextAlign(*reinterpret_cast< QVariant*>(_v)); break;
        case 197: _t->set_endTextPlace(*reinterpret_cast< QVariant*>(_v)); break;
        case 198: _t->set_endHookType(*reinterpret_cast< QVariant*>(_v)); break;
        case 199: _t->set_endHookHeight(*reinterpret_cast< QVariant*>(_v)); break;
        case 200: _t->set_endFontFace(*reinterpret_cast< QVariant*>(_v)); break;
        case 201: _t->set_endFontSize(*reinterpret_cast< QVariant*>(_v)); break;
        case 202: _t->set_endFontStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 203: _t->set_endTextOffset(*reinterpret_cast< QVariant*>(_v)); break;
        case 204: _t->set_posAbove(*reinterpret_cast< QVariant*>(_v)); break;
        case 205: _t->set_voice(*reinterpret_cast< int*>(_v)); break;
        case 207: _t->set_harmonyType(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::EngravingItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::EngravingItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEEngravingItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return apiv1::ScoreElement::qt_metacast(_clname);
}

int mu::engraving::apiv1::EngravingItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = apiv1::ScoreElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 208;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPENoteENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPENoteENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Note",
    "createPlayEvent",
    "apiv1::PlayEvent*",
    "",
    "add",
    "apiv1::EngravingItem*",
    "wrapped",
    "remove",
    "accidental",
    "accidentalType",
    "mu::engraving::AccidentalType",
    "dots",
    "QQmlListProperty<apiv1::EngravingItem>",
    "elements",
    "playEvents",
    "QQmlListProperty<apiv1::PlayEvent>",
    "tieBack",
    "apiv1::Tie*",
    "tieForward",
    "firstTiedNote",
    "apiv1::Note*",
    "lastTiedNote",
    "noteType",
    "mu::engraving::NoteType",
    "pitch",
    "tpc1",
    "tpc2",
    "tpc",
    "veloType",
    "userVelocity"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPENoteENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      16,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    3, 0x02,   17 /* Public */,
       4,    1,   33,    3, 0x02,   18 /* Public */,
       7,    1,   36,    3, 0x02,   20 /* Public */,

 // methods: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       8, 0x80000000 | 5, 0x00015009, uint(-1), 0,
       9, 0x80000000 | 10, 0x0001510b, uint(-1), 0,
      11, 0x80000000 | 12, 0x00015009, uint(-1), 0,
      13, 0x80000000 | 12, 0x00015009, uint(-1), 0,
      14, 0x80000000 | 15, 0x00015009, uint(-1), 0,
      16, 0x80000000 | 17, 0x00015009, uint(-1), 0,
      18, 0x80000000 | 17, 0x00015009, uint(-1), 0,
      19, 0x80000000 | 20, 0x00015009, uint(-1), 0,
      21, 0x80000000 | 20, 0x00015009, uint(-1), 0,
      22, 0x80000000 | 23, 0x00015009, uint(-1), 0,
      24, QMetaType::Int, 0x00015003, uint(-1), 0,
      25, QMetaType::Int, 0x00015003, uint(-1), 0,
      26, QMetaType::Int, 0x00015003, uint(-1), 0,
      27, QMetaType::Int, 0x00015103, uint(-1), 0,
      28, QMetaType::QVariant, 0x00015003, uint(-1), 0,
      29, QMetaType::Int, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Note::staticMetaObject = { {
    QMetaObject::SuperData::link<EngravingItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPENoteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPENoteENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPENoteENDCLASS_t,
        // property 'accidental'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem*, std::true_type>,
        // property 'accidentalType'
        QtPrivate::TypeAndForceComplete<mu::engraving::AccidentalType, std::true_type>,
        // property 'dots'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::EngravingItem>, std::true_type>,
        // property 'elements'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::EngravingItem>, std::true_type>,
        // property 'playEvents'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::PlayEvent>, std::true_type>,
        // property 'tieBack'
        QtPrivate::TypeAndForceComplete<apiv1::Tie*, std::true_type>,
        // property 'tieForward'
        QtPrivate::TypeAndForceComplete<apiv1::Tie*, std::true_type>,
        // property 'firstTiedNote'
        QtPrivate::TypeAndForceComplete<apiv1::Note*, std::true_type>,
        // property 'lastTiedNote'
        QtPrivate::TypeAndForceComplete<apiv1::Note*, std::true_type>,
        // property 'noteType'
        QtPrivate::TypeAndForceComplete<mu::engraving::NoteType, std::true_type>,
        // property 'pitch'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tpc1'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tpc2'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tpc'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'veloType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'userVelocity'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Note, std::true_type>,
        // method 'createPlayEvent'
        QtPrivate::TypeAndForceComplete<apiv1::PlayEvent *, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        // method 'remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Note::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Note *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { apiv1::PlayEvent* _r = _t->createPlayEvent();
            if (_a[0]) *reinterpret_cast< apiv1::PlayEvent**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->add((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1]))); break;
        case 2: _t->remove((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::engraving::AccidentalType >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::engraving::NoteType >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Note *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< apiv1::EngravingItem**>(_v) = _t->accidental(); break;
        case 1: *reinterpret_cast< mu::engraving::AccidentalType*>(_v) = _t->accidentalType(); break;
        case 2: *reinterpret_cast< QQmlListProperty<apiv1::EngravingItem>*>(_v) = _t->dots(); break;
        case 3: *reinterpret_cast< QQmlListProperty<apiv1::EngravingItem>*>(_v) = _t->elements(); break;
        case 4: *reinterpret_cast< QQmlListProperty<apiv1::PlayEvent>*>(_v) = _t->playEvents(); break;
        case 5: *reinterpret_cast< apiv1::Tie**>(_v) = _t->tieBack(); break;
        case 6: *reinterpret_cast< apiv1::Tie**>(_v) = _t->tieForward(); break;
        case 7: *reinterpret_cast< apiv1::Note**>(_v) = _t->firstTiedNote(); break;
        case 8: *reinterpret_cast< apiv1::Note**>(_v) = _t->lastTiedNote(); break;
        case 9: *reinterpret_cast< mu::engraving::NoteType*>(_v) = _t->noteType(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->get_pitch(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->get_tpc1(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->get_tpc2(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->tpc(); break;
        case 14: *reinterpret_cast< QVariant*>(_v) = _t->get_veloType(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->get_userVelocity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Note *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setAccidentalType(*reinterpret_cast< mu::engraving::AccidentalType*>(_v)); break;
        case 10: _t->set_pitch(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->set_tpc1(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->set_tpc2(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setTpc(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->set_veloType(*reinterpret_cast< QVariant*>(_v)); break;
        case 15: _t->set_userVelocity(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::Note::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Note::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPENoteENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EngravingItem::qt_metacast(_clname);
}

int mu::engraving::apiv1::Note::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EngravingItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEDurationElementENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEDurationElementENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::DurationElement",
    "duration",
    "globalDuration",
    "apiv1::FractionWrapper*",
    "actualDuration",
    "tuplet",
    "apiv1::Tuplet*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEDurationElementENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVariant, 0x00015001, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015009, uint(-1), 0,
       4, 0x80000000 | 3, 0x00015009, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::DurationElement::staticMetaObject = { {
    QMetaObject::SuperData::link<EngravingItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEDurationElementENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEDurationElementENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEDurationElementENDCLASS_t,
        // property 'duration'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'globalDuration'
        QtPrivate::TypeAndForceComplete<apiv1::FractionWrapper*, std::true_type>,
        // property 'actualDuration'
        QtPrivate::TypeAndForceComplete<apiv1::FractionWrapper*, std::true_type>,
        // property 'tuplet'
        QtPrivate::TypeAndForceComplete<apiv1::Tuplet*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DurationElement, std::true_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::DurationElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DurationElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->get_duration(); break;
        case 1: *reinterpret_cast< apiv1::FractionWrapper**>(_v) = _t->globalDuration(); break;
        case 2: *reinterpret_cast< apiv1::FractionWrapper**>(_v) = _t->actualDuration(); break;
        case 3: *reinterpret_cast< apiv1::Tuplet**>(_v) = _t->parentTuplet(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::engraving::apiv1::DurationElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::DurationElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEDurationElementENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EngravingItem::qt_metacast(_clname);
}

int mu::engraving::apiv1::DurationElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EngravingItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPETupletENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPETupletENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Tuplet",
    "numberType",
    "bracketType",
    "actualNotes",
    "normalNotes",
    "p1",
    "p2",
    "elements",
    "QQmlListProperty<apiv1::EngravingItem>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPETupletENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVariant, 0x00015003, uint(-1), 0,
       2, QMetaType::QVariant, 0x00015003, uint(-1), 0,
       3, QMetaType::Int, 0x00015001, uint(-1), 0,
       4, QMetaType::Int, 0x00015001, uint(-1), 0,
       5, QMetaType::QVariant, 0x00015003, uint(-1), 0,
       6, QMetaType::QVariant, 0x00015003, uint(-1), 0,
       7, 0x80000000 | 8, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Tuplet::staticMetaObject = { {
    QMetaObject::SuperData::link<DurationElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPETupletENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPETupletENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPETupletENDCLASS_t,
        // property 'numberType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'bracketType'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'actualNotes'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'normalNotes'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'p1'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'p2'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'elements'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::EngravingItem>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Tuplet, std::true_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Tuplet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Tuplet *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->get_numberType(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->get_bracketType(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->get_actualNotes(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->get_normalNotes(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->get_p1(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->get_p2(); break;
        case 6: *reinterpret_cast< QQmlListProperty<apiv1::EngravingItem>*>(_v) = _t->elements(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Tuplet *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_numberType(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->set_bracketType(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: _t->set_p1(*reinterpret_cast< QVariant*>(_v)); break;
        case 5: _t->set_p2(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::engraving::apiv1::Tuplet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Tuplet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPETupletENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DurationElement::qt_metacast(_clname);
}

int mu::engraving::apiv1::Tuplet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DurationElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordRestENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordRestENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::ChordRest",
    "lyrics",
    "QQmlListProperty<apiv1::EngravingItem>",
    "beam",
    "apiv1::EngravingItem*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordRestENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, 0x80000000 | 4, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::ChordRest::staticMetaObject = { {
    QMetaObject::SuperData::link<DurationElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordRestENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordRestENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordRestENDCLASS_t,
        // property 'lyrics'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::EngravingItem>, std::true_type>,
        // property 'beam'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChordRest, std::true_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::ChordRest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChordRest *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<apiv1::EngravingItem>*>(_v) = _t->lyrics(); break;
        case 1: *reinterpret_cast< apiv1::EngravingItem**>(_v) = _t->beam(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::engraving::apiv1::ChordRest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::ChordRest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordRestENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DurationElement::qt_metacast(_clname);
}

int mu::engraving::apiv1::ChordRest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DurationElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Chord",
    "add",
    "",
    "apiv1::EngravingItem*",
    "wrapped",
    "remove",
    "graceNotes",
    "QQmlListProperty<apiv1::Chord>",
    "notes",
    "QQmlListProperty<apiv1::Note>",
    "stem",
    "stemSlash",
    "hook",
    "noteType",
    "mu::engraving::NoteType",
    "playEventType",
    "mu::engraving::PlayEventType"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       7,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x02,    8 /* Public */,
       5,    1,   29,    2, 0x02,   10 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00015009, uint(-1), 0,
       8, 0x80000000 | 9, 0x00015009, uint(-1), 0,
      10, 0x80000000 | 3, 0x00015009, uint(-1), 0,
      11, 0x80000000 | 3, 0x00015009, uint(-1), 0,
      12, 0x80000000 | 3, 0x00015009, uint(-1), 0,
      13, 0x80000000 | 14, 0x00015009, uint(-1), 0,
      15, 0x80000000 | 16, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Chord::staticMetaObject = { {
    QMetaObject::SuperData::link<ChordRest::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordENDCLASS_t,
        // property 'graceNotes'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::Chord>, std::true_type>,
        // property 'notes'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::Note>, std::true_type>,
        // property 'stem'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem*, std::true_type>,
        // property 'stemSlash'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem*, std::true_type>,
        // property 'hook'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem*, std::true_type>,
        // property 'noteType'
        QtPrivate::TypeAndForceComplete<mu::engraving::NoteType, std::true_type>,
        // property 'playEventType'
        QtPrivate::TypeAndForceComplete<mu::engraving::PlayEventType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Chord, std::true_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        // method 'remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Chord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Chord *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1]))); break;
        case 1: _t->remove((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::engraving::NoteType >(); break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::engraving::PlayEventType >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Chord *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<apiv1::Chord>*>(_v) = _t->graceNotes(); break;
        case 1: *reinterpret_cast< QQmlListProperty<apiv1::Note>*>(_v) = _t->notes(); break;
        case 2: *reinterpret_cast< apiv1::EngravingItem**>(_v) = _t->stem(); break;
        case 3: *reinterpret_cast< apiv1::EngravingItem**>(_v) = _t->stemSlash(); break;
        case 4: *reinterpret_cast< apiv1::EngravingItem**>(_v) = _t->hook(); break;
        case 5: *reinterpret_cast< mu::engraving::NoteType*>(_v) = _t->noteType(); break;
        case 6: *reinterpret_cast< mu::engraving::PlayEventType*>(_v) = _t->playEventType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Chord *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setPlayEventType(*reinterpret_cast< mu::engraving::PlayEventType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::Chord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Chord::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEChordENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ChordRest::qt_metacast(_clname);
}

int mu::engraving::apiv1::Chord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChordRest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESegmentENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESegmentENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Segment",
    "elementAt",
    "apiv1::EngravingItem*",
    "",
    "track",
    "annotations",
    "QQmlListProperty<apiv1::EngravingItem>",
    "nextInMeasure",
    "apiv1::Segment*",
    "next",
    "prevInMeasure",
    "prev",
    "segmentType",
    "mu::engraving::SegmentType",
    "tick"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPESegmentENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    3, 0x02,    8 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00015009, uint(-1), 0,
       7, 0x80000000 | 8, 0x00015009, uint(-1), 0,
       9, 0x80000000 | 8, 0x00015009, uint(-1), 0,
      10, 0x80000000 | 8, 0x00015009, uint(-1), 0,
      11, 0x80000000 | 8, 0x00015009, uint(-1), 0,
      12, 0x80000000 | 13, 0x00015009, uint(-1), 0,
      14, QMetaType::Int, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Segment::staticMetaObject = { {
    QMetaObject::SuperData::link<EngravingItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESegmentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPESegmentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESegmentENDCLASS_t,
        // property 'annotations'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::EngravingItem>, std::true_type>,
        // property 'nextInMeasure'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'next'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'prevInMeasure'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'prev'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'segmentType'
        QtPrivate::TypeAndForceComplete<mu::engraving::SegmentType, std::true_type>,
        // property 'tick'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Segment, std::true_type>,
        // method 'elementAt'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Segment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Segment *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { apiv1::EngravingItem* _r = _t->elementAt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< apiv1::EngravingItem**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::engraving::SegmentType >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Segment *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<apiv1::EngravingItem>*>(_v) = _t->annotations(); break;
        case 1: *reinterpret_cast< apiv1::Segment**>(_v) = _t->nextInMeasure(); break;
        case 2: *reinterpret_cast< apiv1::Segment**>(_v) = _t->nextInScore(); break;
        case 3: *reinterpret_cast< apiv1::Segment**>(_v) = _t->prevInMeasure(); break;
        case 4: *reinterpret_cast< apiv1::Segment**>(_v) = _t->prevInScore(); break;
        case 5: *reinterpret_cast< mu::engraving::SegmentType*>(_v) = _t->segmentType(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->tick(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::Segment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Segment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESegmentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EngravingItem::qt_metacast(_clname);
}

int mu::engraving::apiv1::Segment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EngravingItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEMeasureENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEMeasureENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Measure",
    "firstSegment",
    "apiv1::Segment*",
    "lastSegment",
    "nextMeasure",
    "apiv1::Measure*",
    "nextMeasureMM",
    "prevMeasure",
    "prevMeasureMM",
    "elements",
    "QQmlListProperty<apiv1::EngravingItem>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEMeasureENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       4, 0x80000000 | 5, 0x00015009, uint(-1), 0,
       6, 0x80000000 | 5, 0x00015009, uint(-1), 0,
       7, 0x80000000 | 5, 0x00015009, uint(-1), 0,
       8, 0x80000000 | 5, 0x00015009, uint(-1), 0,
       9, 0x80000000 | 10, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Measure::staticMetaObject = { {
    QMetaObject::SuperData::link<EngravingItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEMeasureENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEMeasureENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEMeasureENDCLASS_t,
        // property 'firstSegment'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'lastSegment'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'nextMeasure'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'nextMeasureMM'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'prevMeasure'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'prevMeasureMM'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'elements'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::EngravingItem>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Measure, std::true_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Measure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Measure *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< apiv1::Segment**>(_v) = _t->firstSegment(); break;
        case 1: *reinterpret_cast< apiv1::Segment**>(_v) = _t->lastSegment(); break;
        case 2: *reinterpret_cast< apiv1::Measure**>(_v) = _t->nextMeasure(); break;
        case 3: *reinterpret_cast< apiv1::Measure**>(_v) = _t->nextMeasureMM(); break;
        case 4: *reinterpret_cast< apiv1::Measure**>(_v) = _t->prevMeasure(); break;
        case 5: *reinterpret_cast< apiv1::Measure**>(_v) = _t->prevMeasureMM(); break;
        case 6: *reinterpret_cast< QQmlListProperty<apiv1::EngravingItem>*>(_v) = _t->elements(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::engraving::apiv1::Measure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Measure::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEMeasureENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EngravingItem::qt_metacast(_clname);
}

int mu::engraving::apiv1::Measure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EngravingItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPageENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Page",
    "pagenumber"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Page::staticMetaObject = { {
    QMetaObject::SuperData::link<EngravingItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPageENDCLASS_t,
        // property 'pagenumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Page, std::true_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Page *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->pagenumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::engraving::apiv1::Page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return EngravingItem::qt_metacast(_clname);
}

int mu::engraving::apiv1::Page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EngravingItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEStaffENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEStaffENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Staff",
    "small",
    "mag",
    "color",
    "playbackVoice1",
    "playbackVoice2",
    "playbackVoice3",
    "playbackVoice4",
    "staffBarlineSpan",
    "staffBarlineSpanFrom",
    "staffBarlineSpanTo",
    "staffUserdist",
    "part",
    "apiv1::Part*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEStaffENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00015003, uint(-1), 0,
       2, QMetaType::QReal, 0x00015003, uint(-1), 0,
       3, QMetaType::QColor, 0x00015003, uint(-1), 0,
       4, QMetaType::Bool, 0x00015003, uint(-1), 0,
       5, QMetaType::Bool, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015003, uint(-1), 0,
       7, QMetaType::Bool, 0x00015003, uint(-1), 0,
       8, QMetaType::Int, 0x00015003, uint(-1), 0,
       9, QMetaType::Int, 0x00015003, uint(-1), 0,
      10, QMetaType::Int, 0x00015003, uint(-1), 0,
      11, QMetaType::QReal, 0x00015003, uint(-1), 0,
      12, 0x80000000 | 13, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Staff::staticMetaObject = { {
    QMetaObject::SuperData::link<ScoreElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEStaffENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEStaffENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEStaffENDCLASS_t,
        // property 'small'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'mag'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'playbackVoice1'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'playbackVoice2'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'playbackVoice3'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'playbackVoice4'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'staffBarlineSpan'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'staffBarlineSpanFrom'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'staffBarlineSpanTo'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'staffUserdist'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'part'
        QtPrivate::TypeAndForceComplete<apiv1::Part*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Staff, std::true_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Staff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Staff *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->get_small(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->get_mag(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->get_color(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->get_playbackVoice1(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->get_playbackVoice2(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->get_playbackVoice3(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->get_playbackVoice4(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->get_staffBarlineSpan(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->get_staffBarlineSpanFrom(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->get_staffBarlineSpanTo(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->get_staffUserdist(); break;
        case 11: *reinterpret_cast< apiv1::Part**>(_v) = _t->part(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Staff *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_small(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->set_mag(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->set_color(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->set_playbackVoice1(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->set_playbackVoice2(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->set_playbackVoice3(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->set_playbackVoice4(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->set_staffBarlineSpan(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->set_staffBarlineSpanFrom(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->set_staffBarlineSpanTo(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->set_staffUserdist(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::engraving::apiv1::Staff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Staff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEStaffENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ScoreElement::qt_metacast(_clname);
}

int mu::engraving::apiv1::Staff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScoreElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
