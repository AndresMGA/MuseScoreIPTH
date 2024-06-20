/****************************************************************************
** Meta object code from reading C++ file 'barlinesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/notation/barlines/barlinesettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barlinesettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::BarlineSettingsModel",
    "isRepeatStyleChangingAllowedChanged",
    "",
    "applySpanPreset",
    "presetType",
    "setSpanIntervalAsStaffDefault",
    "type",
    "PropertyItem*",
    "isSpanToNextStaff",
    "spanFrom",
    "spanTo",
    "hasToShowTips",
    "isRepeatStyleChangingAllowed"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEBarlineSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    7 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x02,    8 /* Public */,
       5,    0,   36,    2, 0x02,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00015409, uint(-1), 0,
       8, 0x80000000 | 7, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 7, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 7, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 7, 0x00015409, uint(-1), 0,
      12, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::BarlineSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEBarlineSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineSettingsModelENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isSpanToNextStaff'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'spanFrom'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'spanTo'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'hasToShowTips'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isRepeatStyleChangingAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BarlineSettingsModel, std::true_type>,
        // method 'isRepeatStyleChangingAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applySpanPreset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'setSpanIntervalAsStaffDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::BarlineSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BarlineSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isRepeatStyleChangingAllowedChanged(); break;
        case 1: _t->applySpanPreset((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setSpanIntervalAsStaffDefault(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BarlineSettingsModel::*)();
            if (_t _q_method = &BarlineSettingsModel::isRepeatStyleChangingAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BarlineSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->isSpanToNextStaff(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->spanFrom(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->spanTo(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->hasToShowTips(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isRepeatStyleChangingAllowed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::BarlineSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::BarlineSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBarlineSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::BarlineSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::BarlineSettingsModel::isRepeatStyleChangingAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
