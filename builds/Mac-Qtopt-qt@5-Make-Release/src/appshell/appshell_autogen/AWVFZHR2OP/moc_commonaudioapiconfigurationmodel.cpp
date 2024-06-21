/****************************************************************************
** Meta object code from reading C++ file 'commonaudioapiconfigurationmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/preferences/commonaudioapiconfigurationmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commonaudioapiconfigurationmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__CommonAudioApiConfigurationModel_t {
    QByteArrayData data[16];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__CommonAudioApiConfigurationModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__CommonAudioApiConfigurationModel_t qt_meta_stringdata_mu__appshell__CommonAudioApiConfigurationModel = {
    {
QT_MOC_LITERAL(0, 0, 46), // "mu::appshell::CommonAudioApiC..."
QT_MOC_LITERAL(1, 47, 22), // "currentDeviceIdChanged"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 17), // "deviceListChanged"
QT_MOC_LITERAL(4, 89, 17), // "bufferSizeChanged"
QT_MOC_LITERAL(5, 107, 21), // "bufferSizeListChanged"
QT_MOC_LITERAL(6, 129, 4), // "load"
QT_MOC_LITERAL(7, 134, 14), // "deviceSelected"
QT_MOC_LITERAL(8, 149, 8), // "deviceId"
QT_MOC_LITERAL(9, 158, 18), // "bufferSizeSelected"
QT_MOC_LITERAL(10, 177, 13), // "bufferSizeStr"
QT_MOC_LITERAL(11, 191, 15), // "currentDeviceId"
QT_MOC_LITERAL(12, 207, 10), // "deviceList"
QT_MOC_LITERAL(13, 218, 10), // "bufferSize"
QT_MOC_LITERAL(14, 229, 14), // "bufferSizeList"
QT_MOC_LITERAL(15, 244, 11) // "QList<uint>"

    },
    "mu::appshell::CommonAudioApiConfigurationModel\0"
    "currentDeviceIdChanged\0\0deviceListChanged\0"
    "bufferSizeChanged\0bufferSizeListChanged\0"
    "load\0deviceSelected\0deviceId\0"
    "bufferSizeSelected\0bufferSizeStr\0"
    "currentDeviceId\0deviceList\0bufferSize\0"
    "bufferSizeList\0QList<uint>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__CommonAudioApiConfigurationModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x02 /* Public */,
       7,    1,   54,    2, 0x02 /* Public */,
       9,    1,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::QVariantList, 0x00495001,
      13, QMetaType::UInt, 0x00495001,
      14, 0x80000000 | 15, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void mu::appshell::CommonAudioApiConfigurationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommonAudioApiConfigurationModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentDeviceIdChanged(); break;
        case 1: _t->deviceListChanged(); break;
        case 2: _t->bufferSizeChanged(); break;
        case 3: _t->bufferSizeListChanged(); break;
        case 4: _t->load(); break;
        case 5: _t->deviceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->bufferSizeSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonAudioApiConfigurationModel::currentDeviceIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonAudioApiConfigurationModel::deviceListChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonAudioApiConfigurationModel::bufferSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonAudioApiConfigurationModel::bufferSizeListChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<uint> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CommonAudioApiConfigurationModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentDeviceId(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->deviceList(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->bufferSize(); break;
        case 3: *reinterpret_cast< QList<uint>*>(_v) = _t->bufferSizeList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::CommonAudioApiConfigurationModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__CommonAudioApiConfigurationModel.data,
    qt_meta_data_mu__appshell__CommonAudioApiConfigurationModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::CommonAudioApiConfigurationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::CommonAudioApiConfigurationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__CommonAudioApiConfigurationModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::CommonAudioApiConfigurationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::appshell::CommonAudioApiConfigurationModel::currentDeviceIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::appshell::CommonAudioApiConfigurationModel::deviceListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::CommonAudioApiConfigurationModel::bufferSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::CommonAudioApiConfigurationModel::bufferSizeListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
