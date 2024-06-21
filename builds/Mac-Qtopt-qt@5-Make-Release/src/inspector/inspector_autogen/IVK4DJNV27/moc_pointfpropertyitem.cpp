/****************************************************************************
** Meta object code from reading C++ file 'pointfpropertyitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/pointfpropertyitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointfpropertyitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__PointFPropertyItem_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__PointFPropertyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__PointFPropertyItem_t qt_meta_stringdata_mu__inspector__PointFPropertyItem = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::inspector::PointFProperty..."
QT_MOC_LITERAL(1, 34, 12), // "valueChanged"
QT_MOC_LITERAL(2, 47, 1), // "x"
QT_MOC_LITERAL(3, 49, 1) // "y"

    },
    "mu::inspector::PointFPropertyItem\0"
    "valueChanged\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__PointFPropertyItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       2, QMetaType::QReal, 0x00495103,
       3, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
    1879048193,
    1879048193,

       0        // eod
};

void mu::inspector::PointFPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PointFPropertyItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x_property(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y_property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PointFPropertyItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::PointFPropertyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__PointFPropertyItem.data,
    qt_meta_data_mu__inspector__PointFPropertyItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::PointFPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::PointFPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__PointFPropertyItem.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int mu::inspector::PointFPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_mu__inspector__PointFPropertyItem(mu::inspector::PointFPropertyItem *t) {
    t->valueChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
