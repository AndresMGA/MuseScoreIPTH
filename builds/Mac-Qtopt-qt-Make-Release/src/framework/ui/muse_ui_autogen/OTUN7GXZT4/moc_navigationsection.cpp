/****************************************************************************
** Meta object code from reading C++ file 'navigationsection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/view/navigationsection.h"
#include "ui/view/navigationpanel.h"
#include "ui/view/navigationsection.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationsection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationSectionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationSectionENDCLASS = QtMocHelpers::stringData(
    "muse::ui::NavigationSection",
    "typeChanged",
    "",
    "QmlType",
    "type",
    "setType",
    "requestActive",
    "INavigationPanel*",
    "panel",
    "INavigationControl*",
    "control",
    "enableHighlight",
    "ActivationType",
    "activationType",
    "Regular",
    "Exclusive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationSectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   87, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   59,    2, 0x0a,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    4,   62,    2, 0x02,    7 /* Public */,
       6,    3,   71,    2, 0x22,   12 /* Public | MethodCloned */,
       6,    2,   78,    2, 0x22,   16 /* Public | MethodCloned */,
       6,    1,   83,    2, 0x22,   19 /* Public | MethodCloned */,
       6,    0,   86,    2, 0x22,   21 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, QMetaType::Bool, 0x80000000 | 12,    8,   10,   11,   13,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, QMetaType::Bool,    8,   10,   11,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    2,   97,

 // enum data: key, value
      14, uint(muse::ui::NavigationSection::Regular),
      15, uint(muse::ui::NavigationSection::Exclusive),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::ui::NavigationSection::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNavigation::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationSectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationSectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationSectionENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<QmlType, std::true_type>,
        // enum 'QmlType'
        QtPrivate::TypeAndForceComplete<NavigationSection::QmlType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NavigationSection, std::true_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QmlType, std::false_type>,
        // method 'setType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QmlType, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationPanel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationControl *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<ActivationType, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationPanel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationControl *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationPanel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationControl *, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<INavigationPanel *, std::false_type>,
        // method 'requestActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::ui::NavigationSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeChanged((*reinterpret_cast< std::add_pointer_t<QmlType>>(_a[1]))); break;
        case 1: _t->setType((*reinterpret_cast< std::add_pointer_t<QmlType>>(_a[1]))); break;
        case 2: _t->requestActive((*reinterpret_cast< std::add_pointer_t<INavigationPanel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<INavigationControl*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ActivationType>>(_a[4]))); break;
        case 3: _t->requestActive((*reinterpret_cast< std::add_pointer_t<INavigationPanel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<INavigationControl*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->requestActive((*reinterpret_cast< std::add_pointer_t<INavigationPanel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<INavigationControl*>>(_a[2]))); break;
        case 5: _t->requestActive((*reinterpret_cast< std::add_pointer_t<INavigationPanel*>>(_a[1]))); break;
        case 6: _t->requestActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationSection::*)(QmlType );
            if (_t _q_method = &NavigationSection::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavigationSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlType*>(_v) = _t->type_property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavigationSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< QmlType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::ui::NavigationSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::ui::NavigationSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationSectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INavigationSection"))
        return static_cast< INavigationSection*>(this);
    return AbstractNavigation::qt_metacast(_clname);
}

int muse::ui::NavigationSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNavigation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void muse::ui::NavigationSection::typeChanged(QmlType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
