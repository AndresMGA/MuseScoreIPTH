/****************************************************************************
** Meta object code from reading C++ file 'noteflagstypeselectormodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/internal/noteflagstypeselectormodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteflagstypeselectormodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteFlagsTypeSelectorModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteFlagsTypeSelectorModelENDCLASS = QtMocHelpers::stringData(
    "mu::notation::NoteFlagsTypeSelectorModel",
    "useStraightNoteFlagsChanged",
    "",
    "load",
    "useStraightNoteFlags"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPENoteFlagsTypeSelectorModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x02,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::NoteFlagsTypeSelectorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteFlagsTypeSelectorModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPENoteFlagsTypeSelectorModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteFlagsTypeSelectorModelENDCLASS_t,
        // property 'useStraightNoteFlags'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NoteFlagsTypeSelectorModel, std::true_type>,
        // method 'useStraightNoteFlagsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::notation::NoteFlagsTypeSelectorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteFlagsTypeSelectorModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->useStraightNoteFlagsChanged(); break;
        case 1: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteFlagsTypeSelectorModel::*)();
            if (_t _q_method = &NoteFlagsTypeSelectorModel::useStraightNoteFlagsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NoteFlagsTypeSelectorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->useStraightNoteFlags(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NoteFlagsTypeSelectorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUseStraightNoteFlags(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *mu::notation::NoteFlagsTypeSelectorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::NoteFlagsTypeSelectorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteFlagsTypeSelectorModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::notation::NoteFlagsTypeSelectorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void mu::notation::NoteFlagsTypeSelectorModel::useStraightNoteFlagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
