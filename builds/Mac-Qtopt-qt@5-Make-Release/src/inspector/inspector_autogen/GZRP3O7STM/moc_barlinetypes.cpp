/****************************************************************************
** Meta object code from reading C++ file 'barlinetypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/barlinetypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barlinetypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__BarlineTypes_t {
    QByteArrayData data[26];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__BarlineTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__BarlineTypes_t qt_meta_stringdata_mu__inspector__BarlineTypes = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::inspector::BarlineTypes"
QT_MOC_LITERAL(1, 28, 8), // "LineType"
QT_MOC_LITERAL(2, 37, 11), // "TYPE_NORMAL"
QT_MOC_LITERAL(3, 49, 11), // "TYPE_SINGLE"
QT_MOC_LITERAL(4, 61, 11), // "TYPE_DOUBLE"
QT_MOC_LITERAL(5, 73, 17), // "TYPE_START_REPEAT"
QT_MOC_LITERAL(6, 91, 16), // "TYPE_LEFT_REPEAT"
QT_MOC_LITERAL(7, 108, 15), // "TYPE_END_REPEAT"
QT_MOC_LITERAL(8, 124, 17), // "TYPE_RIGHT_REPEAT"
QT_MOC_LITERAL(9, 142, 11), // "TYPE_DASHED"
QT_MOC_LITERAL(10, 154, 11), // "TYPE_BROKEN"
QT_MOC_LITERAL(11, 166, 10), // "TYPE_FINAL"
QT_MOC_LITERAL(12, 177, 8), // "TYPE_END"
QT_MOC_LITERAL(13, 186, 21), // "TYPE_END_START_REPEAT"
QT_MOC_LITERAL(14, 208, 22), // "TYPE_LEFT_RIGHT_REPEAT"
QT_MOC_LITERAL(15, 231, 11), // "TYPE_DOTTED"
QT_MOC_LITERAL(16, 243, 16), // "TYPE_REVERSE_END"
QT_MOC_LITERAL(17, 260, 17), // "TYPE_REVERS_FINAL"
QT_MOC_LITERAL(18, 278, 10), // "TYPE_HEAVY"
QT_MOC_LITERAL(19, 289, 17), // "TYPE_DOUBLE_HEAVY"
QT_MOC_LITERAL(20, 307, 10), // "SpanPreset"
QT_MOC_LITERAL(21, 318, 14), // "PRESET_DEFAULT"
QT_MOC_LITERAL(22, 333, 13), // "PRESET_TICK_1"
QT_MOC_LITERAL(23, 347, 13), // "PRESET_TICK_2"
QT_MOC_LITERAL(24, 361, 14), // "PRESET_SHORT_1"
QT_MOC_LITERAL(25, 376, 14) // "PRESET_SHORT_2"

    },
    "mu::inspector::BarlineTypes\0LineType\0"
    "TYPE_NORMAL\0TYPE_SINGLE\0TYPE_DOUBLE\0"
    "TYPE_START_REPEAT\0TYPE_LEFT_REPEAT\0"
    "TYPE_END_REPEAT\0TYPE_RIGHT_REPEAT\0"
    "TYPE_DASHED\0TYPE_BROKEN\0TYPE_FINAL\0"
    "TYPE_END\0TYPE_END_START_REPEAT\0"
    "TYPE_LEFT_RIGHT_REPEAT\0TYPE_DOTTED\0"
    "TYPE_REVERSE_END\0TYPE_REVERS_FINAL\0"
    "TYPE_HEAVY\0TYPE_DOUBLE_HEAVY\0SpanPreset\0"
    "PRESET_DEFAULT\0PRESET_TICK_1\0PRESET_TICK_2\0"
    "PRESET_SHORT_1\0PRESET_SHORT_2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__BarlineTypes[] = {

 // content:
       8,       // revision
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

QT_INIT_METAOBJECT const QMetaObject mu::inspector::BarlineTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__BarlineTypes.data,
    qt_meta_data_mu__inspector__BarlineTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
