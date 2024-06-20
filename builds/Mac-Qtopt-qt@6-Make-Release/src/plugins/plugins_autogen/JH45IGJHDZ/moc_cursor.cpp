/****************************************************************************
** Meta object code from reading C++ file 'cursor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/plugins/api/cursor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cursor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__plugins__api__Cursor_t {
    QByteArrayData data[45];
    char stringdata0[533];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__Cursor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__Cursor_t qt_meta_stringdata_mu__plugins__api__Cursor = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::plugins::api::Cursor"
QT_MOC_LITERAL(1, 25, 6), // "rewind"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "RewindMode"
QT_MOC_LITERAL(4, 44, 4), // "mode"
QT_MOC_LITERAL(5, 49, 12), // "rewindToTick"
QT_MOC_LITERAL(6, 62, 4), // "tick"
QT_MOC_LITERAL(7, 67, 4), // "next"
QT_MOC_LITERAL(8, 72, 11), // "nextMeasure"
QT_MOC_LITERAL(9, 84, 4), // "prev"
QT_MOC_LITERAL(10, 89, 3), // "add"
QT_MOC_LITERAL(11, 93, 32), // "mu::plugins::api::EngravingItem*"
QT_MOC_LITERAL(12, 126, 7), // "addNote"
QT_MOC_LITERAL(13, 134, 5), // "pitch"
QT_MOC_LITERAL(14, 140, 10), // "addToChord"
QT_MOC_LITERAL(15, 151, 7), // "addRest"
QT_MOC_LITERAL(16, 159, 9), // "addTuplet"
QT_MOC_LITERAL(17, 169, 34), // "mu::plugins::api::FractionWra..."
QT_MOC_LITERAL(18, 204, 5), // "ratio"
QT_MOC_LITERAL(19, 210, 8), // "duration"
QT_MOC_LITERAL(20, 219, 11), // "setDuration"
QT_MOC_LITERAL(21, 231, 1), // "z"
QT_MOC_LITERAL(22, 233, 1), // "n"
QT_MOC_LITERAL(23, 235, 5), // "track"
QT_MOC_LITERAL(24, 241, 8), // "staffIdx"
QT_MOC_LITERAL(25, 250, 5), // "voice"
QT_MOC_LITERAL(26, 256, 6), // "filter"
QT_MOC_LITERAL(27, 263, 4), // "time"
QT_MOC_LITERAL(28, 268, 5), // "tempo"
QT_MOC_LITERAL(29, 274, 12), // "keySignature"
QT_MOC_LITERAL(30, 287, 5), // "score"
QT_MOC_LITERAL(31, 293, 24), // "mu::plugins::api::Score*"
QT_MOC_LITERAL(32, 318, 7), // "element"
QT_MOC_LITERAL(33, 326, 7), // "segment"
QT_MOC_LITERAL(34, 334, 26), // "mu::plugins::api::Segment*"
QT_MOC_LITERAL(35, 361, 7), // "measure"
QT_MOC_LITERAL(36, 369, 26), // "mu::plugins::api::Measure*"
QT_MOC_LITERAL(37, 396, 12), // "stringNumber"
QT_MOC_LITERAL(38, 409, 14), // "inputStateMode"
QT_MOC_LITERAL(39, 424, 14), // "InputStateMode"
QT_MOC_LITERAL(40, 439, 11), // "SCORE_START"
QT_MOC_LITERAL(41, 451, 15), // "SELECTION_START"
QT_MOC_LITERAL(42, 467, 13), // "SELECTION_END"
QT_MOC_LITERAL(43, 481, 23), // "INPUT_STATE_INDEPENDENT"
QT_MOC_LITERAL(44, 505, 27) // "INPUT_STATE_SYNC_WITH_SCORE"

    },
    "mu::plugins::api::Cursor\0rewind\0\0"
    "RewindMode\0mode\0rewindToTick\0tick\0"
    "next\0nextMeasure\0prev\0add\0"
    "mu::plugins::api::EngravingItem*\0"
    "addNote\0pitch\0addToChord\0addRest\0"
    "addTuplet\0mu::plugins::api::FractionWrapper*\0"
    "ratio\0duration\0setDuration\0z\0n\0track\0"
    "staffIdx\0voice\0filter\0time\0tempo\0"
    "keySignature\0score\0mu::plugins::api::Score*\0"
    "element\0segment\0mu::plugins::api::Segment*\0"
    "measure\0mu::plugins::api::Measure*\0"
    "stringNumber\0inputStateMode\0InputStateMode\0"
    "SCORE_START\0SELECTION_START\0SELECTION_END\0"
    "INPUT_STATE_INDEPENDENT\0"
    "INPUT_STATE_SYNC_WITH_SCORE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__Cursor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      14,  100, // properties
       2,  142, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x02 /* Public */,
       5,    1,   72,    2, 0x02 /* Public */,
       7,    0,   75,    2, 0x02 /* Public */,
       8,    0,   76,    2, 0x02 /* Public */,
       9,    0,   77,    2, 0x02 /* Public */,
      10,    1,   78,    2, 0x02 /* Public */,
      12,    2,   81,    2, 0x02 /* Public */,
      12,    1,   86,    2, 0x22 /* Public | MethodCloned */,
      15,    0,   89,    2, 0x02 /* Public */,
      16,    2,   90,    2, 0x02 /* Public */,
      20,    2,   95,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   13,   14,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,

 // properties: name, type, flags
      23, QMetaType::Int, 0x00095103,
      24, QMetaType::Int, 0x00095103,
      25, QMetaType::Int, 0x00095103,
      26, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095001,
      27, QMetaType::Double, 0x00095001,
      28, QMetaType::QReal, 0x00095001,
      29, QMetaType::Int, 0x00095001,
      30, 0x80000000 | 31, 0x0009510b,
      32, 0x80000000 | 11, 0x00095009,
      33, 0x80000000 | 34, 0x00095009,
      35, 0x80000000 | 36, 0x00095009,
      37, QMetaType::Int, 0x00095003,
      38, 0x80000000 | 39, 0x0009510b,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,  152,
      39,   39, 0x0,    2,  158,

 // enum data: key, value
      40, uint(mu::plugins::api::Cursor::SCORE_START),
      41, uint(mu::plugins::api::Cursor::SELECTION_START),
      42, uint(mu::plugins::api::Cursor::SELECTION_END),
      43, uint(mu::plugins::api::Cursor::INPUT_STATE_INDEPENDENT),
      44, uint(mu::plugins::api::Cursor::INPUT_STATE_SYNC_WITH_SCORE),

       0        // eod
};

void mu::plugins::api::Cursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cursor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rewind((*reinterpret_cast< RewindMode(*)>(_a[1]))); break;
        case 1: _t->rewindToTick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { bool _r = _t->next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->nextMeasure();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->prev();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->add((*reinterpret_cast< mu::plugins::api::EngravingItem*(*)>(_a[1]))); break;
        case 6: _t->addNote((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->addNote((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->addRest(); break;
        case 9: _t->addTuplet((*reinterpret_cast< mu::plugins::api::FractionWrapper*(*)>(_a[1])),(*reinterpret_cast< mu::plugins::api::FractionWrapper*(*)>(_a[2]))); break;
        case 10: _t->setDuration((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::plugins::api::FractionWrapper* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Cursor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->track(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->staffIdx(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->voice(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->filter(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->tick(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->time(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->tempo(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->qmlKeySignature(); break;
        case 8: *reinterpret_cast< mu::plugins::api::Score**>(_v) = _t->score(); break;
        case 9: *reinterpret_cast< mu::plugins::api::EngravingItem**>(_v) = _t->element(); break;
        case 10: *reinterpret_cast< mu::plugins::api::Segment**>(_v) = _t->qmlSegment(); break;
        case 11: *reinterpret_cast< mu::plugins::api::Measure**>(_v) = _t->measure(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->inputStateString(); break;
        case 13: *reinterpret_cast< InputStateMode*>(_v) = _t->inputStateMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Cursor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTrack(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setStaffIdx(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setVoice(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setFilter(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setScore(*reinterpret_cast< mu::plugins::api::Score**>(_v)); break;
        case 12: _t->setInputStateString(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setInputStateMode(*reinterpret_cast< InputStateMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::Cursor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__Cursor.data,
    qt_meta_data_mu__plugins__api__Cursor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::Cursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::Cursor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__Cursor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::plugins::api::Cursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
