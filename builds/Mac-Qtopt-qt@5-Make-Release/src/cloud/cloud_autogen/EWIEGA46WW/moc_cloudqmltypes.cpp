/****************************************************************************
** Meta object code from reading C++ file 'cloudqmltypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/cloud/cloudqmltypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloudqmltypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__cloud__QMLCloudVisibility_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__cloud__QMLCloudVisibility_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__cloud__QMLCloudVisibility_t qt_meta_stringdata_mu__cloud__QMLCloudVisibility = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::cloud::QMLCloudVisibility"
QT_MOC_LITERAL(1, 30, 15), // "CloudVisibility"
QT_MOC_LITERAL(2, 46, 6), // "Public"
QT_MOC_LITERAL(3, 53, 8), // "Unlisted"
QT_MOC_LITERAL(4, 62, 7) // "Private"

    },
    "mu::cloud::QMLCloudVisibility\0"
    "CloudVisibility\0Public\0Unlisted\0Private"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__cloud__QMLCloudVisibility[] = {

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
       2, uint(mu::cloud::QMLCloudVisibility::Public),
       3, uint(mu::cloud::QMLCloudVisibility::Unlisted),
       4, uint(mu::cloud::QMLCloudVisibility::Private),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::cloud::QMLCloudVisibility::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__cloud__QMLCloudVisibility.data,
    qt_meta_data_mu__cloud__QMLCloudVisibility,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_mu__cloud__QMLSaveToCloudResponse_t {
    QByteArrayData data[5];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__cloud__QMLSaveToCloudResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__cloud__QMLSaveToCloudResponse_t qt_meta_stringdata_mu__cloud__QMLSaveToCloudResponse = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::cloud::QMLSaveToCloudResp..."
QT_MOC_LITERAL(1, 34, 19), // "SaveToCloudResponse"
QT_MOC_LITERAL(2, 54, 6), // "Cancel"
QT_MOC_LITERAL(3, 61, 2), // "Ok"
QT_MOC_LITERAL(4, 64, 18) // "SaveLocallyInstead"

    },
    "mu::cloud::QMLSaveToCloudResponse\0"
    "SaveToCloudResponse\0Cancel\0Ok\0"
    "SaveLocallyInstead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__cloud__QMLSaveToCloudResponse[] = {

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
       2, uint(mu::cloud::QMLSaveToCloudResponse::Cancel),
       3, uint(mu::cloud::QMLSaveToCloudResponse::Ok),
       4, uint(mu::cloud::QMLSaveToCloudResponse::SaveLocallyInstead),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::cloud::QMLSaveToCloudResponse::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__cloud__QMLSaveToCloudResponse.data,
    qt_meta_data_mu__cloud__QMLSaveToCloudResponse,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
