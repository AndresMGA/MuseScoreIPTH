/****************************************************************************
** Meta object code from reading C++ file 'qquickwheelarea_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/treeview/qquickwheelarea_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwheelarea_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQQuickWheelArea1ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQQuickWheelArea1ENDCLASS = QtMocHelpers::stringData(
    "QQuickWheelArea1",
    "verticalValueChanged",
    "",
    "verticalMinimumValueChanged",
    "verticalMaximumValueChanged",
    "horizontalValueChanged",
    "horizontalMinimumValueChanged",
    "horizontalMaximumValueChanged",
    "verticalWheelMoved",
    "horizontalWheelMoved",
    "scrollSpeedChanged",
    "activeChanged",
    "verticalDelta",
    "horizontalDelta",
    "horizontalMinimumValue",
    "horizontalMaximumValue",
    "verticalMinimumValue",
    "verticalMaximumValue",
    "horizontalValue",
    "verticalValue",
    "scrollSpeed",
    "active",
    "inverted"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQQuickWheelArea1ENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      11,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,   12 /* Public */,
       3,    0,   75,    2, 0x06,   13 /* Public */,
       4,    0,   76,    2, 0x06,   14 /* Public */,
       5,    0,   77,    2, 0x06,   15 /* Public */,
       6,    0,   78,    2, 0x06,   16 /* Public */,
       7,    0,   79,    2, 0x06,   17 /* Public */,
       8,    0,   80,    2, 0x06,   18 /* Public */,
       9,    0,   81,    2, 0x06,   19 /* Public */,
      10,    0,   82,    2, 0x06,   20 /* Public */,
      11,    0,   83,    2, 0x06,   21 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QReal, 0x00015103, uint(6), 0,
      13, QMetaType::QReal, 0x00015103, uint(7), 0,
      14, QMetaType::QReal, 0x00015103, uint(4), 0,
      15, QMetaType::QReal, 0x00015103, uint(5), 0,
      16, QMetaType::QReal, 0x00015103, uint(1), 0,
      17, QMetaType::QReal, 0x00015103, uint(2), 0,
      18, QMetaType::QReal, 0x00015103, uint(3), 0,
      19, QMetaType::QReal, 0x00015103, uint(0), 0,
      20, QMetaType::QReal, 0x00015103, uint(8), 0,
      21, QMetaType::Bool, 0x00015103, uint(9), 0,
      22, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QQuickWheelArea1::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQQuickWheelArea1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQQuickWheelArea1ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQQuickWheelArea1ENDCLASS_t,
        // property 'verticalDelta'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'horizontalDelta'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'horizontalMinimumValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'horizontalMaximumValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'verticalMinimumValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'verticalMaximumValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'horizontalValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'verticalValue'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'scrollSpeed'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'active'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'inverted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QQuickWheelArea1, std::true_type>,
        // method 'verticalValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'verticalMinimumValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'verticalMaximumValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'horizontalValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'horizontalMinimumValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'horizontalMaximumValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'verticalWheelMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'horizontalWheelMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QQuickWheelArea1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickWheelArea1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->verticalValueChanged(); break;
        case 1: _t->verticalMinimumValueChanged(); break;
        case 2: _t->verticalMaximumValueChanged(); break;
        case 3: _t->horizontalValueChanged(); break;
        case 4: _t->horizontalMinimumValueChanged(); break;
        case 5: _t->horizontalMaximumValueChanged(); break;
        case 6: _t->verticalWheelMoved(); break;
        case 7: _t->horizontalWheelMoved(); break;
        case 8: _t->scrollSpeedChanged(); break;
        case 9: _t->activeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::verticalValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::verticalMinimumValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::verticalMaximumValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::horizontalValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::horizontalMinimumValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::horizontalMaximumValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::verticalWheelMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::horizontalWheelMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::scrollSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QQuickWheelArea1::*)();
            if (_t _q_method = &QQuickWheelArea1::activeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickWheelArea1 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->verticalDelta(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->horizontalDelta(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->horizontalMinimumValue(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->horizontalMaximumValue(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->verticalMinimumValue(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->verticalMaximumValue(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->horizontalValue(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->verticalValue(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->scrollSpeed(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isInverted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickWheelArea1 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVerticalDelta(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setHorizontalDelta(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setHorizontalMinimumValue(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setHorizontalMaximumValue(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setVerticalMinimumValue(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setVerticalMaximumValue(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setHorizontalValue(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setVerticalValue(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setScrollSpeed(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QQuickWheelArea1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWheelArea1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQQuickWheelArea1ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickWheelArea1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QQuickWheelArea1::verticalValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickWheelArea1::verticalMinimumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickWheelArea1::verticalMaximumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickWheelArea1::horizontalValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickWheelArea1::horizontalMinimumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickWheelArea1::horizontalMaximumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickWheelArea1::verticalWheelMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickWheelArea1::horizontalWheelMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickWheelArea1::scrollSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickWheelArea1::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
