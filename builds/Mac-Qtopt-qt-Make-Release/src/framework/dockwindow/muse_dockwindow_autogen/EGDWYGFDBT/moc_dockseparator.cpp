/****************************************************************************
** Meta object code from reading C++ file 'dockseparator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/dockwindow/internal/dockseparator.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockseparator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockSeparatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockSeparatorENDCLASS = QtMocHelpers::stringData(
    "muse::dock::DockSeparator",
    "isVerticalChanged",
    "",
    "isSeparatorVisibleChanged",
    "showResizeCursorChanged",
    "onMousePressed",
    "onMouseMoved",
    "localPos",
    "onMouseReleased",
    "onMouseDoubleClicked",
    "isVertical",
    "isSeparatorVisible",
    "showResizeCursor"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEdockSCOPEDockSeparatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   65, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    4 /* Public */,
       3,    0,   57,    2, 0x06,    5 /* Public */,
       4,    0,   58,    2, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x02,    7 /* Public */,
       6,    1,   60,    2, 0x02,    8 /* Public */,
       8,    0,   63,    2, 0x02,   10 /* Public */,
       9,    0,   64,    2, 0x02,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00015001, uint(0), 0,
      11, QMetaType::Bool, 0x00015001, uint(1), 0,
      12, QMetaType::Bool, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::dock::DockSeparator::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockSeparatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEdockSCOPEDockSeparatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockSeparatorENDCLASS_t,
        // property 'isVertical'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSeparatorVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showResizeCursor'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockSeparator, std::true_type>,
        // method 'isVerticalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSeparatorVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showResizeCursorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMousePressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMouseMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        // method 'onMouseReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMouseDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::dock::DockSeparator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockSeparator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isVerticalChanged(); break;
        case 1: _t->isSeparatorVisibleChanged(); break;
        case 2: _t->showResizeCursorChanged(); break;
        case 3: _t->onMousePressed(); break;
        case 4: _t->onMouseMoved((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 5: _t->onMouseReleased(); break;
        case 6: _t->onMouseDoubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockSeparator::*)();
            if (_t _q_method = &DockSeparator::isVerticalChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockSeparator::*)();
            if (_t _q_method = &DockSeparator::isSeparatorVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockSeparator::*)();
            if (_t _q_method = &DockSeparator::showResizeCursorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockSeparator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVertical(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSeparatorVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showResizeCursor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::dock::DockSeparator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::dock::DockSeparator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockSeparatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Layouting::Separator"))
        return static_cast< Layouting::Separator*>(this);
    if (!strcmp(_clname, "Layouting::Widget_quick"))
        return static_cast< Layouting::Widget_quick*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int muse::dock::DockSeparator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void muse::dock::DockSeparator::isVerticalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::dock::DockSeparator::isSeparatorVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::dock::DockSeparator::showResizeCursorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
