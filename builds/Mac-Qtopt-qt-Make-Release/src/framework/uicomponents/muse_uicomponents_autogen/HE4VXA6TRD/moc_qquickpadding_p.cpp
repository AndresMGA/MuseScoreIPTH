/****************************************************************************
** Meta object code from reading C++ file 'qquickpadding_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/treeview/qquickpadding_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpadding_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQQuickPadding1ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQQuickPadding1ENDCLASS = QtMocHelpers::stringData(
    "QQuickPadding1",
    "leftChanged",
    "",
    "topChanged",
    "rightChanged",
    "bottomChanged",
    "setLeft",
    "arg",
    "setTop",
    "setRight",
    "setBottom",
    "left",
    "top",
    "right",
    "bottom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQQuickPadding1ENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    5 /* Public */,
       3,    0,   63,    2, 0x06,    6 /* Public */,
       4,    0,   64,    2, 0x06,    7 /* Public */,
       5,    0,   65,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   66,    2, 0x0a,    9 /* Public */,
       8,    1,   69,    2, 0x0a,   11 /* Public */,
       9,    1,   72,    2, 0x0a,   13 /* Public */,
      10,    1,   75,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00015103, uint(0), 0,
      12, QMetaType::Int, 0x00015103, uint(1), 0,
      13, QMetaType::Int, 0x00015103, uint(2), 0,
      14, QMetaType::Int, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QQuickPadding1::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQQuickPadding1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQQuickPadding1ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQQuickPadding1ENDCLASS_t,
        // property 'left'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'top'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'right'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'bottom'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QQuickPadding1, std::true_type>,
        // method 'leftChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'topChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rightChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bottomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setBottom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QQuickPadding1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickPadding1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->leftChanged(); break;
        case 1: _t->topChanged(); break;
        case 2: _t->rightChanged(); break;
        case 3: _t->bottomChanged(); break;
        case 4: _t->setLeft((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setTop((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setRight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setBottom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickPadding1::*)();
            if (_t _q_method = &QQuickPadding1::leftChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickPadding1::*)();
            if (_t _q_method = &QQuickPadding1::topChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickPadding1::*)();
            if (_t _q_method = &QQuickPadding1::rightChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickPadding1::*)();
            if (_t _q_method = &QQuickPadding1::bottomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickPadding1 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->left(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->top(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->right(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->bottom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickPadding1 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLeft(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRight(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBottom(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QQuickPadding1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPadding1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQQuickPadding1ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPadding1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QQuickPadding1::leftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPadding1::topChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPadding1::rightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPadding1::bottomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
