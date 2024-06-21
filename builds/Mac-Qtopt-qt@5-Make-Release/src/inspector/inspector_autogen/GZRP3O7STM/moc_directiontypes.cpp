/****************************************************************************
** Meta object code from reading C++ file 'directiontypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/directiontypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directiontypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__DirectionTypes_t {
    QByteArrayData data[9];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__DirectionTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__DirectionTypes_t qt_meta_stringdata_mu__inspector__DirectionTypes = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::inspector::DirectionTypes"
QT_MOC_LITERAL(1, 30, 17), // "VerticalDirection"
QT_MOC_LITERAL(2, 48, 13), // "VERTICAL_AUTO"
QT_MOC_LITERAL(3, 62, 11), // "VERTICAL_UP"
QT_MOC_LITERAL(4, 74, 13), // "VERTICAL_DOWN"
QT_MOC_LITERAL(5, 88, 19), // "HorizontalDirection"
QT_MOC_LITERAL(6, 108, 15), // "HORIZONTAL_AUTO"
QT_MOC_LITERAL(7, 124, 15), // "HORIZONTAL_LEFT"
QT_MOC_LITERAL(8, 140, 16) // "HORIZONTAL_RIGHT"

    },
    "mu::inspector::DirectionTypes\0"
    "VerticalDirection\0VERTICAL_AUTO\0"
    "VERTICAL_UP\0VERTICAL_DOWN\0HorizontalDirection\0"
    "HORIZONTAL_AUTO\0HORIZONTAL_LEFT\0"
    "HORIZONTAL_RIGHT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__DirectionTypes[] = {

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
       1,    1, 0x0,    3,   24,
       5,    5, 0x0,    3,   30,

 // enum data: key, value
       2, uint(mu::inspector::DirectionTypes::VERTICAL_AUTO),
       3, uint(mu::inspector::DirectionTypes::VERTICAL_UP),
       4, uint(mu::inspector::DirectionTypes::VERTICAL_DOWN),
       6, uint(mu::inspector::DirectionTypes::HORIZONTAL_AUTO),
       7, uint(mu::inspector::DirectionTypes::HORIZONTAL_LEFT),
       8, uint(mu::inspector::DirectionTypes::HORIZONTAL_RIGHT),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::DirectionTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__DirectionTypes.data,
    qt_meta_data_mu__inspector__DirectionTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
