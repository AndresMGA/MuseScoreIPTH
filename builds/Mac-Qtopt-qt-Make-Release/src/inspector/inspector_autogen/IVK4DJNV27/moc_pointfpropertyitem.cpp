/****************************************************************************
** Meta object code from reading C++ file 'pointfpropertyitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/pointfpropertyitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointfpropertyitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::PointFPropertyItem",
    "valueChanged",
    "x",
    "y"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       2, QMetaType::QReal, 0x00015103, uint(1879048193), 0,
       3, QMetaType::QReal, 0x00015103, uint(1879048193), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::PointFPropertyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS_t,
        // property 'x'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PointFPropertyItem, std::true_type>
    >,
    nullptr
} };

void mu::inspector::PointFPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PointFPropertyItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x_property(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y_property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PointFPropertyItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::inspector::PointFPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::PointFPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropertyItem::qt_metacast(_clname);
}

int mu::inspector::PointFPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace CheckNotifySignalValidity_CLASSmuSCOPEinspectorSCOPEPointFPropertyItemENDCLASS {
template<typename T> using has_nullary_valueChanged = decltype(std::declval<T>().valueChanged());
template<typename T> using has_unary_valueChanged = decltype(std::declval<T>().valueChanged(std::declval<qreal>()));
static_assert(qxp::is_detected_v<has_nullary_valueChanged, mu::inspector::PointFPropertyItem> || qxp::is_detected_v<has_unary_valueChanged, mu::inspector::PointFPropertyItem>,
              "NOTIFY signal valueChanged does not exist in class (or is private in its parent)");
}
QT_WARNING_POP
