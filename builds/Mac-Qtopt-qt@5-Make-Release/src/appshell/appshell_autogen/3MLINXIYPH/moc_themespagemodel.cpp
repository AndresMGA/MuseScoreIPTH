/****************************************************************************
** Meta object code from reading C++ file 'themespagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/firstlaunchsetup/themespagemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'themespagemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__ThemesPageModel_t {
    QByteArrayData data[21];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__ThemesPageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__ThemesPageModel_t qt_meta_stringdata_mu__appshell__ThemesPageModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::appshell::ThemesPageModel"
QT_MOC_LITERAL(1, 30, 26), // "isFollowSystemThemeChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 26), // "highContrastEnabledChanged"
QT_MOC_LITERAL(4, 85, 13), // "themesChanged"
QT_MOC_LITERAL(5, 99, 20), // "setFollowSystemTheme"
QT_MOC_LITERAL(6, 120, 7), // "enabled"
QT_MOC_LITERAL(7, 128, 22), // "setHighContrastEnabled"
QT_MOC_LITERAL(8, 151, 19), // "setCurrentThemeCode"
QT_MOC_LITERAL(9, 171, 9), // "themeCode"
QT_MOC_LITERAL(10, 181, 26), // "setCurrentAccentColorIndex"
QT_MOC_LITERAL(11, 208, 5), // "index"
QT_MOC_LITERAL(12, 214, 4), // "load"
QT_MOC_LITERAL(13, 219, 28), // "isFollowSystemThemeAvailable"
QT_MOC_LITERAL(14, 248, 19), // "isFollowSystemTheme"
QT_MOC_LITERAL(15, 268, 19), // "highContrastEnabled"
QT_MOC_LITERAL(16, 288, 13), // "generalThemes"
QT_MOC_LITERAL(17, 302, 18), // "highContrastThemes"
QT_MOC_LITERAL(18, 321, 12), // "accentColors"
QT_MOC_LITERAL(19, 334, 16), // "currentThemeCode"
QT_MOC_LITERAL(20, 351, 23) // "currentAccentColorIndex"

    },
    "mu::appshell::ThemesPageModel\0"
    "isFollowSystemThemeChanged\0\0"
    "highContrastEnabledChanged\0themesChanged\0"
    "setFollowSystemTheme\0enabled\0"
    "setHighContrastEnabled\0setCurrentThemeCode\0"
    "themeCode\0setCurrentAccentColorIndex\0"
    "index\0load\0isFollowSystemThemeAvailable\0"
    "isFollowSystemTheme\0highContrastEnabled\0"
    "generalThemes\0highContrastThemes\0"
    "accentColors\0currentThemeCode\0"
    "currentAccentColorIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__ThemesPageModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   69,    2, 0x02 /* Public */,

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
      13, QMetaType::Bool, 0x00095401,
      14, QMetaType::Bool, 0x00495003,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::QVariantList, 0x00495001,
      17, QMetaType::QVariantList, 0x00495001,
      18, QMetaType::QStringList, 0x00495001,
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       2,
       2,
       2,
       2,

       0        // eod
};

void mu::appshell::ThemesPageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemesPageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isFollowSystemThemeChanged(); break;
        case 1: _t->highContrastEnabledChanged(); break;
        case 2: _t->themesChanged(); break;
        case 3: _t->setFollowSystemTheme((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setHighContrastEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setCurrentThemeCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setCurrentAccentColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThemesPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemesPageModel::isFollowSystemThemeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThemesPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemesPageModel::highContrastEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThemesPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemesPageModel::themesChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::ThemesPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__ThemesPageModel.data,
    qt_meta_data_mu__appshell__ThemesPageModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::ThemesPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::ThemesPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__ThemesPageModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
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
QT_END_MOC_NAMESPACE
