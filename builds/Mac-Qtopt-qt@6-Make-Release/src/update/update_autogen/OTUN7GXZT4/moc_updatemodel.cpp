/****************************************************************************
** Meta object code from reading C++ file 'updatemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/update/view/updatemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__update__UpdateModel_t {
    QByteArrayData data[14];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__update__UpdateModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__update__UpdateModel_t qt_meta_stringdata_mu__update__UpdateModel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::update::UpdateModel"
QT_MOC_LITERAL(1, 24, 7), // "started"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "finished"
QT_MOC_LITERAL(4, 42, 9), // "errorCode"
QT_MOC_LITERAL(5, 52, 13), // "installerPath"
QT_MOC_LITERAL(6, 66, 22), // "currentProgressChanged"
QT_MOC_LITERAL(7, 89, 20), // "totalProgressChanged"
QT_MOC_LITERAL(8, 110, 20), // "progressTitleChanged"
QT_MOC_LITERAL(9, 131, 4), // "load"
QT_MOC_LITERAL(10, 136, 4), // "mode"
QT_MOC_LITERAL(11, 141, 15), // "currentProgress"
QT_MOC_LITERAL(12, 157, 13), // "totalProgress"
QT_MOC_LITERAL(13, 171, 13) // "progressTitle"

    },
    "mu::update::UpdateModel\0started\0\0"
    "finished\0errorCode\0installerPath\0"
    "currentProgressChanged\0totalProgressChanged\0"
    "progressTitleChanged\0load\0mode\0"
    "currentProgress\0totalProgress\0"
    "progressTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__update__UpdateModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       2,
       3,
       4,

       0        // eod
};

void mu::update::UpdateModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->currentProgressChanged(); break;
        case 3: _t->totalProgressChanged(); break;
        case 4: _t->progressTitleChanged(); break;
        case 5: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateModel::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpdateModel::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateModel::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UpdateModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateModel::currentProgressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UpdateModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateModel::totalProgressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UpdateModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateModel::progressTitleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UpdateModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentProgress(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->totalProgress(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->progressTitle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::update::UpdateModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__update__UpdateModel.data,
    qt_meta_data_mu__update__UpdateModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::update::UpdateModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::update::UpdateModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__update__UpdateModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::update::UpdateModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void mu::update::UpdateModel::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::update::UpdateModel::finished(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::update::UpdateModel::currentProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::update::UpdateModel::totalProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::update::UpdateModel::progressTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
