/****************************************************************************
** Meta object code from reading C++ file 'dynamictypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/dynamictypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamictypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DynamicTypes_t {
    QByteArrayData data[9];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicTypes_t qt_meta_stringdata_DynamicTypes = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DynamicTypes"
QT_MOC_LITERAL(1, 13, 5), // "Scope"
QT_MOC_LITERAL(2, 19, 11), // "SCOPE_STAFF"
QT_MOC_LITERAL(3, 31, 23), // "SCOPE_SINGLE_INSTRUMENT"
QT_MOC_LITERAL(4, 55, 21), // "SCOPE_ALL_INSTRUMENTS"
QT_MOC_LITERAL(5, 77, 19), // "VelocityChangeSpeed"
QT_MOC_LITERAL(6, 97, 26), // "VELOCITY_CHANGE_SPEED_SLOW"
QT_MOC_LITERAL(7, 124, 28), // "VELOCITY_CHANGE_SPEED_NORMAL"
QT_MOC_LITERAL(8, 153, 26) // "VELOCITY_CHANGE_SPEED_FAST"

    },
    "DynamicTypes\0Scope\0SCOPE_STAFF\0"
    "SCOPE_SINGLE_INSTRUMENT\0SCOPE_ALL_INSTRUMENTS\0"
    "VelocityChangeSpeed\0VELOCITY_CHANGE_SPEED_SLOW\0"
    "VELOCITY_CHANGE_SPEED_NORMAL\0"
    "VELOCITY_CHANGE_SPEED_FAST"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicTypes[] = {

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
       1,    1, 0x2,    3,   24,
       5,    5, 0x2,    3,   30,

 // enum data: key, value
       2, uint(DynamicTypes::Scope::SCOPE_STAFF),
       3, uint(DynamicTypes::Scope::SCOPE_SINGLE_INSTRUMENT),
       4, uint(DynamicTypes::Scope::SCOPE_ALL_INSTRUMENTS),
       6, uint(DynamicTypes::VelocityChangeSpeed::VELOCITY_CHANGE_SPEED_SLOW),
       7, uint(DynamicTypes::VelocityChangeSpeed::VELOCITY_CHANGE_SPEED_NORMAL),
       8, uint(DynamicTypes::VelocityChangeSpeed::VELOCITY_CHANGE_SPEED_FAST),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject DynamicTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_DynamicTypes.data,
    qt_meta_data_DynamicTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
