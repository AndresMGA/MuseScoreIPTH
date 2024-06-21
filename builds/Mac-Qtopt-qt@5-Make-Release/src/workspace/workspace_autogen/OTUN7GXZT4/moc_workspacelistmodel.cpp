/****************************************************************************
** Meta object code from reading C++ file 'workspacelistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/workspace/view/workspacelistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workspacelistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__workspace__WorkspaceListModel_t {
    QByteArrayData data[10];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__workspace__WorkspaceListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__workspace__WorkspaceListModel_t qt_meta_stringdata_mu__workspace__WorkspaceListModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::workspace::WorkspaceListM..."
QT_MOC_LITERAL(1, 34, 24), // "selectedWorkspaceChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 17), // "selectedWorkspace"
QT_MOC_LITERAL(4, 78, 4), // "load"
QT_MOC_LITERAL(5, 83, 5), // "apply"
QT_MOC_LITERAL(6, 89, 18), // "createNewWorkspace"
QT_MOC_LITERAL(7, 108, 15), // "selectWorkspace"
QT_MOC_LITERAL(8, 124, 14), // "workspaceIndex"
QT_MOC_LITERAL(9, 139, 15) // "removeWorkspace"

    },
    "mu::workspace::WorkspaceListModel\0"
    "selectedWorkspaceChanged\0\0selectedWorkspace\0"
    "load\0apply\0createNewWorkspace\0"
    "selectWorkspace\0workspaceIndex\0"
    "removeWorkspace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__workspace__WorkspaceListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       6,    0,   49,    2, 0x02 /* Public */,
       7,    1,   50,    2, 0x02 /* Public */,
       9,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       3, QMetaType::QVariant, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::workspace::WorkspaceListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorkspaceListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedWorkspaceChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->load(); break;
        case 2: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->createNewWorkspace(); break;
        case 4: _t->selectWorkspace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->removeWorkspace((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WorkspaceListModel::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WorkspaceListModel::selectedWorkspaceChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WorkspaceListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->selectedWorkspace(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::workspace::WorkspaceListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__workspace__WorkspaceListModel.data,
    qt_meta_data_mu__workspace__WorkspaceListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::workspace::WorkspaceListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::workspace::WorkspaceListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__workspace__WorkspaceListModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::workspace::WorkspaceListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::workspace::WorkspaceListModel::selectedWorkspaceChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
