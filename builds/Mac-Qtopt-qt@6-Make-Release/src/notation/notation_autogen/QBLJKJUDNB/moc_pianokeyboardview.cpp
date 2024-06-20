/****************************************************************************
** Meta object code from reading C++ file 'pianokeyboardview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/pianokeyboard/pianokeyboardview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pianokeyboardview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__PianoKeyboardView_t {
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__PianoKeyboardView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__PianoKeyboardView_t qt_meta_stringdata_mu__notation__PianoKeyboardView = {
    {
QT_MOC_LITERAL(0, 0, 31), // "mu::notation::PianoKeyboardView"
QT_MOC_LITERAL(1, 32, 19), // "numberOfKeysChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 22), // "keyWidthScalingChanged"
QT_MOC_LITERAL(4, 76, 16), // "scrollBarChanged"
QT_MOC_LITERAL(5, 93, 5), // "scale"
QT_MOC_LITERAL(6, 99, 6), // "factor"
QT_MOC_LITERAL(7, 106, 1), // "x"
QT_MOC_LITERAL(8, 108, 12), // "numberOfKeys"
QT_MOC_LITERAL(9, 121, 15), // "keyWidthScaling"
QT_MOC_LITERAL(10, 137, 17), // "scrollBarPosition"
QT_MOC_LITERAL(11, 155, 13) // "scrollBarSize"

    },
    "mu::notation::PianoKeyboardView\0"
    "numberOfKeysChanged\0\0keyWidthScalingChanged\0"
    "scrollBarChanged\0scale\0factor\0x\0"
    "numberOfKeys\0keyWidthScaling\0"
    "scrollBarPosition\0scrollBarSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__PianoKeyboardView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    6,    7,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::QReal, 0x00495003,
      10, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,

       0        // eod
};

void mu::notation::PianoKeyboardView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PianoKeyboardView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numberOfKeysChanged(); break;
        case 1: _t->keyWidthScalingChanged(); break;
        case 2: _t->scrollBarChanged(); break;
        case 3: _t->scale((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PianoKeyboardView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PianoKeyboardView::numberOfKeysChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PianoKeyboardView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PianoKeyboardView::keyWidthScalingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PianoKeyboardView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PianoKeyboardView::scrollBarChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PianoKeyboardView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->numberOfKeys(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->keyWidthScaling(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->scrollBarPosition(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->scrollBarSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PianoKeyboardView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumberOfKeys(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setScaling(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setScrollBarPosition(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::PianoKeyboardView::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__PianoKeyboardView.data,
    qt_meta_data_mu__notation__PianoKeyboardView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::PianoKeyboardView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::PianoKeyboardView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__PianoKeyboardView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::notation::PianoKeyboardView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::notation::PianoKeyboardView::numberOfKeysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::PianoKeyboardView::keyWidthScalingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::notation::PianoKeyboardView::scrollBarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
