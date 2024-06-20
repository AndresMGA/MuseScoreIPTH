/****************************************************************************
** Meta object code from reading C++ file 'chordsymboltypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/chordsymboltypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chordsymboltypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEChordSymbolTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEChordSymbolTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::ChordSymbolTypes",
    "VoicingType",
    "VOICING_INVALID",
    "VOICING_AUTO",
    "VOICING_ROOT_ONLY",
    "VOICING_CLOSE",
    "VOICING_DROP_TWO",
    "VOICING_SIX_NOTE",
    "VOICING_FOUR_NOTE",
    "VOICING_THREE_NOTE",
    "DurationType",
    "DURATION_INVALID",
    "DURATION_UNTIL_NEXT_CHORD_SYMBOL",
    "DURATION_STOP_AT_MEASURE_END",
    "DURATION_SEGMENT_DURATION"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEChordSymbolTypesENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    8,   24,
      10,   10, 0x2,    4,   40,

 // enum data: key, value
       2, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_INVALID),
       3, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_AUTO),
       4, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_ROOT_ONLY),
       5, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_CLOSE),
       6, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_DROP_TWO),
       7, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_SIX_NOTE),
       8, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_FOUR_NOTE),
       9, uint(mu::inspector::ChordSymbolTypes::VoicingType::VOICING_THREE_NOTE),
      11, uint(mu::inspector::ChordSymbolTypes::DurationType::DURATION_INVALID),
      12, uint(mu::inspector::ChordSymbolTypes::DurationType::DURATION_UNTIL_NEXT_CHORD_SYMBOL),
      13, uint(mu::inspector::ChordSymbolTypes::DurationType::DURATION_STOP_AT_MEASURE_END),
      14, uint(mu::inspector::ChordSymbolTypes::DurationType::DURATION_SEGMENT_DURATION),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::ChordSymbolTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEChordSymbolTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEChordSymbolTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEChordSymbolTypesENDCLASS_t,
        // enum 'VoicingType'
        QtPrivate::TypeAndForceComplete<ChordSymbolTypes::VoicingType, std::true_type>,
        // enum 'DurationType'
        QtPrivate::TypeAndForceComplete<ChordSymbolTypes::DurationType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChordSymbolTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
