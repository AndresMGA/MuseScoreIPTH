/****************************************************************************
** Meta object code from reading C++ file 'qquickrangemodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/treeview/qquickrangemodel_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickrangemodel_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQQuickRangeModel1ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQQuickRangeModel1ENDCLASS = QtMocHelpers::stringData(
    "QQuickRangeModel1",
    "valueChanged",
    "",
    "value",
    "positionChanged",
    "position",
    "stepSizeChanged",
    "stepSize",
    "invertedChanged",
    "inverted",
    "minimumChanged",
    "min",
    "maximumChanged",
    "max",
    "positionAtMinimumChanged",
    "positionAtMaximumChanged",
    "toMinimum",
    "toMaximum",
    "setValue",
    "setPosition",
    "increaseSingleStep",
    "decreaseSingleStep",
    "valueForPosition",
    "positionForValue",
    "minimumValue",
    "maximumValue",
    "positionAtMinimum",
    "positionAtMaximum"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQQuickRangeModel1ENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       8,  150, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    9 /* Public */,
       4,    1,  113,    2, 0x06,   11 /* Public */,
       6,    1,  116,    2, 0x06,   13 /* Public */,
       8,    1,  119,    2, 0x06,   15 /* Public */,
      10,    1,  122,    2, 0x06,   17 /* Public */,
      12,    1,  125,    2, 0x06,   19 /* Public */,
      14,    1,  128,    2, 0x06,   21 /* Public */,
      15,    1,  131,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  134,    2, 0x0a,   25 /* Public */,
      17,    0,  135,    2, 0x0a,   26 /* Public */,
      18,    1,  136,    2, 0x0a,   27 /* Public */,
      19,    1,  139,    2, 0x0a,   29 /* Public */,
      20,    0,  142,    2, 0x0a,   31 /* Public */,
      21,    0,  143,    2, 0x0a,   32 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      22,    1,  144,    2, 0x102,   33 /* Public | MethodIsConst  */,
      23,    1,  147,    2, 0x102,   35 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QReal,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QReal, QMetaType::QReal,    5,
    QMetaType::QReal, QMetaType::QReal,    3,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00115103, uint(0), 0,
      24, QMetaType::QReal, 0x00015003, uint(4), 0,
      25, QMetaType::QReal, 0x00015003, uint(5), 0,
       7, QMetaType::QReal, 0x00015103, uint(2), 0,
       5, QMetaType::QReal, 0x00015103, uint(1), 0,
      26, QMetaType::QReal, 0x00015103, uint(6), 0,
      27, QMetaType::QReal, 0x00015103, uint(7), 0,
       9, QMetaType::Bool, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QQuickRangeModel1::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQQuickRangeModel1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQQuickRangeModel1ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQQuickRangeModel1ENDCLASS_t,
        // property 'value'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'minimumValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'maximumValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'stepSize'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'position'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'positionAtMinimum'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'positionAtMaximum'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'inverted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QQuickRangeModel1, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'stepSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'invertedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'minimumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'maximumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'positionAtMinimumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'positionAtMaximumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'toMinimum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'increaseSingleStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decreaseSingleStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'valueForPosition'
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'positionForValue'
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>
    >,
    nullptr
} };

void QQuickRangeModel1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickRangeModel1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 2: _t->stepSizeChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->invertedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->minimumChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 5: _t->maximumChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->positionAtMinimumChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: _t->positionAtMaximumChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->toMinimum(); break;
        case 9: _t->toMaximum(); break;
        case 10: _t->setValue((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 11: _t->setPosition((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 12: _t->increaseSingleStep(); break;
        case 13: _t->decreaseSingleStep(); break;
        case 14: { qreal _r = _t->valueForPosition((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 15: { qreal _r = _t->positionForValue((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickRangeModel1::*)(qreal );
            if (_t _q_method = &QQuickRangeModel1::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickRangeModel1::*)(qreal );
            if (_t _q_method = &QQuickRangeModel1::positionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickRangeModel1::*)(qreal );
            if (_t _q_method = &QQuickRangeModel1::stepSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickRangeModel1::*)(bool );
            if (_t _q_method = &QQuickRangeModel1::invertedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickRangeModel1::*)(qreal );
            if (_t _q_method = &QQuickRangeModel1::minimumChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQuickRangeModel1::*)(qreal );
            if (_t _q_method = &QQuickRangeModel1::maximumChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QQuickRangeModel1::*)(qreal );
            if (_t _q_method = &QQuickRangeModel1::positionAtMinimumChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QQuickRangeModel1::*)(qreal );
            if (_t _q_method = &QQuickRangeModel1::positionAtMaximumChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickRangeModel1 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->stepSize(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->position(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->positionAtMinimum(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->positionAtMaximum(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->inverted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickRangeModel1 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setStepSize(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setPositionAtMinimum(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setPositionAtMaximum(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setInverted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QQuickRangeModel1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRangeModel1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQQuickRangeModel1ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickRangeModel1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QQuickRangeModel1::valueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickRangeModel1::positionChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickRangeModel1::stepSizeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickRangeModel1::invertedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickRangeModel1::minimumChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQuickRangeModel1::maximumChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QQuickRangeModel1::positionAtMinimumChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QQuickRangeModel1::positionAtMaximumChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
