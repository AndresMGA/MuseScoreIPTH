/****************************************************************************
** Meta object code from reading C++ file 'cloudscoresmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/project/view/cloudscoresmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloudscoresmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__project__CloudScoresModel_t {
    QByteArrayData data[14];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__project__CloudScoresModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__project__CloudScoresModel_t qt_meta_stringdata_mu__project__CloudScoresModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::project::CloudScoresModel"
QT_MOC_LITERAL(1, 30, 12), // "stateChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "hasMoreChanged"
QT_MOC_LITERAL(4, 59, 22), // "desiredRowCountChanged"
QT_MOC_LITERAL(5, 82, 6), // "reload"
QT_MOC_LITERAL(6, 89, 5), // "state"
QT_MOC_LITERAL(7, 95, 5), // "State"
QT_MOC_LITERAL(8, 101, 7), // "hasMore"
QT_MOC_LITERAL(9, 109, 15), // "desiredRowCount"
QT_MOC_LITERAL(10, 125, 4), // "Fine"
QT_MOC_LITERAL(11, 130, 7), // "Loading"
QT_MOC_LITERAL(12, 138, 11), // "NotSignedIn"
QT_MOC_LITERAL(13, 150, 5) // "Error"

    },
    "mu::project::CloudScoresModel\0"
    "stateChanged\0\0hasMoreChanged\0"
    "desiredRowCountChanged\0reload\0state\0"
    "State\0hasMore\0desiredRowCount\0Fine\0"
    "Loading\0NotSignedIn\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__project__CloudScoresModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       1,   50, // enums/sets
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
       6, 0x80000000 | 7, 0x00495009,
       8, QMetaType::Bool, 0x00495001,
       9, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, alias, flags, count, data
       7,    7, 0x2,    4,   55,

 // enum data: key, value
      10, uint(mu::project::CloudScoresModel::State::Fine),
      11, uint(mu::project::CloudScoresModel::State::Loading),
      12, uint(mu::project::CloudScoresModel::State::NotSignedIn),
      13, uint(mu::project::CloudScoresModel::State::Error),

       0        // eod
};

void mu::project::CloudScoresModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CloudScoresModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->hasMoreChanged(); break;
        case 2: _t->desiredRowCountChanged(); break;
        case 3: _t->reload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CloudScoresModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CloudScoresModel::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CloudScoresModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CloudScoresModel::hasMoreChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CloudScoresModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CloudScoresModel::desiredRowCountChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CloudScoresModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasMore(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->desiredRowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CloudScoresModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setDesiredRowCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::project::CloudScoresModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractScoresModel::staticMetaObject>(),
    qt_meta_stringdata_mu__project__CloudScoresModel.data,
    qt_meta_data_mu__project__CloudScoresModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::project::CloudScoresModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::CloudScoresModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__project__CloudScoresModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return AbstractScoresModel::qt_metacast(_clname);
}

int mu::project::CloudScoresModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractScoresModel::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::project::CloudScoresModel::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::project::CloudScoresModel::hasMoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::project::CloudScoresModel::desiredRowCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
