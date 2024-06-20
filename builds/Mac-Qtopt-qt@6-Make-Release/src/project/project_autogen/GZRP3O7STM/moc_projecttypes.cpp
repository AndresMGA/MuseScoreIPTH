/****************************************************************************
** Meta object code from reading C++ file 'projecttypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/project/types/projecttypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projecttypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__project__GenerateAudioTimePeriod_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__project__GenerateAudioTimePeriod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__project__GenerateAudioTimePeriod_t qt_meta_stringdata_mu__project__GenerateAudioTimePeriod = {
    {
QT_MOC_LITERAL(0, 0, 36), // "mu::project::GenerateAudioTim..."
QT_MOC_LITERAL(1, 37, 4), // "Type"
QT_MOC_LITERAL(2, 42, 5), // "Never"
QT_MOC_LITERAL(3, 48, 6), // "Always"
QT_MOC_LITERAL(4, 55, 25) // "AfterCertainNumberOfSaves"

    },
    "mu::project::GenerateAudioTimePeriod\0"
    "Type\0Never\0Always\0AfterCertainNumberOfSaves"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__project__GenerateAudioTimePeriod[] = {

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
       2, uint(mu::project::GenerateAudioTimePeriod::Type::Never),
       3, uint(mu::project::GenerateAudioTimePeriod::Type::Always),
       4, uint(mu::project::GenerateAudioTimePeriod::Type::AfterCertainNumberOfSaves),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::project::GenerateAudioTimePeriod::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__project__GenerateAudioTimePeriod.data,
    qt_meta_data_mu__project__GenerateAudioTimePeriod,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_mu__project__Migration_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__project__Migration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__project__Migration_t qt_meta_stringdata_mu__project__Migration = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::project::Migration"
QT_MOC_LITERAL(1, 23, 4), // "Type"
QT_MOC_LITERAL(2, 28, 7), // "Unknown"
QT_MOC_LITERAL(3, 36, 7), // "Pre_3_6"
QT_MOC_LITERAL(4, 44, 7) // "Ver_3_6"

    },
    "mu::project::Migration\0Type\0Unknown\0"
    "Pre_3_6\0Ver_3_6"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__project__Migration[] = {

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
       2, uint(mu::project::Migration::Type::Unknown),
       3, uint(mu::project::Migration::Type::Pre_3_6),
       4, uint(mu::project::Migration::Type::Ver_3_6),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::project::Migration::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__project__Migration.data,
    qt_meta_data_mu__project__Migration,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
