/****************************************************************************
** Meta object code from reading C++ file 'diagnosticnavigationmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/diagnostics/view/keynav/diagnosticnavigationmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagnosticnavigationmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__diagnostics__DiagnosticNavigationModel_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__diagnostics__DiagnosticNavigationModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__diagnostics__DiagnosticNavigationModel_t qt_meta_stringdata_mu__diagnostics__DiagnosticNavigationModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "mu::diagnostics::DiagnosticNa..."
QT_MOC_LITERAL(1, 43, 12), // "beforeReload"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "afterReload"
QT_MOC_LITERAL(4, 69, 15), // "sectionsChanged"
QT_MOC_LITERAL(5, 85, 6), // "reload"
QT_MOC_LITERAL(6, 92, 8) // "sections"

    },
    "mu::diagnostics::DiagnosticNavigationModel\0"
    "beforeReload\0\0afterReload\0sectionsChanged\0"
    "reload\0sections"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__diagnostics__DiagnosticNavigationModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       2,

       0        // eod
};

void mu::diagnostics::DiagnosticNavigationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiagnosticNavigationModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->beforeReload(); break;
        case 1: _t->afterReload(); break;
        case 2: _t->sectionsChanged(); break;
        case 3: _t->reload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiagnosticNavigationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagnosticNavigationModel::beforeReload)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiagnosticNavigationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagnosticNavigationModel::afterReload)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiagnosticNavigationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagnosticNavigationModel::sectionsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DiagnosticNavigationModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->sections(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::diagnostics::DiagnosticNavigationModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__diagnostics__DiagnosticNavigationModel.data,
    qt_meta_data_mu__diagnostics__DiagnosticNavigationModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::diagnostics::DiagnosticNavigationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::diagnostics::DiagnosticNavigationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__diagnostics__DiagnosticNavigationModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::diagnostics::DiagnosticNavigationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void mu::diagnostics::DiagnosticNavigationModel::beforeReload()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::diagnostics::DiagnosticNavigationModel::afterReload()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::diagnostics::DiagnosticNavigationModel::sectionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE