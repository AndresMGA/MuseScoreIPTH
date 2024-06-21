/****************************************************************************
** Meta object code from reading C++ file 'soundprofilesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/playback/view/soundprofilesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundprofilesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__playback__SoundProfilesModel_t {
    QByteArrayData data[8];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__playback__SoundProfilesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__playback__SoundProfilesModel_t qt_meta_stringdata_mu__playback__SoundProfilesModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::playback::SoundProfilesModel"
QT_MOC_LITERAL(1, 33, 20), // "activeProfileChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 29), // "defaultProjectsProfileChanged"
QT_MOC_LITERAL(4, 85, 31), // "currentlySelectedProfileChanged"
QT_MOC_LITERAL(5, 117, 13), // "activeProfile"
QT_MOC_LITERAL(6, 131, 22), // "defaultProjectsProfile"
QT_MOC_LITERAL(7, 154, 24) // "currentlySelectedProfile"

    },
    "mu::playback::SoundProfilesModel\0"
    "activeProfileChanged\0\0"
    "defaultProjectsProfileChanged\0"
    "currentlySelectedProfileChanged\0"
    "activeProfile\0defaultProjectsProfile\0"
    "currentlySelectedProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__playback__SoundProfilesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::playback::SoundProfilesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SoundProfilesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeProfileChanged(); break;
        case 1: _t->defaultProjectsProfileChanged(); break;
        case 2: _t->currentlySelectedProfileChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SoundProfilesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoundProfilesModel::activeProfileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SoundProfilesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoundProfilesModel::defaultProjectsProfileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SoundProfilesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoundProfilesModel::currentlySelectedProfileChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SoundProfilesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->activeProfile(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->defaultProjectsProfile(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->currentlySelectedProfile(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SoundProfilesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActiveProfile(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDefaultProjectsProfile(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCurrentlySelectedProfile(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::playback::SoundProfilesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__playback__SoundProfilesModel.data,
    qt_meta_data_mu__playback__SoundProfilesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::playback::SoundProfilesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::SoundProfilesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__playback__SoundProfilesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::playback::SoundProfilesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void mu::playback::SoundProfilesModel::activeProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::playback::SoundProfilesModel::defaultProjectsProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::playback::SoundProfilesModel::currentlySelectedProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
