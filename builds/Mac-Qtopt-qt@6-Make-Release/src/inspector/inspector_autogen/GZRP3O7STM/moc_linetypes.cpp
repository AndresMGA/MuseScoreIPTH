/****************************************************************************
** Meta object code from reading C++ file 'linetypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/linetypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linetypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__LineTypes_t {
    QByteArrayData data[5];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__LineTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__LineTypes_t qt_meta_stringdata_mu__inspector__LineTypes = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::inspector::LineTypes"
QT_MOC_LITERAL(1, 25, 9), // "LineStyle"
QT_MOC_LITERAL(2, 35, 16), // "LINE_STYLE_SOLID"
QT_MOC_LITERAL(3, 52, 17), // "LINE_STYLE_DASHED"
QT_MOC_LITERAL(4, 70, 17) // "LINE_STYLE_DOTTED"

    },
    "mu::inspector::LineTypes\0LineStyle\0"
    "LINE_STYLE_SOLID\0LINE_STYLE_DASHED\0"
    "LINE_STYLE_DOTTED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__LineTypes[] = {

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
       2, uint(mu::inspector::LineTypes::LineStyle::LINE_STYLE_SOLID),
       3, uint(mu::inspector::LineTypes::LineStyle::LINE_STYLE_DASHED),
       4, uint(mu::inspector::LineTypes::LineStyle::LINE_STYLE_DOTTED),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::LineTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__LineTypes.data,
    qt_meta_data_mu__inspector__LineTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
