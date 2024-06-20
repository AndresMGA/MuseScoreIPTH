/****************************************************************************
** Meta object code from reading C++ file 'accidentaltypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/accidentaltypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accidentaltypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__AccidentalTypes_t {
    QByteArrayData data[5];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__AccidentalTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__AccidentalTypes_t qt_meta_stringdata_mu__inspector__AccidentalTypes = {
    {
QT_MOC_LITERAL(0, 0, 30), // "mu::inspector::AccidentalTypes"
QT_MOC_LITERAL(1, 31, 11), // "BracketType"
QT_MOC_LITERAL(2, 43, 17), // "BRACKET_TYPE_NONE"
QT_MOC_LITERAL(3, 61, 24), // "BRACKET_TYPE_PARENTHESIS"
QT_MOC_LITERAL(4, 86, 19) // "BRACKET_TYPE_SQUARE"

    },
    "mu::inspector::AccidentalTypes\0"
    "BracketType\0BRACKET_TYPE_NONE\0"
    "BRACKET_TYPE_PARENTHESIS\0BRACKET_TYPE_SQUARE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__AccidentalTypes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(mu::inspector::AccidentalTypes::BracketType::BRACKET_TYPE_NONE),
       3, uint(mu::inspector::AccidentalTypes::BracketType::BRACKET_TYPE_PARENTHESIS),
       4, uint(mu::inspector::AccidentalTypes::BracketType::BRACKET_TYPE_SQUARE),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::AccidentalTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__AccidentalTypes.data,
    qt_meta_data_mu__inspector__AccidentalTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
