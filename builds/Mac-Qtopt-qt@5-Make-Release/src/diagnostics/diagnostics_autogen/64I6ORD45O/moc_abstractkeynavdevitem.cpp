/****************************************************************************
** Meta object code from reading C++ file 'abstractkeynavdevitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/diagnostics/view/keynav/abstractkeynavdevitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractkeynavdevitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__diagnostics__AbstractKeyNavDevItem_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__diagnostics__AbstractKeyNavDevItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__diagnostics__AbstractKeyNavDevItem_t qt_meta_stringdata_mu__diagnostics__AbstractKeyNavDevItem = {
    {
QT_MOC_LITERAL(0, 0, 38), // "mu::diagnostics::AbstractKeyN..."
QT_MOC_LITERAL(1, 39, 12), // "indexChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 68, 13), // "activeChanged"
QT_MOC_LITERAL(5, 82, 4), // "name"
QT_MOC_LITERAL(6, 87, 5), // "index"
QT_MOC_LITERAL(7, 93, 7), // "enabled"
QT_MOC_LITERAL(8, 101, 6) // "active"

    },
    "mu::diagnostics::AbstractKeyNavDevItem\0"
    "indexChanged\0\0enabledChanged\0activeChanged\0"
    "name\0index\0enabled\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__diagnostics__AbstractKeyNavDevItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QVariant, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       8, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void mu::diagnostics::AbstractKeyNavDevItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractKeyNavDevItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->indexChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->activeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractKeyNavDevItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractKeyNavDevItem::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractKeyNavDevItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractKeyNavDevItem::enabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractKeyNavDevItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractKeyNavDevItem::activeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractKeyNavDevItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->index(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::diagnostics::AbstractKeyNavDevItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__diagnostics__AbstractKeyNavDevItem.data,
    qt_meta_data_mu__diagnostics__AbstractKeyNavDevItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::diagnostics::AbstractKeyNavDevItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::diagnostics::AbstractKeyNavDevItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__diagnostics__AbstractKeyNavDevItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::diagnostics::AbstractKeyNavDevItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::diagnostics::AbstractKeyNavDevItem::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::diagnostics::AbstractKeyNavDevItem::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::diagnostics::AbstractKeyNavDevItem::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
