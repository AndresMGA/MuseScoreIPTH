/****************************************************************************
** Meta object code from reading C++ file 'cursor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/engraving/api/v1/cursor.h"
#include "engraving/api/v1/elements.h"
#include "engraving/api/v1/score.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cursor.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPECursorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPECursorENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Cursor",
    "rewind",
    "",
    "RewindMode",
    "mode",
    "rewindToTick",
    "tick",
    "next",
    "nextMeasure",
    "prev",
    "add",
    "apiv1::EngravingItem*",
    "addNote",
    "pitch",
    "addToChord",
    "addRest",
    "addTuplet",
    "apiv1::FractionWrapper*",
    "ratio",
    "duration",
    "setDuration",
    "z",
    "n",
    "track",
    "staffIdx",
    "voice",
    "filter",
    "time",
    "tempo",
    "keySignature",
    "score",
    "apiv1::Score*",
    "element",
    "segment",
    "apiv1::Segment*",
    "measure",
    "apiv1::Measure*",
    "stringNumber",
    "inputStateMode",
    "InputStateMode",
    "SCORE_START",
    "SELECTION_START",
    "SELECTION_END",
    "INPUT_STATE_INDEPENDENT",
    "INPUT_STATE_SYNC_WITH_SCORE"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPECursorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      14,  111, // properties
       2,  181, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x02,   17 /* Public */,
       5,    1,   83,    2, 0x02,   19 /* Public */,
       7,    0,   86,    2, 0x02,   21 /* Public */,
       8,    0,   87,    2, 0x02,   22 /* Public */,
       9,    0,   88,    2, 0x02,   23 /* Public */,
      10,    1,   89,    2, 0x02,   24 /* Public */,
      12,    2,   92,    2, 0x02,   26 /* Public */,
      12,    1,   97,    2, 0x22,   29 /* Public | MethodCloned */,
      15,    0,  100,    2, 0x02,   31 /* Public */,
      16,    2,  101,    2, 0x02,   32 /* Public */,
      20,    2,  106,    2, 0x02,   35 /* Public */,

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
      23, QMetaType::Int, 0x00015103, uint(-1), 0,
      24, QMetaType::Int, 0x00015103, uint(-1), 0,
      25, QMetaType::Int, 0x00015103, uint(-1), 0,
      26, QMetaType::Int, 0x00015103, uint(-1), 0,
       6, QMetaType::Int, 0x00015001, uint(-1), 0,
      27, QMetaType::Double, 0x00015001, uint(-1), 0,
      28, QMetaType::QReal, 0x00015001, uint(-1), 0,
      29, QMetaType::Int, 0x00015001, uint(-1), 0,
      30, 0x80000000 | 31, 0x0001510b, uint(-1), 0,
      32, 0x80000000 | 11, 0x00015009, uint(-1), 0,
      33, 0x80000000 | 34, 0x00015009, uint(-1), 0,
      35, 0x80000000 | 36, 0x00015009, uint(-1), 0,
      37, QMetaType::Int, 0x00015003, uint(-1), 0,
      38, 0x80000000 | 39, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    3,  191,
      39,   39, 0x0,    2,  197,

 // enum data: key, value
      40, uint(mu::engraving::apiv1::Cursor::SCORE_START),
      41, uint(mu::engraving::apiv1::Cursor::SELECTION_START),
      42, uint(mu::engraving::apiv1::Cursor::SELECTION_END),
      43, uint(mu::engraving::apiv1::Cursor::INPUT_STATE_INDEPENDENT),
      44, uint(mu::engraving::apiv1::Cursor::INPUT_STATE_SYNC_WITH_SCORE),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Cursor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPECursorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPECursorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPECursorENDCLASS_t,
        // property 'track'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'staffIdx'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'voice'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'filter'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tick'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'time'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'tempo'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'keySignature'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'score'
        QtPrivate::TypeAndForceComplete<apiv1::Score*, std::true_type>,
        // property 'element'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem*, std::true_type>,
        // property 'segment'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'measure'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'stringNumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'inputStateMode'
        QtPrivate::TypeAndForceComplete<InputStateMode, std::true_type>,
        // enum 'RewindMode'
        QtPrivate::TypeAndForceComplete<Cursor::RewindMode, std::true_type>,
        // enum 'InputStateMode'
        QtPrivate::TypeAndForceComplete<Cursor::InputStateMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Cursor, std::true_type>,
        // method 'rewind'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RewindMode, std::false_type>,
        // method 'rewindToTick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'next'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'nextMeasure'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'prev'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        // method 'addNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addRest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addTuplet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::FractionWrapper *, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::FractionWrapper *, std::false_type>,
        // method 'setDuration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Cursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cursor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rewind((*reinterpret_cast< std::add_pointer_t<RewindMode>>(_a[1]))); break;
        case 1: _t->rewindToTick((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: { bool _r = _t->next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->nextMeasure();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->prev();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->add((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1]))); break;
        case 6: _t->addNote((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->addNote((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->addRest(); break;
        case 9: _t->addTuplet((*reinterpret_cast< std::add_pointer_t<apiv1::FractionWrapper*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<apiv1::FractionWrapper*>>(_a[2]))); break;
        case 10: _t->setDuration((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
        case 8: *reinterpret_cast< apiv1::Score**>(_v) = _t->score(); break;
        case 9: *reinterpret_cast< apiv1::EngravingItem**>(_v) = _t->element(); break;
        case 10: *reinterpret_cast< apiv1::Segment**>(_v) = _t->qmlSegment(); break;
        case 11: *reinterpret_cast< apiv1::Measure**>(_v) = _t->measure(); break;
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
        case 8: _t->setScore(*reinterpret_cast< apiv1::Score**>(_v)); break;
        case 12: _t->setInputStateString(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setInputStateMode(*reinterpret_cast< InputStateMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::Cursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Cursor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPECursorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::engraving::apiv1::Cursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
