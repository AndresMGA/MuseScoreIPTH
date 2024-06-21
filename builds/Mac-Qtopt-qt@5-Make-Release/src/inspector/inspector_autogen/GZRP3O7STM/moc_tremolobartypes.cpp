/****************************************************************************
** Meta object code from reading C++ file 'tremolobartypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/tremolobartypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tremolobartypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__TremoloBarTypes_t {
    QByteArrayData data[9];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__TremoloBarTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__TremoloBarTypes_t qt_meta_stringdata_mu__inspector__TremoloBarTypes = {
    {
QT_MOC_LITERAL(0, 0, 30), // "mu::inspector::TremoloBarTypes"
QT_MOC_LITERAL(1, 31, 14), // "TremoloBarType"
QT_MOC_LITERAL(2, 46, 8), // "TYPE_DIP"
QT_MOC_LITERAL(3, 55, 9), // "TYPE_DIVE"
QT_MOC_LITERAL(4, 65, 15), // "TYPE_RELEASE_UP"
QT_MOC_LITERAL(5, 81, 17), // "TYPE_INVERTED_DIP"
QT_MOC_LITERAL(6, 99, 11), // "TYPE_RETURN"
QT_MOC_LITERAL(7, 111, 17), // "TYPE_RELEASE_DOWN"
QT_MOC_LITERAL(8, 129, 11) // "TYPE_CUSTOM"

    },
    "mu::inspector::TremoloBarTypes\0"
    "TremoloBarType\0TYPE_DIP\0TYPE_DIVE\0"
    "TYPE_RELEASE_UP\0TYPE_INVERTED_DIP\0"
    "TYPE_RETURN\0TYPE_RELEASE_DOWN\0TYPE_CUSTOM"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__TremoloBarTypes[] = {

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
       1,    1, 0x2,    7,   19,

 // enum data: key, value
       2, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_DIP),
       3, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_DIVE),
       4, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_RELEASE_UP),
       5, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_INVERTED_DIP),
       6, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_RETURN),
       7, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_RELEASE_DOWN),
       8, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_CUSTOM),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::TremoloBarTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__TremoloBarTypes.data,
    qt_meta_data_mu__inspector__TremoloBarTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
