/****************************************************************************
** Meta object code from reading C++ file 'soundflagsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/playback/view/internal/soundflag/soundflagsettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundflagsettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPESoundFlagSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPESoundFlagSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::playback::SoundFlagSettingsModel",
    "initedChanged",
    "",
    "iconRectChanged",
    "rect",
    "titleChanged",
    "availablePresetsChanged",
    "selectedPresetCodesChanged",
    "availablePlayingTechniquesChanged",
    "selectedPlayingTechniqueCodeChanged",
    "contextMenuModelChanged",
    "init",
    "togglePreset",
    "presetCode",
    "togglePlayingTechnique",
    "playingTechniqueCode",
    "handleContextMenuItem",
    "menuId",
    "inited",
    "title",
    "iconRect",
    "availablePresets",
    "selectedPresetCodes",
    "availablePlayingTechniques",
    "selectedPlayingTechniqueCode",
    "contextMenuModel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEplaybackSCOPESoundFlagSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       8,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    9 /* Public */,
       3,    1,   87,    2, 0x06,   10 /* Public */,
       5,    0,   90,    2, 0x06,   12 /* Public */,
       6,    0,   91,    2, 0x06,   13 /* Public */,
       7,    0,   92,    2, 0x06,   14 /* Public */,
       8,    0,   93,    2, 0x06,   15 /* Public */,
       9,    0,   94,    2, 0x06,   16 /* Public */,
      10,    0,   95,    2, 0x06,   17 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   96,    2, 0x02,   18 /* Public */,
      12,    1,   97,    2, 0x02,   19 /* Public */,
      14,    1,  100,    2, 0x02,   21 /* Public */,
      16,    1,  103,    2, 0x02,   23 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00015801, uint(0), 0,
      19, QMetaType::QString, 0x00015903, uint(2), 0,
      20, QMetaType::QRect, 0x00015801, uint(1), 0,
      21, QMetaType::QVariantList, 0x00015801, uint(3), 0,
      22, QMetaType::QStringList, 0x00015801, uint(4), 0,
      23, QMetaType::QVariantList, 0x00015801, uint(5), 0,
      24, QMetaType::QString, 0x00015801, uint(6), 0,
      25, QMetaType::QVariantList, 0x00015801, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::playback::SoundFlagSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<notation::AbstractElementPopupModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPESoundFlagSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEplaybackSCOPESoundFlagSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPESoundFlagSettingsModelENDCLASS_t,
        // property 'inited'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'iconRect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'availablePresets'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'selectedPresetCodes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'availablePlayingTechniques'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'selectedPlayingTechniqueCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'contextMenuModel'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SoundFlagSettingsModel, std::true_type>,
        // method 'initedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconRectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'availablePresetsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedPresetCodesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'availablePlayingTechniquesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedPlayingTechniqueCodeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contextMenuModelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'togglePreset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'togglePlayingTechnique'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleContextMenuItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void mu::playback::SoundFlagSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SoundFlagSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initedChanged(); break;
        case 1: _t->iconRectChanged((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 2: _t->titleChanged(); break;
        case 3: _t->availablePresetsChanged(); break;
        case 4: _t->selectedPresetCodesChanged(); break;
        case 5: _t->availablePlayingTechniquesChanged(); break;
        case 6: _t->selectedPlayingTechniqueCodeChanged(); break;
        case 7: _t->contextMenuModelChanged(); break;
        case 8: _t->init(); break;
        case 9: _t->togglePreset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->togglePlayingTechnique((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->handleContextMenuItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SoundFlagSettingsModel::*)();
            if (_t _q_method = &SoundFlagSettingsModel::initedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SoundFlagSettingsModel::*)(const QRect & );
            if (_t _q_method = &SoundFlagSettingsModel::iconRectChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SoundFlagSettingsModel::*)();
            if (_t _q_method = &SoundFlagSettingsModel::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SoundFlagSettingsModel::*)();
            if (_t _q_method = &SoundFlagSettingsModel::availablePresetsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SoundFlagSettingsModel::*)();
            if (_t _q_method = &SoundFlagSettingsModel::selectedPresetCodesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SoundFlagSettingsModel::*)();
            if (_t _q_method = &SoundFlagSettingsModel::availablePlayingTechniquesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SoundFlagSettingsModel::*)();
            if (_t _q_method = &SoundFlagSettingsModel::selectedPlayingTechniqueCodeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SoundFlagSettingsModel::*)();
            if (_t _q_method = &SoundFlagSettingsModel::contextMenuModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SoundFlagSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->inited(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QRect*>(_v) = _t->iconRect(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->availablePresets(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->selectedPresetCodes(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->availablePlayingTechniques(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->selectedPlayingTechniqueCode(); break;
        case 7: *reinterpret_cast< QVariantList*>(_v) = _t->contextMenuModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SoundFlagSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::playback::SoundFlagSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::SoundFlagSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPESoundFlagSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return notation::AbstractElementPopupModel::qt_metacast(_clname);
}

int mu::playback::SoundFlagSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = notation::AbstractElementPopupModel::qt_metacall(_c, _id, _a);
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mu::playback::SoundFlagSettingsModel::initedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::playback::SoundFlagSettingsModel::iconRectChanged(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::playback::SoundFlagSettingsModel::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::playback::SoundFlagSettingsModel::availablePresetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::playback::SoundFlagSettingsModel::selectedPresetCodesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::playback::SoundFlagSettingsModel::availablePlayingTechniquesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::playback::SoundFlagSettingsModel::selectedPlayingTechniqueCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::playback::SoundFlagSettingsModel::contextMenuModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
