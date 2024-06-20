/****************************************************************************
** Meta object code from reading C++ file 'navigationpanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/view/navigationpanel.h"
#include "ui/view/navigationpanel.h"
#include "ui/view/navigationsection.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationpanel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationPanelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationPanelENDCLASS = QtMocHelpers::stringData(
    "muse::ui::NavigationPanel",
    "sectionChanged",
    "",
    "NavigationSection*",
    "section",
    "directionChanged",
    "setSection_property",
    "setSection",
    "INavigationSection*",
    "setDirection",
    "QmlDirection",
    "direction",
    "onSectionDestroyed",
    "requestActive",
    "INavigationControl*",
    "control",
    "enableHighlight",
    "ActivationType",
    "activationType",
    "muse::ui::NavigationSection*",
    "directionInfo",
    "Horizontal",
    "Vertical",
    "Both"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationPanelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,  104, // properties
       1,  119, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    5 /* Public */,
       5,    0,   77,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   78,    2, 0x0a,    8 /* Public */,
       7,    1,   81,    2, 0x0a,   10 /* Public */,
       9,    1,   84,    2, 0x0a,   12 /* Public */,
      12,    0,   87,    2, 0x08,   14 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      13,    3,   88,    2, 0x02,   15 /* Public */,
      13,    2,   95,    2, 0x22,   19 /* Public | MethodCloned */,
      13,    1,  100,    2, 0x22,   22 /* Public | MethodCloned */,
      13,    0,  103,    2, 0x22,   24 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool, 0x80000000 | 17,   15,   16,   18,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   16,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 19, 0x0001500b, uint(0), 0,
      11, 0x80000000 | 10, 0x0001510b, uint(1), 0,
      20, QMetaType::QString, 0x00015001, uint(1), 0,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    3,  124,

 // enum data: key, value
      21, uint(muse::ui::NavigationPanel::Horizontal),
      22, uint(muse::ui::NavigationPanel::Vertical),
      23, uint(muse::ui::NavigationPanel::Both),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::ui::NavigationPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNavigation::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationPanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationPanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationPanelENDCLASS_t,
        // property 'section'
        QtPrivate::TypeAndForceComplete<muse::ui::NavigationSection*, std::true_type>,
        // property 'direction'
        QtPrivate::TypeAndForceComplete<QmlDirection, std::true_type>,
        // property 'directionInfo'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'QmlDirection'
        QtPrivate::TypeAndForceComplete<NavigationPanel::QmlDirection, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NavigationPanel, std::true_type>,
        // method 'sectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NavigationSection *, std::false_type>,
        // method 'directionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSection_property'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<NavigationSection *, std::false_type>,
        // method 'setSection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationSection *, std::false_type>,
        // method 'setDirection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QmlDirection, std::false_type>,
        // method 'onSectionDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationControl *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<ActivationType, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationControl *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationControl *, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::ui::NavigationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sectionChanged((*reinterpret_cast< std::add_pointer_t<NavigationSection*>>(_a[1]))); break;
        case 1: _t->directionChanged(); break;
        case 2: _t->setSection_property((*reinterpret_cast< std::add_pointer_t<NavigationSection*>>(_a[1]))); break;
        case 3: _t->setSection((*reinterpret_cast< std::add_pointer_t<INavigationSection*>>(_a[1]))); break;
        case 4: _t->setDirection((*reinterpret_cast< std::add_pointer_t<QmlDirection>>(_a[1]))); break;
        case 5: _t->onSectionDestroyed(); break;
        case 6: _t->requestActive((*reinterpret_cast< std::add_pointer_t<INavigationControl*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ActivationType>>(_a[3]))); break;
        case 7: _t->requestActive((*reinterpret_cast< std::add_pointer_t<INavigationControl*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->requestActive((*reinterpret_cast< std::add_pointer_t<INavigationControl*>>(_a[1]))); break;
        case 9: _t->requestActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationPanel::*)(NavigationSection * );
            if (_t _q_method = &NavigationPanel::sectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NavigationPanel::*)();
            if (_t _q_method = &NavigationPanel::directionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavigationPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< muse::ui::NavigationSection**>(_v) = _t->section_property(); break;
        case 1: *reinterpret_cast< QmlDirection*>(_v) = _t->direction_property(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->directionInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavigationPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSection_property(*reinterpret_cast< muse::ui::NavigationSection**>(_v)); break;
        case 1: _t->setDirection(*reinterpret_cast< QmlDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::ui::NavigationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::ui::NavigationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationPanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INavigationPanel"))
        return static_cast< INavigationPanel*>(this);
    return AbstractNavigation::qt_metacast(_clname);
}

int muse::ui::NavigationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNavigation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void muse::ui::NavigationPanel::sectionChanged(NavigationSection * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::ui::NavigationPanel::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
