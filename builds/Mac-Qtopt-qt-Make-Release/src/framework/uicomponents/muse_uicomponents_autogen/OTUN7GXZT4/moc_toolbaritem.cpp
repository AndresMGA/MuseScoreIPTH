/****************************************************************************
** Meta object code from reading C++ file 'toolbaritem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/toolbaritem.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbaritem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEToolBarItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEToolBarItemENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::ToolBarItem",
    "idChanged",
    "",
    "id",
    "titleChanged",
    "title",
    "stateChanged",
    "selectedChanged",
    "selected",
    "typeChanged",
    "type",
    "menuItemsChanged",
    "QList<uicomponents::MenuItem*>",
    "menuItems",
    "menuId",
    "isMenuSecondaryChanged",
    "secondary",
    "actionChanged",
    "showTitleChanged",
    "isTransparentChanged",
    "setId",
    "setTitle",
    "TranslatableString",
    "setState",
    "ui::UiActionState",
    "state",
    "setSelected",
    "setType",
    "muse::uicomponents::ToolBarItemType::Type",
    "setMenuItems",
    "setAction",
    "ui::UiAction",
    "action",
    "setArgs",
    "muse::actions::ActionData",
    "args",
    "activate",
    "handleMenuItem",
    "code",
    "shortcuts",
    "showTitle",
    "description",
    "icon",
    "enabled",
    "checkable",
    "checked",
    "isTransparent",
    "QList<MenuItem*>",
    "isMenuSecondary"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEToolBarItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
      15,  186, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x06,   16 /* Public */,
       4,    1,  137,    2, 0x06,   18 /* Public */,
       6,    0,  140,    2, 0x06,   20 /* Public */,
       7,    1,  141,    2, 0x06,   21 /* Public */,
       9,    1,  144,    2, 0x06,   23 /* Public */,
      11,    2,  147,    2, 0x06,   25 /* Public */,
      15,    1,  152,    2, 0x06,   28 /* Public */,
      17,    0,  155,    2, 0x06,   30 /* Public */,
      18,    0,  156,    2, 0x06,   31 /* Public */,
      19,    0,  157,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    1,  158,    2, 0x0a,   33 /* Public */,
      21,    1,  161,    2, 0x0a,   35 /* Public */,
      23,    1,  164,    2, 0x0a,   37 /* Public */,
      26,    1,  167,    2, 0x0a,   39 /* Public */,
      27,    1,  170,    2, 0x0a,   41 /* Public */,
      29,    1,  173,    2, 0x0a,   43 /* Public */,
      30,    1,  176,    2, 0x0a,   45 /* Public */,
      33,    1,  179,    2, 0x0a,   47 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      36,    0,  182,    2, 0x02,   49 /* Public */,
      37,    1,  183,    2, 0x02,   50 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 22,    5,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 28,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 34,   35,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015001, uint(0), 0,
      38, QMetaType::QString, 0x00015001, uint(7), 0,
      39, QMetaType::QString, 0x00015001, uint(7), 0,
       5, QMetaType::QString, 0x00015001, uint(7), 0,
      40, QMetaType::Bool, 0x00015103, uint(8), 0,
      41, QMetaType::QString, 0x00015001, uint(7), 0,
      42, QMetaType::Int, 0x00015001, uint(7), 0,
      43, QMetaType::Bool, 0x00015001, uint(2), 0,
      44, QMetaType::Bool, 0x00015001, uint(7), 0,
      45, QMetaType::Bool, 0x00015001, uint(2), 0,
       8, QMetaType::Bool, 0x00015001, uint(3), 0,
      46, QMetaType::Bool, 0x00015103, uint(9), 0,
      10, QMetaType::Int, 0x00015001, uint(4), 0,
      13, 0x80000000 | 47, 0x00015009, uint(5), 0,
      48, QMetaType::Bool, 0x00015001, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::ToolBarItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEToolBarItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEToolBarItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEToolBarItemENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'code'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'shortcuts'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'showTitle'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checkable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isTransparent'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'menuItems'
        QtPrivate::TypeAndForceComplete<QList<MenuItem*>, std::true_type>,
        // property 'isMenuSecondary'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ToolBarItem, std::true_type>,
        // method 'idChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'menuItemsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<uicomponents::MenuItem*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isMenuSecondaryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'actionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showTitleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isTransparentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TranslatableString &, std::false_type>,
        // method 'setState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ui::UiActionState &, std::false_type>,
        // method 'setSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::uicomponents::ToolBarItemType::Type, std::false_type>,
        // method 'setMenuItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<uicomponents::MenuItem*> &, std::false_type>,
        // method 'setAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ui::UiAction &, std::false_type>,
        // method 'setArgs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const muse::actions::ActionData &, std::false_type>,
        // method 'activate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleMenuItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::ToolBarItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolBarItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->stateChanged(); break;
        case 3: _t->selectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->typeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->menuItemsChanged((*reinterpret_cast< std::add_pointer_t<QList<uicomponents::MenuItem*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->isMenuSecondaryChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->actionChanged(); break;
        case 8: _t->showTitleChanged(); break;
        case 9: _t->isTransparentChanged(); break;
        case 10: _t->setId((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setTitle((*reinterpret_cast< std::add_pointer_t<TranslatableString>>(_a[1]))); break;
        case 12: _t->setState((*reinterpret_cast< std::add_pointer_t<ui::UiActionState>>(_a[1]))); break;
        case 13: _t->setSelected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->setType((*reinterpret_cast< std::add_pointer_t<muse::uicomponents::ToolBarItemType::Type>>(_a[1]))); break;
        case 15: _t->setMenuItems((*reinterpret_cast< std::add_pointer_t<QList<uicomponents::MenuItem*>>>(_a[1]))); break;
        case 16: _t->setAction((*reinterpret_cast< std::add_pointer_t<ui::UiAction>>(_a[1]))); break;
        case 17: _t->setArgs((*reinterpret_cast< std::add_pointer_t<muse::actions::ActionData>>(_a[1]))); break;
        case 18: _t->activate(); break;
        case 19: _t->handleMenuItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolBarItem::*)(QString );
            if (_t _q_method = &ToolBarItem::idChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)(QString );
            if (_t _q_method = &ToolBarItem::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)();
            if (_t _q_method = &ToolBarItem::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)(bool );
            if (_t _q_method = &ToolBarItem::selectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)(int );
            if (_t _q_method = &ToolBarItem::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)(QList<uicomponents::MenuItem*> , const QString & );
            if (_t _q_method = &ToolBarItem::menuItemsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)(bool );
            if (_t _q_method = &ToolBarItem::isMenuSecondaryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)();
            if (_t _q_method = &ToolBarItem::actionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)();
            if (_t _q_method = &ToolBarItem::showTitleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ToolBarItem::*)();
            if (_t _q_method = &ToolBarItem::isTransparentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MenuItem*> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ToolBarItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->code_property(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->shortcutsTitle(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->translatedTitle(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showTitle(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->description_property(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->icon_property(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->enabled_property(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->checkable_property(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->checked_property(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->selected_property(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isTransparent(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->type_property(); break;
        case 13: *reinterpret_cast< QList<MenuItem*>*>(_v) = _t->menuItems(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isMenuSecondary(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ToolBarItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setShowTitle(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIsTransparent(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::uicomponents::ToolBarItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::ToolBarItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEToolBarItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Injectable"))
        return static_cast< Injectable*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::uicomponents::ToolBarItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void muse::uicomponents::ToolBarItem::idChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::uicomponents::ToolBarItem::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::uicomponents::ToolBarItem::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::uicomponents::ToolBarItem::selectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void muse::uicomponents::ToolBarItem::typeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void muse::uicomponents::ToolBarItem::menuItemsChanged(QList<uicomponents::MenuItem*> _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void muse::uicomponents::ToolBarItem::isMenuSecondaryChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void muse::uicomponents::ToolBarItem::actionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void muse::uicomponents::ToolBarItem::showTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void muse::uicomponents::ToolBarItem::isTransparentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
