/****************************************************************************
** Meta object code from reading C++ file 'mixerchannelitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/playback/view/internal/mixerchannelitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mixerchannelitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__playback__MixerChannelItem_t {
    QByteArrayData data[54];
    char stringdata0[878];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__playback__MixerChannelItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__playback__MixerChannelItem_t qt_meta_stringdata_mu__playback__MixerChannelItem = {
    {
QT_MOC_LITERAL(0, 0, 30), // "mu::playback::MixerChannelItem"
QT_MOC_LITERAL(1, 31, 12), // "titleChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "title"
QT_MOC_LITERAL(4, 51, 26), // "leftChannelPressureChanged"
QT_MOC_LITERAL(5, 78, 19), // "leftChannelPressure"
QT_MOC_LITERAL(6, 98, 27), // "rightChannelPressureChanged"
QT_MOC_LITERAL(7, 126, 20), // "rightChannelPressure"
QT_MOC_LITERAL(8, 147, 18), // "volumeLevelChanged"
QT_MOC_LITERAL(9, 166, 11), // "volumeLevel"
QT_MOC_LITERAL(10, 178, 14), // "balanceChanged"
QT_MOC_LITERAL(11, 193, 7), // "balance"
QT_MOC_LITERAL(12, 201, 12), // "mutedChanged"
QT_MOC_LITERAL(13, 214, 11), // "soloChanged"
QT_MOC_LITERAL(14, 226, 12), // "panelChanged"
QT_MOC_LITERAL(15, 239, 20), // "ui::NavigationPanel*"
QT_MOC_LITERAL(16, 260, 5), // "panel"
QT_MOC_LITERAL(17, 266, 18), // "inputParamsChanged"
QT_MOC_LITERAL(18, 285, 23), // "audio::AudioInputParams"
QT_MOC_LITERAL(19, 309, 6), // "params"
QT_MOC_LITERAL(20, 316, 19), // "outputParamsChanged"
QT_MOC_LITERAL(21, 336, 24), // "audio::AudioOutputParams"
QT_MOC_LITERAL(22, 361, 20), // "soloMuteStateChanged"
QT_MOC_LITERAL(23, 382, 45), // "project::IProjectAudioSetting..."
QT_MOC_LITERAL(24, 428, 5), // "state"
QT_MOC_LITERAL(25, 434, 24), // "inputResourceItemChanged"
QT_MOC_LITERAL(26, 459, 29), // "outputResourceItemListChanged"
QT_MOC_LITERAL(27, 489, 22), // "auxSendItemListChanged"
QT_MOC_LITERAL(28, 512, 8), // "setTitle"
QT_MOC_LITERAL(29, 521, 22), // "setLeftChannelPressure"
QT_MOC_LITERAL(30, 544, 23), // "setRightChannelPressure"
QT_MOC_LITERAL(31, 568, 14), // "setVolumeLevel"
QT_MOC_LITERAL(32, 583, 10), // "setBalance"
QT_MOC_LITERAL(33, 594, 16), // "setMutedManually"
QT_MOC_LITERAL(34, 611, 7), // "isMuted"
QT_MOC_LITERAL(35, 619, 7), // "setSolo"
QT_MOC_LITERAL(36, 627, 4), // "solo"
QT_MOC_LITERAL(37, 632, 4), // "type"
QT_MOC_LITERAL(38, 637, 4), // "Type"
QT_MOC_LITERAL(39, 642, 10), // "outputOnly"
QT_MOC_LITERAL(40, 653, 17), // "inputResourceItem"
QT_MOC_LITERAL(41, 671, 18), // "InputResourceItem*"
QT_MOC_LITERAL(42, 690, 22), // "outputResourceItemList"
QT_MOC_LITERAL(43, 713, 26), // "QList<OutputResourceItem*>"
QT_MOC_LITERAL(44, 740, 15), // "auxSendItemList"
QT_MOC_LITERAL(45, 756, 19), // "QList<AuxSendItem*>"
QT_MOC_LITERAL(46, 776, 5), // "muted"
QT_MOC_LITERAL(47, 782, 13), // "mutedManually"
QT_MOC_LITERAL(48, 796, 24), // "mu::ui::NavigationPanel*"
QT_MOC_LITERAL(49, 821, 7), // "Unknown"
QT_MOC_LITERAL(50, 829, 17), // "PrimaryInstrument"
QT_MOC_LITERAL(51, 847, 19), // "SecondaryInstrument"
QT_MOC_LITERAL(52, 867, 3), // "Aux"
QT_MOC_LITERAL(53, 871, 6) // "Master"

    },
    "mu::playback::MixerChannelItem\0"
    "titleChanged\0\0title\0leftChannelPressureChanged\0"
    "leftChannelPressure\0rightChannelPressureChanged\0"
    "rightChannelPressure\0volumeLevelChanged\0"
    "volumeLevel\0balanceChanged\0balance\0"
    "mutedChanged\0soloChanged\0panelChanged\0"
    "ui::NavigationPanel*\0panel\0"
    "inputParamsChanged\0audio::AudioInputParams\0"
    "params\0outputParamsChanged\0"
    "audio::AudioOutputParams\0soloMuteStateChanged\0"
    "project::IProjectAudioSettings::SoloMuteState\0"
    "state\0inputResourceItemChanged\0"
    "outputResourceItemListChanged\0"
    "auxSendItemListChanged\0setTitle\0"
    "setLeftChannelPressure\0setRightChannelPressure\0"
    "setVolumeLevel\0setBalance\0setMutedManually\0"
    "isMuted\0setSolo\0solo\0type\0Type\0"
    "outputOnly\0inputResourceItem\0"
    "InputResourceItem*\0outputResourceItemList\0"
    "QList<OutputResourceItem*>\0auxSendItemList\0"
    "QList<AuxSendItem*>\0muted\0mutedManually\0"
    "mu::ui::NavigationPanel*\0Unknown\0"
    "PrimaryInstrument\0SecondaryInstrument\0"
    "Aux\0Master"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__playback__MixerChannelItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      14,  172, // properties
       1,  228, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       8,    1,  128,    2, 0x06 /* Public */,
      10,    1,  131,    2, 0x06 /* Public */,
      12,    0,  134,    2, 0x06 /* Public */,
      13,    0,  135,    2, 0x06 /* Public */,
      14,    1,  136,    2, 0x06 /* Public */,
      17,    1,  139,    2, 0x06 /* Public */,
      20,    1,  142,    2, 0x06 /* Public */,
      22,    1,  145,    2, 0x06 /* Public */,
      25,    0,  148,    2, 0x06 /* Public */,
      26,    0,  149,    2, 0x06 /* Public */,
      27,    0,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  151,    2, 0x0a /* Public */,
      29,    1,  154,    2, 0x0a /* Public */,
      30,    1,  157,    2, 0x0a /* Public */,
      31,    1,  160,    2, 0x0a /* Public */,
      32,    1,  163,    2, 0x0a /* Public */,
      33,    1,  166,    2, 0x0a /* Public */,
      35,    1,  169,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   19,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   36,

 // properties: name, type, flags
      37, 0x80000000 | 38, 0x00095409,
      39, QMetaType::Bool, 0x00095401,
       3, QMetaType::QString, 0x00495001,
      40, 0x80000000 | 41, 0x00495009,
      42, 0x80000000 | 43, 0x00495009,
      44, 0x80000000 | 45, 0x00495009,
       5, QMetaType::Float, 0x00495001,
       7, QMetaType::Float, 0x00495001,
       9, QMetaType::Float, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      46, QMetaType::Bool, 0x00495001,
      47, QMetaType::Bool, 0x00495103,
      36, QMetaType::Bool, 0x00495103,
      16, 0x80000000 | 48, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
      11,
      12,
      13,
       1,
       2,
       3,
       4,
       5,
       5,
       6,
       7,

 // enums: name, alias, flags, count, data
      38,   38, 0x2,    5,  233,

 // enum data: key, value
      49, uint(mu::playback::MixerChannelItem::Type::Unknown),
      50, uint(mu::playback::MixerChannelItem::Type::PrimaryInstrument),
      51, uint(mu::playback::MixerChannelItem::Type::SecondaryInstrument),
      52, uint(mu::playback::MixerChannelItem::Type::Aux),
      53, uint(mu::playback::MixerChannelItem::Type::Master),

       0        // eod
};

void mu::playback::MixerChannelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerChannelItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->leftChannelPressureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->rightChannelPressureChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->volumeLevelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->balanceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mutedChanged(); break;
        case 6: _t->soloChanged(); break;
        case 7: _t->panelChanged((*reinterpret_cast< ui::NavigationPanel*(*)>(_a[1]))); break;
        case 8: _t->inputParamsChanged((*reinterpret_cast< const audio::AudioInputParams(*)>(_a[1]))); break;
        case 9: _t->outputParamsChanged((*reinterpret_cast< const audio::AudioOutputParams(*)>(_a[1]))); break;
        case 10: _t->soloMuteStateChanged((*reinterpret_cast< const project::IProjectAudioSettings::SoloMuteState(*)>(_a[1]))); break;
        case 11: _t->inputResourceItemChanged(); break;
        case 12: _t->outputResourceItemListChanged(); break;
        case 13: _t->auxSendItemListChanged(); break;
        case 14: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->setLeftChannelPressure((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->setRightChannelPressure((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 17: _t->setVolumeLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setBalance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setMutedManually((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setSolo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerChannelItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::leftChannelPressureChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::rightChannelPressureChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::volumeLevelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::balanceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::mutedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::soloChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(ui::NavigationPanel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::panelChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(const audio::AudioInputParams & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::inputParamsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(const audio::AudioOutputParams & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::outputParamsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(const project::IProjectAudioSettings::SoloMuteState & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::soloMuteStateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::inputResourceItemChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::outputResourceItemListChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixerChannelItem::auxSendItemListChanged)) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputResourceItem* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<AuxSendItem*> >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<OutputResourceItem*> >(); break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::NavigationPanel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MixerChannelItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->outputOnly(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 3: *reinterpret_cast< InputResourceItem**>(_v) = _t->inputResourceItem(); break;
        case 4: *reinterpret_cast< QList<OutputResourceItem*>*>(_v) = _t->outputResourceItemList(); break;
        case 5: *reinterpret_cast< QList<AuxSendItem*>*>(_v) = _t->auxSendItemList(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->leftChannelPressure(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->rightChannelPressure(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->volumeLevel(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->balance(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->muted(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->mutedManually(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->solo(); break;
        case 13: *reinterpret_cast< mu::ui::NavigationPanel**>(_v) = _t->panel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MixerChannelItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setVolumeLevel(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setBalance(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setMutedManually(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setSolo(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::playback::MixerChannelItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__playback__MixerChannelItem.data,
    qt_meta_data_mu__playback__MixerChannelItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::playback::MixerChannelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::MixerChannelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__playback__MixerChannelItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::playback::MixerChannelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
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

// SIGNAL 0
void mu::playback::MixerChannelItem::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::playback::MixerChannelItem::leftChannelPressureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::playback::MixerChannelItem::rightChannelPressureChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::playback::MixerChannelItem::volumeLevelChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::playback::MixerChannelItem::balanceChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::playback::MixerChannelItem::mutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::playback::MixerChannelItem::soloChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::playback::MixerChannelItem::panelChanged(ui::NavigationPanel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void mu::playback::MixerChannelItem::inputParamsChanged(const audio::AudioInputParams & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void mu::playback::MixerChannelItem::outputParamsChanged(const audio::AudioOutputParams & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void mu::playback::MixerChannelItem::soloMuteStateChanged(const project::IProjectAudioSettings::SoloMuteState & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void mu::playback::MixerChannelItem::inputResourceItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void mu::playback::MixerChannelItem::outputResourceItemListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void mu::playback::MixerChannelItem::auxSendItemListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
