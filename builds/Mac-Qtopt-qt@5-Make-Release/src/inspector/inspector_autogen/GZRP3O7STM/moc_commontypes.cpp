/****************************************************************************
** Meta object code from reading C++ file 'commontypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/commontypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commontypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__CommonTypes_t {
    QByteArrayData data[4];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__CommonTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__CommonTypes_t qt_meta_stringdata_mu__inspector__CommonTypes = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mu::inspector::CommonTypes"
QT_MOC_LITERAL(1, 27, 9), // "Placement"
QT_MOC_LITERAL(2, 37, 20), // "PLACEMENT_TYPE_ABOVE"
QT_MOC_LITERAL(3, 58, 20) // "PLACEMENT_TYPE_BELOW"

    },
    "mu::inspector::CommonTypes\0Placement\0"
    "PLACEMENT_TYPE_ABOVE\0PLACEMENT_TYPE_BELOW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__CommonTypes[] = {

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
       1,    1, 0x2,    2,   19,

 // enum data: key, value
       2, uint(mu::inspector::CommonTypes::Placement::PLACEMENT_TYPE_ABOVE),
       3, uint(mu::inspector::CommonTypes::Placement::PLACEMENT_TYPE_BELOW),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::CommonTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__CommonTypes.data,
    qt_meta_data_mu__inspector__CommonTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
