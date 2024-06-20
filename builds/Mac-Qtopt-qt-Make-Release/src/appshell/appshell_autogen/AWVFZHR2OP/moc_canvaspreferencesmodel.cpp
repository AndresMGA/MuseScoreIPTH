/****************************************************************************
** Meta object code from reading C++ file 'canvaspreferencesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/preferences/canvaspreferencesmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvaspreferencesmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECanvasPreferencesModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECanvasPreferencesModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::CanvasPreferencesModel",
    "defaultZoomChanged",
    "",
    "mouseZoomPrecisionChanged",
    "scrollPagesOrientationChanged",
    "limitScrollAreaChanged",
    "selectionProximityChanged",
    "selectionProximity",
    "setMouseZoomPrecision",
    "precision",
    "setScrollPagesOrientation",
    "orientation",
    "setLimitScrollArea",
    "limit",
    "setSelectionProximity",
    "proximity",
    "load",
    "zoomTypes",
    "setDefaultZoomType",
    "zoomType",
    "setDefaultZoomLevel",
    "zoom",
    "defaultZoom",
    "mouseZoomPrecision",
    "scrollPagesOrientation",
    "limitScrollArea"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPECanvasPreferencesModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,  119, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    6 /* Public */,
       3,    0,   93,    2, 0x06,    7 /* Public */,
       4,    0,   94,    2, 0x06,    8 /* Public */,
       5,    0,   95,    2, 0x06,    9 /* Public */,
       6,    1,   96,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   99,    2, 0x0a,   12 /* Public */,
      10,    1,  102,    2, 0x0a,   14 /* Public */,
      12,    1,  105,    2, 0x0a,   16 /* Public */,
      14,    1,  108,    2, 0x0a,   18 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  111,    2, 0x02,   20 /* Public */,
      17,    0,  112,    2, 0x102,   21 /* Public | MethodIsConst  */,
      18,    1,  113,    2, 0x02,   22 /* Public */,
      20,    1,  116,    2, 0x02,   24 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QVariantList,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,

 // properties: name, type, flags
      22, QMetaType::QVariantMap, 0x00015001, uint(0), 0,
      23, QMetaType::Int, 0x00015103, uint(1), 0,
      24, QMetaType::Int, 0x00015103, uint(2), 0,
      25, QMetaType::Bool, 0x00015103, uint(3), 0,
       7, QMetaType::Int, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::appshell::CanvasPreferencesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECanvasPreferencesModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPECanvasPreferencesModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECanvasPreferencesModelENDCLASS_t,
        // property 'defaultZoom'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'mouseZoomPrecision'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'scrollPagesOrientation'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'limitScrollArea'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectionProximity'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CanvasPreferencesModel, std::true_type>,
        // method 'defaultZoomChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mouseZoomPrecisionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollPagesOrientationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'limitScrollAreaChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionProximityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMouseZoomPrecision'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setScrollPagesOrientation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setLimitScrollArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSelectionProximity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomTypes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'setDefaultZoomType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setDefaultZoomLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void mu::appshell::CanvasPreferencesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CanvasPreferencesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->defaultZoomChanged(); break;
        case 1: _t->mouseZoomPrecisionChanged(); break;
        case 2: _t->scrollPagesOrientationChanged(); break;
        case 3: _t->limitScrollAreaChanged(); break;
        case 4: _t->selectionProximityChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setMouseZoomPrecision((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setScrollPagesOrientation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setLimitScrollArea((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setSelectionProximity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->load(); break;
        case 10: { QVariantList _r = _t->zoomTypes();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setDefaultZoomType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->setDefaultZoomLevel((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CanvasPreferencesModel::*)();
            if (_t _q_method = &CanvasPreferencesModel::defaultZoomChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CanvasPreferencesModel::*)();
            if (_t _q_method = &CanvasPreferencesModel::mouseZoomPrecisionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CanvasPreferencesModel::*)();
            if (_t _q_method = &CanvasPreferencesModel::scrollPagesOrientationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CanvasPreferencesModel::*)();
            if (_t _q_method = &CanvasPreferencesModel::limitScrollAreaChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CanvasPreferencesModel::*)(int );
            if (_t _q_method = &CanvasPreferencesModel::selectionProximityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CanvasPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->defaultZoom(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->mouseZoomPrecision(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->scrollPagesOrientation(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->limitScrollArea(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->selectionProximity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CanvasPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMouseZoomPrecision(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setScrollPagesOrientation(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLimitScrollArea(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setSelectionProximity(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::appshell::CanvasPreferencesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::CanvasPreferencesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECanvasPreferencesModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::CanvasPreferencesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void mu::appshell::CanvasPreferencesModel::defaultZoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::appshell::CanvasPreferencesModel::mouseZoomPrecisionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::CanvasPreferencesModel::scrollPagesOrientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::CanvasPreferencesModel::limitScrollAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::appshell::CanvasPreferencesModel::selectionProximityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
