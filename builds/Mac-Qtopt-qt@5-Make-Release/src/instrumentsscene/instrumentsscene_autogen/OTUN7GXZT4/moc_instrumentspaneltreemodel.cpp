/****************************************************************************
** Meta object code from reading C++ file 'instrumentspaneltreemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/instrumentsscene/view/instrumentspaneltreemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrumentspaneltreemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__instrumentsscene__InstrumentsPanelTreeModel_t {
    QByteArrayData data[46];
    char stringdata0[912];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__instrumentsscene__InstrumentsPanelTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__instrumentsscene__InstrumentsPanelTreeModel_t qt_meta_stringdata_mu__instrumentsscene__InstrumentsPanelTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 47), // "mu::instrumentsscene::Instrum..."
QT_MOC_LITERAL(1, 48, 26), // "isMovingUpAvailableChanged"
QT_MOC_LITERAL(2, 75, 0), // ""
QT_MOC_LITERAL(3, 76, 19), // "isMovingUpAvailable"
QT_MOC_LITERAL(4, 96, 28), // "isMovingDownAvailableChanged"
QT_MOC_LITERAL(5, 125, 21), // "isMovingDownAvailable"
QT_MOC_LITERAL(6, 147, 24), // "isAddingAvailableChanged"
QT_MOC_LITERAL(7, 172, 17), // "isAddingAvailable"
QT_MOC_LITERAL(8, 190, 26), // "isRemovingAvailableChanged"
QT_MOC_LITERAL(9, 217, 19), // "isRemovingAvailable"
QT_MOC_LITERAL(10, 237, 14), // "isEmptyChanged"
QT_MOC_LITERAL(11, 252, 37), // "addInstrumentsKeyboardShortcu..."
QT_MOC_LITERAL(12, 290, 27), // "isInstrumentSelectedChanged"
QT_MOC_LITERAL(13, 318, 20), // "isInstrumentSelected"
QT_MOC_LITERAL(14, 339, 31), // "updateRearrangementAvailability"
QT_MOC_LITERAL(15, 371, 26), // "updateMovingUpAvailability"
QT_MOC_LITERAL(16, 398, 18), // "isSelectionMovable"
QT_MOC_LITERAL(17, 417, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 429, 21), // "firstSelectedRowIndex"
QT_MOC_LITERAL(19, 451, 28), // "updateMovingDownAvailability"
QT_MOC_LITERAL(20, 480, 20), // "lastSelectedRowIndex"
QT_MOC_LITERAL(21, 501, 26), // "updateRemovingAvailability"
QT_MOC_LITERAL(22, 528, 26), // "updateIsInstrumentSelected"
QT_MOC_LITERAL(23, 555, 4), // "load"
QT_MOC_LITERAL(24, 560, 26), // "setInstrumentsPanelVisible"
QT_MOC_LITERAL(25, 587, 7), // "visible"
QT_MOC_LITERAL(26, 595, 9), // "selectRow"
QT_MOC_LITERAL(27, 605, 8), // "rowIndex"
QT_MOC_LITERAL(28, 614, 14), // "clearSelection"
QT_MOC_LITERAL(29, 629, 14), // "addInstruments"
QT_MOC_LITERAL(30, 644, 18), // "moveSelectedRowsUp"
QT_MOC_LITERAL(31, 663, 20), // "moveSelectedRowsDown"
QT_MOC_LITERAL(32, 684, 18), // "removeSelectedRows"
QT_MOC_LITERAL(33, 703, 30), // "toggleVisibilityOfSelectedRows"
QT_MOC_LITERAL(34, 734, 15), // "startActiveDrag"
QT_MOC_LITERAL(35, 750, 13), // "endActiveDrag"
QT_MOC_LITERAL(36, 764, 8), // "moveRows"
QT_MOC_LITERAL(37, 773, 12), // "sourceParent"
QT_MOC_LITERAL(38, 786, 9), // "sourceRow"
QT_MOC_LITERAL(39, 796, 5), // "count"
QT_MOC_LITERAL(40, 802, 17), // "destinationParent"
QT_MOC_LITERAL(41, 820, 16), // "destinationChild"
QT_MOC_LITERAL(42, 837, 14), // "selectionModel"
QT_MOC_LITERAL(43, 852, 20), // "QItemSelectionModel*"
QT_MOC_LITERAL(44, 873, 7), // "isEmpty"
QT_MOC_LITERAL(45, 881, 30) // "addInstrumentsKeyboardShortcut"

    },
    "mu::instrumentsscene::InstrumentsPanelTreeModel\0"
    "isMovingUpAvailableChanged\0\0"
    "isMovingUpAvailable\0isMovingDownAvailableChanged\0"
    "isMovingDownAvailable\0isAddingAvailableChanged\0"
    "isAddingAvailable\0isRemovingAvailableChanged\0"
    "isRemovingAvailable\0isEmptyChanged\0"
    "addInstrumentsKeyboardShortcutChanged\0"
    "isInstrumentSelectedChanged\0"
    "isInstrumentSelected\0"
    "updateRearrangementAvailability\0"
    "updateMovingUpAvailability\0"
    "isSelectionMovable\0QModelIndex\0"
    "firstSelectedRowIndex\0"
    "updateMovingDownAvailability\0"
    "lastSelectedRowIndex\0updateRemovingAvailability\0"
    "updateIsInstrumentSelected\0load\0"
    "setInstrumentsPanelVisible\0visible\0"
    "selectRow\0rowIndex\0clearSelection\0"
    "addInstruments\0moveSelectedRowsUp\0"
    "moveSelectedRowsDown\0removeSelectedRows\0"
    "toggleVisibilityOfSelectedRows\0"
    "startActiveDrag\0endActiveDrag\0moveRows\0"
    "sourceParent\0sourceRow\0count\0"
    "destinationParent\0destinationChild\0"
    "selectionModel\0QItemSelectionModel*\0"
    "isEmpty\0addInstrumentsKeyboardShortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__instrumentsscene__InstrumentsPanelTreeModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       7,  214, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    1,  152,    2, 0x06 /* Public */,
       6,    1,  155,    2, 0x06 /* Public */,
       8,    1,  158,    2, 0x06 /* Public */,
      10,    0,  161,    2, 0x06 /* Public */,
      11,    0,  162,    2, 0x06 /* Public */,
      12,    1,  163,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  166,    2, 0x08 /* Private */,
      15,    2,  167,    2, 0x08 /* Private */,
      15,    1,  172,    2, 0x28 /* Private | MethodCloned */,
      19,    2,  175,    2, 0x08 /* Private */,
      19,    1,  180,    2, 0x28 /* Private | MethodCloned */,
      21,    0,  183,    2, 0x08 /* Private */,
      22,    0,  184,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      23,    0,  185,    2, 0x02 /* Public */,
      24,    1,  186,    2, 0x02 /* Public */,
      26,    1,  189,    2, 0x02 /* Public */,
      28,    0,  192,    2, 0x02 /* Public */,
      29,    0,  193,    2, 0x02 /* Public */,
      30,    0,  194,    2, 0x02 /* Public */,
      31,    0,  195,    2, 0x02 /* Public */,
      32,    0,  196,    2, 0x02 /* Public */,
      33,    1,  197,    2, 0x02 /* Public */,
      34,    0,  200,    2, 0x02 /* Public */,
      35,    0,  201,    2, 0x02 /* Public */,
      36,    5,  202,    2, 0x02 /* Public */,
      42,    0,  213,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 17,   16,   20,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, 0x80000000 | 17,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 17, QMetaType::Int, QMetaType::Int, 0x80000000 | 17, QMetaType::Int,   37,   38,   39,   40,   41,
    0x80000000 | 43,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
      44, QMetaType::Bool, 0x00495001,
      45, QMetaType::QString, 0x00495001,
      13, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       3,
       2,
       4,
       5,
       6,

       0        // eod
};

void mu::instrumentsscene::InstrumentsPanelTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentsPanelTreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isMovingUpAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isMovingDownAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->isAddingAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->isRemovingAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->isEmptyChanged(); break;
        case 5: _t->addInstrumentsKeyboardShortcutChanged(); break;
        case 6: _t->isInstrumentSelectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateRearrangementAvailability(); break;
        case 8: _t->updateMovingUpAvailability((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 9: _t->updateMovingUpAvailability((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->updateMovingDownAvailability((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->updateMovingDownAvailability((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->updateRemovingAvailability(); break;
        case 13: _t->updateIsInstrumentSelected(); break;
        case 14: _t->load(); break;
        case 15: _t->setInstrumentsPanelVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->selectRow((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->clearSelection(); break;
        case 18: _t->addInstruments(); break;
        case 19: _t->moveSelectedRowsUp(); break;
        case 20: _t->moveSelectedRowsDown(); break;
        case 21: _t->removeSelectedRows(); break;
        case 22: _t->toggleVisibilityOfSelectedRows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->startActiveDrag(); break;
        case 24: _t->endActiveDrag(); break;
        case 25: { bool _r = _t->moveRows((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { QItemSelectionModel* _r = _t->selectionModel();
            if (_a[0]) *reinterpret_cast< QItemSelectionModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentsPanelTreeModel::isMovingUpAvailableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentsPanelTreeModel::isMovingDownAvailableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentsPanelTreeModel::isAddingAvailableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentsPanelTreeModel::isRemovingAvailableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentsPanelTreeModel::isEmptyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentsPanelTreeModel::addInstrumentsKeyboardShortcutChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentsPanelTreeModel::isInstrumentSelectedChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InstrumentsPanelTreeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isMovingUpAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isMovingDownAvailable(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isRemovingAvailable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAddingAvailable(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->addInstrumentsKeyboardShortcut(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isInstrumentSelected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::instrumentsscene::InstrumentsPanelTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_mu__instrumentsscene__InstrumentsPanelTreeModel.data,
    qt_meta_data_mu__instrumentsscene__InstrumentsPanelTreeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::instrumentsscene::InstrumentsPanelTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::InstrumentsPanelTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__instrumentsscene__InstrumentsPanelTreeModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    if (!strcmp(_clname, "actions::Actionable"))
        return static_cast< actions::Actionable*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int mu::instrumentsscene::InstrumentsPanelTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::instrumentsscene::InstrumentsPanelTreeModel::isMovingUpAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::instrumentsscene::InstrumentsPanelTreeModel::isMovingDownAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::instrumentsscene::InstrumentsPanelTreeModel::isAddingAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::instrumentsscene::InstrumentsPanelTreeModel::isRemovingAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::instrumentsscene::InstrumentsPanelTreeModel::isEmptyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::instrumentsscene::InstrumentsPanelTreeModel::addInstrumentsKeyboardShortcutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::instrumentsscene::InstrumentsPanelTreeModel::isInstrumentSelectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
