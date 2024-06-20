/****************************************************************************
** Meta object code from reading C++ file 'ornamentsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/notation/ornaments/ornamentsettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ornamentsettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::OrnamentSettingsModel",
    "isIntervalAboveAvailableChanged",
    "",
    "available",
    "isIntervalBelowAvailableChanged",
    "isFullIntervalChoiceAvailableChanged",
    "isPerfectStepChanged",
    "perfect",
    "setIsIntervalAboveAvailable",
    "setIsIntervalBelowAvailable",
    "setIsFullIntervalChoiceAvailable",
    "setIsPerfectStep",
    "isPerfect",
    "placement",
    "PropertyItem*",
    "intervalAbove",
    "isIntervalAboveAvailable",
    "intervalBelow",
    "isIntervalBelowAvailable",
    "intervalStep",
    "intervalType",
    "isFullIntervalChoiceAvailable",
    "isPerfectStep",
    "showAccidental",
    "startOnUpperNote"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEOrnamentSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      11,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,   12 /* Public */,
       4,    1,   65,    2, 0x06,   14 /* Public */,
       5,    1,   68,    2, 0x06,   16 /* Public */,
       6,    1,   71,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   74,    2, 0x0a,   20 /* Public */,
       9,    1,   77,    2, 0x0a,   22 /* Public */,
      10,    1,   80,    2, 0x0a,   24 /* Public */,
      11,    1,   83,    2, 0x0a,   26 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   12,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      15, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      16, QMetaType::Bool, 0x00015001, uint(0), 0,
      17, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      18, QMetaType::Bool, 0x00015001, uint(1), 0,
      19, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      20, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      21, QMetaType::Bool, 0x00015001, uint(2), 0,
      22, QMetaType::Bool, 0x00015001, uint(3), 0,
      23, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      24, 0x80000000 | 14, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::OrnamentSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEOrnamentSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentSettingsModelENDCLASS_t,
        // property 'placement'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'intervalAbove'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isIntervalAboveAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'intervalBelow'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isIntervalBelowAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'intervalStep'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'intervalType'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isFullIntervalChoiceAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isPerfectStep'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showAccidental'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'startOnUpperNote'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OrnamentSettingsModel, std::true_type>,
        // method 'isIntervalAboveAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isIntervalBelowAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isFullIntervalChoiceAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isPerfectStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsIntervalAboveAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsIntervalBelowAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsFullIntervalChoiceAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsPerfectStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::inspector::OrnamentSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrnamentSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isIntervalAboveAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->isIntervalBelowAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->isFullIntervalChoiceAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isPerfectStepChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setIsIntervalAboveAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setIsIntervalBelowAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setIsFullIntervalChoiceAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setIsPerfectStep((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrnamentSettingsModel::*)(bool );
            if (_t _q_method = &OrnamentSettingsModel::isIntervalAboveAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OrnamentSettingsModel::*)(bool );
            if (_t _q_method = &OrnamentSettingsModel::isIntervalBelowAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OrnamentSettingsModel::*)(bool );
            if (_t _q_method = &OrnamentSettingsModel::isFullIntervalChoiceAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OrnamentSettingsModel::*)(bool );
            if (_t _q_method = &OrnamentSettingsModel::isPerfectStepChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 9:
        case 6:
        case 5:
        case 3:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OrnamentSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->placement(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->intervalAbove(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isIntervalAboveAvailable(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->intervalBelow(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isIntervalBelowAvailable(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->intervalStep(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->intervalType(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isFullIntervalChoiceAvailable(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isPerfectStep(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->showAccidental(); break;
        case 10: *reinterpret_cast< PropertyItem**>(_v) = _t->startOnUpperNote(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::OrnamentSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::OrnamentSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEOrnamentSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::OrnamentSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
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
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::OrnamentSettingsModel::isIntervalAboveAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::OrnamentSettingsModel::isIntervalBelowAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::OrnamentSettingsModel::isFullIntervalChoiceAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::OrnamentSettingsModel::isPerfectStepChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
