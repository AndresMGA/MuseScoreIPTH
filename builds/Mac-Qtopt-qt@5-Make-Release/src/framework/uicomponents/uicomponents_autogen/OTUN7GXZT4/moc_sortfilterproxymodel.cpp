/****************************************************************************
** Meta object code from reading C++ file 'sortfilterproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/uicomponents/view/sortfilterproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortfilterproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__uicomponents__SortFilterProxyModel_t {
    QByteArrayData data[16];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__uicomponents__SortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__uicomponents__SortFilterProxyModel_t qt_meta_stringdata_mu__uicomponents__SortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 38), // "mu::uicomponents::SortFilterP..."
QT_MOC_LITERAL(1, 39, 15), // "rowCountChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 14), // "filtersChanged"
QT_MOC_LITERAL(4, 71, 47), // "QQmlListProperty<mu::uicompon..."
QT_MOC_LITERAL(5, 119, 7), // "filters"
QT_MOC_LITERAL(6, 127, 27), // "alwaysIncludeIndicesChanged"
QT_MOC_LITERAL(7, 155, 27), // "alwaysExcludeIndicesChanged"
QT_MOC_LITERAL(8, 183, 27), // "sourceModelRoleNamesChanged"
QT_MOC_LITERAL(9, 211, 7), // "refresh"
QT_MOC_LITERAL(10, 219, 8), // "rowCount"
QT_MOC_LITERAL(11, 228, 7), // "sorters"
QT_MOC_LITERAL(12, 236, 47), // "QQmlListProperty<mu::uicompon..."
QT_MOC_LITERAL(13, 284, 20), // "alwaysIncludeIndices"
QT_MOC_LITERAL(14, 305, 10), // "QList<int>"
QT_MOC_LITERAL(15, 316, 20) // "alwaysExcludeIndices"

    },
    "mu::uicomponents::SortFilterProxyModel\0"
    "rowCountChanged\0\0filtersChanged\0"
    "QQmlListProperty<mu::uicomponents::FilterValue>\0"
    "filters\0alwaysIncludeIndicesChanged\0"
    "alwaysExcludeIndicesChanged\0"
    "sourceModelRoleNamesChanged\0refresh\0"
    "rowCount\0sorters\0"
    "QQmlListProperty<mu::uicomponents::SorterValue>\0"
    "alwaysIncludeIndices\0QList<int>\0"
    "alwaysExcludeIndices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__uicomponents__SortFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,
       8,    0,   50,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495001,
       5, 0x80000000 | 4, 0x00095409,
      11, 0x80000000 | 12, 0x00095409,
      13, 0x80000000 | 14, 0x0049510b,
      15, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       2,
       3,

       0        // eod
};

void mu::uicomponents::SortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortFilterProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rowCountChanged(); break;
        case 1: _t->filtersChanged((*reinterpret_cast< QQmlListProperty<mu::uicomponents::FilterValue>(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterProxyModel::rowCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)(QQmlListProperty<mu::uicomponents::FilterValue> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterProxyModel::filtersChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterProxyModel::alwaysIncludeIndicesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterProxyModel::alwaysExcludeIndicesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SortFilterProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterProxyModel::sourceModelRoleNamesChanged)) {
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
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SortFilterProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 1: *reinterpret_cast< QQmlListProperty<mu::uicomponents::FilterValue>*>(_v) = _t->filters(); break;
        case 2: *reinterpret_cast< QQmlListProperty<mu::uicomponents::SorterValue>*>(_v) = _t->sorters(); break;
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::uicomponents::SortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_mu__uicomponents__SortFilterProxyModel.data,
    qt_meta_data_mu__uicomponents__SortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::uicomponents::SortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::uicomponents::SortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__uicomponents__SortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int mu::uicomponents::SortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::uicomponents::SortFilterProxyModel::rowCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::uicomponents::SortFilterProxyModel::filtersChanged(QQmlListProperty<mu::uicomponents::FilterValue> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::uicomponents::SortFilterProxyModel::alwaysIncludeIndicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::uicomponents::SortFilterProxyModel::alwaysExcludeIndicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::uicomponents::SortFilterProxyModel::sourceModelRoleNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
