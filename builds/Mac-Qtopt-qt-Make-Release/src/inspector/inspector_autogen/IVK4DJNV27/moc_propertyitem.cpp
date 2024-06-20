/****************************************************************************
** Meta object code from reading C++ file 'propertyitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/propertyitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPropertyItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPropertyItemENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::PropertyItem",
    "valueChanged",
    "",
    "defaultValueChanged",
    "defaultValue",
    "isUndefinedChanged",
    "isUndefined",
    "isEnabledChanged",
    "isEnabled",
    "isStyledChanged",
    "isVisibleChanged",
    "isVisible",
    "isModifiedChanged",
    "isModified",
    "propertyModified",
    "mu::engraving::Pid",
    "propertyId",
    "newValue",
    "applyToStyleRequested",
    "mu::engraving::Sid",
    "styledId",
    "newStyleValue",
    "setValue",
    "value",
    "setDefaultValue",
    "setIsEnabled",
    "setIsVisible",
    "resetToDefault",
    "applyToStyle",
    "isStyled"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEPropertyItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       7,  145, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    8 /* Public */,
       3,    1,  105,    2, 0x06,    9 /* Public */,
       5,    1,  108,    2, 0x06,   11 /* Public */,
       7,    1,  111,    2, 0x06,   13 /* Public */,
       9,    0,  114,    2, 0x06,   15 /* Public */,
      10,    1,  115,    2, 0x06,   16 /* Public */,
      12,    1,  118,    2, 0x06,   18 /* Public */,
      14,    2,  121,    2, 0x06,   20 /* Public */,
      18,    2,  126,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    1,  131,    2, 0x0a,   26 /* Public */,
      24,    1,  134,    2, 0x0a,   28 /* Public */,
      25,    1,  137,    2, 0x0a,   30 /* Public */,
      26,    1,  140,    2, 0x0a,   32 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      27,    0,  143,    2, 0x02,   34 /* Public */,
      28,    0,  144,    2, 0x02,   35 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QVariant,   16,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QVariant,   20,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   23,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::QVariant, 0x00015103, uint(0), 0,
       4, QMetaType::QVariant, 0x00015001, uint(1), 0,
       6, QMetaType::Bool, 0x00015001, uint(2), 0,
      11, QMetaType::Bool, 0x00015001, uint(5), 0,
       8, QMetaType::Bool, 0x00015001, uint(3), 0,
      29, QMetaType::Bool, 0x00015001, uint(4), 0,
      13, QMetaType::Bool, 0x00015001, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::PropertyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPropertyItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEPropertyItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPropertyItemENDCLASS_t,
        // property 'value'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'defaultValue'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'isUndefined'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isStyled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isModified'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropertyItem, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'defaultValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'isUndefinedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isStyledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isModifiedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'propertyModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mu::engraving::Pid, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'applyToStyleRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mu::engraving::Sid, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setDefaultValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setIsEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'resetToDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applyToStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::PropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->defaultValueChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 2: _t->isUndefinedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->isStyledChanged(); break;
        case 5: _t->isVisibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->isModifiedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->propertyModified((*reinterpret_cast< std::add_pointer_t<mu::engraving::Pid>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 8: _t->applyToStyleRequested((*reinterpret_cast< std::add_pointer_t<mu::engraving::Sid>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 9: _t->setValue((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 10: _t->setDefaultValue((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 11: _t->setIsEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setIsVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->resetToDefault(); break;
        case 14: _t->applyToStyle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyItem::*)();
            if (_t _q_method = &PropertyItem::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)(QVariant );
            if (_t _q_method = &PropertyItem::defaultValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)(bool );
            if (_t _q_method = &PropertyItem::isUndefinedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)(bool );
            if (_t _q_method = &PropertyItem::isEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)();
            if (_t _q_method = &PropertyItem::isStyledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)(bool );
            if (_t _q_method = &PropertyItem::isVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)(bool );
            if (_t _q_method = &PropertyItem::isModifiedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)(mu::engraving::Pid , QVariant );
            if (_t _q_method = &PropertyItem::propertyModified; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PropertyItem::*)(mu::engraving::Sid , QVariant );
            if (_t _q_method = &PropertyItem::applyToStyleRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->defaultValue(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isUndefined(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isStyled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isModified(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::PropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::PropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPropertyItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::inspector::PropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::PropertyItem::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::PropertyItem::defaultValueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::PropertyItem::isUndefinedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::PropertyItem::isEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::inspector::PropertyItem::isStyledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::inspector::PropertyItem::isVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::inspector::PropertyItem::isModifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void mu::inspector::PropertyItem::propertyModified(mu::engraving::Pid _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void mu::inspector::PropertyItem::applyToStyleRequested(mu::engraving::Sid _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
