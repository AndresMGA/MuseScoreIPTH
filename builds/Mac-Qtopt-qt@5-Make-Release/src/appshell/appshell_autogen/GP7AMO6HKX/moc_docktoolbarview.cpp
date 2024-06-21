/****************************************************************************
** Meta object code from reading C++ file 'docktoolbarview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/dockwindow/docktoolbarview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docktoolbarview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__dock__DockToolBarAlignment_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockToolBarAlignment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockToolBarAlignment_t qt_meta_stringdata_mu__dock__DockToolBarAlignment = {
    {
QT_MOC_LITERAL(0, 0, 30), // "mu::dock::DockToolBarAlignment"
QT_MOC_LITERAL(1, 31, 4), // "Type"
QT_MOC_LITERAL(2, 36, 4), // "Left"
QT_MOC_LITERAL(3, 41, 6), // "Center"
QT_MOC_LITERAL(4, 48, 5) // "Right"

    },
    "mu::dock::DockToolBarAlignment\0Type\0"
    "Left\0Center\0Right"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockToolBarAlignment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(mu::dock::DockToolBarAlignment::Left),
       3, uint(mu::dock::DockToolBarAlignment::Center),
       4, uint(mu::dock::DockToolBarAlignment::Right),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockToolBarAlignment::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__dock__DockToolBarAlignment.data,
    qt_meta_data_mu__dock__DockToolBarAlignment,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_mu__dock__DockToolBarView_t {
    QByteArrayData data[12];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockToolBarView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockToolBarView_t qt_meta_stringdata_mu__dock__DockToolBarView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mu::dock::DockToolBarView"
QT_MOC_LITERAL(1, 26, 18), // "orientationChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "Qt::Orientation"
QT_MOC_LITERAL(4, 62, 11), // "orientation"
QT_MOC_LITERAL(5, 74, 16), // "alignmentChanged"
QT_MOC_LITERAL(6, 91, 9), // "alignment"
QT_MOC_LITERAL(7, 101, 14), // "setOrientation"
QT_MOC_LITERAL(8, 116, 12), // "setAlignment"
QT_MOC_LITERAL(9, 129, 21), // "setDraggableMouseArea"
QT_MOC_LITERAL(10, 151, 11), // "QQuickItem*"
QT_MOC_LITERAL(11, 163, 9) // "mouseArea"

    },
    "mu::dock::DockToolBarView\0orientationChanged\0"
    "\0Qt::Orientation\0orientation\0"
    "alignmentChanged\0alignment\0setOrientation\0"
    "setAlignment\0setDraggableMouseArea\0"
    "QQuickItem*\0mouseArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockToolBarView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 10,   11,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void mu::dock::DockToolBarView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockToolBarView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->orientationChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 1: _t->alignmentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 3: _t->setAlignment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDraggableMouseArea((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            using _t = void (DockToolBarView::*)(Qt::Orientation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockToolBarView::orientationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockToolBarView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockToolBarView::alignmentChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockToolBarView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->alignment(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockToolBarView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setAlignment(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockToolBarView::staticMetaObject = { {
    QMetaObject::SuperData::link<DockBase::staticMetaObject>(),
    qt_meta_stringdata_mu__dock__DockToolBarView.data,
    qt_meta_data_mu__dock__DockToolBarView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::dock::DockToolBarView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::dock::DockToolBarView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__dock__DockToolBarView.stringdata0))
        return static_cast<void*>(this);
    return DockBase::qt_metacast(_clname);
}

int mu::dock::DockToolBarView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockBase::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::dock::DockToolBarView::orientationChanged(Qt::Orientation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::dock::DockToolBarView::alignmentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
