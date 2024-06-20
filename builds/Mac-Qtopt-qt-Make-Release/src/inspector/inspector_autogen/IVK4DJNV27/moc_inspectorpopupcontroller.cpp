/****************************************************************************
** Meta object code from reading C++ file 'inspectorpopupcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/inspectorpopupcontroller.h"
#include <QQuickItem>
#include "uicomponents/view/popupview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspectorpopupcontroller.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorPopupControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorPopupControllerENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::InspectorPopupController",
    "visualControlChanged",
    "",
    "popupChanged",
    "notationViewChanged",
    "QQuickItem*",
    "notationView",
    "setVisualControl",
    "control",
    "setPopup",
    "muse::uicomponents::PopupView*",
    "popup",
    "setNotationView",
    "closePopup",
    "doClosePopup",
    "load",
    "visualControl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEInspectorPopupControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   85, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    4 /* Public */,
       3,    0,   69,    2, 0x06,    5 /* Public */,
       4,    1,   70,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   73,    2, 0x0a,    8 /* Public */,
       9,    1,   76,    2, 0x0a,   10 /* Public */,
      12,    1,   79,    2, 0x0a,   12 /* Public */,
      13,    0,   82,    2, 0x08,   14 /* Private */,
      14,    0,   83,    2, 0x08,   15 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,   84,    2, 0x02,   16 /* Public */,

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
      16, 0x80000000 | 5, 0x0001510b, uint(0), 0,
      11, 0x80000000 | 10, 0x0001510b, uint(1), 0,
       6, 0x80000000 | 5, 0x0001510b, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::InspectorPopupController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorPopupControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEInspectorPopupControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorPopupControllerENDCLASS_t,
        // property 'visualControl'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'popup'
        QtPrivate::TypeAndForceComplete<muse::uicomponents::PopupView*, std::true_type>,
        // property 'notationView'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InspectorPopupController, std::true_type>,
        // method 'visualControlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'popupChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notationViewChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'setVisualControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'setPopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::uicomponents::PopupView *, std::false_type>,
        // method 'setNotationView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'closePopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doClosePopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::InspectorPopupController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InspectorPopupController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visualControlChanged(); break;
        case 1: _t->popupChanged(); break;
        case 2: _t->notationViewChanged((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 3: _t->setVisualControl((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 4: _t->setPopup((*reinterpret_cast< std::add_pointer_t<muse::uicomponents::PopupView*>>(_a[1]))); break;
        case 5: _t->setNotationView((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 6: _t->closePopup(); break;
        case 7: _t->doClosePopup(); break;
        case 8: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InspectorPopupController::*)();
            if (_t _q_method = &InspectorPopupController::visualControlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InspectorPopupController::*)();
            if (_t _q_method = &InspectorPopupController::popupChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InspectorPopupController::*)(QQuickItem * );
            if (_t _q_method = &InspectorPopupController::notationViewChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InspectorPopupController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->visualControl(); break;
        case 1: *reinterpret_cast< muse::uicomponents::PopupView**>(_v) = _t->popup(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->notationView(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InspectorPopupController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisualControl(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setPopup(*reinterpret_cast< muse::uicomponents::PopupView**>(_v)); break;
        case 2: _t->setNotationView(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::InspectorPopupController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::InspectorPopupController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEInspectorPopupControllerENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
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
