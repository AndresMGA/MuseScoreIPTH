/****************************************************************************
** Meta object code from reading C++ file 'pianokeyboardview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/pianokeyboard/pianokeyboardview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pianokeyboardview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEPianoKeyboardViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEPianoKeyboardViewENDCLASS = QtMocHelpers::stringData(
    "mu::notation::PianoKeyboardView",
    "numberOfKeysChanged",
    "",
    "keyWidthScalingChanged",
    "scrollBarChanged",
    "scale",
    "factor",
    "x",
    "numberOfKeys",
    "keyWidthScaling",
    "scrollBarPosition",
    "scrollBarSize"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEPianoKeyboardViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    5 /* Public */,
       3,    0,   39,    2, 0x06,    6 /* Public */,
       4,    0,   40,    2, 0x06,    7 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   41,    2, 0x02,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    6,    7,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00015103, uint(0), 0,
       9, QMetaType::QReal, 0x00015003, uint(1), 0,
      10, QMetaType::QReal, 0x00015103, uint(2), 0,
      11, QMetaType::QReal, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::PianoKeyboardView::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEPianoKeyboardViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEPianoKeyboardViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEPianoKeyboardViewENDCLASS_t,
        // property 'numberOfKeys'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'keyWidthScaling'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'scrollBarPosition'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'scrollBarSize'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PianoKeyboardView, std::true_type>,
        // method 'numberOfKeysChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyWidthScalingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollBarChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void mu::notation::PianoKeyboardView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PianoKeyboardView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numberOfKeysChanged(); break;
        case 1: _t->keyWidthScalingChanged(); break;
        case 2: _t->scrollBarChanged(); break;
        case 3: _t->scale((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PianoKeyboardView::*)();
            if (_t _q_method = &PianoKeyboardView::numberOfKeysChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PianoKeyboardView::*)();
            if (_t _q_method = &PianoKeyboardView::keyWidthScalingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PianoKeyboardView::*)();
            if (_t _q_method = &PianoKeyboardView::scrollBarChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::notation::PianoKeyboardView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::PianoKeyboardView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEPianoKeyboardViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return muse::uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::notation::PianoKeyboardView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
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
