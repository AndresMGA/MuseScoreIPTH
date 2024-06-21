/****************************************************************************
** Meta object code from reading C++ file 'DropIndicatorOverlayInterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/DropIndicatorOverlayInterface_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DropIndicatorOverlayInterface_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__DropIndicatorOverlayInterface_t {
    QByteArrayData data[22];
    char stringdata0[495];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__DropIndicatorOverlayInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__DropIndicatorOverlayInterface_t qt_meta_stringdata_KDDockWidgets__DropIndicatorOverlayInterface = {
    {
QT_MOC_LITERAL(0, 0, 44), // "KDDockWidgets::DropIndicatorO..."
QT_MOC_LITERAL(1, 45, 19), // "hoveredFrameChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 21), // "KDDockWidgets::Frame*"
QT_MOC_LITERAL(4, 88, 23), // "hoveredFrameRectChanged"
QT_MOC_LITERAL(5, 112, 26), // "currentDropLocationChanged"
QT_MOC_LITERAL(6, 139, 16), // "hoveredFrameRect"
QT_MOC_LITERAL(7, 156, 19), // "currentDropLocation"
QT_MOC_LITERAL(8, 176, 58), // "KDDockWidgets::DropIndicatorO..."
QT_MOC_LITERAL(9, 235, 12), // "DropLocation"
QT_MOC_LITERAL(10, 248, 17), // "DropLocation_None"
QT_MOC_LITERAL(11, 266, 17), // "DropLocation_Left"
QT_MOC_LITERAL(12, 284, 16), // "DropLocation_Top"
QT_MOC_LITERAL(13, 301, 18), // "DropLocation_Right"
QT_MOC_LITERAL(14, 320, 19), // "DropLocation_Bottom"
QT_MOC_LITERAL(15, 340, 19), // "DropLocation_Center"
QT_MOC_LITERAL(16, 360, 23), // "DropLocation_OutterLeft"
QT_MOC_LITERAL(17, 384, 22), // "DropLocation_OutterTop"
QT_MOC_LITERAL(18, 407, 24), // "DropLocation_OutterRight"
QT_MOC_LITERAL(19, 432, 25), // "DropLocation_OutterBottom"
QT_MOC_LITERAL(20, 458, 18), // "DropLocation_First"
QT_MOC_LITERAL(21, 477, 17) // "DropLocation_Last"

    },
    "KDDockWidgets::DropIndicatorOverlayInterface\0"
    "hoveredFrameChanged\0\0KDDockWidgets::Frame*\0"
    "hoveredFrameRectChanged\0"
    "currentDropLocationChanged\0hoveredFrameRect\0"
    "currentDropLocation\0"
    "KDDockWidgets::DropIndicatorOverlayInterface::DropLocation\0"
    "DropLocation\0DropLocation_None\0"
    "DropLocation_Left\0DropLocation_Top\0"
    "DropLocation_Right\0DropLocation_Bottom\0"
    "DropLocation_Center\0DropLocation_OutterLeft\0"
    "DropLocation_OutterTop\0DropLocation_OutterRight\0"
    "DropLocation_OutterBottom\0DropLocation_First\0"
    "DropLocation_Last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__DropIndicatorOverlayInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       1,   42, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QRect, 0x00495001,
       7, 0x80000000 | 8, 0x00495009,

 // properties: notify_signal_id
       1,
       2,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,   12,   47,

 // enum data: key, value
      10, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_None),
      11, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_Left),
      12, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_Top),
      13, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_Right),
      14, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_Bottom),
      15, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_Center),
      16, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_OutterLeft),
      17, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_OutterTop),
      18, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_OutterRight),
      19, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_OutterBottom),
      20, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_First),
      21, uint(KDDockWidgets::DropIndicatorOverlayInterface::DropLocation_Last),

       0        // eod
};

void KDDockWidgets::DropIndicatorOverlayInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DropIndicatorOverlayInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hoveredFrameChanged((*reinterpret_cast< KDDockWidgets::Frame*(*)>(_a[1]))); break;
        case 1: _t->hoveredFrameRectChanged(); break;
        case 2: _t->currentDropLocationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDDockWidgets::Frame* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DropIndicatorOverlayInterface::*)(KDDockWidgets::Frame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropIndicatorOverlayInterface::hoveredFrameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DropIndicatorOverlayInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropIndicatorOverlayInterface::hoveredFrameRectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DropIndicatorOverlayInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DropIndicatorOverlayInterface::currentDropLocationChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DropIndicatorOverlayInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->hoveredFrameRect(); break;
        case 1: *reinterpret_cast< KDDockWidgets::DropIndicatorOverlayInterface::DropLocation*>(_v) = _t->currentDropLocation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::DropIndicatorOverlayInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAdapter::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__DropIndicatorOverlayInterface.data,
    qt_meta_data_KDDockWidgets__DropIndicatorOverlayInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::DropIndicatorOverlayInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::DropIndicatorOverlayInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__DropIndicatorOverlayInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidgetAdapter::qt_metacast(_clname);
}

int KDDockWidgets::DropIndicatorOverlayInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAdapter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
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
void KDDockWidgets::DropIndicatorOverlayInterface::hoveredFrameChanged(KDDockWidgets::Frame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDDockWidgets::DropIndicatorOverlayInterface::hoveredFrameRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDDockWidgets::DropIndicatorOverlayInterface::currentDropLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
