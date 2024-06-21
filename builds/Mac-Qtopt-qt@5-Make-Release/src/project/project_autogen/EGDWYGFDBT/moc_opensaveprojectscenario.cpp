/****************************************************************************
** Meta object code from reading C++ file 'opensaveprojectscenario.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/project/internal/opensaveprojectscenario.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opensaveprojectscenario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__project__QMLSaveLocationType_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__project__QMLSaveLocationType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__project__QMLSaveLocationType_t qt_meta_stringdata_mu__project__QMLSaveLocationType = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::project::QMLSaveLocationType"
QT_MOC_LITERAL(1, 33, 16), // "SaveLocationType"
QT_MOC_LITERAL(2, 50, 9), // "Undefined"
QT_MOC_LITERAL(3, 60, 5), // "Local"
QT_MOC_LITERAL(4, 66, 5) // "Cloud"

    },
    "mu::project::QMLSaveLocationType\0"
    "SaveLocationType\0Undefined\0Local\0Cloud"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__project__QMLSaveLocationType[] = {

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
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(mu::project::QMLSaveLocationType::Undefined),
       3, uint(mu::project::QMLSaveLocationType::Local),
       4, uint(mu::project::QMLSaveLocationType::Cloud),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::project::QMLSaveLocationType::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__project__QMLSaveLocationType.data,
    qt_meta_data_mu__project__QMLSaveLocationType,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
