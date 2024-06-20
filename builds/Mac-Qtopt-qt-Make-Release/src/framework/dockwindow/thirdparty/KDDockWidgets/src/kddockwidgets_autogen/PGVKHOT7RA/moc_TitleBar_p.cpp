/****************************************************************************
** Meta object code from reading C++ file 'TitleBar_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../src/framework/dockwindow/thirdparty/KDDockWidgets/src/private/TitleBar_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TitleBar_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKDDockWidgetsSCOPETitleBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSKDDockWidgetsSCOPETitleBarENDCLASS = QtMocHelpers::stringData(
    "KDDockWidgets::TitleBar",
    "titleChanged",
    "",
    "iconChanged",
    "isFocusedChanged",
    "closeButtonEnabledChanged",
    "floatButtonVisibleChanged",
    "floatButtonToolTipChanged",
    "onDoubleClicked",
    "onCloseClicked",
    "onFloatClicked",
    "onMaximizeClicked",
    "onMinimizeClicked",
    "toggleMaximized",
    "onAutoHideClicked",
    "title",
    "hasIcon",
    "closeButtonEnabled",
    "floatButtonVisible",
    "floatButtonToolTip",
    "isFocused"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKDDockWidgetsSCOPETitleBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  111, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    7 /* Public */,
       3,    0,   93,    2, 0x06,    8 /* Public */,
       4,    0,   94,    2, 0x06,    9 /* Public */,
       5,    1,   95,    2, 0x06,   10 /* Public */,
       6,    1,   98,    2, 0x06,   12 /* Public */,
       7,    1,  101,    2, 0x06,   14 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  104,    2, 0x02,   16 /* Public */,
       9,    0,  105,    2, 0x01,   17 /* Protected */,
      10,    0,  106,    2, 0x01,   18 /* Protected */,
      11,    0,  107,    2, 0x01,   19 /* Protected */,
      12,    0,  108,    2, 0x01,   20 /* Protected */,
      13,    0,  109,    2, 0x01,   21 /* Protected */,
      14,    0,  110,    2, 0x01,   22 /* Protected */,

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
      15, QMetaType::QString, 0x00015001, uint(0), 0,
      16, QMetaType::Bool, 0x00015001, uint(1), 0,
      17, QMetaType::Bool, 0x00015103, uint(3), 0,
      18, QMetaType::Bool, 0x00015103, uint(4), 0,
      19, QMetaType::QString, 0x00015001, uint(5), 0,
      20, QMetaType::Bool, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject KDDockWidgets::TitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAdapter::staticMetaObject>(),
    qt_meta_stringdata_CLASSKDDockWidgetsSCOPETitleBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKDDockWidgetsSCOPETitleBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKDDockWidgetsSCOPETitleBarENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasIcon'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'closeButtonEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'floatButtonVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'floatButtonToolTip'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isFocused'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TitleBar, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isFocusedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeButtonEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'floatButtonVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'floatButtonToolTipChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDoubleClicked'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onCloseClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFloatClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMaximizeClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMinimizeClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleMaximized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAutoHideClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void KDDockWidgets::TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->iconChanged(); break;
        case 2: _t->isFocusedChanged(); break;
        case 3: _t->closeButtonEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->floatButtonVisibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->floatButtonToolTipChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
            if (_t _q_method = &TitleBar::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (_t _q_method = &TitleBar::iconChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (_t _q_method = &TitleBar::isFocusedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (_t _q_method = &TitleBar::closeButtonEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (_t _q_method = &TitleBar::floatButtonVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(const QString & );
            if (_t _q_method = &TitleBar::floatButtonToolTipChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *KDDockWidgets::TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSKDDockWidgetsSCOPETitleBarENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
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
