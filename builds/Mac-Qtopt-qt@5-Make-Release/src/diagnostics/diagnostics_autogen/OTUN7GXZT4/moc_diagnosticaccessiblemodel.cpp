/****************************************************************************
** Meta object code from reading C++ file 'diagnosticaccessiblemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/diagnostics/view/diagnosticaccessiblemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagnosticaccessiblemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__diagnostics__DiagnosticAccessibleModel_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__diagnostics__DiagnosticAccessibleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__diagnostics__DiagnosticAccessibleModel_t qt_meta_stringdata_mu__diagnostics__DiagnosticAccessibleModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "mu::diagnostics::DiagnosticAc..."
QT_MOC_LITERAL(1, 43, 12), // "beforeReload"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "afterReload"
QT_MOC_LITERAL(4, 69, 11), // "focusedItem"
QT_MOC_LITERAL(5, 81, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 93, 5), // "index"
QT_MOC_LITERAL(7, 99, 20), // "isAutoRefreshChanged"
QT_MOC_LITERAL(8, 120, 16), // "setIsAutoRefresh"
QT_MOC_LITERAL(9, 137, 13), // "isAutoRefresh"
QT_MOC_LITERAL(10, 151, 4), // "init"
QT_MOC_LITERAL(11, 156, 6) // "reload"

    },
    "mu::diagnostics::DiagnosticAccessibleModel\0"
    "beforeReload\0\0afterReload\0focusedItem\0"
    "QModelIndex\0index\0isAutoRefreshChanged\0"
    "setIsAutoRefresh\0isAutoRefresh\0init\0"
    "reload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__diagnostics__DiagnosticAccessibleModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   55,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   58,    2, 0x02 /* Public */,
      11,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       3,

       0        // eod
};

void mu::diagnostics::DiagnosticAccessibleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiagnosticAccessibleModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->beforeReload(); break;
        case 1: _t->afterReload(); break;
        case 2: _t->focusedItem((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->isAutoRefreshChanged(); break;
        case 4: _t->setIsAutoRefresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->init(); break;
        case 6: _t->reload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiagnosticAccessibleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagnosticAccessibleModel::beforeReload)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiagnosticAccessibleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagnosticAccessibleModel::afterReload)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiagnosticAccessibleModel::*)(QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagnosticAccessibleModel::focusedItem)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DiagnosticAccessibleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagnosticAccessibleModel::isAutoRefreshChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DiagnosticAccessibleModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAutoRefresh(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DiagnosticAccessibleModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsAutoRefresh(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::diagnostics::DiagnosticAccessibleModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_mu__diagnostics__DiagnosticAccessibleModel.data,
    qt_meta_data_mu__diagnostics__DiagnosticAccessibleModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::diagnostics::DiagnosticAccessibleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::diagnostics::DiagnosticAccessibleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__diagnostics__DiagnosticAccessibleModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int mu::diagnostics::DiagnosticAccessibleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void mu::diagnostics::DiagnosticAccessibleModel::beforeReload()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::diagnostics::DiagnosticAccessibleModel::afterReload()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::diagnostics::DiagnosticAccessibleModel::focusedItem(QModelIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::diagnostics::DiagnosticAccessibleModel::isAutoRefreshChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
