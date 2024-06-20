/****************************************************************************
** Meta object code from reading C++ file 'sortfilterproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/sortfilterproxymodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortfilterproxymodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPESortFilterProxyModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPESortFilterProxyModelENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::SortFilterProxyModel",
    "rowCountChanged",
    "",
    "filtersChanged",
    "QQmlListProperty<muse::uicomponents::FilterValue>",
    "filters",
    "alwaysIncludeIndicesChanged",
    "alwaysExcludeIndicesChanged",
    "sourceModelRoleNamesChanged",
    "refresh",
    "rowCount",
    "sorters",
    "QQmlListProperty<muse::uicomponents::SorterValue>",
    "alwaysIncludeIndices",
    "QList<int>",
    "alwaysExcludeIndices"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPESortFilterProxyModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    6 /* Public */,
       3,    1,   51,    2, 0x06,    7 /* Public */,
       6,    0,   54,    2, 0x06,    9 /* Public */,
       7,    0,   55,    2, 0x06,   10 /* Public */,
       8,    0,   56,    2, 0x06,   11 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   57,    2, 0x02,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00015001, uint(0), 0,
       5, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 12, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 14, 0x0001510b, uint(2), 0,
      15, 0x80000000 | 14, 0x0001510b, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::SortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPESortFilterProxyModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPESortFilterProxyModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPESortFilterProxyModelENDCLASS_t,
        // property 'rowCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'filters'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::uicomponents::FilterValue>, std::true_type>,
        // property 'sorters'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::uicomponents::SorterValue>, std::true_type>,
        // property 'alwaysIncludeIndices'
        QtPrivate::TypeAndForceComplete<QList<int>, std::true_type>,
        // property 'alwaysExcludeIndices'
        QtPrivate::TypeAndForceComplete<QList<int>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SortFilterProxyModel, std::true_type>,
        // method 'rowCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filtersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQmlListProperty<muse::uicomponents::FilterValue>, std::false_type>,
        // method 'alwaysIncludeIndicesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alwaysExcludeIndicesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sourceModelRoleNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::SortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortFilterProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rowCountChanged(); break;
        case 1: _t->filtersChanged((*reinterpret_cast< std::add_pointer_t<QQmlListProperty<muse::uicomponents::FilterValue>>>(_a[1]))); break;
        case 2: _t->alwaysIncludeIndicesChanged(); break;
        case 3: _t->alwaysExcludeIndicesChanged(); break;
        case 4: _t->sourceModelRoleNamesChanged(); break;
        case 5: _t->refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SortFilterProxyModel::*)();
            if (_t _q_method = &SortFilterProxyModel::rowCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)(QQmlListProperty<muse::uicomponents::FilterValue> );
            if (_t _q_method = &SortFilterProxyModel::filtersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)();
            if (_t _q_method = &SortFilterProxyModel::alwaysIncludeIndicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)();
            if (_t _q_method = &SortFilterProxyModel::alwaysExcludeIndicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)();
            if (_t _q_method = &SortFilterProxyModel::sourceModelRoleNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SortFilterProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 1: *reinterpret_cast< QQmlListProperty<muse::uicomponents::FilterValue>*>(_v) = _t->filters(); break;
        case 2: *reinterpret_cast< QQmlListProperty<muse::uicomponents::SorterValue>*>(_v) = _t->sorters(); break;
        case 3: *reinterpret_cast< QList<int>*>(_v) = _t->alwaysIncludeIndices(); break;
        case 4: *reinterpret_cast< QList<int>*>(_v) = _t->alwaysExcludeIndices(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SortFilterProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setAlwaysIncludeIndices(*reinterpret_cast< QList<int>*>(_v)); break;
        case 4: _t->setAlwaysExcludeIndices(*reinterpret_cast< QList<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::uicomponents::SortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::SortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPESortFilterProxyModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int muse::uicomponents::SortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void muse::uicomponents::SortFilterProxyModel::rowCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::uicomponents::SortFilterProxyModel::filtersChanged(QQmlListProperty<muse::uicomponents::FilterValue> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::uicomponents::SortFilterProxyModel::alwaysIncludeIndicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::uicomponents::SortFilterProxyModel::alwaysExcludeIndicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::uicomponents::SortFilterProxyModel::sourceModelRoleNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
