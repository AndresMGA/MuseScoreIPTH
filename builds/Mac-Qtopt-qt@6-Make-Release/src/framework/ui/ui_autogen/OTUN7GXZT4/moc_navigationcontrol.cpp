/****************************************************************************
** Meta object code from reading C++ file 'navigationcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/navigationcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__NavigationControl_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__NavigationControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__NavigationControl_t qt_meta_stringdata_mu__ui__NavigationControl = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mu::ui::NavigationControl"
QT_MOC_LITERAL(1, 26, 12), // "panelChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "NavigationPanel*"
QT_MOC_LITERAL(4, 57, 5), // "panel"
QT_MOC_LITERAL(5, 63, 9), // "triggered"
QT_MOC_LITERAL(6, 73, 8), // "setPanel"
QT_MOC_LITERAL(7, 82, 16), // "onPanelDestroyed"
QT_MOC_LITERAL(8, 99, 13), // "requestActive"
QT_MOC_LITERAL(9, 113, 15), // "enableHighlight"
QT_MOC_LITERAL(10, 129, 26), // "requestActiveByInteraction"
QT_MOC_LITERAL(11, 156, 24) // "mu::ui::NavigationPanel*"

    },
    "mu::ui::NavigationControl\0panelChanged\0"
    "\0NavigationPanel*\0panel\0triggered\0"
    "setPanel\0onPanelDestroyed\0requestActive\0"
    "enableHighlight\0requestActiveByInteraction\0"
    "mu::ui::NavigationPanel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__NavigationControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   58,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   62,    2, 0x02 /* Public */,
       8,    0,   65,    2, 0x22 /* Public | MethodCloned */,
      10,    1,   66,    2, 0x02 /* Public */,
      10,    0,   69,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 11, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::ui::NavigationControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->panelChanged((*reinterpret_cast< NavigationPanel*(*)>(_a[1]))); break;
        case 1: _t->triggered(); break;
        case 2: _t->setPanel((*reinterpret_cast< NavigationPanel*(*)>(_a[1]))); break;
        case 3: _t->onPanelDestroyed(); break;
        case 4: _t->requestActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->requestActive(); break;
        case 6: _t->requestActiveByInteraction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->requestActiveByInteraction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationControl::*)(NavigationPanel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationControl::panelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NavigationControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationControl::triggered)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavigationControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< mu::ui::NavigationPanel**>(_v) = _t->panel_property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavigationControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPanel(*reinterpret_cast< mu::ui::NavigationPanel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::NavigationControl::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNavigation::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__NavigationControl.data,
    qt_meta_data_mu__ui__NavigationControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::NavigationControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::NavigationControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__NavigationControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INavigationControl"))
        return static_cast< INavigationControl*>(this);
    return AbstractNavigation::qt_metacast(_clname);
}

int mu::ui::NavigationControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNavigation::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::ui::NavigationControl::panelChanged(NavigationPanel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::ui::NavigationControl::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
