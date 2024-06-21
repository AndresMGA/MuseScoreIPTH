/****************************************************************************
** Meta object code from reading C++ file 'part.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/plugins/api/part.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'part.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__plugins__api__Part_t {
    QByteArrayData data[21];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__Part_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__Part_t qt_meta_stringdata_mu__plugins__api__Part = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::plugins::api::Part"
QT_MOC_LITERAL(1, 23, 16), // "instrumentAtTick"
QT_MOC_LITERAL(2, 40, 29), // "mu::plugins::api::Instrument*"
QT_MOC_LITERAL(3, 70, 0), // ""
QT_MOC_LITERAL(4, 71, 4), // "tick"
QT_MOC_LITERAL(5, 76, 10), // "startTrack"
QT_MOC_LITERAL(6, 87, 8), // "endTrack"
QT_MOC_LITERAL(7, 96, 12), // "instrumentId"
QT_MOC_LITERAL(8, 109, 12), // "harmonyCount"
QT_MOC_LITERAL(9, 122, 12), // "hasDrumStaff"
QT_MOC_LITERAL(10, 135, 15), // "hasPitchedStaff"
QT_MOC_LITERAL(11, 151, 11), // "hasTabStaff"
QT_MOC_LITERAL(12, 163, 10), // "lyricCount"
QT_MOC_LITERAL(13, 174, 11), // "midiChannel"
QT_MOC_LITERAL(14, 186, 11), // "midiProgram"
QT_MOC_LITERAL(15, 198, 8), // "longName"
QT_MOC_LITERAL(16, 207, 9), // "shortName"
QT_MOC_LITERAL(17, 217, 8), // "partName"
QT_MOC_LITERAL(18, 226, 4), // "show"
QT_MOC_LITERAL(19, 231, 11), // "instruments"
QT_MOC_LITERAL(20, 243, 46) // "QQmlListProperty<mu::plugins:..."

    },
    "mu::plugins::api::Part\0instrumentAtTick\0"
    "mu::plugins::api::Instrument*\0\0tick\0"
    "startTrack\0endTrack\0instrumentId\0"
    "harmonyCount\0hasDrumStaff\0hasPitchedStaff\0"
    "hasTabStaff\0lyricCount\0midiChannel\0"
    "midiProgram\0longName\0shortName\0partName\0"
    "show\0instruments\0"
    "QQmlListProperty<mu::plugins::api::Instrument>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__Part[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      15,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int,    4,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00095001,
       6, QMetaType::Int, 0x00095001,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::Int, 0x00095001,
       9, QMetaType::Bool, 0x00095001,
      10, QMetaType::Bool, 0x00095001,
      11, QMetaType::Bool, 0x00095001,
      12, QMetaType::Int, 0x00095001,
      13, QMetaType::Int, 0x00095001,
      14, QMetaType::Int, 0x00095001,
      15, QMetaType::QString, 0x00095001,
      16, QMetaType::QString, 0x00095001,
      17, QMetaType::QString, 0x00095001,
      18, QMetaType::Bool, 0x00095103,
      19, 0x80000000 | 20, 0x00095009,

       0        // eod
};

void mu::plugins::api::Part::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Part *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { mu::plugins::api::Instrument* _r = _t->instrumentAtTick((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< mu::plugins::api::Instrument**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Part *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->startTrack(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->endTrack(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->instrumentId(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->harmonyCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasDrumStaff(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasPitchedStaff(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasTabStaff(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->lyricCount(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->midiChannel(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->midiProgram(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->longName(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->shortName(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->partName(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->show(); break;
        case 14: *reinterpret_cast< QQmlListProperty<mu::plugins::api::Instrument>*>(_v) = _t->instruments(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Part *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 13: _t->setShow(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::Part::staticMetaObject = { {
    QMetaObject::SuperData::link<mu::plugins::api::ScoreElement::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__Part.data,
    qt_meta_data_mu__plugins__api__Part,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::Part::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::Part::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__Part.stringdata0))
        return static_cast<void*>(this);
    return mu::plugins::api::ScoreElement::qt_metacast(_clname);
}

int mu::plugins::api::Part::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mu::plugins::api::ScoreElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
