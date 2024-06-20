/****************************************************************************
** Meta object code from reading C++ file 'dockwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/dockwindow/view/dockwindow.h"
#include "ui/view/navigationpanel.h"
#include "ui/view/navigationsection.h"
#include <QQuickWindow>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockWindowENDCLASS = QtMocHelpers::stringData(
    "muse::dock::DockWindow",
    "pageLoaded",
    "",
    "currentPageUriChanged",
    "uri",
    "windowPropertyChanged",
    "QQuickWindow*",
    "window",
    "onQuit",
    "init",
    "loadPage",
    "params",
    "currentPageUri",
    "toolBars",
    "QQmlListProperty<muse::dock::DockToolBarView>",
    "pages",
    "QQmlListProperty<muse::dock::DockPageView>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEdockSCOPEDockWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    5 /* Public */,
       3,    1,   51,    2, 0x06,    6 /* Public */,
       5,    1,   54,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   57,    2, 0x08,   10 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   58,    2, 0x02,   11 /* Public */,
      10,    2,   59,    2, 0x02,   12 /* Public */,

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
      12, QMetaType::QString, 0x00015001, uint(1), 0,
      13, 0x80000000 | 14, 0x00015009, uint(-1), 0,
      15, 0x80000000 | 16, 0x00015009, uint(-1), 0,
       7, 0x80000000 | 6, 0x00015009, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::dock::DockWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEdockSCOPEDockWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockWindowENDCLASS_t,
        // property 'currentPageUri'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'toolBars'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::dock::DockToolBarView>, std::true_type>,
        // property 'pages'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::dock::DockPageView>, std::true_type>,
        // property 'window'
        QtPrivate::TypeAndForceComplete<QQuickWindow*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockWindow, std::true_type>,
        // method 'pageLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentPageUriChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'windowPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickWindow *, std::false_type>,
        // method 'onQuit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>
    >,
    nullptr
} };

void muse::dock::DockWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pageLoaded(); break;
        case 1: _t->currentPageUriChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->windowPropertyChanged((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        case 3: _t->onQuit(); break;
        case 4: _t->init(); break;
        case 5: _t->loadPage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockWindow::*)();
            if (_t _q_method = &DockWindow::pageLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockWindow::*)(const QString & );
            if (_t _q_method = &DockWindow::currentPageUriChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockWindow::*)(QQuickWindow * );
            if (_t _q_method = &DockWindow::windowPropertyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentPageUri(); break;
        case 1: *reinterpret_cast< QQmlListProperty<muse::dock::DockToolBarView>*>(_v) = _t->toolBarsProperty(); break;
        case 2: *reinterpret_cast< QQmlListProperty<muse::dock::DockPageView>*>(_v) = _t->pagesProperty(); break;
        case 3: *reinterpret_cast< QQuickWindow**>(_v) = _t->windowProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::dock::DockWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::dock::DockWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IDockWindow"))
        return static_cast< IDockWindow*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int muse::dock::DockWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void muse::dock::DockWindow::pageLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::dock::DockWindow::currentPageUriChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::dock::DockWindow::windowPropertyChanged(QQuickWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
