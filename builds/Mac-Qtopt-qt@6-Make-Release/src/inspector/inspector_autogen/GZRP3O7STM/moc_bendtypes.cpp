/****************************************************************************
** Meta object code from reading C++ file 'bendtypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/bendtypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bendtypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__BendTypes_t {
    QByteArrayData data[5];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__BendTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__BendTypes_t qt_meta_stringdata_mu__inspector__BendTypes = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::inspector::BendTypes"
QT_MOC_LITERAL(1, 25, 12), // "ShowHoldLine"
QT_MOC_LITERAL(2, 38, 14), // "SHOW_HOLD_AUTO"
QT_MOC_LITERAL(3, 53, 14), // "SHOW_HOLD_SHOW"
QT_MOC_LITERAL(4, 68, 14) // "SHOW_HOLD_HIDE"

    },
    "mu::inspector::BendTypes\0ShowHoldLine\0"
    "SHOW_HOLD_AUTO\0SHOW_HOLD_SHOW\0"
    "SHOW_HOLD_HIDE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__BendTypes[] = {

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
       2, uint(mu::inspector::BendTypes::ShowHoldLine::SHOW_HOLD_AUTO),
       3, uint(mu::inspector::BendTypes::ShowHoldLine::SHOW_HOLD_SHOW),
       4, uint(mu::inspector::BendTypes::ShowHoldLine::SHOW_HOLD_HIDE),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::BendTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__BendTypes.data,
    qt_meta_data_mu__inspector__BendTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
