/****************************************************************************
** Meta object code from reading C++ file 'dockpageview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/dockwindow/view/dockpageview.h"
#include "ui/view/navigationpanel.h"
#include "ui/view/navigationsection.h"
#include "dockwindow/view/dockstatusbarview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockpageview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPageViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPageViewENDCLASS = QtMocHelpers::stringData(
    "muse::dock::DockPageView",
    "inited",
    "",
    "setParamsRequested",
    "params",
    "uriChanged",
    "uri",
    "centralDockChanged",
    "DockCentralView*",
    "central",
    "statusBarChanged",
    "DockStatusBarView*",
    "statusBar",
    "setUri",
    "setCentralDock",
    "setStatusBar",
    "setDefaultNavigationControl",
    "muse::ui::NavigationControl*",
    "control",
    "mainToolBars",
    "QQmlListProperty<muse::dock::DockToolBarView>",
    "toolBars",
    "toolBarsDockingHolders",
    "QQmlListProperty<muse::dock::DockingHolderView>",
    "panels",
    "QQmlListProperty<muse::dock::DockPanelView>",
    "panelsDockingHolders",
    "centralDock",
    "muse::dock::DockCentralView*",
    "muse::dock::DockStatusBarView*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEdockSCOPEDockPageViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   93, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    9 /* Public */,
       3,    1,   69,    2, 0x06,   10 /* Public */,
       5,    1,   72,    2, 0x06,   12 /* Public */,
       7,    1,   75,    2, 0x06,   14 /* Public */,
      10,    1,   78,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,   81,    2, 0x0a,   18 /* Public */,
      14,    1,   84,    2, 0x0a,   20 /* Public */,
      15,    1,   87,    2, 0x0a,   22 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,   90,    2, 0x02,   24 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 17,   18,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015103, uint(2), 0,
      19, 0x80000000 | 20, 0x00015009, uint(-1), 0,
      21, 0x80000000 | 20, 0x00015009, uint(-1), 0,
      22, 0x80000000 | 23, 0x00015009, uint(-1), 0,
      24, 0x80000000 | 25, 0x00015009, uint(-1), 0,
      26, 0x80000000 | 23, 0x00015009, uint(-1), 0,
      27, 0x80000000 | 28, 0x0001510b, uint(3), 0,
      12, 0x80000000 | 29, 0x0001510b, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::dock::DockPageView::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPageViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEdockSCOPEDockPageViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPageViewENDCLASS_t,
        // property 'uri'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'mainToolBars'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::dock::DockToolBarView>, std::true_type>,
        // property 'toolBars'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::dock::DockToolBarView>, std::true_type>,
        // property 'toolBarsDockingHolders'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::dock::DockingHolderView>, std::true_type>,
        // property 'panels'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::dock::DockPanelView>, std::true_type>,
        // property 'panelsDockingHolders'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::dock::DockingHolderView>, std::true_type>,
        // property 'centralDock'
        QtPrivate::TypeAndForceComplete<muse::dock::DockCentralView*, std::true_type>,
        // property 'statusBar'
        QtPrivate::TypeAndForceComplete<muse::dock::DockStatusBarView*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockPageView, std::true_type>,
        // method 'inited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setParamsRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'uriChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'centralDockChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DockCentralView *, std::false_type>,
        // method 'statusBarChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DockStatusBarView *, std::false_type>,
        // method 'setUri'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCentralDock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DockCentralView *, std::false_type>,
        // method 'setStatusBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DockStatusBarView *, std::false_type>,
        // method 'setDefaultNavigationControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::ui::NavigationControl *, std::false_type>
    >,
    nullptr
} };

void muse::dock::DockPageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockPageView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->inited(); break;
        case 1: _t->setParamsRequested((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 2: _t->uriChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->centralDockChanged((*reinterpret_cast< std::add_pointer_t<DockCentralView*>>(_a[1]))); break;
        case 4: _t->statusBarChanged((*reinterpret_cast< std::add_pointer_t<DockStatusBarView*>>(_a[1]))); break;
        case 5: _t->setUri((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setCentralDock((*reinterpret_cast< std::add_pointer_t<DockCentralView*>>(_a[1]))); break;
        case 7: _t->setStatusBar((*reinterpret_cast< std::add_pointer_t<DockStatusBarView*>>(_a[1]))); break;
        case 8: _t->setDefaultNavigationControl((*reinterpret_cast< std::add_pointer_t<muse::ui::NavigationControl*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< muse::ui::NavigationControl* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockPageView::*)();
            if (_t _q_method = &DockPageView::inited; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockPageView::*)(const QVariantMap & );
            if (_t _q_method = &DockPageView::setParamsRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockPageView::*)(const QString & );
            if (_t _q_method = &DockPageView::uriChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockPageView::*)(DockCentralView * );
            if (_t _q_method = &DockPageView::centralDockChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockPageView::*)(DockStatusBarView * );
            if (_t _q_method = &DockPageView::statusBarChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockPageView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uri(); break;
        case 1: *reinterpret_cast< QQmlListProperty<muse::dock::DockToolBarView>*>(_v) = _t->mainToolBarsProperty(); break;
        case 2: *reinterpret_cast< QQmlListProperty<muse::dock::DockToolBarView>*>(_v) = _t->toolBarsProperty(); break;
        case 3: *reinterpret_cast< QQmlListProperty<muse::dock::DockingHolderView>*>(_v) = _t->toolBarsDockingHoldersProperty(); break;
        case 4: *reinterpret_cast< QQmlListProperty<muse::dock::DockPanelView>*>(_v) = _t->panelsProperty(); break;
        case 5: *reinterpret_cast< QQmlListProperty<muse::dock::DockingHolderView>*>(_v) = _t->panelsDockingHoldersProperty(); break;
        case 6: *reinterpret_cast< muse::dock::DockCentralView**>(_v) = _t->centralDock(); break;
        case 7: *reinterpret_cast< muse::dock::DockStatusBarView**>(_v) = _t->statusBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockPageView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUri(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setCentralDock(*reinterpret_cast< muse::dock::DockCentralView**>(_v)); break;
        case 7: _t->setStatusBar(*reinterpret_cast< muse::dock::DockStatusBarView**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::dock::DockPageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::dock::DockPageView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPageViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int muse::dock::DockPageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void muse::dock::DockPageView::inited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::dock::DockPageView::setParamsRequested(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::dock::DockPageView::uriChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void muse::dock::DockPageView::centralDockChanged(DockCentralView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void muse::dock::DockPageView::statusBarChanged(DockStatusBarView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
