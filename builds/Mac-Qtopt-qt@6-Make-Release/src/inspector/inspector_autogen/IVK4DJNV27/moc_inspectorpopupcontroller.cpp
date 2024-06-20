/****************************************************************************
** Meta object code from reading C++ file 'inspectorpopupcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/inspectorpopupcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspectorpopupcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__InspectorPopupController_t {
    QByteArrayData data[18];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__InspectorPopupController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__InspectorPopupController_t qt_meta_stringdata_mu__inspector__InspectorPopupController = {
    {
QT_MOC_LITERAL(0, 0, 39), // "mu::inspector::InspectorPopup..."
QT_MOC_LITERAL(1, 40, 20), // "visualControlChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 12), // "popupChanged"
QT_MOC_LITERAL(4, 75, 19), // "notationViewChanged"
QT_MOC_LITERAL(5, 95, 11), // "QQuickItem*"
QT_MOC_LITERAL(6, 107, 12), // "notationView"
QT_MOC_LITERAL(7, 120, 16), // "setVisualControl"
QT_MOC_LITERAL(8, 137, 7), // "control"
QT_MOC_LITERAL(9, 145, 8), // "setPopup"
QT_MOC_LITERAL(10, 154, 24), // "uicomponents::PopupView*"
QT_MOC_LITERAL(11, 179, 5), // "popup"
QT_MOC_LITERAL(12, 185, 15), // "setNotationView"
QT_MOC_LITERAL(13, 201, 10), // "closePopup"
QT_MOC_LITERAL(14, 212, 12), // "doClosePopup"
QT_MOC_LITERAL(15, 225, 4), // "load"
QT_MOC_LITERAL(16, 230, 13), // "visualControl"
QT_MOC_LITERAL(17, 244, 28) // "mu::uicomponents::PopupView*"

    },
    "mu::inspector::InspectorPopupController\0"
    "visualControlChanged\0\0popupChanged\0"
    "notationViewChanged\0QQuickItem*\0"
    "notationView\0setVisualControl\0control\0"
    "setPopup\0uicomponents::PopupView*\0"
    "popup\0setNotationView\0closePopup\0"
    "doClosePopup\0load\0visualControl\0"
    "mu::uicomponents::PopupView*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__InspectorPopupController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
      12,    1,   70,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x08 /* Private */,
      14,    0,   74,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      16, 0x80000000 | 5, 0x0049510b,
      11, 0x80000000 | 17, 0x0049510b,
       6, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::inspector::InspectorPopupController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InspectorPopupController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visualControlChanged(); break;
        case 1: _t->popupChanged(); break;
        case 2: _t->notationViewChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 3: _t->setVisualControl((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 4: _t->setPopup((*reinterpret_cast< uicomponents::PopupView*(*)>(_a[1]))); break;
        case 5: _t->setNotationView((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 6: _t->closePopup(); break;
        case 7: _t->doClosePopup(); break;
        case 8: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InspectorPopupController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectorPopupController::visualControlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InspectorPopupController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectorPopupController::popupChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InspectorPopupController::*)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectorPopupController::notationViewChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InspectorPopupController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->visualControl(); break;
        case 1: *reinterpret_cast< mu::uicomponents::PopupView**>(_v) = _t->popup(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->notationView(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InspectorPopupController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisualControl(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setPopup(*reinterpret_cast< mu::uicomponents::PopupView**>(_v)); break;
        case 2: _t->setNotationView(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::InspectorPopupController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__InspectorPopupController.data,
    qt_meta_data_mu__inspector__InspectorPopupController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::InspectorPopupController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::InspectorPopupController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__InspectorPopupController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::inspector::InspectorPopupController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void mu::inspector::InspectorPopupController::visualControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::InspectorPopupController::popupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::inspector::InspectorPopupController::notationViewChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
