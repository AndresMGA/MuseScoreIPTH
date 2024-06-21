/****************************************************************************
** Meta object code from reading C++ file 'Separator_quick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/multisplitter/Separator_quick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Separator_quick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Layouting__SeparatorQuick_t {
    QByteArrayData data[9];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Layouting__SeparatorQuick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Layouting__SeparatorQuick_t qt_meta_stringdata_Layouting__SeparatorQuick = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Layouting::SeparatorQuick"
QT_MOC_LITERAL(1, 26, 17), // "isVerticalChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "onMousePressed"
QT_MOC_LITERAL(4, 60, 12), // "onMouseMoved"
QT_MOC_LITERAL(5, 73, 8), // "localPos"
QT_MOC_LITERAL(6, 82, 15), // "onMouseReleased"
QT_MOC_LITERAL(7, 98, 20), // "onMouseDoubleClicked"
QT_MOC_LITERAL(8, 119, 10) // "isVertical"

    },
    "Layouting::SeparatorQuick\0isVerticalChanged\0"
    "\0onMousePressed\0onMouseMoved\0localPos\0"
    "onMouseReleased\0onMouseDoubleClicked\0"
    "isVertical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Layouting__SeparatorQuick[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x02 /* Public */,
       4,    1,   41,    2, 0x02 /* Public */,
       6,    0,   44,    2, 0x02 /* Public */,
       7,    0,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    5,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Layouting::SeparatorQuick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SeparatorQuick *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isVerticalChanged(); break;
        case 1: _t->onMousePressed(); break;
        case 2: _t->onMouseMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 3: _t->onMouseReleased(); break;
        case 4: _t->onMouseDoubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeparatorQuick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeparatorQuick::isVerticalChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SeparatorQuick *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVertical(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Layouting::SeparatorQuick::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_Layouting__SeparatorQuick.data,
    qt_meta_data_Layouting__SeparatorQuick,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Layouting::SeparatorQuick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Layouting::SeparatorQuick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Layouting__SeparatorQuick.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Layouting::Separator"))
        return static_cast< Layouting::Separator*>(this);
    if (!strcmp(_clname, "Layouting::Widget_quick"))
        return static_cast< Layouting::Widget_quick*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Layouting::SeparatorQuick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void Layouting::SeparatorQuick::isVerticalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
