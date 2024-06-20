/****************************************************************************
** Meta object code from reading C++ file 'playbacktoolbarmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/playback/view/playbacktoolbarmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playbacktoolbarmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEPlaybackToolBarModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEPlaybackToolBarModelENDCLASS = QtMocHelpers::stringData(
    "mu::playback::PlaybackToolBarModel",
    "isToolbarFloatingChanged",
    "",
    "floating",
    "isPlayAllowedChanged",
    "maxPlayTimeChanged",
    "playPositionChanged",
    "tempoChanged",
    "setIsToolbarFloating",
    "setPlayPosition",
    "position",
    "setPlayTime",
    "time",
    "setMeasureNumber",
    "measureNumber",
    "setBeatNumber",
    "beatNumber",
    "setTempoMultiplier",
    "multiplier",
    "load",
    "isToolbarFloating",
    "isPlayAllowed",
    "maxPlayTime",
    "playTime",
    "playPosition",
    "maxMeasureNumber",
    "maxBeatNumber",
    "tempo",
    "tempoMultiplier"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEplaybackSCOPEPlaybackToolBarModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      11,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,   12 /* Public */,
       4,    0,   89,    2, 0x06,   14 /* Public */,
       5,    0,   90,    2, 0x06,   15 /* Public */,
       6,    0,   91,    2, 0x06,   16 /* Public */,
       7,    0,   92,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   93,    2, 0x0a,   18 /* Public */,
       9,    1,   96,    2, 0x0a,   20 /* Public */,
      11,    1,   99,    2, 0x0a,   22 /* Public */,
      13,    1,  102,    2, 0x0a,   24 /* Public */,
      15,    1,  105,    2, 0x0a,   26 /* Public */,
      17,    1,  108,    2, 0x0a,   28 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      19,    0,  111,    2, 0x02,   30 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QDateTime,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QReal,   18,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00015103, uint(0), 0,
      21, QMetaType::Bool, 0x00015001, uint(1), 0,
      22, QMetaType::QDateTime, 0x00015001, uint(2), 0,
      23, QMetaType::QDateTime, 0x00015103, uint(3), 0,
      24, QMetaType::QReal, 0x00015103, uint(3), 0,
      14, QMetaType::Int, 0x00015103, uint(3), 0,
      25, QMetaType::Int, 0x00015001, uint(3), 0,
      16, QMetaType::Int, 0x00015103, uint(3), 0,
      26, QMetaType::Int, 0x00015001, uint(3), 0,
      27, QMetaType::QVariant, 0x00015001, uint(4), 0,
      28, QMetaType::QReal, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::playback::PlaybackToolBarModel::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::AbstractMenuModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEPlaybackToolBarModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEplaybackSCOPEPlaybackToolBarModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEPlaybackToolBarModelENDCLASS_t,
        // property 'isToolbarFloating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isPlayAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'maxPlayTime'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'playTime'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'playPosition'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'measureNumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxMeasureNumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'beatNumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxBeatNumber'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tempo'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'tempoMultiplier'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaybackToolBarModel, std::true_type>,
        // method 'isToolbarFloatingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isPlayAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxPlayTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tempoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIsToolbarFloating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPlayPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setPlayTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'setMeasureNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setBeatNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTempoMultiplier'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::playback::PlaybackToolBarModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaybackToolBarModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isToolbarFloatingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->isPlayAllowedChanged(); break;
        case 2: _t->maxPlayTimeChanged(); break;
        case 3: _t->playPositionChanged(); break;
        case 4: _t->tempoChanged(); break;
        case 5: _t->setIsToolbarFloating((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setPlayPosition((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: _t->setPlayTime((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 8: _t->setMeasureNumber((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setBeatNumber((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setTempoMultiplier((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 11: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaybackToolBarModel::*)(bool );
            if (_t _q_method = &PlaybackToolBarModel::isToolbarFloatingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (_t _q_method = &PlaybackToolBarModel::isPlayAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (_t _q_method = &PlaybackToolBarModel::maxPlayTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (_t _q_method = &PlaybackToolBarModel::playPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (_t _q_method = &PlaybackToolBarModel::tempoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlaybackToolBarModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isToolbarFloating(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPlayAllowed(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->maxPlayTime(); break;
        case 3: *reinterpret_cast< QDateTime*>(_v) = _t->playTime(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->playPosition(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->measureNumber(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->maxMeasureNumber(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->beatNumber(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->maxBeatNumber(); break;
        case 9: *reinterpret_cast< QVariant*>(_v) = _t->tempo(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->tempoMultiplier(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlaybackToolBarModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsToolbarFloating(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPlayTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 4: _t->setPlayPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setMeasureNumber(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setBeatNumber(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setTempoMultiplier(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::playback::PlaybackToolBarModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::PlaybackToolBarModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEPlaybackToolBarModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return muse::uicomponents::AbstractMenuModel::qt_metacast(_clname);
}

int mu::playback::PlaybackToolBarModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::AbstractMenuModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void mu::playback::PlaybackToolBarModel::isToolbarFloatingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::playback::PlaybackToolBarModel::isPlayAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::playback::PlaybackToolBarModel::maxPlayTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::playback::PlaybackToolBarModel::playPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::playback::PlaybackToolBarModel::tempoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
