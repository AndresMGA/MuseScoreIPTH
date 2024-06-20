/****************************************************************************
** Meta object code from reading C++ file 'barlinetypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/barlinetypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barlinetypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::BarlineTypes",
    "LineType",
    "TYPE_NORMAL",
    "TYPE_SINGLE",
    "TYPE_DOUBLE",
    "TYPE_START_REPEAT",
    "TYPE_LEFT_REPEAT",
    "TYPE_END_REPEAT",
    "TYPE_RIGHT_REPEAT",
    "TYPE_DASHED",
    "TYPE_BROKEN",
    "TYPE_FINAL",
    "TYPE_END",
    "TYPE_END_START_REPEAT",
    "TYPE_LEFT_RIGHT_REPEAT",
    "TYPE_DOTTED",
    "TYPE_REVERSE_END",
    "TYPE_REVERS_FINAL",
    "TYPE_HEAVY",
    "TYPE_DOUBLE_HEAVY",
    "SpanPreset",
    "PRESET_DEFAULT",
    "PRESET_TICK_1",
    "PRESET_TICK_2",
    "PRESET_SHORT_1",
    "PRESET_SHORT_2"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEBarlineTypesENDCLASS[] = {

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
       1,    1, 0x2,   18,   24,
      20,   20, 0x2,    5,   60,

 // enum data: key, value
       2, uint(mu::inspector::BarlineTypes::LineType::TYPE_NORMAL),
       3, uint(mu::inspector::BarlineTypes::LineType::TYPE_SINGLE),
       4, uint(mu::inspector::BarlineTypes::LineType::TYPE_DOUBLE),
       5, uint(mu::inspector::BarlineTypes::LineType::TYPE_START_REPEAT),
       6, uint(mu::inspector::BarlineTypes::LineType::TYPE_LEFT_REPEAT),
       7, uint(mu::inspector::BarlineTypes::LineType::TYPE_END_REPEAT),
       8, uint(mu::inspector::BarlineTypes::LineType::TYPE_RIGHT_REPEAT),
       9, uint(mu::inspector::BarlineTypes::LineType::TYPE_DASHED),
      10, uint(mu::inspector::BarlineTypes::LineType::TYPE_BROKEN),
      11, uint(mu::inspector::BarlineTypes::LineType::TYPE_FINAL),
      12, uint(mu::inspector::BarlineTypes::LineType::TYPE_END),
      13, uint(mu::inspector::BarlineTypes::LineType::TYPE_END_START_REPEAT),
      14, uint(mu::inspector::BarlineTypes::LineType::TYPE_LEFT_RIGHT_REPEAT),
      15, uint(mu::inspector::BarlineTypes::LineType::TYPE_DOTTED),
      16, uint(mu::inspector::BarlineTypes::LineType::TYPE_REVERSE_END),
      17, uint(mu::inspector::BarlineTypes::LineType::TYPE_REVERS_FINAL),
      18, uint(mu::inspector::BarlineTypes::LineType::TYPE_HEAVY),
      19, uint(mu::inspector::BarlineTypes::LineType::TYPE_DOUBLE_HEAVY),
      21, uint(mu::inspector::BarlineTypes::SpanPreset::PRESET_DEFAULT),
      22, uint(mu::inspector::BarlineTypes::SpanPreset::PRESET_TICK_1),
      23, uint(mu::inspector::BarlineTypes::SpanPreset::PRESET_TICK_2),
      24, uint(mu::inspector::BarlineTypes::SpanPreset::PRESET_SHORT_1),
      25, uint(mu::inspector::BarlineTypes::SpanPreset::PRESET_SHORT_2),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::BarlineTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEBarlineTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineTypesENDCLASS_t,
        // enum 'LineType'
        QtPrivate::TypeAndForceComplete<BarlineTypes::LineType, std::true_type>,
        // enum 'SpanPreset'
        QtPrivate::TypeAndForceComplete<BarlineTypes::SpanPreset, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BarlineTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
