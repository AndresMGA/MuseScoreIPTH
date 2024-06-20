/****************************************************************************
** Meta object code from reading C++ file 'palettemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/palettemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__PaletteCellFilter_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PaletteCellFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PaletteCellFilter_t qt_meta_stringdata_mu__palette__PaletteCellFilter = {
    {
QT_MOC_LITERAL(0, 0, 30), // "mu::palette::PaletteCellFilter"
QT_MOC_LITERAL(1, 31, 13), // "filterChanged"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "mu::palette::PaletteCellFilter\0"
    "filterChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PaletteCellFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCellFilter::filterChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PaletteCellFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PaletteCellFilter.data,
    qt_meta_data_mu__palette__PaletteCellFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PaletteCellFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteCellFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PaletteCellFilter.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void mu::palette::PaletteCellFilter::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_mu__palette__PaletteTreeModel_t {
    QByteArrayData data[25];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PaletteTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PaletteTreeModel_t qt_meta_stringdata_mu__palette__PaletteTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::palette::PaletteTreeModel"
QT_MOC_LITERAL(1, 30, 11), // "treeChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "onDataChanged"
QT_MOC_LITERAL(4, 57, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 69, 7), // "topLeft"
QT_MOC_LITERAL(6, 77, 11), // "bottomRight"
QT_MOC_LITERAL(7, 89, 12), // "QVector<int>"
QT_MOC_LITERAL(8, 102, 5), // "roles"
QT_MOC_LITERAL(9, 108, 15), // "itemDataChanged"
QT_MOC_LITERAL(10, 124, 3), // "idx"
QT_MOC_LITERAL(11, 128, 14), // "setTreeChanged"
QT_MOC_LITERAL(12, 143, 16), // "setTreeUnchanged"
QT_MOC_LITERAL(13, 160, 21), // "PaletteTreeModelRoles"
QT_MOC_LITERAL(14, 182, 15), // "PaletteCellRole"
QT_MOC_LITERAL(15, 198, 11), // "VisibleRole"
QT_MOC_LITERAL(16, 210, 10), // "CustomRole"
QT_MOC_LITERAL(17, 221, 12), // "EditableRole"
QT_MOC_LITERAL(18, 234, 12), // "MimeDataRole"
QT_MOC_LITERAL(19, 247, 12), // "GridSizeRole"
QT_MOC_LITERAL(20, 260, 12), // "DrawGridRole"
QT_MOC_LITERAL(21, 273, 19), // "PaletteExpandedRole"
QT_MOC_LITERAL(22, 293, 15), // "PaletteTypeRole"
QT_MOC_LITERAL(23, 309, 22), // "PaletteContentTypeRole"
QT_MOC_LITERAL(24, 332, 14) // "CellActiveRole"

    },
    "mu::palette::PaletteTreeModel\0treeChanged\0"
    "\0onDataChanged\0QModelIndex\0topLeft\0"
    "bottomRight\0QVector<int>\0roles\0"
    "itemDataChanged\0idx\0setTreeChanged\0"
    "setTreeUnchanged\0PaletteTreeModelRoles\0"
    "PaletteCellRole\0VisibleRole\0CustomRole\0"
    "EditableRole\0MimeDataRole\0GridSizeRole\0"
    "DrawGridRole\0PaletteExpandedRole\0"
    "PaletteTypeRole\0PaletteContentTypeRole\0"
    "CellActiveRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PaletteTreeModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   52, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   40,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x0a /* Public */,
      11,    0,   50,    2, 0x0a /* Public */,
      12,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, 0x80000000 | 4,   10,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,   11,   57,

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

void mu::palette::PaletteTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteTreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->treeChanged(); break;
        case 1: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 2: _t->itemDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->setTreeChanged(); break;
        case 4: _t->setTreeUnchanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteTreeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteTreeModel::treeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PaletteTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PaletteTreeModel.data,
    qt_meta_data_mu__palette__PaletteTreeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PaletteTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PaletteTreeModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mu::async::Asyncable"))
        return static_cast< mu::async::Asyncable*>(this);
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
struct qt_meta_stringdata_mu__palette__FilterPaletteTreeModel_t {
    QByteArrayData data[3];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__FilterPaletteTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__FilterPaletteTreeModel_t qt_meta_stringdata_mu__palette__FilterPaletteTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "mu::palette::FilterPaletteTre..."
QT_MOC_LITERAL(1, 36, 16), // "invalidateFilter"
QT_MOC_LITERAL(2, 53, 0) // ""

    },
    "mu::palette::FilterPaletteTreeModel\0"
    "invalidateFilter\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__FilterPaletteTreeModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

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

QT_INIT_METAOBJECT const QMetaObject mu::palette::FilterPaletteTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__FilterPaletteTreeModel.data,
    qt_meta_data_mu__palette__FilterPaletteTreeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::FilterPaletteTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::FilterPaletteTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__FilterPaletteTreeModel.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_mu__palette__PaletteCellFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PaletteCellFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PaletteCellFilterProxyModel_t qt_meta_stringdata_mu__palette__PaletteCellFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 40) // "mu::palette::PaletteCellFilte..."

    },
    "mu::palette::PaletteCellFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PaletteCellFilterProxyModel[] = {

 // content:
       8,       // revision
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

void mu::palette::PaletteCellFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PaletteCellFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PaletteCellFilterProxyModel.data,
    qt_meta_data_mu__palette__PaletteCellFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PaletteCellFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteCellFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PaletteCellFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int mu::palette::PaletteCellFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
