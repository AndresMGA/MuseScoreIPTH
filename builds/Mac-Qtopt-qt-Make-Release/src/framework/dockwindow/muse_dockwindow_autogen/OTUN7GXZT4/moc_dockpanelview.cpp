/****************************************************************************
** Meta object code from reading C++ file 'dockpanelview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/dockwindow/view/dockpanelview.h"
#include "ui/view/navigationpanel.h"
#include "ui/view/navigationsection.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockpanelview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPanelViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPanelViewENDCLASS = QtMocHelpers::stringData(
    "muse::dock::DockPanelView",
    "groupNameChanged",
    "",
    "navigationSectionChanged",
    "contextMenuModelChanged",
    "setGroupName",
    "name",
    "setNavigationSection",
    "newNavigation",
    "setContextMenuModel",
    "uicomponents::AbstractMenuModel*",
    "model",
    "groupName",
    "navigationSection",
    "contextMenuModel",
    "muse::uicomponents::AbstractMenuModel*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEdockSCOPEDockPanelViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    4 /* Public */,
       3,    0,   51,    2, 0x06,    5 /* Public */,
       4,    0,   52,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   53,    2, 0x0a,    7 /* Public */,
       7,    1,   56,    2, 0x0a,    9 /* Public */,
       9,    1,   59,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QObjectStar,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00015103, uint(0), 0,
      13, QMetaType::QObjectStar, 0x00015103, uint(1), 0,
      14, 0x80000000 | 15, 0x0001510b, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::dock::DockPanelView::staticMetaObject = { {
    QMetaObject::SuperData::link<DockBase::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPanelViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEdockSCOPEDockPanelViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPanelViewENDCLASS_t,
        // property 'groupName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'navigationSection'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'contextMenuModel'
        QtPrivate::TypeAndForceComplete<muse::uicomponents::AbstractMenuModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockPanelView, std::true_type>,
        // method 'groupNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'navigationSectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contextMenuModelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setGroupName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setNavigationSection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'setContextMenuModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uicomponents::AbstractMenuModel *, std::false_type>
    >,
    nullptr
} };

void muse::dock::DockPanelView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockPanelView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->groupNameChanged(); break;
        case 1: _t->navigationSectionChanged(); break;
        case 2: _t->contextMenuModelChanged(); break;
        case 3: _t->setGroupName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setNavigationSection((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 5: _t->setContextMenuModel((*reinterpret_cast< std::add_pointer_t<uicomponents::AbstractMenuModel*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockPanelView::*)();
            if (_t _q_method = &DockPanelView::groupNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockPanelView::*)();
            if (_t _q_method = &DockPanelView::navigationSectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockPanelView::*)();
            if (_t _q_method = &DockPanelView::contextMenuModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< muse::uicomponents::AbstractMenuModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockPanelView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->groupName(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->navigationSection(); break;
        case 2: *reinterpret_cast< muse::uicomponents::AbstractMenuModel**>(_v) = _t->contextMenuModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockPanelView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGroupName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNavigationSection(*reinterpret_cast< QObject**>(_v)); break;
        case 2: _t->setContextMenuModel(*reinterpret_cast< muse::uicomponents::AbstractMenuModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::dock::DockPanelView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::dock::DockPanelView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockPanelViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DockBase::qt_metacast(_clname);
}

int muse::dock::DockPanelView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockBase::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void muse::dock::DockPanelView::groupNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::dock::DockPanelView::navigationSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::dock::DockPanelView::contextMenuModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
