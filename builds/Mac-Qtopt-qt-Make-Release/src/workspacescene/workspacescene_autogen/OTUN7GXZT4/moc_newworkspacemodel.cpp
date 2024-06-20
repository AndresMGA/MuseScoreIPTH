/****************************************************************************
** Meta object code from reading C++ file 'newworkspacemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/workspacescene/view/newworkspacemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newworkspacemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEworkspacesceneSCOPENewWorkspaceModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEworkspacesceneSCOPENewWorkspaceModelENDCLASS = QtMocHelpers::stringData(
    "mu::workspacescene::NewWorkspaceModel",
    "workspaceNameChanged",
    "",
    "useUiPreferencesChanged",
    "useUiArrangementChanged",
    "usePalettesChanged",
    "useToolbarCustomizationChanged",
    "setWorkspaceName",
    "name",
    "setUseUiPreferences",
    "needUse",
    "setUseUiArrangement",
    "setUsePalettes",
    "setUseToolbarCustomization",
    "load",
    "workspaceNames",
    "createWorkspace",
    "workspaceName",
    "isWorkspaceNameAllowed",
    "errorMessage",
    "useUiPreferences",
    "useUiArrangement",
    "usePalettes",
    "useToolbarCustomization"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEworkspacesceneSCOPENewWorkspaceModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    8 /* Public */,
       3,    0,   87,    2, 0x06,    9 /* Public */,
       4,    0,   88,    2, 0x06,   10 /* Public */,
       5,    0,   89,    2, 0x06,   11 /* Public */,
       6,    0,   90,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   91,    2, 0x0a,   13 /* Public */,
       9,    1,   94,    2, 0x0a,   15 /* Public */,
      11,    1,   97,    2, 0x0a,   17 /* Public */,
      12,    1,  100,    2, 0x0a,   19 /* Public */,
      13,    1,  103,    2, 0x0a,   21 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,  106,    2, 0x02,   23 /* Public */,
      16,    0,  109,    2, 0x102,   25 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::QVariant,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00015103, uint(0), 0,
      18, QMetaType::Bool, 0x00015001, uint(0), 0,
      19, QMetaType::QString, 0x00015001, uint(0), 0,
      20, QMetaType::Bool, 0x00015103, uint(1), 0,
      21, QMetaType::Bool, 0x00015103, uint(2), 0,
      22, QMetaType::Bool, 0x00015103, uint(3), 0,
      23, QMetaType::Bool, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::workspacescene::NewWorkspaceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEworkspacesceneSCOPENewWorkspaceModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEworkspacesceneSCOPENewWorkspaceModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEworkspacesceneSCOPENewWorkspaceModelENDCLASS_t,
        // property 'workspaceName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isWorkspaceNameAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errorMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'useUiPreferences'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'useUiArrangement'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'usePalettes'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'useToolbarCustomization'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NewWorkspaceModel, std::true_type>,
        // method 'workspaceNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'useUiPreferencesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'useUiArrangementChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usePalettesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'useToolbarCustomizationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setWorkspaceName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setUseUiPreferences'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setUseUiArrangement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setUsePalettes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setUseToolbarCustomization'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createWorkspace'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void mu::workspacescene::NewWorkspaceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewWorkspaceModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->workspaceNameChanged(); break;
        case 1: _t->useUiPreferencesChanged(); break;
        case 2: _t->useUiArrangementChanged(); break;
        case 3: _t->usePalettesChanged(); break;
        case 4: _t->useToolbarCustomizationChanged(); break;
        case 5: _t->setWorkspaceName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setUseUiPreferences((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setUseUiArrangement((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setUsePalettes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setUseToolbarCustomization((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: { QVariant _r = _t->createWorkspace();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewWorkspaceModel::*)();
            if (_t _q_method = &NewWorkspaceModel::workspaceNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (_t _q_method = &NewWorkspaceModel::useUiPreferencesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (_t _q_method = &NewWorkspaceModel::useUiArrangementChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (_t _q_method = &NewWorkspaceModel::usePalettesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (_t _q_method = &NewWorkspaceModel::useToolbarCustomizationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NewWorkspaceModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->workspaceName(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isWorkspaceNameAllowed(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->useUiPreferences(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->useUiArrangement(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->usePalettes(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->useToolbarCustomization(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NewWorkspaceModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWorkspaceName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUseUiPreferences(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setUseUiArrangement(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setUsePalettes(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setUseToolbarCustomization(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::workspacescene::NewWorkspaceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::workspacescene::NewWorkspaceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEworkspacesceneSCOPENewWorkspaceModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::workspacescene::NewWorkspaceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mu::workspacescene::NewWorkspaceModel::workspaceNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::workspacescene::NewWorkspaceModel::useUiPreferencesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::workspacescene::NewWorkspaceModel::useUiArrangementChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::workspacescene::NewWorkspaceModel::usePalettesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::workspacescene::NewWorkspaceModel::useToolbarCustomizationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
