/****************************************************************************
** Meta object code from reading C++ file 'FloatingWindow_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/FloatingWindow_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FloatingWindow_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__FloatingWindow_t {
    QByteArrayData data[10];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__FloatingWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__FloatingWindow_t qt_meta_stringdata_KDDockWidgets__FloatingWindow = {
    {
QT_MOC_LITERAL(0, 0, 29), // "KDDockWidgets::FloatingWindow"
QT_MOC_LITERAL(1, 30, 16), // "activatedChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "numFramesChanged"
QT_MOC_LITERAL(4, 65, 18), // "windowStateChanged"
QT_MOC_LITERAL(5, 84, 24), // "QWindowStateChangeEvent*"
QT_MOC_LITERAL(6, 109, 8), // "titleBar"
QT_MOC_LITERAL(7, 118, 24), // "KDDockWidgets::TitleBar*"
QT_MOC_LITERAL(8, 143, 8), // "dropArea"
QT_MOC_LITERAL(9, 152, 24) // "KDDockWidgets::DropArea*"

    },
    "KDDockWidgets::FloatingWindow\0"
    "activatedChanged\0\0numFramesChanged\0"
    "windowStateChanged\0QWindowStateChangeEvent*\0"
    "titleBar\0KDDockWidgets::TitleBar*\0"
    "dropArea\0KDDockWidgets::DropArea*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__FloatingWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00095409,
       8, 0x80000000 | 9, 0x00095409,

       0        // eod
};

void KDDockWidgets::FloatingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FloatingWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activatedChanged(); break;
        case 1: _t->numFramesChanged(); break;
        case 2: _t->windowStateChanged((*reinterpret_cast< QWindowStateChangeEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FloatingWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FloatingWindow::activatedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FloatingWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FloatingWindow::numFramesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FloatingWindow::*)(QWindowStateChangeEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FloatingWindow::windowStateChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDDockWidgets::DropArea* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FloatingWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KDDockWidgets::TitleBar**>(_v) = _t->titleBar(); break;
        case 1: *reinterpret_cast< KDDockWidgets::DropArea**>(_v) = _t->dropArea(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::FloatingWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAdapter::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__FloatingWindow.data,
    qt_meta_data_KDDockWidgets__FloatingWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::FloatingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::FloatingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__FloatingWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Draggable"))
        return static_cast< Draggable*>(this);
    return QWidgetAdapter::qt_metacast(_clname);
}

int KDDockWidgets::FloatingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAdapter::qt_metacall(_c, _id, _a);
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
void KDDockWidgets::FloatingWindow::activatedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDDockWidgets::FloatingWindow::numFramesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDDockWidgets::FloatingWindow::windowStateChanged(QWindowStateChangeEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
