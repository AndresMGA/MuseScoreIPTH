/****************************************************************************
** Meta object code from reading C++ file 'abstractelementpopupmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/abstractelementpopupmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractelementpopupmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractElementPopupModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractElementPopupModelENDCLASS = QtMocHelpers::stringData(
    "mu::notation::AbstractElementPopupModel",
    "dataChanged",
    "",
    "itemRectChanged",
    "rect",
    "modelType",
    "PopupModelType",
    "itemRect",
    "TYPE_UNDEFINED",
    "TYPE_HARP_DIAGRAM",
    "TYPE_CAPO",
    "TYPE_STRING_TUNINGS",
    "TYPE_SOUND_FLAG"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEAbstractElementPopupModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    4 /* Public */,
       3,    1,   27,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00015409, uint(-1), 0,
       7, QMetaType::QRect, 0x00015001, uint(1), 0,

 // enums: name, alias, flags, count, data
       6,    6, 0x2,    5,   45,

 // enum data: key, value
       8, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_UNDEFINED),
       9, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_HARP_DIAGRAM),
      10, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_CAPO),
      11, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_STRING_TUNINGS),
      12, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_SOUND_FLAG),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::AbstractElementPopupModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractElementPopupModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEAbstractElementPopupModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractElementPopupModelENDCLASS_t,
        // property 'modelType'
        QtPrivate::TypeAndForceComplete<PopupModelType, std::true_type>,
        // property 'itemRect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // enum 'PopupModelType'
        QtPrivate::TypeAndForceComplete<AbstractElementPopupModel::PopupModelType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractElementPopupModel, std::true_type>,
        // method 'dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemRectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QRect, std::false_type>
    >,
    nullptr
} };

void mu::notation::AbstractElementPopupModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractElementPopupModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->itemRectChanged((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractElementPopupModel::*)();
            if (_t _q_method = &AbstractElementPopupModel::dataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractElementPopupModel::*)(QRect );
            if (_t _q_method = &AbstractElementPopupModel::itemRectChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractElementPopupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PopupModelType*>(_v) = _t->modelType(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->itemRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::notation::AbstractElementPopupModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::AbstractElementPopupModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractElementPopupModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    if (!strcmp(_clname, "muse::actions::Actionable"))
        return static_cast< muse::actions::Actionable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::notation::AbstractElementPopupModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void mu::notation::AbstractElementPopupModel::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::AbstractElementPopupModel::itemRectChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
