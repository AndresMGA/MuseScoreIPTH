/****************************************************************************
** Meta object code from reading C++ file 'instrumentsonscorelistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/instrumentsscene/view/instrumentsonscorelistmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrumentsonscorelistmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsOnScoreListModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsOnScoreListModelENDCLASS = QtMocHelpers::stringData(
    "mu::instrumentsscene::InstrumentsOnScoreListModel",
    "ordersChanged",
    "",
    "currentOrderChanged",
    "setCurrentOrderIndex",
    "index",
    "load",
    "addInstruments",
    "instrumentIdList",
    "currentOrder",
    "instruments",
    "orders",
    "currentOrderIndex"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsOnScoreListModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   67, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    3 /* Public */,
       3,    0,   57,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   58,    2, 0x0a,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   61,    2, 0x02,    7 /* Public */,
       7,    1,   62,    2, 0x02,    8 /* Public */,
       9,    0,   65,    2, 0x102,   10 /* Public | MethodIsConst  */,
      10,    0,   66,    2, 0x102,   11 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::QVariant,
    QMetaType::QVariantList,

 // properties: name, type, flags
      11, QMetaType::QStringList, 0x00015001, uint(0), 0,
      12, QMetaType::Int, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::instrumentsscene::InstrumentsOnScoreListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::SelectableItemListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsOnScoreListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsOnScoreListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsOnScoreListModelENDCLASS_t,
        // property 'orders'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'currentOrderIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstrumentsOnScoreListModel, std::true_type>,
        // method 'ordersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentOrderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentOrderIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addInstruments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'currentOrder'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'instruments'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>
    >,
    nullptr
} };

void mu::instrumentsscene::InstrumentsOnScoreListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentsOnScoreListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ordersChanged(); break;
        case 1: _t->currentOrderChanged(); break;
        case 2: _t->setCurrentOrderIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->load(); break;
        case 4: _t->addInstruments((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 5: { QVariant _r = _t->currentOrder();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVariantList _r = _t->instruments();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstrumentsOnScoreListModel::*)();
            if (_t _q_method = &InstrumentsOnScoreListModel::ordersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstrumentsOnScoreListModel::*)();
            if (_t _q_method = &InstrumentsOnScoreListModel::currentOrderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InstrumentsOnScoreListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->orders(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentOrderIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InstrumentsOnScoreListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentOrderIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::instrumentsscene::InstrumentsOnScoreListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::InstrumentsOnScoreListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsOnScoreListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return muse::uicomponents::SelectableItemListModel::qt_metacast(_clname);
}

int mu::instrumentsscene::InstrumentsOnScoreListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::SelectableItemListModel::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mu::instrumentsscene::InstrumentsOnScoreListModel::ordersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::instrumentsscene::InstrumentsOnScoreListModel::currentOrderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
