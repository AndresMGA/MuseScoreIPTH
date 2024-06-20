/****************************************************************************
** Meta object code from reading C++ file 'dockseparator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/dockwindow/internal/dockseparator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockseparator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__dock__DockSeparator_t {
    QByteArrayData data[13];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockSeparator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockSeparator_t qt_meta_stringdata_mu__dock__DockSeparator = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::dock::DockSeparator"
QT_MOC_LITERAL(1, 24, 17), // "isVerticalChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "isSeparatorVisibleChanged"
QT_MOC_LITERAL(4, 69, 23), // "showResizeCursorChanged"
QT_MOC_LITERAL(5, 93, 14), // "onMousePressed"
QT_MOC_LITERAL(6, 108, 12), // "onMouseMoved"
QT_MOC_LITERAL(7, 121, 8), // "localPos"
QT_MOC_LITERAL(8, 130, 15), // "onMouseReleased"
QT_MOC_LITERAL(9, 146, 20), // "onMouseDoubleClicked"
QT_MOC_LITERAL(10, 167, 10), // "isVertical"
QT_MOC_LITERAL(11, 178, 18), // "isSeparatorVisible"
QT_MOC_LITERAL(12, 197, 16) // "showResizeCursor"

    },
    "mu::dock::DockSeparator\0isVerticalChanged\0"
    "\0isSeparatorVisibleChanged\0"
    "showResizeCursorChanged\0onMousePressed\0"
    "onMouseMoved\0localPos\0onMouseReleased\0"
    "onMouseDoubleClicked\0isVertical\0"
    "isSeparatorVisible\0showResizeCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockSeparator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x02 /* Public */,
       6,    1,   53,    2, 0x02 /* Public */,
       8,    0,   56,    2, 0x02 /* Public */,
       9,    0,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::Bool, 0x00495001,
      12, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::dock::DockSeparator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockSeparator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isVerticalChanged(); break;
        case 1: _t->isSeparatorVisibleChanged(); break;
        case 2: _t->showResizeCursorChanged(); break;
        case 3: _t->onMousePressed(); break;
        case 4: _t->onMouseMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 5: _t->onMouseReleased(); break;
        case 6: _t->onMouseDoubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockSeparator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSeparator::isVerticalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockSeparator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSeparator::isSeparatorVisibleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockSeparator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockSeparator::showResizeCursorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockSeparator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVertical(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSeparatorVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showResizeCursor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockSeparator::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_mu__dock__DockSeparator.data,
    qt_meta_data_mu__dock__DockSeparator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::dock::DockSeparator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::dock::DockSeparator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__dock__DockSeparator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Layouting::Separator"))
        return static_cast< Layouting::Separator*>(this);
    if (!strcmp(_clname, "Layouting::Widget_quick"))
        return static_cast< Layouting::Widget_quick*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int mu::dock::DockSeparator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::dock::DockSeparator::isVerticalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::dock::DockSeparator::isSeparatorVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::dock::DockSeparator::showResizeCursorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
