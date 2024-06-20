/****************************************************************************
** Meta object code from reading C++ file 'themespagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/firstlaunchsetup/themespagemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'themespagemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEThemesPageModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEThemesPageModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::ThemesPageModel",
    "isFollowSystemThemeChanged",
    "",
    "highContrastEnabledChanged",
    "themesChanged",
    "setFollowSystemTheme",
    "enabled",
    "setHighContrastEnabled",
    "setCurrentThemeCode",
    "themeCode",
    "setCurrentAccentColorIndex",
    "index",
    "load",
    "isFollowSystemThemeAvailable",
    "isFollowSystemTheme",
    "highContrastEnabled",
    "generalThemes",
    "highContrastThemes",
    "accentColors",
    "currentThemeCode",
    "currentAccentColorIndex"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPEThemesPageModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    9 /* Public */,
       3,    0,   63,    2, 0x06,   10 /* Public */,
       4,    0,   64,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   65,    2, 0x0a,   12 /* Public */,
       7,    1,   68,    2, 0x0a,   14 /* Public */,
       8,    1,   71,    2, 0x0a,   16 /* Public */,
      10,    1,   74,    2, 0x0a,   18 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,   77,    2, 0x02,   20 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00015401, uint(-1), 0,
      14, QMetaType::Bool, 0x00015003, uint(0), 0,
      15, QMetaType::Bool, 0x00015103, uint(1), 0,
      16, QMetaType::QVariantList, 0x00015001, uint(2), 0,
      17, QMetaType::QVariantList, 0x00015001, uint(2), 0,
      18, QMetaType::QStringList, 0x00015001, uint(2), 0,
      19, QMetaType::QString, 0x00015103, uint(2), 0,
      20, QMetaType::Int, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::appshell::ThemesPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEThemesPageModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPEThemesPageModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEThemesPageModelENDCLASS_t,
        // property 'isFollowSystemThemeAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isFollowSystemTheme'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'highContrastEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'generalThemes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'highContrastThemes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'accentColors'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'currentThemeCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentAccentColorIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ThemesPageModel, std::true_type>,
        // method 'isFollowSystemThemeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'highContrastEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'themesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFollowSystemTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setHighContrastEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCurrentThemeCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurrentAccentColorIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::appshell::ThemesPageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemesPageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isFollowSystemThemeChanged(); break;
        case 1: _t->highContrastEnabledChanged(); break;
        case 2: _t->themesChanged(); break;
        case 3: _t->setFollowSystemTheme((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setHighContrastEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setCurrentThemeCode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setCurrentAccentColorIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThemesPageModel::*)();
            if (_t _q_method = &ThemesPageModel::isFollowSystemThemeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThemesPageModel::*)();
            if (_t _q_method = &ThemesPageModel::highContrastEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThemesPageModel::*)();
            if (_t _q_method = &ThemesPageModel::themesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ThemesPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isFollowSystemThemeAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isFollowSystemTheme(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->highContrastEnabled(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->generalThemes(); break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->highContrastThemes(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->accentColors(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->currentThemeCode(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->currentAccentColorIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ThemesPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFollowSystemTheme(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setHighContrastEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setCurrentThemeCode(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setCurrentAccentColorIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::appshell::ThemesPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::ThemesPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEThemesPageModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::ThemesPageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mu::appshell::ThemesPageModel::isFollowSystemThemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::appshell::ThemesPageModel::highContrastEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::ThemesPageModel::themesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
