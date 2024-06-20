/****************************************************************************
** Meta object code from reading C++ file 'outputresourceitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/playback/view/internal/outputresourceitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputresourceitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS = QtMocHelpers::stringData(
    "mu::playback::OutputResourceItem",
    "fxParamsChanged",
    "",
    "setIsActive",
    "newIsActive",
    "isActiveChanged",
    "id",
    "isActive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   27,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015001, uint(0), 0,
       7, QMetaType::Bool, 0x00015103, uint(1879048197), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::playback::OutputResourceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractAudioResourceItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OutputResourceItem, std::true_type>,
        // method 'fxParamsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIsActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::playback::OutputResourceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OutputResourceItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fxParamsChanged(); break;
        case 1: _t->setIsActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OutputResourceItem::*)();
            if (_t _q_method = &OutputResourceItem::fxParamsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OutputResourceItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OutputResourceItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setIsActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::playback::OutputResourceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::OutputResourceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return AbstractAudioResourceItem::qt_metacast(_clname);
}

int mu::playback::OutputResourceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAudioResourceItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mu::playback::OutputResourceItem::fxParamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace CheckNotifySignalValidity_CLASSmuSCOPEplaybackSCOPEOutputResourceItemENDCLASS {
template<typename T> using has_nullary_isActiveChanged = decltype(std::declval<T>().isActiveChanged());
template<typename T> using has_unary_isActiveChanged = decltype(std::declval<T>().isActiveChanged(std::declval<bool>()));
static_assert(qxp::is_detected_v<has_nullary_isActiveChanged, mu::playback::OutputResourceItem> || qxp::is_detected_v<has_unary_isActiveChanged, mu::playback::OutputResourceItem>,
              "NOTIFY signal isActiveChanged does not exist in class (or is private in its parent)");
}
QT_WARNING_POP
