/****************************************************************************
** Meta object code from reading C++ file 'midiportdevmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/midi/view/devtools/midiportdevmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'midiportdevmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEmidiSCOPEMidiPortDevModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEmidiSCOPEMidiPortDevModelENDCLASS = QtMocHelpers::stringData(
    "muse::midi::MidiPortDevModel",
    "outputDevicesChanged",
    "",
    "inputDevicesChanged",
    "inputEventsChanged",
    "outputDeviceAction",
    "deviceID",
    "action",
    "inputDeviceAction",
    "generateMIDI20",
    "outputDevices",
    "inputDevices",
    "inputEvents"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEmidiSCOPEMidiPortDevModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    4 /* Public */,
       3,    0,   51,    2, 0x06,    5 /* Public */,
       4,    0,   52,    2, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   53,    2, 0x02,    7 /* Public */,
       8,    2,   58,    2, 0x02,   10 /* Public */,
       9,    0,   63,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QVariantList, 0x00015001, uint(0), 0,
      11, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      12, QMetaType::QVariantList, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::midi::MidiPortDevModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEmidiSCOPEMidiPortDevModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEmidiSCOPEMidiPortDevModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEmidiSCOPEMidiPortDevModelENDCLASS_t,
        // property 'outputDevices'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'inputDevices'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'inputEvents'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MidiPortDevModel, std::true_type>,
        // method 'outputDevicesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputDevicesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputEventsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outputDeviceAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'inputDeviceAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'generateMIDI20'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::midi::MidiPortDevModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiPortDevModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->outputDevicesChanged(); break;
        case 1: _t->inputDevicesChanged(); break;
        case 2: _t->inputEventsChanged(); break;
        case 3: _t->outputDeviceAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->inputDeviceAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->generateMIDI20(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MidiPortDevModel::*)();
            if (_t _q_method = &MidiPortDevModel::outputDevicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MidiPortDevModel::*)();
            if (_t _q_method = &MidiPortDevModel::inputDevicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MidiPortDevModel::*)();
            if (_t _q_method = &MidiPortDevModel::inputEventsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MidiPortDevModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->outputDevices(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->inputDevices(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->inputEvents(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::midi::MidiPortDevModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::midi::MidiPortDevModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEmidiSCOPEMidiPortDevModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::midi::MidiPortDevModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void muse::midi::MidiPortDevModel::outputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::midi::MidiPortDevModel::inputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::midi::MidiPortDevModel::inputEventsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
