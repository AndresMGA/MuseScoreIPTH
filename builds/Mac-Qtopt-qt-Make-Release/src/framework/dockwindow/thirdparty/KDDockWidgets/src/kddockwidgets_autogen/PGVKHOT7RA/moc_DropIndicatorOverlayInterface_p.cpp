/****************************************************************************
** Meta object code from reading C++ file 'DropIndicatorOverlayInterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../src/framework/dockwindow/thirdparty/KDDockWidgets/src/private/DropIndicatorOverlayInterface_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DropIndicatorOverlayInterface_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDropIndicatorOverlayInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDropIndicatorOverlayInterfaceENDCLASS = QtMocHelpers::stringData(
    "KDDockWidgets::DropIndicatorOverlayInterface",
    "hoveredFrameChanged",
    "",
    "KDDockWidgets::Frame*",
    "hoveredFrameRectChanged",
    "currentDropLocationChanged",
    "hoveredFrameRect",
    "currentDropLocation",
    "KDDockWidgets::DropIndicatorOverlayInterface::DropLocation",
    "DropLocation",
    "DropLocation_None",
    "DropLocation_Left",
    "DropLocation_Top",
    "DropLocation_Right",
    "DropLocation_Bottom",
    "DropLocation_Center",
    "DropLocation_OutterLeft",
    "DropLocation_OutterTop",
    "DropLocation_OutterRight",
    "DropLocation_OutterBottom",
    "DropLocation_First",
    "DropLocation_Last"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKDDockWidgetsSCOPEDropIndicatorOverlayInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   37, // properties
       1,   47, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    4 /* Public */,
       4,    0,   35,    2, 0x06,    6 /* Public */,
       5,    0,   36,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QRect, 0x00015001, uint(1), 0,
       7, 0x80000000 | 8, 0x00015009, uint(2), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,   12,   52,

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

Q_CONSTINIT const QMetaObject KDDockWidgets::DropIndicatorOverlayInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidgetAdapter::staticMetaObject>(),
    qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDropIndicatorOverlayInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKDDockWidgetsSCOPEDropIndicatorOverlayInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDropIndicatorOverlayInterfaceENDCLASS_t,
        // property 'hoveredFrameRect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'currentDropLocation'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::DropIndicatorOverlayInterface::DropLocation, std::true_type>,
        // enum 'DropLocation'
        QtPrivate::TypeAndForceComplete<DropIndicatorOverlayInterface::DropLocation, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DropIndicatorOverlayInterface, std::true_type>,
        // method 'hoveredFrameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KDDockWidgets::Frame *, std::false_type>,
        // method 'hoveredFrameRectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentDropLocationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void KDDockWidgets::DropIndicatorOverlayInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DropIndicatorOverlayInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hoveredFrameChanged((*reinterpret_cast< std::add_pointer_t<KDDockWidgets::Frame*>>(_a[1]))); break;
        case 1: _t->hoveredFrameRectChanged(); break;
        case 2: _t->currentDropLocationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KDDockWidgets::Frame* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DropIndicatorOverlayInterface::*)(KDDockWidgets::Frame * );
            if (_t _q_method = &DropIndicatorOverlayInterface::hoveredFrameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DropIndicatorOverlayInterface::*)();
            if (_t _q_method = &DropIndicatorOverlayInterface::hoveredFrameRectChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DropIndicatorOverlayInterface::*)();
            if (_t _q_method = &DropIndicatorOverlayInterface::currentDropLocationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *KDDockWidgets::DropIndicatorOverlayInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::DropIndicatorOverlayInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDropIndicatorOverlayInterfaceENDCLASS.stringdata0))
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
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
