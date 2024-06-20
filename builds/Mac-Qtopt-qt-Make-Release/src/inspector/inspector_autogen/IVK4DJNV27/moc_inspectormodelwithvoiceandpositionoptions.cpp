/****************************************************************************
** Meta object code from reading C++ file 'inspectormodelwithvoiceandpositionoptions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/inspectormodelwithvoiceandpositionoptions.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspectormodelwithvoiceandpositionoptions.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorModelWithVoiceAndPositionOptionsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorModelWithVoiceAndPositionOptionsENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::InspectorModelWithVoiceAndPositionOptions",
    "isMultiStaffInstrumentChanged",
    "",
    "isMultiStaffInstrument",
    "isStaveCenteringAvailableChanged",
    "isStaveCenteringAvailable",
    "setIsMultiStaffInstrument",
    "v",
    "setIsStaveCenteringAvailable",
    "changeVoice",
    "voice",
    "voiceBasedPosition",
    "PropertyItem*",
    "applyToVoice",
    "centerBetweenStaves"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEInspectorModelWithVoiceAndPositionOptionsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    7 /* Public */,
       4,    1,   47,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   50,    2, 0x0a,   11 /* Public */,
       8,    1,   53,    2, 0x0a,   13 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   56,    2, 0x02,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 12, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 12, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 12, 0x00015409, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
       5, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::InspectorModelWithVoiceAndPositionOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorModelWithVoiceAndPositionOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEInspectorModelWithVoiceAndPositionOptionsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorModelWithVoiceAndPositionOptionsENDCLASS_t,
        // property 'voiceBasedPosition'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'applyToVoice'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'voice'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'centerBetweenStaves'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isMultiStaffInstrument'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isStaveCenteringAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InspectorModelWithVoiceAndPositionOptions, std::true_type>,
        // method 'isMultiStaffInstrumentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isStaveCenteringAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsMultiStaffInstrument'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsStaveCenteringAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'changeVoice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void mu::inspector::InspectorModelWithVoiceAndPositionOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InspectorModelWithVoiceAndPositionOptions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isMultiStaffInstrumentChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->isStaveCenteringAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setIsMultiStaffInstrument((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setIsStaveCenteringAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->changeVoice((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InspectorModelWithVoiceAndPositionOptions::*)(bool );
            if (_t _q_method = &InspectorModelWithVoiceAndPositionOptions::isMultiStaffInstrumentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InspectorModelWithVoiceAndPositionOptions::*)(bool );
            if (_t _q_method = &InspectorModelWithVoiceAndPositionOptions::isStaveCenteringAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InspectorModelWithVoiceAndPositionOptions *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->voiceBasedPosition(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->applyToVoice(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->voice(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->centerBetweenStaves(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isMultiStaffInstrument(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isStaveCenteringAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InspectorModelWithVoiceAndPositionOptions *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setIsMultiStaffInstrument(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setIsStaveCenteringAvailable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::InspectorModelWithVoiceAndPositionOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::InspectorModelWithVoiceAndPositionOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorModelWithVoiceAndPositionOptionsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::InspectorModelWithVoiceAndPositionOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::InspectorModelWithVoiceAndPositionOptions::isMultiStaffInstrumentChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::InspectorModelWithVoiceAndPositionOptions::isStaveCenteringAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
