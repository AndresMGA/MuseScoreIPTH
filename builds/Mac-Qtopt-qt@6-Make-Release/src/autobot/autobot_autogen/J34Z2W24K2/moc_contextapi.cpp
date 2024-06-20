/****************************************************************************
** Meta object code from reading C++ file 'contextapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/internal/api/contextapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contextapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__api__ContextApi_t {
    QByteArrayData data[11];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__api__ContextApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__api__ContextApi_t qt_meta_stringdata_mu__api__ContextApi = {
    {
QT_MOC_LITERAL(0, 0, 19), // "mu::api::ContextApi"
QT_MOC_LITERAL(1, 20, 12), // "setGlobalVal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "key"
QT_MOC_LITERAL(4, 38, 8), // "QJSValue"
QT_MOC_LITERAL(5, 47, 3), // "val"
QT_MOC_LITERAL(6, 51, 9), // "globalVal"
QT_MOC_LITERAL(7, 61, 10), // "setStepVal"
QT_MOC_LITERAL(8, 72, 7), // "stepVal"
QT_MOC_LITERAL(9, 80, 8), // "stepName"
QT_MOC_LITERAL(10, 89, 7) // "findVal"

    },
    "mu::api::ContextApi\0setGlobalVal\0\0key\0"
    "QJSValue\0val\0globalVal\0setStepVal\0"
    "stepVal\0stepName\0findVal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__api__ContextApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x02 /* Public */,
       6,    1,   44,    2, 0x02 /* Public */,
       7,    2,   47,    2, 0x02 /* Public */,
       8,    2,   52,    2, 0x02 /* Public */,
      10,    1,   57,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    0x80000000 | 4, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    0x80000000 | 4, QMetaType::QString, QMetaType::QString,    9,    3,
    0x80000000 | 4, QMetaType::QString,    3,

       0        // eod
};

void mu::api::ContextApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContextApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setGlobalVal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJSValue(*)>(_a[2]))); break;
        case 1: { QJSValue _r = _t->globalVal((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setStepVal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJSValue(*)>(_a[2]))); break;
        case 3: { QJSValue _r = _t->stepVal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 4: { QJSValue _r = _t->findVal((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::api::ContextApi::staticMetaObject = { {
    QMetaObject::SuperData::link<ApiObject::staticMetaObject>(),
    qt_meta_stringdata_mu__api__ContextApi.data,
    qt_meta_data_mu__api__ContextApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::api::ContextApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::api::ContextApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__api__ContextApi.stringdata0))
        return static_cast<void*>(this);
    return ApiObject::qt_metacast(_clname);
}

int mu::api::ContextApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApiObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
