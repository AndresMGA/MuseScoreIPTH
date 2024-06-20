/****************************************************************************
** Meta object code from reading C++ file 'fretcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/view/widgets/fretcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fretcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__FretCanvas_t {
    QByteArrayData data[17];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__FretCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__FretCanvas_t qt_meta_stringdata_mu__inspector__FretCanvas = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mu::inspector::FretCanvas"
QT_MOC_LITERAL(1, 26, 14), // "diagramChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "diagram"
QT_MOC_LITERAL(4, 50, 25), // "currentFretDotTypeChanged"
QT_MOC_LITERAL(5, 76, 18), // "currentFretDotType"
QT_MOC_LITERAL(6, 95, 20), // "isBarreModeOnChanged"
QT_MOC_LITERAL(7, 116, 13), // "isBarreModeOn"
QT_MOC_LITERAL(8, 130, 27), // "isMultipleDotsModeOnChanged"
QT_MOC_LITERAL(9, 158, 20), // "isMultipleDotsModeOn"
QT_MOC_LITERAL(10, 179, 12), // "colorChanged"
QT_MOC_LITERAL(11, 192, 5), // "color"
QT_MOC_LITERAL(12, 198, 21), // "setCurrentFretDotType"
QT_MOC_LITERAL(13, 220, 16), // "setIsBarreModeOn"
QT_MOC_LITERAL(14, 237, 23), // "setIsMultipleDotsModeOn"
QT_MOC_LITERAL(15, 261, 8), // "setColor"
QT_MOC_LITERAL(16, 270, 5) // "clear"

    },
    "mu::inspector::FretCanvas\0diagramChanged\0"
    "\0diagram\0currentFretDotTypeChanged\0"
    "currentFretDotType\0isBarreModeOnChanged\0"
    "isBarreModeOn\0isMultipleDotsModeOnChanged\0"
    "isMultipleDotsModeOn\0colorChanged\0"
    "color\0setCurrentFretDotType\0"
    "setIsBarreModeOn\0setIsMultipleDotsModeOn\0"
    "setColor\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__FretCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    0,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QColor,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QColor,   11,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QVariant, 0x00495003,
       7, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
       5, QMetaType::Int, 0x00495103,
      11, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       3,
       1,
       4,

       0        // eod
};

void mu::inspector::FretCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FretCanvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->diagramChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->currentFretDotTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->isBarreModeOnChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->isMultipleDotsModeOnChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setCurrentFretDotType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setIsBarreModeOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setIsMultipleDotsModeOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 9: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FretCanvas::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FretCanvas::diagramChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FretCanvas::currentFretDotTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FretCanvas::isBarreModeOnChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FretCanvas::isMultipleDotsModeOnChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FretCanvas::colorChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FretCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->diagram(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isBarreModeOn(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isMultipleDotsModeOn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentFretDotType(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FretCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFretDiagram(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setIsBarreModeOn(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsMultipleDotsModeOn(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setCurrentFretDotType(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::FretCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__FretCanvas.data,
    qt_meta_data_mu__inspector__FretCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::FretCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::FretCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__FretCanvas.stringdata0))
        return static_cast<void*>(this);
    return uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::inspector::FretCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::inspector::FretCanvas::diagramChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::FretCanvas::currentFretDotTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::FretCanvas::isBarreModeOnChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::FretCanvas::isMultipleDotsModeOnChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::inspector::FretCanvas::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
