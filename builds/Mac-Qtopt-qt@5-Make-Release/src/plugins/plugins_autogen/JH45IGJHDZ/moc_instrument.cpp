/****************************************************************************
** Meta object code from reading C++ file 'instrument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/plugins/api/instrument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__plugins__api__Channel_t {
    QByteArrayData data[9];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__Channel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__Channel_t qt_meta_stringdata_mu__plugins__api__Channel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mu::plugins::api::Channel"
QT_MOC_LITERAL(1, 26, 4), // "name"
QT_MOC_LITERAL(2, 31, 6), // "volume"
QT_MOC_LITERAL(3, 38, 3), // "pan"
QT_MOC_LITERAL(4, 42, 6), // "chorus"
QT_MOC_LITERAL(5, 49, 6), // "reverb"
QT_MOC_LITERAL(6, 56, 4), // "mute"
QT_MOC_LITERAL(7, 61, 11), // "midiProgram"
QT_MOC_LITERAL(8, 73, 8) // "midiBank"

    },
    "mu::plugins::api::Channel\0name\0volume\0"
    "pan\0chorus\0reverb\0mute\0midiProgram\0"
    "midiBank"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__Channel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095001,
       2, QMetaType::Int, 0x00095103,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,

       0        // eod
};

void mu::plugins::api::Channel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Channel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->pan(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->chorus(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->reverb(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->mute(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->midiProgram(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->midiBank(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Channel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setPan(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setChorus(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setReverb(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMute(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setMidiProgram(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setMidiBank(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::Channel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__Channel.data,
    qt_meta_data_mu__plugins__api__Channel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::Channel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::Channel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__Channel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::plugins::api::Channel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_mu__plugins__api__StringData_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__StringData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__StringData_t qt_meta_stringdata_mu__plugins__api__StringData = {
    {
QT_MOC_LITERAL(0, 0, 28), // "mu::plugins::api::StringData"
QT_MOC_LITERAL(1, 29, 7), // "strings"
QT_MOC_LITERAL(2, 37, 5) // "frets"

    },
    "mu::plugins::api::StringData\0strings\0"
    "frets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__StringData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVariantList, 0x00095001,
       2, QMetaType::Int, 0x00095001,

       0        // eod
};

void mu::plugins::api::StringData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StringData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->stringList(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->frets(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::StringData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__StringData.data,
    qt_meta_data_mu__plugins__api__StringData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::StringData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::StringData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__StringData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::plugins::api::StringData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_mu__plugins__api__Instrument_t {
    QByteArrayData data[12];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__Instrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__Instrument_t qt_meta_stringdata_mu__plugins__api__Instrument = {
    {
QT_MOC_LITERAL(0, 0, 28), // "mu::plugins::api::Instrument"
QT_MOC_LITERAL(1, 29, 2), // "is"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 29), // "mu::plugins::api::Instrument*"
QT_MOC_LITERAL(4, 63, 5), // "other"
QT_MOC_LITERAL(5, 69, 12), // "instrumentId"
QT_MOC_LITERAL(6, 82, 8), // "longName"
QT_MOC_LITERAL(7, 91, 9), // "shortName"
QT_MOC_LITERAL(8, 101, 10), // "stringData"
QT_MOC_LITERAL(9, 112, 29), // "mu::plugins::api::StringData*"
QT_MOC_LITERAL(10, 142, 8), // "channels"
QT_MOC_LITERAL(11, 151, 43) // "QQmlListProperty<mu::plugins:..."

    },
    "mu::plugins::api::Instrument\0is\0\0"
    "mu::plugins::api::Instrument*\0other\0"
    "instrumentId\0longName\0shortName\0"
    "stringData\0mu::plugins::api::StringData*\0"
    "channels\0QQmlListProperty<mu::plugins::api::Channel>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__Instrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::QString, 0x00095001,
       7, QMetaType::QString, 0x00095001,
       8, 0x80000000 | 9, 0x00095009,
      10, 0x80000000 | 11, 0x00095009,

       0        // eod
};

void mu::plugins::api::Instrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Instrument *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->is((*reinterpret_cast< mu::plugins::api::Instrument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::plugins::api::Instrument* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::plugins::api::StringData* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Instrument *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->instrumentId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->longName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->shortName(); break;
        case 3: *reinterpret_cast< mu::plugins::api::StringData**>(_v) = _t->stringData(); break;
        case 4: *reinterpret_cast< QQmlListProperty<mu::plugins::api::Channel>*>(_v) = _t->channels(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::Instrument::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__Instrument.data,
    qt_meta_data_mu__plugins__api__Instrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::Instrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::Instrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__Instrument.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::plugins::api::Instrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
