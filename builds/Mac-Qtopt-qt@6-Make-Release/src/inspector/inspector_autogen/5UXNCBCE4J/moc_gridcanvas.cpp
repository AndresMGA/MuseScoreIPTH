/****************************************************************************
** Meta object code from reading C++ file 'gridcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/view/widgets/gridcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gridcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__GridCanvas_t {
    QByteArrayData data[21];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__GridCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__GridCanvas_t qt_meta_stringdata_mu__inspector__GridCanvas = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mu::inspector::GridCanvas"
QT_MOC_LITERAL(1, 26, 13), // "canvasChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "pointListChanged"
QT_MOC_LITERAL(4, 58, 9), // "pointList"
QT_MOC_LITERAL(5, 68, 15), // "rowCountChanged"
QT_MOC_LITERAL(6, 84, 8), // "rowCount"
QT_MOC_LITERAL(7, 93, 18), // "columnCountChanged"
QT_MOC_LITERAL(8, 112, 11), // "columnCount"
QT_MOC_LITERAL(9, 124, 17), // "rowSpacingChanged"
QT_MOC_LITERAL(10, 142, 10), // "rowSpacing"
QT_MOC_LITERAL(11, 153, 20), // "columnSpacingChanged"
QT_MOC_LITERAL(12, 174, 13), // "columnSpacing"
QT_MOC_LITERAL(13, 188, 29), // "shouldShowNegativeRowsChanged"
QT_MOC_LITERAL(14, 218, 22), // "shouldShowNegativeRows"
QT_MOC_LITERAL(15, 241, 12), // "setPointList"
QT_MOC_LITERAL(16, 254, 11), // "setRowCount"
QT_MOC_LITERAL(17, 266, 14), // "setColumnCount"
QT_MOC_LITERAL(18, 281, 13), // "setRowSpacing"
QT_MOC_LITERAL(19, 295, 16), // "setColumnSpacing"
QT_MOC_LITERAL(20, 312, 25) // "setShouldShowNegativeRows"

    },
    "mu::inspector::GridCanvas\0canvasChanged\0"
    "\0pointListChanged\0pointList\0rowCountChanged\0"
    "rowCount\0columnCountChanged\0columnCount\0"
    "rowSpacingChanged\0rowSpacing\0"
    "columnSpacingChanged\0columnSpacing\0"
    "shouldShowNegativeRowsChanged\0"
    "shouldShowNegativeRows\0setPointList\0"
    "setRowCount\0setColumnCount\0setRowSpacing\0"
    "setColumnSpacing\0setShouldShowNegativeRows"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__GridCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,
       9,    1,   89,    2, 0x06 /* Public */,
      11,    1,   92,    2, 0x06 /* Public */,
      13,    1,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   98,    2, 0x0a /* Public */,
      16,    1,  101,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      18,    1,  107,    2, 0x0a /* Public */,
      19,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
       4, QMetaType::QVariant, 0x00495103,
       6, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void mu::inspector::GridCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GridCanvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canvasChanged(); break;
        case 1: _t->pointListChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->rowCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->columnCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->rowSpacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->columnSpacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->shouldShowNegativeRowsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setPointList((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 8: _t->setRowCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setColumnCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setRowSpacing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setColumnSpacing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setShouldShowNegativeRows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GridCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GridCanvas::canvasChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GridCanvas::pointListChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GridCanvas::rowCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GridCanvas::columnCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GridCanvas::rowSpacingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GridCanvas::columnSpacingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GridCanvas::shouldShowNegativeRowsChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GridCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->pointList(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->rowSpacing(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->columnSpacing(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->shouldShowNegativeRows(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GridCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPointList(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setRowCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRowSpacing(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setColumnSpacing(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setShouldShowNegativeRows(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::GridCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__GridCanvas.data,
    qt_meta_data_mu__inspector__GridCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::GridCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::GridCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__GridCanvas.stringdata0))
        return static_cast<void*>(this);
    return uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::inspector::GridCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
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
void mu::inspector::GridCanvas::canvasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::GridCanvas::pointListChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::GridCanvas::rowCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::GridCanvas::columnCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::inspector::GridCanvas::rowSpacingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::inspector::GridCanvas::columnSpacingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::inspector::GridCanvas::shouldShowNegativeRowsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
