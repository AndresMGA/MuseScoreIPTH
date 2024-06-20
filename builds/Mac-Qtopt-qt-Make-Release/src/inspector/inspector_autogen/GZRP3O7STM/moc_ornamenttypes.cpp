/****************************************************************************
** Meta object code from reading C++ file 'ornamenttypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/ornamenttypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ornamenttypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::OrnamentTypes",
    "Style",
    "STYLE_STANDARD",
    "STYLE_BAROQUE",
    "BasicInterval",
    "TYPE_INVALID",
    "TYPE_AUTO_DIATONIC",
    "TYPE_MAJOR_SECOND",
    "TYPE_MINOR_SECOND",
    "TYPE_AUGMENTED_SECOND",
    "IntervalStep",
    "STEP_UNISON",
    "STEP_SECOND",
    "STEP_THIRD",
    "STEP_FOURTH",
    "STEP_FIFTH",
    "STEP_SIXTH",
    "STEP_SEVENTH",
    "STEP_OCTAVE",
    "IntervalType",
    "TYPE_AUTO",
    "TYPE_AUGMENTED",
    "TYPE_MAJOR",
    "TYPE_PERFECT",
    "TYPE_MINOR",
    "TYPE_DIMINISHED",
    "OrnamentShowAccidental",
    "SHOW_ACCIDENTAL_DEFAULT",
    "SHOW_ACCIDENTAL_ANY_ALTERATION",
    "SHOW_ACCIDENTAL_ALWAYS"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEOrnamentTypesENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    2,   39,
       4,    4, 0x2,    5,   43,
      10,   10, 0x2,    8,   53,
      19,   19, 0x2,    6,   69,
      26,   26, 0x2,    3,   81,

 // enum data: key, value
       2, uint(mu::inspector::OrnamentTypes::Style::STYLE_STANDARD),
       3, uint(mu::inspector::OrnamentTypes::Style::STYLE_BAROQUE),
       5, uint(mu::inspector::OrnamentTypes::BasicInterval::TYPE_INVALID),
       6, uint(mu::inspector::OrnamentTypes::BasicInterval::TYPE_AUTO_DIATONIC),
       7, uint(mu::inspector::OrnamentTypes::BasicInterval::TYPE_MAJOR_SECOND),
       8, uint(mu::inspector::OrnamentTypes::BasicInterval::TYPE_MINOR_SECOND),
       9, uint(mu::inspector::OrnamentTypes::BasicInterval::TYPE_AUGMENTED_SECOND),
      11, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_UNISON),
      12, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_SECOND),
      13, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_THIRD),
      14, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_FOURTH),
      15, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_FIFTH),
      16, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_SIXTH),
      17, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_SEVENTH),
      18, uint(mu::inspector::OrnamentTypes::IntervalStep::STEP_OCTAVE),
      20, uint(mu::inspector::OrnamentTypes::IntervalType::TYPE_AUTO),
      21, uint(mu::inspector::OrnamentTypes::IntervalType::TYPE_AUGMENTED),
      22, uint(mu::inspector::OrnamentTypes::IntervalType::TYPE_MAJOR),
      23, uint(mu::inspector::OrnamentTypes::IntervalType::TYPE_PERFECT),
      24, uint(mu::inspector::OrnamentTypes::IntervalType::TYPE_MINOR),
      25, uint(mu::inspector::OrnamentTypes::IntervalType::TYPE_DIMINISHED),
      27, uint(mu::inspector::OrnamentTypes::OrnamentShowAccidental::SHOW_ACCIDENTAL_DEFAULT),
      28, uint(mu::inspector::OrnamentTypes::OrnamentShowAccidental::SHOW_ACCIDENTAL_ANY_ALTERATION),
      29, uint(mu::inspector::OrnamentTypes::OrnamentShowAccidental::SHOW_ACCIDENTAL_ALWAYS),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::OrnamentTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEOrnamentTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentTypesENDCLASS_t,
        // enum 'Style'
        QtPrivate::TypeAndForceComplete<OrnamentTypes::Style, std::true_type>,
        // enum 'BasicInterval'
        QtPrivate::TypeAndForceComplete<OrnamentTypes::BasicInterval, std::true_type>,
        // enum 'IntervalStep'
        QtPrivate::TypeAndForceComplete<OrnamentTypes::IntervalStep, std::true_type>,
        // enum 'IntervalType'
        QtPrivate::TypeAndForceComplete<OrnamentTypes::IntervalType, std::true_type>,
        // enum 'OrnamentShowAccidental'
        QtPrivate::TypeAndForceComplete<OrnamentTypes::OrnamentShowAccidental, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OrnamentTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
