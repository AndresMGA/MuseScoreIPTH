/****************************************************************************
** Meta object code from reading C++ file 'fraction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/engraving/api/v1/fraction.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fraction.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEFractionWrapperENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEFractionWrapperENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::FractionWrapper",
    "setFraction",
    "",
    "engraving::Fraction",
    "_f",
    "numerator",
    "denominator",
    "ticks",
    "str"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEFractionWrapperENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00015001, uint(-1), 0,
       6, QMetaType::Int, 0x00015001, uint(-1), 0,
       7, QMetaType::Int, 0x00015001, uint(-1), 0,
       8, QMetaType::QString, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::FractionWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEFractionWrapperENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEFractionWrapperENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEFractionWrapperENDCLASS_t,
        // property 'numerator'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'denominator'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'ticks'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'str'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FractionWrapper, std::true_type>,
        // method 'setFraction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<engraving::Fraction, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::FractionWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FractionWrapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFraction((*reinterpret_cast< std::add_pointer_t<engraving::Fraction>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FractionWrapper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->numerator(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->denominator(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->ticks(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->toString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::FractionWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::FractionWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEFractionWrapperENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::engraving::apiv1::FractionWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
