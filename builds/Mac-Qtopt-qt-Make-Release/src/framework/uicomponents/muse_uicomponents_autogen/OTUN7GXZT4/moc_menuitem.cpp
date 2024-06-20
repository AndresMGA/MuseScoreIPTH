/****************************************************************************
** Meta object code from reading C++ file 'menuitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/menuitem.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuItemENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::MenuItem",
    "idChanged",
    "",
    "id",
    "titleChanged",
    "title",
    "sectionChanged",
    "section",
    "stateChanged",
    "selectableChanged",
    "selectable",
    "selectedChanged",
    "selected",
    "roleChanged",
    "role",
    "subitemsChanged",
    "QList<uicomponents::MenuItem*>",
    "subitems",
    "menuId",
    "actionChanged",
    "setId",
    "setTitle",
    "TranslatableString",
    "setSection",
    "setState",
    "ui::UiActionState",
    "state",
    "setSelectable",
    "setSelected",
    "setRole",
    "muse::uicomponents::MenuItemRole",
    "setSubitems",
    "setAction",
    "ui::UiAction",
    "action",
    "setArgs",
    "muse::actions::ActionData",
    "args",
    "code",
    "shortcuts",
    "portableShortcuts",
    "titleWithMnemonicUnderline",
    "description",
    "icon",
    "enabled",
    "checkable",
    "checked",
    "QList<MenuItem*>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEMenuItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      16,  183, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,   17 /* Public */,
       4,    1,  131,    2, 0x06,   19 /* Public */,
       6,    1,  134,    2, 0x06,   21 /* Public */,
       8,    0,  137,    2, 0x06,   23 /* Public */,
       9,    1,  138,    2, 0x06,   24 /* Public */,
      11,    1,  141,    2, 0x06,   26 /* Public */,
      13,    1,  144,    2, 0x06,   28 /* Public */,
      15,    2,  147,    2, 0x06,   30 /* Public */,
      19,    0,  152,    2, 0x06,   33 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    1,  153,    2, 0x0a,   34 /* Public */,
      21,    1,  156,    2, 0x0a,   36 /* Public */,
      23,    1,  159,    2, 0x0a,   38 /* Public */,
      24,    1,  162,    2, 0x0a,   40 /* Public */,
      27,    1,  165,    2, 0x0a,   42 /* Public */,
      28,    1,  168,    2, 0x0a,   44 /* Public */,
      29,    1,  171,    2, 0x0a,   46 /* Public */,
      31,    1,  174,    2, 0x0a,   48 /* Public */,
      32,    1,  177,    2, 0x0a,   50 /* Public */,
      35,    1,  180,    2, 0x0a,   52 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   17,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 22,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 30,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 36,   37,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015001, uint(0), 0,
      38, QMetaType::QString, 0x00015001, uint(8), 0,
      39, QMetaType::QString, 0x00015001, uint(8), 0,
      40, QMetaType::QString, 0x00015001, uint(8), 0,
       5, QMetaType::QString, 0x00015001, uint(8), 0,
      41, QMetaType::QString, 0x00015001, uint(8), 0,
      42, QMetaType::QString, 0x00015001, uint(8), 0,
       7, QMetaType::QString, 0x00015001, uint(2), 0,
      43, QMetaType::Int, 0x00015001, uint(8), 0,
      44, QMetaType::Bool, 0x00015001, uint(3), 0,
      45, QMetaType::Bool, 0x00015001, uint(8), 0,
      46, QMetaType::Bool, 0x00015001, uint(3), 0,
      10, QMetaType::Bool, 0x00015001, uint(4), 0,
      12, QMetaType::Bool, 0x00015001, uint(5), 0,
      14, QMetaType::Int, 0x00015001, uint(6), 0,
      17, 0x80000000 | 47, 0x00015009, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::MenuItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEMenuItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuItemENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'code'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'shortcuts'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'portableShortcuts'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'titleWithMnemonicUnderline'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'section'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checkable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'role'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'subitems'
        QtPrivate::TypeAndForceComplete<QList<MenuItem*>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MenuItem, std::true_type>,
        // method 'idChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'roleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'subitemsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<uicomponents::MenuItem*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'actionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TranslatableString &, std::false_type>,
        // method 'setSection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ui::UiActionState &, std::false_type>,
        // method 'setSelectable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::uicomponents::MenuItemRole, std::false_type>,
        // method 'setSubitems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<uicomponents::MenuItem*> &, std::false_type>,
        // method 'setAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ui::UiAction &, std::false_type>,
        // method 'setArgs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const muse::actions::ActionData &, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::MenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->sectionChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->stateChanged(); break;
        case 4: _t->selectableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->selectedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->roleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->subitemsChanged((*reinterpret_cast< std::add_pointer_t<QList<uicomponents::MenuItem*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->actionChanged(); break;
        case 9: _t->setId((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setTitle((*reinterpret_cast< std::add_pointer_t<TranslatableString>>(_a[1]))); break;
        case 11: _t->setSection((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setState((*reinterpret_cast< std::add_pointer_t<ui::UiActionState>>(_a[1]))); break;
        case 13: _t->setSelectable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->setSelected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setRole((*reinterpret_cast< std::add_pointer_t<muse::uicomponents::MenuItemRole>>(_a[1]))); break;
        case 16: _t->setSubitems((*reinterpret_cast< std::add_pointer_t<QList<uicomponents::MenuItem*>>>(_a[1]))); break;
        case 17: _t->setAction((*reinterpret_cast< std::add_pointer_t<ui::UiAction>>(_a[1]))); break;
        case 18: _t->setArgs((*reinterpret_cast< std::add_pointer_t<muse::actions::ActionData>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuItem::*)(QString );
            if (_t _q_method = &MenuItem::idChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)(QString );
            if (_t _q_method = &MenuItem::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)(QString );
            if (_t _q_method = &MenuItem::sectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)();
            if (_t _q_method = &MenuItem::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)(bool );
            if (_t _q_method = &MenuItem::selectableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)(bool );
            if (_t _q_method = &MenuItem::selectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)(int );
            if (_t _q_method = &MenuItem::roleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)(QList<uicomponents::MenuItem*> , const QString & );
            if (_t _q_method = &MenuItem::subitemsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MenuItem::*)();
            if (_t _q_method = &MenuItem::actionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MenuItem*> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MenuItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->code_property(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->shortcutsTitle(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->portableShortcuts(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->translatedTitle(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->titleWithMnemonicUnderline(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->description_property(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->section(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->icon_property(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->enabled_property(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->checkable_property(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->checked_property(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->selectable_property(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->selected_property(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->role_property(); break;
        case 15: *reinterpret_cast< QList<MenuItem*>*>(_v) = _t->subitems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::uicomponents::MenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::MenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::uicomponents::MenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void muse::uicomponents::MenuItem::idChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::uicomponents::MenuItem::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::uicomponents::MenuItem::sectionChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void muse::uicomponents::MenuItem::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::uicomponents::MenuItem::selectableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void muse::uicomponents::MenuItem::selectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void muse::uicomponents::MenuItem::roleChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void muse::uicomponents::MenuItem::subitemsChanged(QList<uicomponents::MenuItem*> _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void muse::uicomponents::MenuItem::actionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
