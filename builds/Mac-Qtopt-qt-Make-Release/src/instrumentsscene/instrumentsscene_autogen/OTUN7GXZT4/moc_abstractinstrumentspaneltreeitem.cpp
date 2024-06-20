/****************************************************************************
** Meta object code from reading C++ file 'abstractinstrumentspaneltreeitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/instrumentsscene/view/abstractinstrumentspaneltreeitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractinstrumentspaneltreeitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEAbstractInstrumentsPanelTreeItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEAbstractInstrumentsPanelTreeItemENDCLASS = QtMocHelpers::stringData(
    "mu::instrumentsscene::AbstractInstrumentsPanelTreeItem",
    "typeChanged",
    "",
    "InstrumentsTreeItemType::ItemType",
    "type",
    "titleChanged",
    "title",
    "isVisibleChanged",
    "isVisible",
    "isExpandableChanged",
    "isExpandable",
    "isEditableChanged",
    "isEditable",
    "isRemovableChanged",
    "isRemovable",
    "isSelectedChanged",
    "isSelected",
    "setType",
    "setTitle",
    "setIsVisible",
    "setChildren",
    "setId",
    "muse::ID",
    "id",
    "setIsExpandable",
    "expandable",
    "setIsEditable",
    "editable",
    "setIsRemovable",
    "removable",
    "setIsSelected",
    "selected",
    "canAcceptDrop",
    "item",
    "appendNewItem",
    "isSelectable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEAbstractInstrumentsPanelTreeItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       9,  176, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,   10 /* Public */,
       5,    1,  125,    2, 0x06,   12 /* Public */,
       7,    1,  128,    2, 0x06,   14 /* Public */,
       9,    1,  131,    2, 0x06,   16 /* Public */,
      11,    1,  134,    2, 0x06,   18 /* Public */,
      13,    1,  137,    2, 0x06,   20 /* Public */,
      15,    1,  140,    2, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    1,  143,    2, 0x0a,   24 /* Public */,
      18,    1,  146,    2, 0x0a,   26 /* Public */,
      19,    2,  149,    2, 0x0a,   28 /* Public */,
      19,    1,  154,    2, 0x2a,   31 /* Public | MethodCloned */,
      21,    1,  157,    2, 0x0a,   33 /* Public */,
      24,    1,  160,    2, 0x0a,   35 /* Public */,
      26,    1,  163,    2, 0x0a,   37 /* Public */,
      28,    1,  166,    2, 0x0a,   39 /* Public */,
      30,    1,  169,    2, 0x0a,   41 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      32,    1,  172,    2, 0x102,   43 /* Public | MethodIsConst  */,
      34,    0,  175,    2, 0x02,   45 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    8,   20,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   31,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVariant,   33,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::QString, 0x00015401, uint(-1), 0,
       6, QMetaType::QString, 0x00015103, uint(1), 0,
       4, QMetaType::Int, 0x00015001, uint(0), 0,
       8, QMetaType::Bool, 0x00015103, uint(2), 0,
      10, QMetaType::Bool, 0x00015001, uint(3), 0,
      12, QMetaType::Bool, 0x00015001, uint(4), 0,
      14, QMetaType::Bool, 0x00015001, uint(5), 0,
      35, QMetaType::Bool, 0x00015401, uint(-1), 0,
      16, QMetaType::Bool, 0x00015001, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEAbstractInstrumentsPanelTreeItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEAbstractInstrumentsPanelTreeItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEAbstractInstrumentsPanelTreeItemENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isExpandable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isEditable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isRemovable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSelectable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSelected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractInstrumentsPanelTreeItem, std::true_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstrumentsTreeItemType::ItemType, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'isVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isExpandableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isEditableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isRemovableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstrumentsTreeItemType::ItemType, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setIsVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const muse::ID &, std::false_type>,
        // method 'setIsExpandable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsEditable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsRemovable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'canAcceptDrop'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'appendNewItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractInstrumentsPanelTreeItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeChanged((*reinterpret_cast< std::add_pointer_t<InstrumentsTreeItemType::ItemType>>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->isVisibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isExpandableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->isEditableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->isRemovableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->isSelectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setType((*reinterpret_cast< std::add_pointer_t<InstrumentsTreeItemType::ItemType>>(_a[1]))); break;
        case 8: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setIsVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 10: _t->setIsVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setId((*reinterpret_cast< std::add_pointer_t<muse::ID>>(_a[1]))); break;
        case 12: _t->setIsExpandable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->setIsEditable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->setIsRemovable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setIsSelected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: { bool _r = _t->canAcceptDrop((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->appendNewItem(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractInstrumentsPanelTreeItem::*)(InstrumentsTreeItemType::ItemType );
            if (_t _q_method = &AbstractInstrumentsPanelTreeItem::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractInstrumentsPanelTreeItem::*)(QString );
            if (_t _q_method = &AbstractInstrumentsPanelTreeItem::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractInstrumentsPanelTreeItem::*)(bool );
            if (_t _q_method = &AbstractInstrumentsPanelTreeItem::isVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractInstrumentsPanelTreeItem::*)(bool );
            if (_t _q_method = &AbstractInstrumentsPanelTreeItem::isExpandableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractInstrumentsPanelTreeItem::*)(bool );
            if (_t _q_method = &AbstractInstrumentsPanelTreeItem::isEditableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractInstrumentsPanelTreeItem::*)(bool );
            if (_t _q_method = &AbstractInstrumentsPanelTreeItem::isRemovableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AbstractInstrumentsPanelTreeItem::*)(bool );
            if (_t _q_method = &AbstractInstrumentsPanelTreeItem::isSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractInstrumentsPanelTreeItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->idStr(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isExpandable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isEditable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isRemovable(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isSelectable(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isSelected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AbstractInstrumentsPanelTreeItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setIsVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEAbstractInstrumentsPanelTreeItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::typeChanged(InstrumentsTreeItemType::ItemType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::isVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::isExpandableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::isEditableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::isRemovableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::instrumentsscene::AbstractInstrumentsPanelTreeItem::isSelectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
