/****************************************************************************
** Meta object code from reading C++ file 'palette.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/palette/internal/palette.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palette.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteENDCLASS = QtMocHelpers::stringData(
    "mu::palette::Palette",
    "Type",
    "Unknown",
    "Clef",
    "KeySig",
    "TimeSig",
    "Bracket",
    "Accidental",
    "Articulation",
    "Ornament",
    "Breath",
    "GraceNote",
    "NoteHead",
    "Line",
    "BarLine",
    "Arpeggio",
    "Tremolo",
    "Text",
    "Tempo",
    "Dynamic",
    "Fingering",
    "Repeat",
    "FretboardDiagram",
    "Accordion",
    "BagpipeEmbellishment",
    "Layout",
    "Beam",
    "Guitar",
    "Keyboard",
    "Pitch",
    "Harp",
    "StringTunings",
    "Playback",
    "Custom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,   32,   19,

 // enum data: key, value
       2, uint(mu::palette::Palette::Type::Unknown),
       3, uint(mu::palette::Palette::Type::Clef),
       4, uint(mu::palette::Palette::Type::KeySig),
       5, uint(mu::palette::Palette::Type::TimeSig),
       6, uint(mu::palette::Palette::Type::Bracket),
       7, uint(mu::palette::Palette::Type::Accidental),
       8, uint(mu::palette::Palette::Type::Articulation),
       9, uint(mu::palette::Palette::Type::Ornament),
      10, uint(mu::palette::Palette::Type::Breath),
      11, uint(mu::palette::Palette::Type::GraceNote),
      12, uint(mu::palette::Palette::Type::NoteHead),
      13, uint(mu::palette::Palette::Type::Line),
      14, uint(mu::palette::Palette::Type::BarLine),
      15, uint(mu::palette::Palette::Type::Arpeggio),
      16, uint(mu::palette::Palette::Type::Tremolo),
      17, uint(mu::palette::Palette::Type::Text),
      18, uint(mu::palette::Palette::Type::Tempo),
      19, uint(mu::palette::Palette::Type::Dynamic),
      20, uint(mu::palette::Palette::Type::Fingering),
      21, uint(mu::palette::Palette::Type::Repeat),
      22, uint(mu::palette::Palette::Type::FretboardDiagram),
      23, uint(mu::palette::Palette::Type::Accordion),
      24, uint(mu::palette::Palette::Type::BagpipeEmbellishment),
      25, uint(mu::palette::Palette::Type::Layout),
      26, uint(mu::palette::Palette::Type::Beam),
      27, uint(mu::palette::Palette::Type::Guitar),
      28, uint(mu::palette::Palette::Type::Keyboard),
      29, uint(mu::palette::Palette::Type::Pitch),
      30, uint(mu::palette::Palette::Type::Harp),
      31, uint(mu::palette::Palette::Type::StringTunings),
      32, uint(mu::palette::Palette::Type::Playback),
      33, uint(mu::palette::Palette::Type::Custom),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::Palette::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QObject>::value,
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteENDCLASS_t,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<Palette::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Palette, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
