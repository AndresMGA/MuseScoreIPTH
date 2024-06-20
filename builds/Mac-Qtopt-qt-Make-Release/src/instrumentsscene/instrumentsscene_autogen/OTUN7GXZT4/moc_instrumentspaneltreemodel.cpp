/****************************************************************************
** Meta object code from reading C++ file 'instrumentspaneltreemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/instrumentsscene/view/instrumentspaneltreemodel.h"
#include "uicomponents/view/itemmultiselectionmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrumentspaneltreemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsPanelTreeModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsPanelTreeModelENDCLASS = QtMocHelpers::stringData(
    "mu::instrumentsscene::InstrumentsPanelTreeModel",
    "isMovingUpAvailableChanged",
    "",
    "isMovingUpAvailable",
    "isMovingDownAvailableChanged",
    "isMovingDownAvailable",
    "isAddingAvailableChanged",
    "isAddingAvailable",
    "isRemovingAvailableChanged",
    "isRemovingAvailable",
    "isEmptyChanged",
    "addInstrumentsKeyboardShortcutChanged",
    "isInstrumentSelectedChanged",
    "isInstrumentSelected",
    "updateRearrangementAvailability",
    "updateMovingUpAvailability",
    "isSelectionMovable",
    "QModelIndex",
    "firstSelectedRowIndex",
    "updateMovingDownAvailability",
    "lastSelectedRowIndex",
    "updateRemovingAvailability",
    "updateIsInstrumentSelected",
    "load",
    "setInstrumentsPanelVisible",
    "visible",
    "selectRow",
    "rowIndex",
    "clearSelection",
    "addInstruments",
    "moveSelectedRowsUp",
    "moveSelectedRowsDown",
    "removeSelectedRows",
    "toggleVisibilityOfSelectedRows",
    "startActiveDrag",
    "endActiveDrag",
    "moveRows",
    "sourceParent",
    "sourceRow",
    "count",
    "destinationParent",
    "destinationChild",
    "selectionModel",
    "QItemSelectionModel*",
    "isEmpty",
    "addInstrumentsKeyboardShortcut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsPanelTreeModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       7,  241, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  176,    2, 0x06,    8 /* Public */,
       4,    1,  179,    2, 0x06,   10 /* Public */,
       6,    1,  182,    2, 0x06,   12 /* Public */,
       8,    1,  185,    2, 0x06,   14 /* Public */,
      10,    0,  188,    2, 0x06,   16 /* Public */,
      11,    0,  189,    2, 0x06,   17 /* Public */,
      12,    1,  190,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  193,    2, 0x08,   20 /* Private */,
      15,    2,  194,    2, 0x08,   21 /* Private */,
      15,    1,  199,    2, 0x28,   24 /* Private | MethodCloned */,
      19,    2,  202,    2, 0x08,   26 /* Private */,
      19,    1,  207,    2, 0x28,   29 /* Private | MethodCloned */,
      21,    0,  210,    2, 0x08,   31 /* Private */,
      22,    0,  211,    2, 0x08,   32 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      23,    0,  212,    2, 0x02,   33 /* Public */,
      24,    1,  213,    2, 0x02,   34 /* Public */,
      26,    1,  216,    2, 0x02,   36 /* Public */,
      28,    0,  219,    2, 0x02,   38 /* Public */,
      29,    0,  220,    2, 0x02,   39 /* Public */,
      30,    0,  221,    2, 0x02,   40 /* Public */,
      31,    0,  222,    2, 0x02,   41 /* Public */,
      32,    0,  223,    2, 0x02,   42 /* Public */,
      33,    1,  224,    2, 0x02,   43 /* Public */,
      34,    0,  227,    2, 0x02,   45 /* Public */,
      35,    0,  228,    2, 0x02,   46 /* Public */,
      36,    5,  229,    2, 0x02,   47 /* Public */,
      42,    0,  240,    2, 0x102,   53 /* Public | MethodIsConst  */,

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
       3, QMetaType::Bool, 0x00015001, uint(0), 0,
       5, QMetaType::Bool, 0x00015001, uint(1), 0,
       9, QMetaType::Bool, 0x00015001, uint(3), 0,
       7, QMetaType::Bool, 0x00015001, uint(2), 0,
      44, QMetaType::Bool, 0x00015001, uint(4), 0,
      45, QMetaType::QString, 0x00015001, uint(5), 0,
      13, QMetaType::Bool, 0x00015001, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::instrumentsscene::InstrumentsPanelTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsPanelTreeModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsPanelTreeModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsPanelTreeModelENDCLASS_t,
        // property 'isMovingUpAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isMovingDownAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isRemovingAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isAddingAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isEmpty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'addInstrumentsKeyboardShortcut'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isInstrumentSelected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstrumentsPanelTreeModel, std::true_type>,
        // method 'isMovingUpAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isMovingDownAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isAddingAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isRemovingAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isEmptyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addInstrumentsKeyboardShortcutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isInstrumentSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateRearrangementAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMovingUpAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'updateMovingUpAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateMovingDownAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'updateMovingDownAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateRemovingAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateIsInstrumentSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setInstrumentsPanelVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'clearSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addInstruments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveSelectedRowsUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveSelectedRowsDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeSelectedRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleVisibilityOfSelectedRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startActiveDrag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endActiveDrag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveRows'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectionModel'
        QtPrivate::TypeAndForceComplete<QItemSelectionModel *, std::false_type>
    >,
    nullptr
} };

void mu::instrumentsscene::InstrumentsPanelTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentsPanelTreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isMovingUpAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->isMovingDownAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->isAddingAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isRemovingAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->isEmptyChanged(); break;
        case 5: _t->addInstrumentsKeyboardShortcutChanged(); break;
        case 6: _t->isInstrumentSelectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->updateRearrangementAvailability(); break;
        case 8: _t->updateMovingUpAvailability((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 9: _t->updateMovingUpAvailability((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->updateMovingDownAvailability((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 11: _t->updateMovingDownAvailability((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->updateRemovingAvailability(); break;
        case 13: _t->updateIsInstrumentSelected(); break;
        case 14: _t->load(); break;
        case 15: _t->setInstrumentsPanelVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->selectRow((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 17: _t->clearSelection(); break;
        case 18: _t->addInstruments(); break;
        case 19: _t->moveSelectedRowsUp(); break;
        case 20: _t->moveSelectedRowsDown(); break;
        case 21: _t->removeSelectedRows(); break;
        case 22: _t->toggleVisibilityOfSelectedRows((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->startActiveDrag(); break;
        case 24: _t->endActiveDrag(); break;
        case 25: { bool _r = _t->moveRows((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { QItemSelectionModel* _r = _t->selectionModel();
            if (_a[0]) *reinterpret_cast< QItemSelectionModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (_t _q_method = &InstrumentsPanelTreeModel::isMovingUpAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (_t _q_method = &InstrumentsPanelTreeModel::isMovingDownAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (_t _q_method = &InstrumentsPanelTreeModel::isAddingAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (_t _q_method = &InstrumentsPanelTreeModel::isRemovingAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)();
            if (_t _q_method = &InstrumentsPanelTreeModel::isEmptyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)();
            if (_t _q_method = &InstrumentsPanelTreeModel::addInstrumentsKeyboardShortcutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (InstrumentsPanelTreeModel::*)(bool );
            if (_t _q_method = &InstrumentsPanelTreeModel::isInstrumentSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::instrumentsscene::InstrumentsPanelTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::InstrumentsPanelTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsPanelTreeModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    if (!strcmp(_clname, "muse::actions::Actionable"))
        return static_cast< muse::actions::Actionable*>(this);
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
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
