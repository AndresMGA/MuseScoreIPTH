/****************************************************************************
** Meta object code from reading C++ file 'docktypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/dockwindow/docktypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docktypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__dock__DockLocation_t {
    QByteArrayData data[8];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockLocation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockLocation_t qt_meta_stringdata_mu__dock__DockLocation = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::dock::DockLocation"
QT_MOC_LITERAL(1, 23, 8), // "Location"
QT_MOC_LITERAL(2, 32, 9), // "Undefined"
QT_MOC_LITERAL(3, 42, 4), // "Left"
QT_MOC_LITERAL(4, 47, 5), // "Right"
QT_MOC_LITERAL(5, 53, 6), // "Center"
QT_MOC_LITERAL(6, 60, 3), // "Top"
QT_MOC_LITERAL(7, 64, 6) // "Bottom"

    },
    "mu::dock::DockLocation\0Location\0"
    "Undefined\0Left\0Right\0Center\0Top\0Bottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockLocation[] = {

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
       1,    1, 0x0,    6,   19,

 // enum data: key, value
       2, uint(mu::dock::DockLocation::Undefined),
       3, uint(mu::dock::DockLocation::Left),
       4, uint(mu::dock::DockLocation::Right),
       5, uint(mu::dock::DockLocation::Center),
       6, uint(mu::dock::DockLocation::Top),
       7, uint(mu::dock::DockLocation::Bottom),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockLocation::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__dock__DockLocation.data,
    qt_meta_data_mu__dock__DockLocation,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
