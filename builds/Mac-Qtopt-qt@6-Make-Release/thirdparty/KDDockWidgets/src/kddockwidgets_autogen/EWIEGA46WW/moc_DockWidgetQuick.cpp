/****************************************************************************
** Meta object code from reading C++ file 'DockWidgetQuick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/DockWidgetQuick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockWidgetQuick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__DockWidgetQuick_t {
    QByteArrayData data[11];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__DockWidgetQuick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__DockWidgetQuick_t qt_meta_stringdata_KDDockWidgets__DockWidgetQuick = {
    {
QT_MOC_LITERAL(0, 0, 30), // "KDDockWidgets::DockWidgetQuick"
QT_MOC_LITERAL(1, 31, 20), // "frameGeometryChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 9), // "setWidget"
QT_MOC_LITERAL(4, 63, 11), // "QQuickItem*"
QT_MOC_LITERAL(5, 75, 6), // "widget"
QT_MOC_LITERAL(6, 82, 5), // "frame"
QT_MOC_LITERAL(7, 88, 21), // "KDDockWidgets::Frame*"
QT_MOC_LITERAL(8, 110, 17), // "onGeometryUpdated"
QT_MOC_LITERAL(9, 128, 21), // "actualTitleBarChanged"
QT_MOC_LITERAL(10, 150, 14) // "actualTitleBar"

    },
    "KDDockWidgets::DockWidgetQuick\0"
    "frameGeometryChanged\0\0setWidget\0"
    "QQuickItem*\0widget\0frame\0KDDockWidgets::Frame*\0"
    "onGeometryUpdated\0actualTitleBarChanged\0"
    "actualTitleBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__DockWidgetQuick[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x02 /* Public */,
       6,    0,   40,    2, 0x02 /* Public */,
       8,    0,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    2,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 7,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QObjectStar, 0x00495001,

 // properties: notify_signal_id
    1879048201,

       0        // eod
};

void KDDockWidgets::DockWidgetQuick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockWidgetQuick *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->frameGeometryChanged((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 1: _t->setWidget((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 2: { KDDockWidgets::Frame* _r = _t->frame();
            if (_a[0]) *reinterpret_cast< KDDockWidgets::Frame**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->onGeometryUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockWidgetQuick::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockWidgetQuick::frameGeometryChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockWidgetQuick *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->actualTitleBarObj(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::DockWidgetQuick::staticMetaObject = { {
    QMetaObject::SuperData::link<DockWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__DockWidgetQuick.data,
    qt_meta_data_KDDockWidgets__DockWidgetQuick,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::DockWidgetQuick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::DockWidgetQuick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__DockWidgetQuick.stringdata0))
        return static_cast<void*>(this);
    return DockWidgetBase::qt_metacast(_clname);
}

int KDDockWidgets::DockWidgetQuick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDDockWidgets::DockWidgetQuick::frameGeometryChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_KDDockWidgets__DockWidgetQuick(KDDockWidgets::DockWidgetQuick *t) {
    t->actualTitleBarChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
