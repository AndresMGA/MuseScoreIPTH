/****************************************************************************
** Meta object code from reading C++ file 'appearancepreferencesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/preferences/appearancepreferencesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearancepreferencesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__AppearancePreferencesModel_t {
    QByteArrayData data[63];
    char stringdata0[1152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__AppearancePreferencesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__AppearancePreferencesModel_t qt_meta_stringdata_mu__appshell__AppearancePreferencesModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "mu::appshell::AppearancePrefe..."
QT_MOC_LITERAL(1, 41, 26), // "isFollowSystemThemeChanged"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 13), // "themesChanged"
QT_MOC_LITERAL(4, 83, 23), // "currentFontIndexChanged"
QT_MOC_LITERAL(5, 107, 19), // "bodyTextSizeChanged"
QT_MOC_LITERAL(6, 127, 25), // "backgroundUseColorChanged"
QT_MOC_LITERAL(7, 153, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(8, 176, 30), // "backgroundWallpaperPathChanged"
QT_MOC_LITERAL(9, 207, 25), // "foregroundUseColorChanged"
QT_MOC_LITERAL(10, 233, 22), // "foregroundColorChanged"
QT_MOC_LITERAL(11, 256, 30), // "foregroundWallpaperPathChanged"
QT_MOC_LITERAL(12, 287, 23), // "invertScoreColorChanged"
QT_MOC_LITERAL(13, 311, 20), // "setFollowSystemTheme"
QT_MOC_LITERAL(14, 332, 7), // "enabled"
QT_MOC_LITERAL(15, 340, 22), // "setHighContrastEnabled"
QT_MOC_LITERAL(16, 363, 19), // "setCurrentThemeCode"
QT_MOC_LITERAL(17, 383, 9), // "themeCode"
QT_MOC_LITERAL(18, 393, 26), // "setCurrentAccentColorIndex"
QT_MOC_LITERAL(19, 420, 5), // "index"
QT_MOC_LITERAL(20, 426, 19), // "setCurrentFontIndex"
QT_MOC_LITERAL(21, 446, 15), // "setBodyTextSize"
QT_MOC_LITERAL(22, 462, 4), // "size"
QT_MOC_LITERAL(23, 467, 21), // "setBackgroundUseColor"
QT_MOC_LITERAL(24, 489, 5), // "value"
QT_MOC_LITERAL(25, 495, 18), // "setBackgroundColor"
QT_MOC_LITERAL(26, 514, 5), // "color"
QT_MOC_LITERAL(27, 520, 26), // "setBackgroundWallpaperPath"
QT_MOC_LITERAL(28, 547, 4), // "path"
QT_MOC_LITERAL(29, 552, 21), // "setForegroundUseColor"
QT_MOC_LITERAL(30, 574, 18), // "setForegroundColor"
QT_MOC_LITERAL(31, 593, 26), // "setForegroundWallpaperPath"
QT_MOC_LITERAL(32, 620, 24), // "setScoreInversionEnabled"
QT_MOC_LITERAL(33, 645, 4), // "init"
QT_MOC_LITERAL(34, 650, 35), // "resetAppearancePreferencesToD..."
QT_MOC_LITERAL(35, 686, 11), // "setNewColor"
QT_MOC_LITERAL(36, 698, 8), // "newColor"
QT_MOC_LITERAL(37, 707, 9), // "ColorType"
QT_MOC_LITERAL(38, 717, 9), // "colorType"
QT_MOC_LITERAL(39, 727, 8), // "allFonts"
QT_MOC_LITERAL(40, 736, 19), // "wallpaperPathFilter"
QT_MOC_LITERAL(41, 756, 13), // "wallpapersDir"
QT_MOC_LITERAL(42, 770, 28), // "isFollowSystemThemeAvailable"
QT_MOC_LITERAL(43, 799, 19), // "isFollowSystemTheme"
QT_MOC_LITERAL(44, 819, 19), // "highContrastEnabled"
QT_MOC_LITERAL(45, 839, 13), // "generalThemes"
QT_MOC_LITERAL(46, 853, 18), // "highContrastThemes"
QT_MOC_LITERAL(47, 872, 12), // "accentColors"
QT_MOC_LITERAL(48, 885, 16), // "currentThemeCode"
QT_MOC_LITERAL(49, 902, 23), // "currentAccentColorIndex"
QT_MOC_LITERAL(50, 926, 16), // "currentFontIndex"
QT_MOC_LITERAL(51, 943, 12), // "bodyTextSize"
QT_MOC_LITERAL(52, 956, 18), // "backgroundUseColor"
QT_MOC_LITERAL(53, 975, 15), // "backgroundColor"
QT_MOC_LITERAL(54, 991, 23), // "backgroundWallpaperPath"
QT_MOC_LITERAL(55, 1015, 18), // "foregroundUseColor"
QT_MOC_LITERAL(56, 1034, 15), // "foregroundColor"
QT_MOC_LITERAL(57, 1050, 23), // "foregroundWallpaperPath"
QT_MOC_LITERAL(58, 1074, 21), // "scoreInversionEnabled"
QT_MOC_LITERAL(59, 1096, 11), // "AccentColor"
QT_MOC_LITERAL(60, 1108, 17), // "TextAndIconsColor"
QT_MOC_LITERAL(61, 1126, 13), // "DisabledColor"
QT_MOC_LITERAL(62, 1140, 11) // "BorderColor"

    },
    "mu::appshell::AppearancePreferencesModel\0"
    "isFollowSystemThemeChanged\0\0themesChanged\0"
    "currentFontIndexChanged\0bodyTextSizeChanged\0"
    "backgroundUseColorChanged\0"
    "backgroundColorChanged\0"
    "backgroundWallpaperPathChanged\0"
    "foregroundUseColorChanged\0"
    "foregroundColorChanged\0"
    "foregroundWallpaperPathChanged\0"
    "invertScoreColorChanged\0setFollowSystemTheme\0"
    "enabled\0setHighContrastEnabled\0"
    "setCurrentThemeCode\0themeCode\0"
    "setCurrentAccentColorIndex\0index\0"
    "setCurrentFontIndex\0setBodyTextSize\0"
    "size\0setBackgroundUseColor\0value\0"
    "setBackgroundColor\0color\0"
    "setBackgroundWallpaperPath\0path\0"
    "setForegroundUseColor\0setForegroundColor\0"
    "setForegroundWallpaperPath\0"
    "setScoreInversionEnabled\0init\0"
    "resetAppearancePreferencesToDefault\0"
    "setNewColor\0newColor\0ColorType\0colorType\0"
    "allFonts\0wallpaperPathFilter\0wallpapersDir\0"
    "isFollowSystemThemeAvailable\0"
    "isFollowSystemTheme\0highContrastEnabled\0"
    "generalThemes\0highContrastThemes\0"
    "accentColors\0currentThemeCode\0"
    "currentAccentColorIndex\0currentFontIndex\0"
    "bodyTextSize\0backgroundUseColor\0"
    "backgroundColor\0backgroundWallpaperPath\0"
    "foregroundUseColor\0foregroundColor\0"
    "foregroundWallpaperPath\0scoreInversionEnabled\0"
    "AccentColor\0TextAndIconsColor\0"
    "DisabledColor\0BorderColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__AppearancePreferencesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      17,  224, // properties
       1,  292, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x06 /* Public */,
       3,    0,  165,    2, 0x06 /* Public */,
       4,    0,  166,    2, 0x06 /* Public */,
       5,    0,  167,    2, 0x06 /* Public */,
       6,    0,  168,    2, 0x06 /* Public */,
       7,    0,  169,    2, 0x06 /* Public */,
       8,    0,  170,    2, 0x06 /* Public */,
       9,    0,  171,    2, 0x06 /* Public */,
      10,    0,  172,    2, 0x06 /* Public */,
      11,    0,  173,    2, 0x06 /* Public */,
      12,    0,  174,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  175,    2, 0x0a /* Public */,
      15,    1,  178,    2, 0x0a /* Public */,
      16,    1,  181,    2, 0x0a /* Public */,
      18,    1,  184,    2, 0x0a /* Public */,
      20,    1,  187,    2, 0x0a /* Public */,
      21,    1,  190,    2, 0x0a /* Public */,
      23,    1,  193,    2, 0x0a /* Public */,
      25,    1,  196,    2, 0x0a /* Public */,
      27,    1,  199,    2, 0x0a /* Public */,
      29,    1,  202,    2, 0x0a /* Public */,
      30,    1,  205,    2, 0x0a /* Public */,
      31,    1,  208,    2, 0x0a /* Public */,
      32,    1,  211,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      33,    0,  214,    2, 0x02 /* Public */,
      34,    0,  215,    2, 0x02 /* Public */,
      35,    2,  216,    2, 0x02 /* Public */,
      39,    0,  221,    2, 0x02 /* Public */,
      40,    0,  222,    2, 0x02 /* Public */,
      41,    0,  223,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QColor,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QColor,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::Bool,   24,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor, 0x80000000 | 37,   36,   38,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QString,

 // properties: name, type, flags
      42, QMetaType::Bool, 0x00095401,
      43, QMetaType::Bool, 0x00495003,
      44, QMetaType::Bool, 0x00495103,
      45, QMetaType::QVariantList, 0x00495001,
      46, QMetaType::QVariantList, 0x00495001,
      47, QMetaType::QStringList, 0x00495001,
      48, QMetaType::QString, 0x00495103,
      49, QMetaType::Int, 0x00495103,
      50, QMetaType::Int, 0x00495103,
      51, QMetaType::Int, 0x00495103,
      52, QMetaType::Bool, 0x00495103,
      53, QMetaType::QColor, 0x00495103,
      54, QMetaType::QString, 0x00495103,
      55, QMetaType::Bool, 0x00495103,
      56, QMetaType::QColor, 0x00495103,
      57, QMetaType::QString, 0x00495103,
      58, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       1,
       1,
       1,
       1,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

 // enums: name, alias, flags, count, data
      37,   37, 0x0,    4,  297,

 // enum data: key, value
      59, uint(mu::appshell::AppearancePreferencesModel::AccentColor),
      60, uint(mu::appshell::AppearancePreferencesModel::TextAndIconsColor),
      61, uint(mu::appshell::AppearancePreferencesModel::DisabledColor),
      62, uint(mu::appshell::AppearancePreferencesModel::BorderColor),

       0        // eod
};

void mu::appshell::AppearancePreferencesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppearancePreferencesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isFollowSystemThemeChanged(); break;
        case 1: _t->themesChanged(); break;
        case 2: _t->currentFontIndexChanged(); break;
        case 3: _t->bodyTextSizeChanged(); break;
        case 4: _t->backgroundUseColorChanged(); break;
        case 5: _t->backgroundColorChanged(); break;
        case 6: _t->backgroundWallpaperPathChanged(); break;
        case 7: _t->foregroundUseColorChanged(); break;
        case 8: _t->foregroundColorChanged(); break;
        case 9: _t->foregroundWallpaperPathChanged(); break;
        case 10: _t->invertScoreColorChanged(); break;
        case 11: _t->setFollowSystemTheme((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setHighContrastEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setCurrentThemeCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setCurrentAccentColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setCurrentFontIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setBodyTextSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setBackgroundUseColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 19: _t->setBackgroundWallpaperPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->setForegroundUseColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setForegroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 22: _t->setForegroundWallpaperPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->setScoreInversionEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->init(); break;
        case 25: _t->resetAppearancePreferencesToDefault(); break;
        case 26: _t->setNewColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< ColorType(*)>(_a[2]))); break;
        case 27: { QStringList _r = _t->allFonts();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 28: { QStringList _r = _t->wallpaperPathFilter();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->wallpapersDir();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::isFollowSystemThemeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::themesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::currentFontIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::bodyTextSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::backgroundUseColorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::backgroundColorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::backgroundWallpaperPathChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::foregroundUseColorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::foregroundColorChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::foregroundWallpaperPathChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AppearancePreferencesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearancePreferencesModel::invertScoreColorChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AppearancePreferencesModel *>(_o);
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
        case 8: *reinterpret_cast< int*>(_v) = _t->currentFontIndex(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->bodyTextSize(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->backgroundUseColor(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->backgroundWallpaperPath(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->foregroundUseColor(); break;
        case 14: *reinterpret_cast< QColor*>(_v) = _t->foregroundColor(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->foregroundWallpaperPath(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->scoreInversionEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AppearancePreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFollowSystemTheme(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setHighContrastEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setCurrentThemeCode(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setCurrentAccentColorIndex(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setCurrentFontIndex(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setBodyTextSize(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setBackgroundUseColor(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->setBackgroundWallpaperPath(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setForegroundUseColor(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setForegroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 15: _t->setForegroundWallpaperPath(*reinterpret_cast< QString*>(_v)); break;
        case 16: _t->setScoreInversionEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::AppearancePreferencesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__AppearancePreferencesModel.data,
    qt_meta_data_mu__appshell__AppearancePreferencesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::AppearancePreferencesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::AppearancePreferencesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__AppearancePreferencesModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::AppearancePreferencesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::appshell::AppearancePreferencesModel::isFollowSystemThemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::appshell::AppearancePreferencesModel::themesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::AppearancePreferencesModel::currentFontIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::AppearancePreferencesModel::bodyTextSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::appshell::AppearancePreferencesModel::backgroundUseColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::appshell::AppearancePreferencesModel::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::appshell::AppearancePreferencesModel::backgroundWallpaperPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::appshell::AppearancePreferencesModel::foregroundUseColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void mu::appshell::AppearancePreferencesModel::foregroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void mu::appshell::AppearancePreferencesModel::foregroundWallpaperPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void mu::appshell::AppearancePreferencesModel::invertScoreColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
