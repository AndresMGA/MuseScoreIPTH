/****************************************************************************
** Meta object code from reading C++ file 'playbacktoolbarmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/playback/view/playbacktoolbarmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playbacktoolbarmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__playback__PlaybackToolBarModel_t {
    QByteArrayData data[29];
    char stringdata0[416];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__playback__PlaybackToolBarModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__playback__PlaybackToolBarModel_t qt_meta_stringdata_mu__playback__PlaybackToolBarModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mu::playback::PlaybackToolBar..."
QT_MOC_LITERAL(1, 35, 24), // "isToolbarFloatingChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 8), // "floating"
QT_MOC_LITERAL(4, 70, 20), // "isPlayAllowedChanged"
QT_MOC_LITERAL(5, 91, 18), // "maxPlayTimeChanged"
QT_MOC_LITERAL(6, 110, 19), // "playPositionChanged"
QT_MOC_LITERAL(7, 130, 12), // "tempoChanged"
QT_MOC_LITERAL(8, 143, 20), // "setIsToolbarFloating"
QT_MOC_LITERAL(9, 164, 15), // "setPlayPosition"
QT_MOC_LITERAL(10, 180, 8), // "position"
QT_MOC_LITERAL(11, 189, 11), // "setPlayTime"
QT_MOC_LITERAL(12, 201, 4), // "time"
QT_MOC_LITERAL(13, 206, 16), // "setMeasureNumber"
QT_MOC_LITERAL(14, 223, 13), // "measureNumber"
QT_MOC_LITERAL(15, 237, 13), // "setBeatNumber"
QT_MOC_LITERAL(16, 251, 10), // "beatNumber"
QT_MOC_LITERAL(17, 262, 18), // "setTempoMultiplier"
QT_MOC_LITERAL(18, 281, 10), // "multiplier"
QT_MOC_LITERAL(19, 292, 4), // "load"
QT_MOC_LITERAL(20, 297, 17), // "isToolbarFloating"
QT_MOC_LITERAL(21, 315, 13), // "isPlayAllowed"
QT_MOC_LITERAL(22, 329, 11), // "maxPlayTime"
QT_MOC_LITERAL(23, 341, 8), // "playTime"
QT_MOC_LITERAL(24, 350, 12), // "playPosition"
QT_MOC_LITERAL(25, 363, 16), // "maxMeasureNumber"
QT_MOC_LITERAL(26, 380, 13), // "maxBeatNumber"
QT_MOC_LITERAL(27, 394, 5), // "tempo"
QT_MOC_LITERAL(28, 400, 15) // "tempoMultiplier"

    },
    "mu::playback::PlaybackToolBarModel\0"
    "isToolbarFloatingChanged\0\0floating\0"
    "isPlayAllowedChanged\0maxPlayTimeChanged\0"
    "playPositionChanged\0tempoChanged\0"
    "setIsToolbarFloating\0setPlayPosition\0"
    "position\0setPlayTime\0time\0setMeasureNumber\0"
    "measureNumber\0setBeatNumber\0beatNumber\0"
    "setTempoMultiplier\0multiplier\0load\0"
    "isToolbarFloating\0isPlayAllowed\0"
    "maxPlayTime\0playTime\0playPosition\0"
    "maxMeasureNumber\0maxBeatNumber\0tempo\0"
    "tempoMultiplier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__playback__PlaybackToolBarModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      11,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,
       7,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      11,    1,   87,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x0a /* Public */,
      17,    1,   96,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    0,   99,    2, 0x02 /* Public */,

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
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::Bool, 0x00495001,
      22, QMetaType::QDateTime, 0x00495001,
      23, QMetaType::QDateTime, 0x00495103,
      24, QMetaType::QReal, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      25, QMetaType::Int, 0x00495001,
      16, QMetaType::Int, 0x00495103,
      26, QMetaType::Int, 0x00495001,
      27, QMetaType::QVariant, 0x00495001,
      28, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       3,
       3,
       3,
       3,
       3,
       4,
       4,

       0        // eod
};

void mu::playback::PlaybackToolBarModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaybackToolBarModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isToolbarFloatingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isPlayAllowedChanged(); break;
        case 2: _t->maxPlayTimeChanged(); break;
        case 3: _t->playPositionChanged(); break;
        case 4: _t->tempoChanged(); break;
        case 5: _t->setIsToolbarFloating((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setPlayPosition((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setPlayTime((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 8: _t->setMeasureNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setBeatNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setTempoMultiplier((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaybackToolBarModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackToolBarModel::isToolbarFloatingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackToolBarModel::isPlayAllowedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackToolBarModel::maxPlayTimeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackToolBarModel::playPositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaybackToolBarModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackToolBarModel::tempoChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::playback::PlaybackToolBarModel::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::AbstractMenuModel::staticMetaObject>(),
    qt_meta_stringdata_mu__playback__PlaybackToolBarModel.data,
    qt_meta_data_mu__playback__PlaybackToolBarModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::playback::PlaybackToolBarModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::PlaybackToolBarModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__playback__PlaybackToolBarModel.stringdata0))
        return static_cast<void*>(this);
    return uicomponents::AbstractMenuModel::qt_metacast(_clname);
}

int mu::playback::PlaybackToolBarModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::AbstractMenuModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
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
QT_END_MOC_NAMESPACE
