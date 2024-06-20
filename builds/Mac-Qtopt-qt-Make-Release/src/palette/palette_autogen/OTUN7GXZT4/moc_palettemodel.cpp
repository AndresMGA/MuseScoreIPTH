/****************************************************************************
** Meta object code from reading C++ file 'palettemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/palette/view/palettemodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterENDCLASS = QtMocHelpers::stringData(
    "mu::palette::PaletteCellFilter",
    "filterChanged",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::PaletteCellFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PaletteCellFilter, std::true_type>,
        // method 'filterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::palette::PaletteCellFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteCellFilter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->filterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteCellFilter::*)();
            if (_t _q_method = &PaletteCellFilter::filterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *mu::palette::PaletteCellFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteCellFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::palette::PaletteCellFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}

// SIGNAL 0
void mu::palette::PaletteCellFilter::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteTreeModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteTreeModelENDCLASS = QtMocHelpers::stringData(
    "mu::palette::PaletteTreeModel",
    "treeChanged",
    "",
    "onDataChanged",
    "QModelIndex",
    "topLeft",
    "bottomRight",
    "QList<int>",
    "roles",
    "itemDataChanged",
    "idx",
    "setTreeChanged",
    "setTreeUnchanged",
    "PaletteTreeModelRoles",
    "PaletteCellRole",
    "VisibleRole",
    "CustomRole",
    "EditableRole",
    "MimeDataRole",
    "GridSizeRole",
    "DrawGridRole",
    "PaletteExpandedRole",
    "PaletteTypeRole",
    "PaletteContentTypeRole",
    "CellActiveRole"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteTreeModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   57, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    3,   45,    2, 0x08,    3 /* Private */,
       9,    1,   52,    2, 0x0a,    7 /* Public */,
      11,    0,   55,    2, 0x0a,    9 /* Public */,
      12,    0,   56,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, 0x80000000 | 4,   10,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,   11,   62,

 // enum data: key, value
      14, uint(mu::palette::PaletteTreeModel::PaletteCellRole),
      15, uint(mu::palette::PaletteTreeModel::VisibleRole),
      16, uint(mu::palette::PaletteTreeModel::CustomRole),
      17, uint(mu::palette::PaletteTreeModel::EditableRole),
      18, uint(mu::palette::PaletteTreeModel::MimeDataRole),
      19, uint(mu::palette::PaletteTreeModel::GridSizeRole),
      20, uint(mu::palette::PaletteTreeModel::DrawGridRole),
      21, uint(mu::palette::PaletteTreeModel::PaletteExpandedRole),
      22, uint(mu::palette::PaletteTreeModel::PaletteTypeRole),
      23, uint(mu::palette::PaletteTreeModel::PaletteContentTypeRole),
      24, uint(mu::palette::PaletteTreeModel::CellActiveRole),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::PaletteTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteTreeModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteTreeModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteTreeModelENDCLASS_t,
        // enum 'PaletteTreeModelRoles'
        QtPrivate::TypeAndForceComplete<PaletteTreeModel::PaletteTreeModelRoles, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PaletteTreeModel, std::true_type>,
        // method 'treeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        // method 'itemDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'setTreeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTreeUnchanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::palette::PaletteTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteTreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->treeChanged(); break;
        case 1: _t->onDataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 2: _t->itemDataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->setTreeChanged(); break;
        case 4: _t->setTreeUnchanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteTreeModel::*)();
            if (_t _q_method = &PaletteTreeModel::treeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *mu::palette::PaletteTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteTreeModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int mu::palette::PaletteTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void mu::palette::PaletteTreeModel::treeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEFilterPaletteTreeModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEFilterPaletteTreeModelENDCLASS = QtMocHelpers::stringData(
    "mu::palette::FilterPaletteTreeModel",
    "invalidateFilter",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEFilterPaletteTreeModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::FilterPaletteTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEFilterPaletteTreeModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEFilterPaletteTreeModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEFilterPaletteTreeModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FilterPaletteTreeModel, std::true_type>,
        // method 'invalidateFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::palette::FilterPaletteTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterPaletteTreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->invalidateFilter(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *mu::palette::FilterPaletteTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::FilterPaletteTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEFilterPaletteTreeModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int mu::palette::FilterPaletteTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterProxyModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterProxyModelENDCLASS = QtMocHelpers::stringData(
    "mu::palette::PaletteCellFilterProxyModel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterProxyModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::PaletteCellFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterProxyModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterProxyModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterProxyModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PaletteCellFilterProxyModel, std::true_type>
    >,
    nullptr
} };

void mu::palette::PaletteCellFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::palette::PaletteCellFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteCellFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteCellFilterProxyModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int mu::palette::PaletteCellFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
