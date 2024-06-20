/****************************************************************************
** Meta object code from reading C++ file 'tremolotypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/tremolotypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tremolotypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TremoloTypes_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TremoloTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TremoloTypes_t qt_meta_stringdata_TremoloTypes = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TremoloTypes"
QT_MOC_LITERAL(1, 13, 12), // "TremoloStyle"
QT_MOC_LITERAL(2, 26, 13), // "STYLE_DEFAULT"
QT_MOC_LITERAL(3, 40, 17), // "STYLE_TRADITIONAL"
QT_MOC_LITERAL(4, 58, 27) // "STYLE_TRADITIONAL_ALTERNATE"

    },
    "TremoloTypes\0TremoloStyle\0STYLE_DEFAULT\0"
    "STYLE_TRADITIONAL\0STYLE_TRADITIONAL_ALTERNATE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TremoloTypes[] = {

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
       2, uint(TremoloTypes::TremoloStyle::STYLE_DEFAULT),
       3, uint(TremoloTypes::TremoloStyle::STYLE_TRADITIONAL),
       4, uint(TremoloTypes::TremoloStyle::STYLE_TRADITIONAL_ALTERNATE),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject TremoloTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_TremoloTypes.data,
    qt_meta_data_TremoloTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
