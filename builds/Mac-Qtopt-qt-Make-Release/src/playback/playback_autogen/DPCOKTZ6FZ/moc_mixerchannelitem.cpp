/****************************************************************************
** Meta object code from reading C++ file 'mixerchannelitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/playback/view/internal/mixerchannelitem.h"
#include "ui/view/navigationpanel.h"
#include "ui/view/navigationsection.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mixerchannelitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerChannelItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerChannelItemENDCLASS = QtMocHelpers::stringData(
    "mu::playback::MixerChannelItem",
    "titleChanged",
    "",
    "title",
    "leftChannelPressureChanged",
    "leftChannelPressure",
    "rightChannelPressureChanged",
    "rightChannelPressure",
    "volumeLevelChanged",
    "volumeLevel",
    "balanceChanged",
    "balance",
    "soloChanged",
    "mutedChanged",
    "forceMuteChanged",
    "panelChanged",
    "muse::ui::NavigationPanel*",
    "panel",
    "inputParamsChanged",
    "muse::audio::AudioInputParams",
    "params",
    "outputParamsChanged",
    "muse::audio::AudioOutputParams",
    "soloMuteStateChanged",
    "notation::INotationSoloMuteState::SoloMuteState",
    "state",
    "inputResourceItemChanged",
    "outputResourceItemListChanged",
    "auxSendItemListChanged",
    "setTitle",
    "setLeftChannelPressure",
    "setRightChannelPressure",
    "setVolumeLevel",
    "setBalance",
    "setSolo",
    "solo",
    "setMuted",
    "mute",
    "type",
    "Type",
    "outputOnly",
    "inputResourceItem",
    "InputResourceItem*",
    "outputResourceItemList",
    "QList<OutputResourceItem*>",
    "auxSendItemList",
    "QList<AuxSendItem*>",
    "muted",
    "forceMute",
    "Unknown",
    "PrimaryInstrument",
    "SecondaryInstrument",
    "Metronome",
    "Aux",
    "Master"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEplaybackSCOPEMixerChannelItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
      14,  200, // properties
       1,  270, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,   16 /* Public */,
       4,    1,  149,    2, 0x06,   18 /* Public */,
       6,    1,  152,    2, 0x06,   20 /* Public */,
       8,    1,  155,    2, 0x06,   22 /* Public */,
      10,    1,  158,    2, 0x06,   24 /* Public */,
      12,    0,  161,    2, 0x06,   26 /* Public */,
      13,    0,  162,    2, 0x06,   27 /* Public */,
      14,    0,  163,    2, 0x06,   28 /* Public */,
      15,    1,  164,    2, 0x06,   29 /* Public */,
      18,    1,  167,    2, 0x06,   31 /* Public */,
      21,    1,  170,    2, 0x06,   33 /* Public */,
      23,    1,  173,    2, 0x06,   35 /* Public */,
      26,    0,  176,    2, 0x06,   37 /* Public */,
      27,    0,  177,    2, 0x06,   38 /* Public */,
      28,    0,  178,    2, 0x06,   39 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      29,    1,  179,    2, 0x0a,   40 /* Public */,
      30,    1,  182,    2, 0x0a,   42 /* Public */,
      31,    1,  185,    2, 0x0a,   44 /* Public */,
      32,    1,  188,    2, 0x0a,   46 /* Public */,
      33,    1,  191,    2, 0x0a,   48 /* Public */,
      34,    1,  194,    2, 0x0a,   50 /* Public */,
      36,    1,  197,    2, 0x0a,   52 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   37,

 // properties: name, type, flags
      38, 0x80000000 | 39, 0x00015409, uint(-1), 0,
      40, QMetaType::Bool, 0x00015401, uint(-1), 0,
       3, QMetaType::QString, 0x00015001, uint(0), 0,
      41, 0x80000000 | 42, 0x00015009, uint(12), 0,
      43, 0x80000000 | 44, 0x00015009, uint(13), 0,
      45, 0x80000000 | 46, 0x00015009, uint(14), 0,
       5, QMetaType::Float, 0x00015001, uint(1), 0,
       7, QMetaType::Float, 0x00015001, uint(2), 0,
       9, QMetaType::Float, 0x00015103, uint(3), 0,
      11, QMetaType::Int, 0x00015103, uint(4), 0,
      35, QMetaType::Bool, 0x00015103, uint(5), 0,
      47, QMetaType::Bool, 0x00015103, uint(6), 0,
      48, QMetaType::Bool, 0x00015001, uint(7), 0,
      17, 0x80000000 | 16, 0x00015009, uint(8), 0,

 // enums: name, alias, flags, count, data
      39,   39, 0x2,    6,  275,

 // enum data: key, value
      49, uint(mu::playback::MixerChannelItem::Type::Unknown),
      50, uint(mu::playback::MixerChannelItem::Type::PrimaryInstrument),
      51, uint(mu::playback::MixerChannelItem::Type::SecondaryInstrument),
      52, uint(mu::playback::MixerChannelItem::Type::Metronome),
      53, uint(mu::playback::MixerChannelItem::Type::Aux),
      54, uint(mu::playback::MixerChannelItem::Type::Master),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::playback::MixerChannelItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerChannelItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEplaybackSCOPEMixerChannelItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerChannelItemENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Type, std::true_type>,
        // property 'outputOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'inputResourceItem'
        QtPrivate::TypeAndForceComplete<InputResourceItem*, std::true_type>,
        // property 'outputResourceItemList'
        QtPrivate::TypeAndForceComplete<QList<OutputResourceItem*>, std::true_type>,
        // property 'auxSendItemList'
        QtPrivate::TypeAndForceComplete<QList<AuxSendItem*>, std::true_type>,
        // property 'leftChannelPressure'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'rightChannelPressure'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'volumeLevel'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'balance'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'solo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'muted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'forceMute'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'panel'
        QtPrivate::TypeAndForceComplete<muse::ui::NavigationPanel*, std::true_type>,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<MixerChannelItem::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MixerChannelItem, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'leftChannelPressureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'rightChannelPressureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'volumeLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'balanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'soloChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mutedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forceMuteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'panelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::ui::NavigationPanel *, std::false_type>,
        // method 'inputParamsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const muse::audio::AudioInputParams &, std::false_type>,
        // method 'outputParamsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const muse::audio::AudioOutputParams &, std::false_type>,
        // method 'soloMuteStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const notation::INotationSoloMuteState::SoloMuteState &, std::false_type>,
        // method 'inputResourceItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outputResourceItemListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'auxSendItemListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setLeftChannelPressure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setRightChannelPressure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setVolumeLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setBalance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSolo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::playback::MixerChannelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerChannelItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->leftChannelPressureChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->rightChannelPressureChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->volumeLevelChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 4: _t->balanceChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->soloChanged(); break;
        case 6: _t->mutedChanged(); break;
        case 7: _t->forceMuteChanged(); break;
        case 8: _t->panelChanged((*reinterpret_cast< std::add_pointer_t<muse::ui::NavigationPanel*>>(_a[1]))); break;
        case 9: _t->inputParamsChanged((*reinterpret_cast< std::add_pointer_t<muse::audio::AudioInputParams>>(_a[1]))); break;
        case 10: _t->outputParamsChanged((*reinterpret_cast< std::add_pointer_t<muse::audio::AudioOutputParams>>(_a[1]))); break;
        case 11: _t->soloMuteStateChanged((*reinterpret_cast< std::add_pointer_t<notation::INotationSoloMuteState::SoloMuteState>>(_a[1]))); break;
        case 12: _t->inputResourceItemChanged(); break;
        case 13: _t->outputResourceItemListChanged(); break;
        case 14: _t->auxSendItemListChanged(); break;
        case 15: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->setLeftChannelPressure((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 17: _t->setRightChannelPressure((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 18: _t->setVolumeLevel((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 19: _t->setBalance((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->setSolo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->setMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< muse::ui::NavigationPanel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerChannelItem::*)(QString );
            if (_t _q_method = &MixerChannelItem::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(float );
            if (_t _q_method = &MixerChannelItem::leftChannelPressureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(float );
            if (_t _q_method = &MixerChannelItem::rightChannelPressureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(float );
            if (_t _q_method = &MixerChannelItem::volumeLevelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(int );
            if (_t _q_method = &MixerChannelItem::balanceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (_t _q_method = &MixerChannelItem::soloChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (_t _q_method = &MixerChannelItem::mutedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (_t _q_method = &MixerChannelItem::forceMuteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(muse::ui::NavigationPanel * );
            if (_t _q_method = &MixerChannelItem::panelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(const muse::audio::AudioInputParams & );
            if (_t _q_method = &MixerChannelItem::inputParamsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(const muse::audio::AudioOutputParams & );
            if (_t _q_method = &MixerChannelItem::outputParamsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)(const notation::INotationSoloMuteState::SoloMuteState & );
            if (_t _q_method = &MixerChannelItem::soloMuteStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (_t _q_method = &MixerChannelItem::inputResourceItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (_t _q_method = &MixerChannelItem::outputResourceItemListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MixerChannelItem::*)();
            if (_t _q_method = &MixerChannelItem::auxSendItemListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
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
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< muse::ui::NavigationPanel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
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
        case 10: *reinterpret_cast< bool*>(_v) = _t->solo(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->muted(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->forceMute(); break;
        case 13: *reinterpret_cast< muse::ui::NavigationPanel**>(_v) = _t->panel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MixerChannelItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setVolumeLevel(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setBalance(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setSolo(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::playback::MixerChannelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::MixerChannelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerChannelItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::playback::MixerChannelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
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
void mu::playback::MixerChannelItem::soloChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::playback::MixerChannelItem::mutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::playback::MixerChannelItem::forceMuteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void mu::playback::MixerChannelItem::panelChanged(muse::ui::NavigationPanel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void mu::playback::MixerChannelItem::inputParamsChanged(const muse::audio::AudioInputParams & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void mu::playback::MixerChannelItem::outputParamsChanged(const muse::audio::AudioOutputParams & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void mu::playback::MixerChannelItem::soloMuteStateChanged(const notation::INotationSoloMuteState::SoloMuteState & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void mu::playback::MixerChannelItem::inputResourceItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void mu::playback::MixerChannelItem::outputResourceItemListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void mu::playback::MixerChannelItem::auxSendItemListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
