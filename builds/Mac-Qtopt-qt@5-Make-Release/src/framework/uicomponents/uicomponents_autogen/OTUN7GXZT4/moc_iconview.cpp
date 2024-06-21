/****************************************************************************
** Meta object code from reading C++ file 'iconview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/uicomponents/view/iconview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iconview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__uicomponents__IconView_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__uicomponents__IconView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__uicomponents__IconView_t qt_meta_stringdata_mu__uicomponents__IconView = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mu::uicomponents::IconView"
QT_MOC_LITERAL(1, 27, 11), // "iconChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "icon"
QT_MOC_LITERAL(4, 45, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(5, 68, 5), // "color"
QT_MOC_LITERAL(6, 74, 7), // "setIcon"
QT_MOC_LITERAL(7, 82, 3), // "val"
QT_MOC_LITERAL(8, 86, 18), // "setBackgroundColor"
QT_MOC_LITERAL(9, 105, 15) // "backgroundColor"

    },
    "mu::uicomponents::IconView\0iconChanged\0"
    "\0icon\0backgroundColorChanged\0color\0"
    "setIcon\0val\0setBackgroundColor\0"
    "backgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__uicomponents__IconView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QColor,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    7,
    QMetaType::Void, QMetaType::QColor,    5,

 // properties: name, type, flags
       3, QMetaType::QVariant, 0x00495103,
       9, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void mu::uicomponents::IconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IconView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->iconChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->backgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setIcon((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IconView::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconView::iconChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IconView::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IconView::backgroundColorChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<IconView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->icon(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<IconView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIcon(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::uicomponents::IconView::staticMetaObject = { {
    QMetaObject::SuperData::link<QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_mu__uicomponents__IconView.data,
    qt_meta_data_mu__uicomponents__IconView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::uicomponents::IconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::uicomponents::IconView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__uicomponents__IconView.stringdata0))
        return static_cast<void*>(this);
    return QuickPaintedView::qt_metacast(_clname);
}

int mu::uicomponents::IconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QuickPaintedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void mu::uicomponents::IconView::iconChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::uicomponents::IconView::backgroundColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
