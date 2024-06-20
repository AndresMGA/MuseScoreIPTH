/****************************************************************************
** Meta object code from reading C++ file 'playbackpreferencesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/preferences/playbackpreferencesmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playbackpreferencesmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEPlaybackPreferencesModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEPlaybackPreferencesModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::PlaybackPreferencesModel",
    "currentAudioApiIndexChanged",
    "",
    "index",
    "midiInputDeviceIdChanged",
    "midiOutputDeviceIdChanged",
    "midiInputDevicesChanged",
    "midiOutputDevicesChanged",
    "useMIDI20OutputChanged",
    "muteHiddenInstrumentsChanged",
    "mute",
    "setCurrentAudioApiIndex",
    "setUseMIDI20Output",
    "use",
    "setMuteHiddenInstruments",
    "init",
    "inputDeviceSelected",
    "deviceId",
    "outputDeviceSelected",
    "audioApiList",
    "restartAudioAndMidiDevices",
    "currentAudioApiIndex",
    "midiInputDevices",
    "midiInputDeviceId",
    "midiOutputDevices",
    "midiOutputDeviceId",
    "isMIDI20OutputSupported",
    "useMIDI20Output",
    "muteHiddenInstruments"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPEPlaybackPreferencesModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       8,  133, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    9 /* Public */,
       4,    0,  107,    2, 0x06,   11 /* Public */,
       5,    0,  108,    2, 0x06,   12 /* Public */,
       6,    0,  109,    2, 0x06,   13 /* Public */,
       7,    0,  110,    2, 0x06,   14 /* Public */,
       8,    0,  111,    2, 0x06,   15 /* Public */,
       9,    1,  112,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  115,    2, 0x0a,   18 /* Public */,
      12,    1,  118,    2, 0x0a,   20 /* Public */,
      14,    1,  121,    2, 0x0a,   22 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  124,    2, 0x02,   24 /* Public */,
      16,    1,  125,    2, 0x02,   25 /* Public */,
      18,    1,  128,    2, 0x02,   27 /* Public */,
      19,    0,  131,    2, 0x102,   29 /* Public | MethodIsConst  */,
      20,    0,  132,    2, 0x02,   30 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   10,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::QStringList,
    QMetaType::Void,

 // properties: name, type, flags
      21, QMetaType::Int, 0x00015103, uint(0), 0,
      22, QMetaType::QVariantList, 0x00015001, uint(3), 0,
      23, QMetaType::QString, 0x00015001, uint(1), 0,
      24, QMetaType::QVariantList, 0x00015001, uint(4), 0,
      25, QMetaType::QString, 0x00015001, uint(2), 0,
      26, QMetaType::Bool, 0x00015401, uint(-1), 0,
      27, QMetaType::Bool, 0x00015103, uint(5), 0,
      28, QMetaType::Bool, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::appshell::PlaybackPreferencesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEPlaybackPreferencesModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPEPlaybackPreferencesModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEPlaybackPreferencesModelENDCLASS_t,
        // property 'currentAudioApiIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'midiInputDevices'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'midiInputDeviceId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'midiOutputDevices'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'midiOutputDeviceId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isMIDI20OutputSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'useMIDI20Output'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'muteHiddenInstruments'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaybackPreferencesModel, std::true_type>,
        // method 'currentAudioApiIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'midiInputDeviceIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'midiOutputDeviceIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'midiInputDevicesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'midiOutputDevicesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'useMIDI20OutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'muteHiddenInstrumentsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCurrentAudioApiIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setUseMIDI20Output'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMuteHiddenInstruments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inputDeviceSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'outputDeviceSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'audioApiList'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'restartAudioAndMidiDevices'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::appshell::PlaybackPreferencesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaybackPreferencesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentAudioApiIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->midiInputDeviceIdChanged(); break;
        case 2: _t->midiOutputDeviceIdChanged(); break;
        case 3: _t->midiInputDevicesChanged(); break;
        case 4: _t->midiOutputDevicesChanged(); break;
        case 5: _t->useMIDI20OutputChanged(); break;
        case 6: _t->muteHiddenInstrumentsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setCurrentAudioApiIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setUseMIDI20Output((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setMuteHiddenInstruments((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->init(); break;
        case 11: _t->inputDeviceSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->outputDeviceSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: { QStringList _r = _t->audioApiList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->restartAudioAndMidiDevices(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaybackPreferencesModel::*)(int );
            if (_t _q_method = &PlaybackPreferencesModel::currentAudioApiIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaybackPreferencesModel::*)();
            if (_t _q_method = &PlaybackPreferencesModel::midiInputDeviceIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaybackPreferencesModel::*)();
            if (_t _q_method = &PlaybackPreferencesModel::midiOutputDeviceIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaybackPreferencesModel::*)();
            if (_t _q_method = &PlaybackPreferencesModel::midiInputDevicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaybackPreferencesModel::*)();
            if (_t _q_method = &PlaybackPreferencesModel::midiOutputDevicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlaybackPreferencesModel::*)();
            if (_t _q_method = &PlaybackPreferencesModel::useMIDI20OutputChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlaybackPreferencesModel::*)(bool );
            if (_t _q_method = &PlaybackPreferencesModel::muteHiddenInstrumentsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlaybackPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentAudioApiIndex(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->midiInputDevices(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->midiInputDeviceId(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->midiOutputDevices(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->midiOutputDeviceId(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMIDI20OutputSupported(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->useMIDI20Output(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->muteHiddenInstruments(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlaybackPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentAudioApiIndex(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setUseMIDI20Output(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setMuteHiddenInstruments(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::appshell::PlaybackPreferencesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::PlaybackPreferencesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEPlaybackPreferencesModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::PlaybackPreferencesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mu::appshell::PlaybackPreferencesModel::currentAudioApiIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::appshell::PlaybackPreferencesModel::midiInputDeviceIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::PlaybackPreferencesModel::midiOutputDeviceIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::PlaybackPreferencesModel::midiInputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::appshell::PlaybackPreferencesModel::midiOutputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::appshell::PlaybackPreferencesModel::useMIDI20OutputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::appshell::PlaybackPreferencesModel::muteHiddenInstrumentsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
