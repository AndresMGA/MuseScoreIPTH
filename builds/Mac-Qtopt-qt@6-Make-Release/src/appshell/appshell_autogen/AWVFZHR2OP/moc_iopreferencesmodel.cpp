/****************************************************************************
** Meta object code from reading C++ file 'iopreferencesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/preferences/iopreferencesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iopreferencesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__IOPreferencesModel_t {
    QByteArrayData data[25];
    char stringdata0[466];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__IOPreferencesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__IOPreferencesModel_t qt_meta_stringdata_mu__appshell__IOPreferencesModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::appshell::IOPreferencesModel"
QT_MOC_LITERAL(1, 33, 27), // "currentAudioApiIndexChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 5), // "index"
QT_MOC_LITERAL(4, 68, 24), // "midiInputDeviceIdChanged"
QT_MOC_LITERAL(5, 93, 25), // "midiOutputDeviceIdChanged"
QT_MOC_LITERAL(6, 119, 23), // "midiInputDevicesChanged"
QT_MOC_LITERAL(7, 143, 24), // "midiOutputDevicesChanged"
QT_MOC_LITERAL(8, 168, 22), // "useMIDI20OutputChanged"
QT_MOC_LITERAL(9, 191, 23), // "setCurrentAudioApiIndex"
QT_MOC_LITERAL(10, 215, 18), // "setUseMIDI20Output"
QT_MOC_LITERAL(11, 234, 3), // "use"
QT_MOC_LITERAL(12, 238, 4), // "init"
QT_MOC_LITERAL(13, 243, 19), // "inputDeviceSelected"
QT_MOC_LITERAL(14, 263, 8), // "deviceId"
QT_MOC_LITERAL(15, 272, 20), // "outputDeviceSelected"
QT_MOC_LITERAL(16, 293, 12), // "audioApiList"
QT_MOC_LITERAL(17, 306, 26), // "restartAudioAndMidiDevices"
QT_MOC_LITERAL(18, 333, 20), // "currentAudioApiIndex"
QT_MOC_LITERAL(19, 354, 16), // "midiInputDevices"
QT_MOC_LITERAL(20, 371, 17), // "midiInputDeviceId"
QT_MOC_LITERAL(21, 389, 17), // "midiOutputDevices"
QT_MOC_LITERAL(22, 407, 18), // "midiOutputDeviceId"
QT_MOC_LITERAL(23, 426, 23), // "isMIDI20OutputSupported"
QT_MOC_LITERAL(24, 450, 15) // "useMIDI20Output"

    },
    "mu::appshell::IOPreferencesModel\0"
    "currentAudioApiIndexChanged\0\0index\0"
    "midiInputDeviceIdChanged\0"
    "midiOutputDeviceIdChanged\0"
    "midiInputDevicesChanged\0"
    "midiOutputDevicesChanged\0"
    "useMIDI20OutputChanged\0setCurrentAudioApiIndex\0"
    "setUseMIDI20Output\0use\0init\0"
    "inputDeviceSelected\0deviceId\0"
    "outputDeviceSelected\0audioApiList\0"
    "restartAudioAndMidiDevices\0"
    "currentAudioApiIndex\0midiInputDevices\0"
    "midiInputDeviceId\0midiOutputDevices\0"
    "midiOutputDeviceId\0isMIDI20OutputSupported\0"
    "useMIDI20Output"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__IOPreferencesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    0,   82,    2, 0x06 /* Public */,
       5,    0,   83,    2, 0x06 /* Public */,
       6,    0,   84,    2, 0x06 /* Public */,
       7,    0,   85,    2, 0x06 /* Public */,
       8,    0,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   87,    2, 0x0a /* Public */,
      10,    1,   90,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   93,    2, 0x02 /* Public */,
      13,    1,   94,    2, 0x02 /* Public */,
      15,    1,   97,    2, 0x02 /* Public */,
      16,    0,  100,    2, 0x02 /* Public */,
      17,    0,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::QStringList,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::QVariantList, 0x00495001,
      20, QMetaType::QString, 0x00495001,
      21, QMetaType::QVariantList, 0x00495001,
      22, QMetaType::QString, 0x00495001,
      23, QMetaType::Bool, 0x00095401,
      24, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       1,
       4,
       2,
       0,
       5,

       0        // eod
};

void mu::appshell::IOPreferencesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IOPreferencesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentAudioApiIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->midiInputDeviceIdChanged(); break;
        case 2: _t->midiOutputDeviceIdChanged(); break;
        case 3: _t->midiInputDevicesChanged(); break;
        case 4: _t->midiOutputDevicesChanged(); break;
        case 5: _t->useMIDI20OutputChanged(); break;
        case 6: _t->setCurrentAudioApiIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setUseMIDI20Output((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->init(); break;
        case 9: _t->inputDeviceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->outputDeviceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: { QStringList _r = _t->audioApiList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->restartAudioAndMidiDevices(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IOPreferencesModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IOPreferencesModel::currentAudioApiIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IOPreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IOPreferencesModel::midiInputDeviceIdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IOPreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IOPreferencesModel::midiOutputDeviceIdChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IOPreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IOPreferencesModel::midiInputDevicesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IOPreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IOPreferencesModel::midiOutputDevicesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (IOPreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IOPreferencesModel::useMIDI20OutputChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<IOPreferencesModel *>(_o);
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
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<IOPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentAudioApiIndex(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setUseMIDI20Output(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::IOPreferencesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__IOPreferencesModel.data,
    qt_meta_data_mu__appshell__IOPreferencesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::IOPreferencesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::IOPreferencesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__IOPreferencesModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::IOPreferencesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::appshell::IOPreferencesModel::currentAudioApiIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::appshell::IOPreferencesModel::midiInputDeviceIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::IOPreferencesModel::midiOutputDeviceIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::IOPreferencesModel::midiInputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::appshell::IOPreferencesModel::midiOutputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::appshell::IOPreferencesModel::useMIDI20OutputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
