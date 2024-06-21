/****************************************************************************
** Meta object code from reading C++ file 'TitleBarQuick_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/quick/TitleBarQuick_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TitleBarQuick_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__TitleBarQuick_t {
    QByteArrayData data[6];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__TitleBarQuick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__TitleBarQuick_t qt_meta_stringdata_KDDockWidgets__TitleBarQuick = {
    {
QT_MOC_LITERAL(0, 0, 28), // "KDDockWidgets::TitleBarQuick"
QT_MOC_LITERAL(1, 29, 22), // "titleBarQmlItemChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "titleBarQmlItem"
QT_MOC_LITERAL(4, 69, 11), // "QQuickItem*"
QT_MOC_LITERAL(5, 81, 17) // "titleBarMouseArea"

    },
    "KDDockWidgets::TitleBarQuick\0"
    "titleBarQmlItemChanged\0\0titleBarQmlItem\0"
    "QQuickItem*\0titleBarMouseArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__TitleBarQuick[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0049510b,
       5, 0x80000000 | 4, 0x00095409,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void KDDockWidgets::TitleBarQuick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBarQuick *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleBarQmlItemChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleBarQuick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBarQuick::titleBarQmlItemChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TitleBarQuick *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->titleBarQmlItem(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->titleBarMouseArea(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TitleBarQuick *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitleBarQmlItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::TitleBarQuick::staticMetaObject = { {
    QMetaObject::SuperData::link<TitleBar::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__TitleBarQuick.data,
    qt_meta_data_KDDockWidgets__TitleBarQuick,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::TitleBarQuick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::TitleBarQuick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__TitleBarQuick.stringdata0))
        return static_cast<void*>(this);
    return TitleBar::qt_metacast(_clname);
}

int KDDockWidgets::TitleBarQuick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TitleBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void KDDockWidgets::TitleBarQuick::titleBarQmlItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
