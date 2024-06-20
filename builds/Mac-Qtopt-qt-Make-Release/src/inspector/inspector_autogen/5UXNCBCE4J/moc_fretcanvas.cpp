/****************************************************************************
** Meta object code from reading C++ file 'fretcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/view/widgets/fretcanvas.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fretcanvas.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretCanvasENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretCanvasENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::FretCanvas",
    "diagramChanged",
    "",
    "diagram",
    "currentFretDotTypeChanged",
    "currentFretDotType",
    "isBarreModeOnChanged",
    "isBarreModeOn",
    "isMultipleDotsModeOnChanged",
    "isMultipleDotsModeOn",
    "colorChanged",
    "color",
    "setCurrentFretDotType",
    "setIsBarreModeOn",
    "setIsMultipleDotsModeOn",
    "setColor",
    "clear"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEFretCanvasENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    6 /* Public */,
       4,    1,   77,    2, 0x06,    8 /* Public */,
       6,    1,   80,    2, 0x06,   10 /* Public */,
       8,    1,   83,    2, 0x06,   12 /* Public */,
      10,    1,   86,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   89,    2, 0x0a,   16 /* Public */,
      13,    1,   92,    2, 0x0a,   18 /* Public */,
      14,    1,   95,    2, 0x0a,   20 /* Public */,
      15,    1,   98,    2, 0x0a,   22 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  101,    2, 0x02,   24 /* Public */,

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
       3, QMetaType::QVariant, 0x00015003, uint(0), 0,
       7, QMetaType::Bool, 0x00015103, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(3), 0,
       5, QMetaType::Int, 0x00015103, uint(1), 0,
      11, QMetaType::QColor, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::FretCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretCanvasENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEFretCanvasENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretCanvasENDCLASS_t,
        // property 'diagram'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'isBarreModeOn'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isMultipleDotsModeOn'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'currentFretDotType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FretCanvas, std::true_type>,
        // method 'diagramChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'currentFretDotTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isBarreModeOnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isMultipleDotsModeOnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'colorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'setCurrentFretDotType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setIsBarreModeOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsMultipleDotsModeOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::FretCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FretCanvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->diagramChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 1: _t->currentFretDotTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->isBarreModeOnChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isMultipleDotsModeOnChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->colorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 5: _t->setCurrentFretDotType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setIsBarreModeOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setIsMultipleDotsModeOn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 9: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FretCanvas::*)(QVariant );
            if (_t _q_method = &FretCanvas::diagramChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(int );
            if (_t _q_method = &FretCanvas::currentFretDotTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(bool );
            if (_t _q_method = &FretCanvas::isBarreModeOnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(bool );
            if (_t _q_method = &FretCanvas::isMultipleDotsModeOnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FretCanvas::*)(QColor );
            if (_t _q_method = &FretCanvas::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::FretCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::FretCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEFretCanvasENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return muse::uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::inspector::FretCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
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
