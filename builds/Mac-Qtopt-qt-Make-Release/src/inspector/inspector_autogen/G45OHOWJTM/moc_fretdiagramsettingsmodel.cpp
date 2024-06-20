/****************************************************************************
** Meta object code from reading C++ file 'fretdiagramsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/notation/fretdiagrams/fretdiagramsettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fretdiagramsettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretDiagramSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretDiagramSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::FretDiagramSettingsModel",
    "fretDiagramChanged",
    "",
    "fretDiagram",
    "isBarreModeOnChanged",
    "isBarreModeOn",
    "isMultipleDotsModeOnChanged",
    "isMultipleDotsModeOn",
    "currentFretDotTypeChanged",
    "currentFretDotType",
    "areSettingsAvailableChanged",
    "areSettingsAvailable",
    "setIsBarreModeOn",
    "setIsMultipleDotsModeOn",
    "setCurrentFretDotType",
    "scale",
    "PropertyItem*",
    "stringsCount",
    "fretsCount",
    "fretNumber",
    "isNutVisible",
    "placement",
    "orientation"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEFretDiagramSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      12,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,   13 /* Public */,
       4,    1,   65,    2, 0x06,   15 /* Public */,
       6,    1,   68,    2, 0x06,   17 /* Public */,
       8,    1,   71,    2, 0x06,   19 /* Public */,
      10,    1,   74,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   77,    2, 0x0a,   23 /* Public */,
      13,    1,   80,    2, 0x0a,   25 /* Public */,
      14,    1,   83,    2, 0x0a,   27 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      17, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      18, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      19, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      20, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      21, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      22, 0x80000000 | 16, 0x00015409, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(1), 0,
       7, QMetaType::Bool, 0x00015103, uint(2), 0,
       9, QMetaType::Int, 0x00015103, uint(3), 0,
      11, QMetaType::Bool, 0x00015001, uint(4), 0,
       3, QMetaType::QVariant, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::FretDiagramSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretDiagramSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEFretDiagramSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretDiagramSettingsModelENDCLASS_t,
        // property 'scale'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'stringsCount'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'fretsCount'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'fretNumber'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isNutVisible'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'placement'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isBarreModeOn'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isMultipleDotsModeOn'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'currentFretDotType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'areSettingsAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fretDiagram'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FretDiagramSettingsModel, std::true_type>,
        // method 'fretDiagramChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'isBarreModeOnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isMultipleDotsModeOnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'currentFretDotTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'areSettingsAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsBarreModeOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsMultipleDotsModeOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCurrentFretDotType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void mu::inspector::FretDiagramSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FretDiagramSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fretDiagramChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 1: _t->isBarreModeOnChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->isMultipleDotsModeOnChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->currentFretDotTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->areSettingsAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setIsBarreModeOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setIsMultipleDotsModeOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setCurrentFretDotType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FretDiagramSettingsModel::*)(QVariant );
            if (_t _q_method = &FretDiagramSettingsModel::fretDiagramChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FretDiagramSettingsModel::*)(bool );
            if (_t _q_method = &FretDiagramSettingsModel::isBarreModeOnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FretDiagramSettingsModel::*)(bool );
            if (_t _q_method = &FretDiagramSettingsModel::isMultipleDotsModeOnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FretDiagramSettingsModel::*)(int );
            if (_t _q_method = &FretDiagramSettingsModel::currentFretDotTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FretDiagramSettingsModel::*)(bool );
            if (_t _q_method = &FretDiagramSettingsModel::areSettingsAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FretDiagramSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->scale(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->stringsCount(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->fretsCount(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->fretNumber(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->isNutVisible(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->placement(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->orientation(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isBarreModeOn(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isMultipleDotsModeOn(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->currentFretDotType(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->areSettingsAvailable(); break;
        case 11: *reinterpret_cast< QVariant*>(_v) = _t->fretDiagram(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FretDiagramSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setIsBarreModeOn(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setIsMultipleDotsModeOn(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setCurrentFretDotType(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::FretDiagramSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::FretDiagramSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretDiagramSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::FretDiagramSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::FretDiagramSettingsModel::fretDiagramChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::FretDiagramSettingsModel::isBarreModeOnChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::FretDiagramSettingsModel::isMultipleDotsModeOnChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::FretDiagramSettingsModel::currentFretDotTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::inspector::FretDiagramSettingsModel::areSettingsAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
