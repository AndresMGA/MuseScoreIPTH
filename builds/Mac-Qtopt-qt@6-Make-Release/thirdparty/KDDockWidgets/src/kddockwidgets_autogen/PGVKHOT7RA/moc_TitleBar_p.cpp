/****************************************************************************
** Meta object code from reading C++ file 'TitleBar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/TitleBar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TitleBar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__TitleBar_t {
    QByteArrayData data[21];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__TitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__TitleBar_t qt_meta_stringdata_KDDockWidgets__TitleBar = {
    {
QT_MOC_LITERAL(0, 0, 23), // "KDDockWidgets::TitleBar"
QT_MOC_LITERAL(1, 24, 12), // "titleChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "iconChanged"
QT_MOC_LITERAL(4, 50, 16), // "isFocusedChanged"
QT_MOC_LITERAL(5, 67, 25), // "closeButtonEnabledChanged"
QT_MOC_LITERAL(6, 93, 25), // "floatButtonVisibleChanged"
QT_MOC_LITERAL(7, 119, 25), // "floatButtonToolTipChanged"
QT_MOC_LITERAL(8, 145, 15), // "onDoubleClicked"
QT_MOC_LITERAL(9, 161, 14), // "onCloseClicked"
QT_MOC_LITERAL(10, 176, 14), // "onFloatClicked"
QT_MOC_LITERAL(11, 191, 17), // "onMaximizeClicked"
QT_MOC_LITERAL(12, 209, 17), // "onMinimizeClicked"
QT_MOC_LITERAL(13, 227, 15), // "toggleMaximized"
QT_MOC_LITERAL(14, 243, 17), // "onAutoHideClicked"
QT_MOC_LITERAL(15, 261, 5), // "title"
QT_MOC_LITERAL(16, 267, 7), // "hasIcon"
QT_MOC_LITERAL(17, 275, 18), // "closeButtonEnabled"
QT_MOC_LITERAL(18, 294, 18), // "floatButtonVisible"
QT_MOC_LITERAL(19, 313, 18), // "floatButtonToolTip"
QT_MOC_LITERAL(20, 332, 9) // "isFocused"

    },
    "KDDockWidgets::TitleBar\0titleChanged\0"
    "\0iconChanged\0isFocusedChanged\0"
    "closeButtonEnabledChanged\0"
    "floatButtonVisibleChanged\0"
    "floatButtonToolTipChanged\0onDoubleClicked\0"
    "onCloseClicked\0onFloatClicked\0"
    "onMaximizeClicked\0onMinimizeClicked\0"
    "toggleMaximized\0onAutoHideClicked\0"
    "title\0hasIcon\0closeButtonEnabled\0"
    "floatButtonVisible\0floatButtonToolTip\0"
    "isFocused"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__TitleBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   91,    2, 0x02 /* Public */,
       9,    0,   92,    2, 0x01 /* Protected */,
      10,    0,   93,    2, 0x01 /* Protected */,
      11,    0,   94,    2, 0x01 /* Protected */,
      12,    0,   95,    2, 0x01 /* Protected */,
      13,    0,   96,    2, 0x01 /* Protected */,
      14,    0,   97,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::QString, 0x00495001,
      20, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       5,
       2,

       0        // eod
};

void KDDockWidgets::TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->iconChanged(); break;
        case 2: _t->isFocusedChanged(); break;
        case 3: _t->closeButtonEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->floatButtonVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->floatButtonToolTipChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->onDoubleClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->onCloseClicked(); break;
        case 8: _t->onFloatClicked(); break;
        case 9: _t->onMaximizeClicked(); break;
        case 10: _t->onMinimizeClicked(); break;
        case 11: _t->toggleMaximized(); break;
        case 12: _t->onAutoHideClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::iconChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::isFocusedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::closeButtonEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::floatButtonVisibleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::floatButtonToolTipChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TitleBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasIcon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->closeButtonEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->floatButtonVisible(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->floatButtonToolTip(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isFocused(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TitleBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCloseButtonEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFloatButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::TitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAdapter::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__TitleBar.data,
    qt_meta_data_KDDockWidgets__TitleBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__TitleBar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Draggable"))
        return static_cast< Draggable*>(this);
    return QWidgetAdapter::qt_metacast(_clname);
}

int KDDockWidgets::TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAdapter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDDockWidgets::TitleBar::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDDockWidgets::TitleBar::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDDockWidgets::TitleBar::isFocusedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KDDockWidgets::TitleBar::closeButtonEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KDDockWidgets::TitleBar::floatButtonVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KDDockWidgets::TitleBar::floatButtonToolTipChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
