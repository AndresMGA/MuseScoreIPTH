/****************************************************************************
** Meta object code from reading C++ file 'newworkspacemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/workspace/view/newworkspacemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newworkspacemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__workspace__NewWorkspaceModel_t {
    QByteArrayData data[24];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__workspace__NewWorkspaceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__workspace__NewWorkspaceModel_t qt_meta_stringdata_mu__workspace__NewWorkspaceModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::workspace::NewWorkspaceModel"
QT_MOC_LITERAL(1, 33, 20), // "workspaceNameChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 23), // "useUiPreferencesChanged"
QT_MOC_LITERAL(4, 79, 23), // "useUiArrangementChanged"
QT_MOC_LITERAL(5, 103, 18), // "usePalettesChanged"
QT_MOC_LITERAL(6, 122, 30), // "useToolbarCustomizationChanged"
QT_MOC_LITERAL(7, 153, 16), // "setWorkspaceName"
QT_MOC_LITERAL(8, 170, 4), // "name"
QT_MOC_LITERAL(9, 175, 19), // "setUseUiPreferences"
QT_MOC_LITERAL(10, 195, 7), // "needUse"
QT_MOC_LITERAL(11, 203, 19), // "setUseUiArrangement"
QT_MOC_LITERAL(12, 223, 14), // "setUsePalettes"
QT_MOC_LITERAL(13, 238, 26), // "setUseToolbarCustomization"
QT_MOC_LITERAL(14, 265, 4), // "load"
QT_MOC_LITERAL(15, 270, 14), // "workspaceNames"
QT_MOC_LITERAL(16, 285, 15), // "createWorkspace"
QT_MOC_LITERAL(17, 301, 13), // "workspaceName"
QT_MOC_LITERAL(18, 315, 22), // "isWorkspaceNameAllowed"
QT_MOC_LITERAL(19, 338, 12), // "errorMessage"
QT_MOC_LITERAL(20, 351, 16), // "useUiPreferences"
QT_MOC_LITERAL(21, 368, 16), // "useUiArrangement"
QT_MOC_LITERAL(22, 385, 11), // "usePalettes"
QT_MOC_LITERAL(23, 397, 23) // "useToolbarCustomization"

    },
    "mu::workspace::NewWorkspaceModel\0"
    "workspaceNameChanged\0\0useUiPreferencesChanged\0"
    "useUiArrangementChanged\0usePalettesChanged\0"
    "useToolbarCustomizationChanged\0"
    "setWorkspaceName\0name\0setUseUiPreferences\0"
    "needUse\0setUseUiArrangement\0setUsePalettes\0"
    "setUseToolbarCustomization\0load\0"
    "workspaceNames\0createWorkspace\0"
    "workspaceName\0isWorkspaceNameAllowed\0"
    "errorMessage\0useUiPreferences\0"
    "useUiArrangement\0usePalettes\0"
    "useToolbarCustomization"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__workspace__NewWorkspaceModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       7,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   79,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   94,    2, 0x02 /* Public */,
      16,    0,   97,    2, 0x02 /* Public */,

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
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::QString, 0x00495001,
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::Bool, 0x00495103,
      23, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void mu::workspace::NewWorkspaceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        case 5: _t->setWorkspaceName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setUseUiPreferences((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setUseUiArrangement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setUsePalettes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setUseToolbarCustomization((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: { QVariant _r = _t->createWorkspace();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewWorkspaceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewWorkspaceModel::workspaceNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewWorkspaceModel::useUiPreferencesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewWorkspaceModel::useUiArrangementChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewWorkspaceModel::usePalettesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NewWorkspaceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewWorkspaceModel::useToolbarCustomizationChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::workspace::NewWorkspaceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__workspace__NewWorkspaceModel.data,
    qt_meta_data_mu__workspace__NewWorkspaceModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::workspace::NewWorkspaceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::workspace::NewWorkspaceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__workspace__NewWorkspaceModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::workspace::NewWorkspaceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void mu::workspace::NewWorkspaceModel::workspaceNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::workspace::NewWorkspaceModel::useUiPreferencesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::workspace::NewWorkspaceModel::useUiArrangementChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::workspace::NewWorkspaceModel::usePalettesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::workspace::NewWorkspaceModel::useToolbarCustomizationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
