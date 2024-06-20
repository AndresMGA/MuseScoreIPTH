/****************************************************************************
** Meta object code from reading C++ file 'uiengine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/internal/uiengine.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiengine.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEUiEngineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEUiEngineENDCLASS = QtMocHelpers::stringData(
    "muse::ui::UiEngine",
    "themeChanged",
    "",
    "api::ThemeApi*",
    "theme",
    "rootItemChanged",
    "QQuickItem*",
    "rootItem",
    "setRootItem",
    "keyboardModifiers",
    "Qt::KeyboardModifiers",
    "currentLanguageLayoutDirection",
    "Qt::LayoutDirection",
    "colorWithAlphaF",
    "src",
    "alpha",
    "blendColors",
    "c1",
    "c2",
    "tooltip",
    "QmlToolTip*",
    "_interactiveProvider",
    "InteractiveProvider*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPEUiEngineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    5 /* Public */,
       5,    1,   65,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   68,    2, 0x0a,    9 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   71,    2, 0x102,   11 /* Public | MethodIsConst  */,
      11,    0,   72,    2, 0x102,   12 /* Public | MethodIsConst  */,
      13,    2,   73,    2, 0x102,   13 /* Public | MethodIsConst  */,
      16,    2,   78,    2, 0x102,   16 /* Public | MethodIsConst  */,
      16,    3,   83,    2, 0x102,   19 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

 // methods: parameters
    0x80000000 | 10,
    0x80000000 | 12,
    QMetaType::QColor, QMetaType::QColor, QMetaType::Float,   14,   15,
    QMetaType::QColor, QMetaType::QColor, QMetaType::QColor,   17,   18,
    QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::Float,   17,   18,   15,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00015009, uint(0), 0,
      19, 0x80000000 | 20, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 6, 0x0001510b, uint(1), 0,
      21, 0x80000000 | 22, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::ui::UiEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEUiEngineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPEUiEngineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEUiEngineENDCLASS_t,
        // property 'theme'
        QtPrivate::TypeAndForceComplete<api::ThemeApi*, std::true_type>,
        // property 'tooltip'
        QtPrivate::TypeAndForceComplete<QmlToolTip*, std::true_type>,
        // property 'rootItem'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property '_interactiveProvider'
        QtPrivate::TypeAndForceComplete<InteractiveProvider*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UiEngine, std::true_type>,
        // method 'themeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<api::ThemeApi *, std::false_type>,
        // method 'rootItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'setRootItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'keyboardModifiers'
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>,
        // method 'currentLanguageLayoutDirection'
        QtPrivate::TypeAndForceComplete<Qt::LayoutDirection, std::false_type>,
        // method 'colorWithAlphaF'
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'blendColors'
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'blendColors'
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>
    >,
    nullptr
} };

void muse::ui::UiEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UiEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->themeChanged((*reinterpret_cast< std::add_pointer_t<api::ThemeApi*>>(_a[1]))); break;
        case 1: _t->rootItemChanged((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 2: _t->setRootItem((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 3: { Qt::KeyboardModifiers _r = _t->keyboardModifiers();
            if (_a[0]) *reinterpret_cast< Qt::KeyboardModifiers*>(_a[0]) = std::move(_r); }  break;
        case 4: { Qt::LayoutDirection _r = _t->currentLanguageLayoutDirection();
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = std::move(_r); }  break;
        case 5: { QColor _r = _t->colorWithAlphaF((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 6: { QColor _r = _t->blendColors((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 7: { QColor _r = _t->blendColors((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UiEngine::*)(api::ThemeApi * );
            if (_t _q_method = &UiEngine::themeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UiEngine::*)(QQuickItem * );
            if (_t _q_method = &UiEngine::rootItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InteractiveProvider* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlToolTip* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UiEngine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< api::ThemeApi**>(_v) = _t->theme(); break;
        case 1: *reinterpret_cast< QmlToolTip**>(_v) = _t->tooltip(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->rootItem(); break;
        case 3: *reinterpret_cast< InteractiveProvider**>(_v) = _t->interactiveProvider_property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UiEngine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setRootItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::ui::UiEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::ui::UiEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEUiEngineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IUiEngine"))
        return static_cast< IUiEngine*>(this);
    if (!strcmp(_clname, "Injectable"))
        return static_cast< Injectable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::ui::UiEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void muse::ui::UiEngine::themeChanged(api::ThemeApi * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::ui::UiEngine::rootItemChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
