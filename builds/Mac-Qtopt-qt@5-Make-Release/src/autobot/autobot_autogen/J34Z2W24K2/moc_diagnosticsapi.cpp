/****************************************************************************
** Meta object code from reading C++ file 'diagnosticsapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/internal/api/diagnosticsapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagnosticsapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__api__DiagnosticsApi_t {
    QByteArrayData data[17];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__api__DiagnosticsApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__api__DiagnosticsApi_t qt_meta_stringdata_mu__api__DiagnosticsApi = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::api::DiagnosticsApi"
QT_MOC_LITERAL(1, 24, 16), // "generateDrawData"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "scoresDir"
QT_MOC_LITERAL(4, 52, 6), // "outDir"
QT_MOC_LITERAL(5, 59, 8), // "QJSValue"
QT_MOC_LITERAL(6, 68, 3), // "opt"
QT_MOC_LITERAL(7, 72, 15), // "compareDrawData"
QT_MOC_LITERAL(8, 88, 3), // "ref"
QT_MOC_LITERAL(9, 92, 4), // "test"
QT_MOC_LITERAL(10, 97, 7), // "outDiff"
QT_MOC_LITERAL(11, 105, 13), // "drawDataToPng"
QT_MOC_LITERAL(12, 119, 8), // "dataFile"
QT_MOC_LITERAL(13, 128, 7), // "outFile"
QT_MOC_LITERAL(14, 136, 13), // "drawDiffToPng"
QT_MOC_LITERAL(15, 150, 8), // "diffFile"
QT_MOC_LITERAL(16, 159, 7) // "refFile"

    },
    "mu::api::DiagnosticsApi\0generateDrawData\0"
    "\0scoresDir\0outDir\0QJSValue\0opt\0"
    "compareDrawData\0ref\0test\0outDiff\0"
    "drawDataToPng\0dataFile\0outFile\0"
    "drawDiffToPng\0diffFile\0refFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__api__DiagnosticsApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x02 /* Public */,
       1,    2,   51,    2, 0x22 /* Public | MethodCloned */,
       7,    4,   56,    2, 0x02 /* Public */,
       7,    3,   65,    2, 0x22 /* Public | MethodCloned */,
      11,    2,   72,    2, 0x02 /* Public */,
      14,    3,   77,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    8,    9,   10,    6,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString, QMetaType::QString,   15,   16,   13,

       0        // eod
};

void mu::api::DiagnosticsApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiagnosticsApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QVariantMap _r = _t->generateDrawData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QJSValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantMap _r = _t->generateDrawData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantMap _r = _t->compareDrawData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QJSValue(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantMap _r = _t->compareDrawData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->drawDataToPng((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantMap _r = _t->drawDiffToPng((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::api::DiagnosticsApi::staticMetaObject = { {
    QMetaObject::SuperData::link<ApiObject::staticMetaObject>(),
    qt_meta_stringdata_mu__api__DiagnosticsApi.data,
    qt_meta_data_mu__api__DiagnosticsApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::api::DiagnosticsApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::api::DiagnosticsApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__api__DiagnosticsApi.stringdata0))
        return static_cast<void*>(this);
    return ApiObject::qt_metacast(_clname);
}

int mu::api::DiagnosticsApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApiObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
