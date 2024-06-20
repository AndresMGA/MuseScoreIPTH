/****************************************************************************
** Meta object code from reading C++ file 'dockwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/dockwindow/dockwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__dock__DockWindow_t {
    QByteArrayData data[17];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockWindow_t qt_meta_stringdata_mu__dock__DockWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "mu::dock::DockWindow"
QT_MOC_LITERAL(1, 21, 10), // "pageLoaded"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "currentPageUriChanged"
QT_MOC_LITERAL(4, 55, 3), // "uri"
QT_MOC_LITERAL(5, 59, 21), // "windowPropertyChanged"
QT_MOC_LITERAL(6, 81, 13), // "QQuickWindow*"
QT_MOC_LITERAL(7, 95, 6), // "window"
QT_MOC_LITERAL(8, 102, 6), // "onQuit"
QT_MOC_LITERAL(9, 109, 4), // "init"
QT_MOC_LITERAL(10, 114, 8), // "loadPage"
QT_MOC_LITERAL(11, 123, 6), // "params"
QT_MOC_LITERAL(12, 130, 14), // "currentPageUri"
QT_MOC_LITERAL(13, 145, 8), // "toolBars"
QT_MOC_LITERAL(14, 154, 43), // "QQmlListProperty<mu::dock::Do..."
QT_MOC_LITERAL(15, 198, 5), // "pages"
QT_MOC_LITERAL(16, 204, 40) // "QQmlListProperty<mu::dock::Do..."

    },
    "mu::dock::DockWindow\0pageLoaded\0\0"
    "currentPageUriChanged\0uri\0"
    "windowPropertyChanged\0QQuickWindow*\0"
    "window\0onQuit\0init\0loadPage\0params\0"
    "currentPageUri\0toolBars\0"
    "QQmlListProperty<mu::dock::DockToolBarView>\0"
    "pages\0QQmlListProperty<mu::dock::DockPageView>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   51,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   52,    2, 0x02 /* Public */,
      10,    2,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    4,   11,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495001,
      13, 0x80000000 | 14, 0x00095009,
      15, 0x80000000 | 16, 0x00095009,
       7, 0x80000000 | 6, 0x00495009,

 // properties: notify_signal_id
       1,
       0,
       0,
       2,

       0        // eod
};

void mu::dock::DockWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pageLoaded(); break;
        case 1: _t->currentPageUriChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->windowPropertyChanged((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 3: _t->onQuit(); break;
        case 4: _t->init(); break;
        case 5: _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockWindow::pageLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockWindow::currentPageUriChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockWindow::*)(QQuickWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockWindow::windowPropertyChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentPageUri(); break;
        case 1: *reinterpret_cast< QQmlListProperty<mu::dock::DockToolBarView>*>(_v) = _t->toolBarsProperty(); break;
        case 2: *reinterpret_cast< QQmlListProperty<mu::dock::DockPageView>*>(_v) = _t->pagesProperty(); break;
        case 3: *reinterpret_cast< QQuickWindow**>(_v) = _t->windowProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_mu__dock__DockWindow.data,
    qt_meta_data_mu__dock__DockWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::dock::DockWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::dock::DockWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__dock__DockWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IDockWindow"))
        return static_cast< IDockWindow*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int mu::dock::DockWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void mu::dock::DockWindow::pageLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::dock::DockWindow::currentPageUriChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::dock::DockWindow::windowPropertyChanged(QQuickWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
