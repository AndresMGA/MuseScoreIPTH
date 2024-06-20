/****************************************************************************
** Meta object code from reading C++ file 'ClassicIndicators_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/indicators/ClassicIndicators_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClassicIndicators_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__ClassicIndicators_t {
    QByteArrayData data[8];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__ClassicIndicators_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__ClassicIndicators_t qt_meta_stringdata_KDDockWidgets__ClassicIndicators = {
    {
QT_MOC_LITERAL(0, 0, 32), // "KDDockWidgets::ClassicIndicators"
QT_MOC_LITERAL(1, 33, 29), // "innerIndicatorsVisibleChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 30), // "outterIndicatorsVisibleChanged"
QT_MOC_LITERAL(4, 95, 26), // "tabIndicatorVisibleChanged"
QT_MOC_LITERAL(5, 122, 22), // "innerIndicatorsVisible"
QT_MOC_LITERAL(6, 145, 23), // "outterIndicatorsVisible"
QT_MOC_LITERAL(7, 169, 19) // "tabIndicatorVisible"

    },
    "KDDockWidgets::ClassicIndicators\0"
    "innerIndicatorsVisibleChanged\0\0"
    "outterIndicatorsVisibleChanged\0"
    "tabIndicatorVisibleChanged\0"
    "innerIndicatorsVisible\0outterIndicatorsVisible\0"
    "tabIndicatorVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__ClassicIndicators[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00495001,
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void KDDockWidgets::ClassicIndicators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClassicIndicators *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->innerIndicatorsVisibleChanged(); break;
        case 1: _t->outterIndicatorsVisibleChanged(); break;
        case 2: _t->tabIndicatorVisibleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClassicIndicators::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClassicIndicators::innerIndicatorsVisibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClassicIndicators::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClassicIndicators::outterIndicatorsVisibleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClassicIndicators::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClassicIndicators::tabIndicatorVisibleChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ClassicIndicators *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->innerIndicatorsVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->outterIndicatorsVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->tabIndicatorVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::ClassicIndicators::staticMetaObject = { {
    QMetaObject::SuperData::link<DropIndicatorOverlayInterface::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__ClassicIndicators.data,
    qt_meta_data_KDDockWidgets__ClassicIndicators,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::ClassicIndicators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::ClassicIndicators::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__ClassicIndicators.stringdata0))
        return static_cast<void*>(this);
    return DropIndicatorOverlayInterface::qt_metacast(_clname);
}

int KDDockWidgets::ClassicIndicators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DropIndicatorOverlayInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void KDDockWidgets::ClassicIndicators::innerIndicatorsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDDockWidgets::ClassicIndicators::outterIndicatorsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDDockWidgets::ClassicIndicators::tabIndicatorVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
