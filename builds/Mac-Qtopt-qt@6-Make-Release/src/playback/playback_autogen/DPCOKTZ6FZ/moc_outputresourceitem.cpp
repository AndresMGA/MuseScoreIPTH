/****************************************************************************
** Meta object code from reading C++ file 'outputresourceitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/playback/view/internal/outputresourceitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputresourceitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__playback__OutputResourceItem_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__playback__OutputResourceItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__playback__OutputResourceItem_t qt_meta_stringdata_mu__playback__OutputResourceItem = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::playback::OutputResourceItem"
QT_MOC_LITERAL(1, 33, 15), // "fxParamsChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "setIsActive"
QT_MOC_LITERAL(4, 62, 11), // "newIsActive"
QT_MOC_LITERAL(5, 74, 15), // "isActiveChanged"
QT_MOC_LITERAL(6, 90, 2), // "id"
QT_MOC_LITERAL(7, 93, 8) // "isActive"

    },
    "mu::playback::OutputResourceItem\0"
    "fxParamsChanged\0\0setIsActive\0newIsActive\0"
    "isActiveChanged\0id\0isActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__playback__OutputResourceItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495001,
       7, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
    1879048197,

       0        // eod
};

void mu::playback::OutputResourceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OutputResourceItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fxParamsChanged(); break;
        case 1: _t->setIsActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OutputResourceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutputResourceItem::fxParamsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OutputResourceItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OutputResourceItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setIsActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::playback::OutputResourceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractAudioResourceItem::staticMetaObject>(),
    qt_meta_stringdata_mu__playback__OutputResourceItem.data,
    qt_meta_data_mu__playback__OutputResourceItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::playback::OutputResourceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::OutputResourceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__playback__OutputResourceItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return AbstractAudioResourceItem::qt_metacast(_clname);
}

int mu::playback::OutputResourceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioResourceItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::playback::OutputResourceItem::fxParamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_mu__playback__OutputResourceItem(mu::playback::OutputResourceItem *t) {
    t->isActiveChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
