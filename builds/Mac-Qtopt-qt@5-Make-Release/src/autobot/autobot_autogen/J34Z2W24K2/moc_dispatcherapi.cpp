/****************************************************************************
** Meta object code from reading C++ file 'dispatcherapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/internal/api/dispatcherapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dispatcherapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__api__DispatcherApi_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__api__DispatcherApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__api__DispatcherApi_t qt_meta_stringdata_mu__api__DispatcherApi = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::api::DispatcherApi"
QT_MOC_LITERAL(1, 23, 8), // "dispatch"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "action"
QT_MOC_LITERAL(4, 40, 4) // "args"

    },
    "mu::api::DispatcherApi\0dispatch\0\0"
    "action\0args"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__api__DispatcherApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       1,    1,   29,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantList,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void mu::api::DispatcherApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DispatcherApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dispatch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 1: _t->dispatch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::api::DispatcherApi::staticMetaObject = { {
    QMetaObject::SuperData::link<ApiObject::staticMetaObject>(),
    qt_meta_stringdata_mu__api__DispatcherApi.data,
    qt_meta_data_mu__api__DispatcherApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::api::DispatcherApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::api::DispatcherApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__api__DispatcherApi.stringdata0))
        return static_cast<void*>(this);
    return ApiObject::qt_metacast(_clname);
}

int mu::api::DispatcherApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApiObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
