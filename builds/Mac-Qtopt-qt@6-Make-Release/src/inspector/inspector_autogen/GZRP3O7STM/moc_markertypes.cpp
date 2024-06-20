/****************************************************************************
** Meta object code from reading C++ file 'markertypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/markertypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'markertypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__MarkerTypes_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__MarkerTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__MarkerTypes_t qt_meta_stringdata_mu__inspector__MarkerTypes = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mu::inspector::MarkerTypes"
QT_MOC_LITERAL(1, 27, 4), // "Type"
QT_MOC_LITERAL(2, 32, 10), // "TYPE_SEGNO"
QT_MOC_LITERAL(3, 43, 13), // "TYPE_VARSEGNO"
QT_MOC_LITERAL(4, 57, 9), // "TYPE_CODA"
QT_MOC_LITERAL(5, 67, 12), // "TYPE_VARCODA"
QT_MOC_LITERAL(6, 80, 12), // "TYPE_CODETTA"
QT_MOC_LITERAL(7, 93, 9), // "TYPE_FINE"
QT_MOC_LITERAL(8, 103, 11), // "TYPE_TOCODA"
QT_MOC_LITERAL(9, 115, 9) // "TYPE_USER"

    },
    "mu::inspector::MarkerTypes\0Type\0"
    "TYPE_SEGNO\0TYPE_VARSEGNO\0TYPE_CODA\0"
    "TYPE_VARCODA\0TYPE_CODETTA\0TYPE_FINE\0"
    "TYPE_TOCODA\0TYPE_USER"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__MarkerTypes[] = {

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
       1,    1, 0x2,    8,   19,

 // enum data: key, value
       2, uint(mu::inspector::MarkerTypes::Type::TYPE_SEGNO),
       3, uint(mu::inspector::MarkerTypes::Type::TYPE_VARSEGNO),
       4, uint(mu::inspector::MarkerTypes::Type::TYPE_CODA),
       5, uint(mu::inspector::MarkerTypes::Type::TYPE_VARCODA),
       6, uint(mu::inspector::MarkerTypes::Type::TYPE_CODETTA),
       7, uint(mu::inspector::MarkerTypes::Type::TYPE_FINE),
       8, uint(mu::inspector::MarkerTypes::Type::TYPE_TOCODA),
       9, uint(mu::inspector::MarkerTypes::Type::TYPE_USER),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::MarkerTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__MarkerTypes.data,
    qt_meta_data_mu__inspector__MarkerTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
