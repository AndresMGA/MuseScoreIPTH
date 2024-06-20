/****************************************************************************
** Meta object code from reading C++ file 'scoreappearancesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/score/scoreappearancesettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoreappearancesettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEScoreAppearanceSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEScoreAppearanceSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::ScoreAppearanceSettingsModel",
    "hideEmptyStavesChanged",
    "",
    "dontHideEmptyStavesInFirstSystemChanged",
    "showBracketsWhenSpanningSingleStaffChanged",
    "showPageSettings",
    "showStyleSettings",
    "hideEmptyStaves",
    "dontHideEmptyStavesInFirstSystem",
    "showBracketsWhenSpanningSingleStaff"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEScoreAppearanceSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    4 /* Public */,
       3,    0,   45,    2, 0x06,    5 /* Public */,
       4,    0,   46,    2, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x02,    7 /* Public */,
       6,    0,   48,    2, 0x02,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00015103, uint(0), 0,
       8, QMetaType::Bool, 0x00015103, uint(1), 0,
       9, QMetaType::Bool, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::ScoreAppearanceSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEScoreAppearanceSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEScoreAppearanceSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEScoreAppearanceSettingsModelENDCLASS_t,
        // property 'hideEmptyStaves'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dontHideEmptyStavesInFirstSystem'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showBracketsWhenSpanningSingleStaff'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScoreAppearanceSettingsModel, std::true_type>,
        // method 'hideEmptyStavesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dontHideEmptyStavesInFirstSystemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showBracketsWhenSpanningSingleStaffChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPageSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showStyleSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::ScoreAppearanceSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScoreAppearanceSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hideEmptyStavesChanged(); break;
        case 1: _t->dontHideEmptyStavesInFirstSystemChanged(); break;
        case 2: _t->showBracketsWhenSpanningSingleStaffChanged(); break;
        case 3: _t->showPageSettings(); break;
        case 4: _t->showStyleSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScoreAppearanceSettingsModel::*)();
            if (_t _q_method = &ScoreAppearanceSettingsModel::hideEmptyStavesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScoreAppearanceSettingsModel::*)();
            if (_t _q_method = &ScoreAppearanceSettingsModel::dontHideEmptyStavesInFirstSystemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScoreAppearanceSettingsModel::*)();
            if (_t _q_method = &ScoreAppearanceSettingsModel::showBracketsWhenSpanningSingleStaffChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScoreAppearanceSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hideEmptyStaves(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dontHideEmptyStavesInFirstSystem(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showBracketsWhenSpanningSingleStaff(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScoreAppearanceSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHideEmptyStaves(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDontHideEmptyStavesInFirstSystem(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowBracketsWhenSpanningSingleStaff(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *mu::inspector::ScoreAppearanceSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::ScoreAppearanceSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEScoreAppearanceSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::ScoreAppearanceSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::ScoreAppearanceSettingsModel::hideEmptyStavesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::ScoreAppearanceSettingsModel::dontHideEmptyStavesInFirstSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::inspector::ScoreAppearanceSettingsModel::showBracketsWhenSpanningSingleStaffChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
