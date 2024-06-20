/****************************************************************************
** Meta object code from reading C++ file 'navigationcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/view/navigationcontrol.h"
#include "ui/view/navigationpanel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationcontrol.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationControlENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationControlENDCLASS = QtMocHelpers::stringData(
    "muse::ui::NavigationControl",
    "panelChanged",
    "",
    "NavigationPanel*",
    "panel",
    "triggered",
    "setPanel",
    "onPanelDestroyed",
    "requestActive",
    "enableHighlight",
    "requestActiveByInteraction",
    "muse::ui::NavigationPanel*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationControlENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    2 /* Public */,
       5,    0,   65,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   69,    2, 0x08,    7 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   70,    2, 0x02,    8 /* Public */,
       8,    0,   73,    2, 0x22,   10 /* Public | MethodCloned */,
      10,    1,   74,    2, 0x02,   11 /* Public */,
      10,    0,   77,    2, 0x22,   13 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 11, 0x0001510b, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::ui::NavigationControl::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNavigation::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationControlENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationControlENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationControlENDCLASS_t,
        // property 'panel'
        QtPrivate::TypeAndForceComplete<muse::ui::NavigationPanel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NavigationControl, std::true_type>,
        // method 'panelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NavigationPanel *, std::false_type>,
        // method 'triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPanel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NavigationPanel *, std::false_type>,
        // method 'onPanelDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestActiveByInteraction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'requestActiveByInteraction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::ui::NavigationControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->panelChanged((*reinterpret_cast< std::add_pointer_t<NavigationPanel*>>(_a[1]))); break;
        case 1: _t->triggered(); break;
        case 2: _t->setPanel((*reinterpret_cast< std::add_pointer_t<NavigationPanel*>>(_a[1]))); break;
        case 3: _t->onPanelDestroyed(); break;
        case 4: _t->requestActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->requestActive(); break;
        case 6: _t->requestActiveByInteraction((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->requestActiveByInteraction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationControl::*)(NavigationPanel * );
            if (_t _q_method = &NavigationControl::panelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NavigationControl::*)();
            if (_t _q_method = &NavigationControl::triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavigationControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< muse::ui::NavigationPanel**>(_v) = _t->panel_property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavigationControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPanel(*reinterpret_cast< muse::ui::NavigationPanel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::ui::NavigationControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::ui::NavigationControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationControlENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INavigationControl"))
        return static_cast< INavigationControl*>(this);
    return AbstractNavigation::qt_metacast(_clname);
}

int muse::ui::NavigationControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNavigation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void muse::ui::NavigationControl::panelChanged(NavigationPanel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::ui::NavigationControl::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
