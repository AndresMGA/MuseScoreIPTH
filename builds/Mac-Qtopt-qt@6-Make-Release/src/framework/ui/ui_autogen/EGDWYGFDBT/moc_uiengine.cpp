/****************************************************************************
** Meta object code from reading C++ file 'uiengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/internal/uiengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__UiEngine_t {
    QByteArrayData data[17];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__UiEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__UiEngine_t qt_meta_stringdata_mu__ui__UiEngine = {
    {
QT_MOC_LITERAL(0, 0, 16), // "mu::ui::UiEngine"
QT_MOC_LITERAL(1, 17, 12), // "themeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "UiTheme*"
QT_MOC_LITERAL(4, 40, 5), // "theme"
QT_MOC_LITERAL(5, 46, 15), // "rootItemChanged"
QT_MOC_LITERAL(6, 62, 11), // "QQuickItem*"
QT_MOC_LITERAL(7, 74, 8), // "rootItem"
QT_MOC_LITERAL(8, 83, 11), // "setRootItem"
QT_MOC_LITERAL(9, 95, 17), // "keyboardModifiers"
QT_MOC_LITERAL(10, 113, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(11, 135, 30), // "currentLanguageLayoutDirection"
QT_MOC_LITERAL(12, 166, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(13, 186, 7), // "tooltip"
QT_MOC_LITERAL(14, 194, 11), // "QmlToolTip*"
QT_MOC_LITERAL(15, 206, 20), // "_interactiveProvider"
QT_MOC_LITERAL(16, 227, 20) // "InteractiveProvider*"

    },
    "mu::ui::UiEngine\0themeChanged\0\0UiTheme*\0"
    "theme\0rootItemChanged\0QQuickItem*\0"
    "rootItem\0setRootItem\0keyboardModifiers\0"
    "Qt::KeyboardModifiers\0"
    "currentLanguageLayoutDirection\0"
    "Qt::LayoutDirection\0tooltip\0QmlToolTip*\0"
    "_interactiveProvider\0InteractiveProvider*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__UiEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   45,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   48,    2, 0x02 /* Public */,
      11,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

 // methods: parameters
    0x80000000 | 10,
    0x80000000 | 12,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00495009,
      13, 0x80000000 | 14, 0x00095409,
       7, 0x80000000 | 6, 0x0049510b,
      15, 0x80000000 | 16, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,

       0        // eod
};

void mu::ui::UiEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UiEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->themeChanged((*reinterpret_cast< UiTheme*(*)>(_a[1]))); break;
        case 1: _t->rootItemChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 2: _t->setRootItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 3: { Qt::KeyboardModifiers _r = _t->keyboardModifiers();
            if (_a[0]) *reinterpret_cast< Qt::KeyboardModifiers*>(_a[0]) = std::move(_r); }  break;
        case 4: { Qt::LayoutDirection _r = _t->currentLanguageLayoutDirection();
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UiTheme* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UiEngine::*)(UiTheme * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiEngine::themeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UiEngine::*)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiEngine::rootItemChanged)) {
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
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UiTheme* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UiEngine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UiTheme**>(_v) = _t->theme(); break;
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::UiEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__UiEngine.data,
    qt_meta_data_mu__ui__UiEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::UiEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::UiEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__UiEngine.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IUiEngine"))
        return static_cast< IUiEngine*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::UiEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::ui::UiEngine::themeChanged(UiTheme * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::ui::UiEngine::rootItemChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
