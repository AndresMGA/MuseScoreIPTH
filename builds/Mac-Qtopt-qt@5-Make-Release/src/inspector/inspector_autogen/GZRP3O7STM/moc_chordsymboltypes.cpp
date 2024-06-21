/****************************************************************************
** Meta object code from reading C++ file 'chordsymboltypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/chordsymboltypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chordsymboltypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__ChordSymbolTypes_t {
    QByteArrayData data[15];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__ChordSymbolTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__ChordSymbolTypes_t qt_meta_stringdata_mu__inspector__ChordSymbolTypes = {
    {
QT_MOC_LITERAL(0, 0, 31), // "mu::inspector::ChordSymbolTypes"
QT_MOC_LITERAL(1, 32, 11), // "VoicingType"
QT_MOC_LITERAL(2, 44, 15), // "VOICING_INVALID"
QT_MOC_LITERAL(3, 60, 12), // "VOICING_AUTO"
QT_MOC_LITERAL(4, 73, 17), // "VOICING_ROOT_ONLY"
QT_MOC_LITERAL(5, 91, 13), // "VOICING_CLOSE"
QT_MOC_LITERAL(6, 105, 16), // "VOICING_DROP_TWO"
QT_MOC_LITERAL(7, 122, 16), // "VOICING_SIX_NOTE"
QT_MOC_LITERAL(8, 139, 17), // "VOICING_FOUR_NOTE"
QT_MOC_LITERAL(9, 157, 18), // "VOICING_THREE_NOTE"
QT_MOC_LITERAL(10, 176, 12), // "DurationType"
QT_MOC_LITERAL(11, 189, 16), // "DURATION_INVALID"
QT_MOC_LITERAL(12, 206, 32), // "DURATION_UNTIL_NEXT_CHORD_SYMBOL"
QT_MOC_LITERAL(13, 239, 28), // "DURATION_STOP_AT_MEASURE_END"
QT_MOC_LITERAL(14, 268, 25) // "DURATION_SEGMENT_DURATION"

    },
    "mu::inspector::ChordSymbolTypes\0"
    "VoicingType\0VOICING_INVALID\0VOICING_AUTO\0"
    "VOICING_ROOT_ONLY\0VOICING_CLOSE\0"
    "VOICING_DROP_TWO\0VOICING_SIX_NOTE\0"
    "VOICING_FOUR_NOTE\0VOICING_THREE_NOTE\0"
    "DurationType\0DURATION_INVALID\0"
    "DURATION_UNTIL_NEXT_CHORD_SYMBOL\0"
    "DURATION_STOP_AT_MEASURE_END\0"
    "DURATION_SEGMENT_DURATION"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__ChordSymbolTypes[] = {

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

QT_INIT_METAOBJECT const QMetaObject mu::inspector::ChordSymbolTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__ChordSymbolTypes.data,
    qt_meta_data_mu__inspector__ChordSymbolTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
