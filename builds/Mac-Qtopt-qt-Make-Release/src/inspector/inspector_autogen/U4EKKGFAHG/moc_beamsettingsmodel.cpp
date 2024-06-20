/****************************************************************************
** Meta object code from reading C++ file 'beamsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/notation/notes/beams/beamsettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beamsettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::BeamSettingsModel",
    "isBeamHeightLockedChanged",
    "",
    "isBeamHeightLocked",
    "featheringModeChanged",
    "BeamTypes::FeatheringMode",
    "featheringMode",
    "isCrossStaffMoveAvailableChanged",
    "isCrossStaffMoveAvailable",
    "setIsBeamHeightLocked",
    "setFeatheringMode",
    "setIsCrossStaffMoveAvailable",
    "beamModesModel",
    "featheringHeightLeft",
    "PropertyItem*",
    "featheringHeightRight",
    "mu::inspector::BeamTypes::FeatheringMode",
    "isFeatheringHeightChangingAllowed",
    "beamHeightLeft",
    "beamHeightRight",
    "isBeamHidden",
    "forceHorizontal",
    "customPositioned",
    "stemDirection",
    "crossStaffMove"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      14,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,   15 /* Public */,
       4,    1,   53,    2, 0x06,   17 /* Public */,
       7,    1,   56,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   59,    2, 0x0a,   21 /* Public */,
      10,    1,   62,    2, 0x0a,   23 /* Public */,
      11,    1,   65,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
      12, QMetaType::QObjectStar, 0x00015401, uint(-1), 0,
      13, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      15, 0x80000000 | 14, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 16, 0x0001510b, uint(1), 0,
      17, QMetaType::Bool, 0x00015001, uint(1), 0,
      18, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      19, 0x80000000 | 14, 0x00015409, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
      20, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      21, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      22, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      23, 0x80000000 | 14, 0x00015409, uint(-1), 0,
      24, 0x80000000 | 14, 0x00015409, uint(-1), 0,
       8, QMetaType::Bool, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS[] = {
    QMetaObject::SuperData::link<mu::inspector::BeamTypes::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject mu::inspector::BeamSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS_t,
        // property 'beamModesModel'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'featheringHeightLeft'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'featheringHeightRight'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'featheringMode'
        QtPrivate::TypeAndForceComplete<mu::inspector::BeamTypes::FeatheringMode, std::true_type>,
        // property 'isFeatheringHeightChangingAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'beamHeightLeft'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'beamHeightRight'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isBeamHeightLocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isBeamHidden'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'forceHorizontal'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'customPositioned'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'stemDirection'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'crossStaffMove'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isCrossStaffMoveAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BeamSettingsModel, std::true_type>,
        // method 'isBeamHeightLockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'featheringModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BeamTypes::FeatheringMode, std::false_type>,
        // method 'isCrossStaffMoveAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsBeamHeightLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFeatheringMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BeamTypes::FeatheringMode, std::false_type>,
        // method 'setIsCrossStaffMoveAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::inspector::BeamSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BeamSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isBeamHeightLockedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->featheringModeChanged((*reinterpret_cast< std::add_pointer_t<BeamTypes::FeatheringMode>>(_a[1]))); break;
        case 2: _t->isCrossStaffMoveAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setIsBeamHeightLocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setFeatheringMode((*reinterpret_cast< std::add_pointer_t<BeamTypes::FeatheringMode>>(_a[1]))); break;
        case 5: _t->setIsCrossStaffMoveAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BeamSettingsModel::*)(bool );
            if (_t _q_method = &BeamSettingsModel::isBeamHeightLockedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BeamSettingsModel::*)(BeamTypes::FeatheringMode );
            if (_t _q_method = &BeamSettingsModel::featheringModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BeamSettingsModel::*)(bool );
            if (_t _q_method = &BeamSettingsModel::isCrossStaffMoveAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 6:
        case 5:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BeamSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->beamModesModel(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->featheringHeightLeft(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->featheringHeightRight(); break;
        case 3: *reinterpret_cast< mu::inspector::BeamTypes::FeatheringMode*>(_v) = _t->featheringMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isFeatheringHeightChangingAllowed(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->beamHeightLeft(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->beamHeightRight(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isBeamHeightLocked(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->isBeamHidden(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->forceHorizontal(); break;
        case 10: *reinterpret_cast< PropertyItem**>(_v) = _t->customPositioned(); break;
        case 11: *reinterpret_cast< PropertyItem**>(_v) = _t->stemDirection(); break;
        case 12: *reinterpret_cast< PropertyItem**>(_v) = _t->crossStaffMove(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isCrossStaffMoveAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BeamSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setFeatheringMode(*reinterpret_cast< mu::inspector::BeamTypes::FeatheringMode*>(_v)); break;
        case 7: _t->setIsBeamHeightLocked(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setIsCrossStaffMoveAvailable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::BeamSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::BeamSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::BeamSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
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
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::BeamSettingsModel::isBeamHeightLockedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::BeamSettingsModel::featheringModeChanged(BeamTypes::FeatheringMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::BeamSettingsModel::isCrossStaffMoveAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
