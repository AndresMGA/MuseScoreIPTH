/****************************************************************************
** Meta object code from reading C++ file 'noteinputbarcustomisemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/noteinputbarcustomisemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteinputbarcustomisemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS = QtMocHelpers::stringData(
    "mu::notation::NoteInputBarCustomiseModel",
    "isAddSeparatorAvailableChanged",
    "",
    "isAddSeparatorAvailable",
    "load",
    "addSeparatorLine",
    "selectionChanged",
    "selectionModel",
    "QItemSelectionModel*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    3 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   35,    2, 0x02,    5 /* Public */,
       5,    0,   36,    2, 0x02,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00015009, uint(1879048198), 0,
       3, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::NoteInputBarCustomiseModel::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::SelectableItemListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS_t,
        // property 'selectionModel'
        QtPrivate::TypeAndForceComplete<QItemSelectionModel*, std::true_type>,
        // property 'isAddSeparatorAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NoteInputBarCustomiseModel, std::true_type>,
        // method 'isAddSeparatorAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addSeparatorLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::notation::NoteInputBarCustomiseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteInputBarCustomiseModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isAddSeparatorAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->load(); break;
        case 2: _t->addSeparatorLine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteInputBarCustomiseModel::*)(bool );
            if (_t _q_method = &NoteInputBarCustomiseModel::isAddSeparatorAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelectionModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NoteInputBarCustomiseModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QItemSelectionModel**>(_v) = _t->selectionModel(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAddSeparatorAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::notation::NoteInputBarCustomiseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::NoteInputBarCustomiseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return muse::uicomponents::SelectableItemListModel::qt_metacast(_clname);
}

int mu::notation::NoteInputBarCustomiseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::SelectableItemListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mu::notation::NoteInputBarCustomiseModel::isAddSeparatorAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace CheckNotifySignalValidity_CLASSmuSCOPEnotationSCOPENoteInputBarCustomiseModelENDCLASS {
template<typename T> using has_nullary_selectionChanged = decltype(std::declval<T>().selectionChanged());
template<typename T> using has_unary_selectionChanged = decltype(std::declval<T>().selectionChanged(std::declval<QItemSelectionModel*>()));
static_assert(qxp::is_detected_v<has_nullary_selectionChanged, mu::notation::NoteInputBarCustomiseModel> || qxp::is_detected_v<has_unary_selectionChanged, mu::notation::NoteInputBarCustomiseModel>,
              "NOTIFY signal selectionChanged does not exist in class (or is private in its parent)");
}
QT_WARNING_POP
