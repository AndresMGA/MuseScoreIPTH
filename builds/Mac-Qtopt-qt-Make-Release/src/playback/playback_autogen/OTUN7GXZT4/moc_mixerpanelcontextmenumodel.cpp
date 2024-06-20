/****************************************************************************
** Meta object code from reading C++ file 'mixerpanelcontextmenumodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/playback/view/mixerpanelcontextmenumodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mixerpanelcontextmenumodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerPanelContextMenuModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerPanelContextMenuModelENDCLASS = QtMocHelpers::stringData(
    "mu::playback::MixerPanelContextMenuModel",
    "labelsSectionVisibleChanged",
    "",
    "soundSectionVisibleChanged",
    "audioFxSectionVisibleChanged",
    "auxSendsSectionVisibleChanged",
    "balanceSectionVisibleChanged",
    "volumeSectionVisibleChanged",
    "faderSectionVisibleChanged",
    "muteAndSoloSectionVisibleChanged",
    "titleSectionVisibleChanged",
    "load",
    "labelsSectionVisible",
    "soundSectionVisible",
    "audioFxSectionVisible",
    "auxSendsSectionVisible",
    "balanceSectionVisible",
    "volumeSectionVisible",
    "faderSectionVisible",
    "muteAndSoloSectionVisible",
    "titleSectionVisible"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEplaybackSCOPEMixerPanelContextMenuModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,   10 /* Public */,
       3,    0,   75,    2, 0x06,   11 /* Public */,
       4,    0,   76,    2, 0x06,   12 /* Public */,
       5,    0,   77,    2, 0x06,   13 /* Public */,
       6,    0,   78,    2, 0x06,   14 /* Public */,
       7,    0,   79,    2, 0x06,   15 /* Public */,
       8,    0,   80,    2, 0x06,   16 /* Public */,
       9,    0,   81,    2, 0x06,   17 /* Public */,
      10,    0,   82,    2, 0x06,   18 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   83,    2, 0x02,   19 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00015001, uint(0), 0,
      13, QMetaType::Bool, 0x00015001, uint(1), 0,
      14, QMetaType::Bool, 0x00015001, uint(2), 0,
      15, QMetaType::Bool, 0x00015001, uint(3), 0,
      16, QMetaType::Bool, 0x00015001, uint(4), 0,
      17, QMetaType::Bool, 0x00015001, uint(5), 0,
      18, QMetaType::Bool, 0x00015001, uint(6), 0,
      19, QMetaType::Bool, 0x00015001, uint(7), 0,
      20, QMetaType::Bool, 0x00015001, uint(8), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::playback::MixerPanelContextMenuModel::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::AbstractMenuModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerPanelContextMenuModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEplaybackSCOPEMixerPanelContextMenuModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerPanelContextMenuModelENDCLASS_t,
        // property 'labelsSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'soundSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'audioFxSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'auxSendsSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'balanceSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'volumeSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'faderSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'muteAndSoloSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'titleSectionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MixerPanelContextMenuModel, std::true_type>,
        // method 'labelsSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'soundSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'audioFxSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'auxSendsSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'balanceSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'volumeSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'faderSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'muteAndSoloSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'titleSectionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::playback::MixerPanelContextMenuModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerPanelContextMenuModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->labelsSectionVisibleChanged(); break;
        case 1: _t->soundSectionVisibleChanged(); break;
        case 2: _t->audioFxSectionVisibleChanged(); break;
        case 3: _t->auxSendsSectionVisibleChanged(); break;
        case 4: _t->balanceSectionVisibleChanged(); break;
        case 5: _t->volumeSectionVisibleChanged(); break;
        case 6: _t->faderSectionVisibleChanged(); break;
        case 7: _t->muteAndSoloSectionVisibleChanged(); break;
        case 8: _t->titleSectionVisibleChanged(); break;
        case 9: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::labelsSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::soundSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::audioFxSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::auxSendsSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::balanceSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::volumeSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::faderSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::muteAndSoloSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MixerPanelContextMenuModel::*)();
            if (_t _q_method = &MixerPanelContextMenuModel::titleSectionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MixerPanelContextMenuModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->labelsSectionVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->soundSectionVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->audioFxSectionVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->auxSendsSectionVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->balanceSectionVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->volumeSectionVisible(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->faderSectionVisible(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->muteAndSoloSectionVisible(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->titleSectionVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *mu::playback::MixerPanelContextMenuModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::MixerPanelContextMenuModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEMixerPanelContextMenuModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::actions::Actionable"))
        return static_cast< muse::actions::Actionable*>(this);
    return muse::uicomponents::AbstractMenuModel::qt_metacast(_clname);
}

int mu::playback::MixerPanelContextMenuModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::AbstractMenuModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void mu::playback::MixerPanelContextMenuModel::labelsSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::playback::MixerPanelContextMenuModel::soundSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::playback::MixerPanelContextMenuModel::audioFxSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::playback::MixerPanelContextMenuModel::auxSendsSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::playback::MixerPanelContextMenuModel::balanceSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::playback::MixerPanelContextMenuModel::volumeSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::playback::MixerPanelContextMenuModel::faderSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::playback::MixerPanelContextMenuModel::muteAndSoloSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void mu::playback::MixerPanelContextMenuModel::titleSectionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
