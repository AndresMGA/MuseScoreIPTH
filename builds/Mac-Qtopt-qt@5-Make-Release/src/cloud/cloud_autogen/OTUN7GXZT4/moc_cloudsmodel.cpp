/****************************************************************************
** Meta object code from reading C++ file 'cloudsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/cloud/view/cloudsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloudsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__cloud__CloudsModel_t {
    QByteArrayData data[15];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__cloud__CloudsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__cloud__CloudsModel_t qt_meta_stringdata_mu__cloud__CloudsModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::cloud::CloudsModel"
QT_MOC_LITERAL(1, 23, 21), // "userAuthorizedChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 24), // "firstAuthorizedCloudInfo"
QT_MOC_LITERAL(4, 71, 9), // "cloudInfo"
QT_MOC_LITERAL(5, 81, 9), // "cloudCode"
QT_MOC_LITERAL(6, 91, 15), // "visibilityModel"
QT_MOC_LITERAL(7, 107, 10), // "dialogText"
QT_MOC_LITERAL(8, 118, 23), // "existingScoreOrAudioUrl"
QT_MOC_LITERAL(9, 142, 4), // "load"
QT_MOC_LITERAL(10, 147, 13), // "createAccount"
QT_MOC_LITERAL(11, 161, 4), // "code"
QT_MOC_LITERAL(12, 166, 6), // "signIn"
QT_MOC_LITERAL(13, 173, 7), // "signOut"
QT_MOC_LITERAL(14, 181, 14) // "userAuthorized"

    },
    "mu::cloud::CloudsModel\0userAuthorizedChanged\0"
    "\0firstAuthorizedCloudInfo\0cloudInfo\0"
    "cloudCode\0visibilityModel\0dialogText\0"
    "existingScoreOrAudioUrl\0load\0createAccount\0"
    "code\0signIn\0signOut\0userAuthorized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__cloud__CloudsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x02 /* Public */,
       4,    1,   61,    2, 0x02 /* Public */,
       6,    1,   64,    2, 0x02 /* Public */,
       7,    2,   67,    2, 0x02 /* Public */,
       9,    0,   72,    2, 0x02 /* Public */,
      10,    1,   73,    2, 0x02 /* Public */,
      12,    1,   76,    2, 0x02 /* Public */,
      13,    1,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant,
    QMetaType::QVariant, QMetaType::QString,    5,
    QMetaType::QVariantList, QMetaType::QString,    5,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QString,    5,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::cloud::CloudsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CloudsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userAuthorizedChanged(); break;
        case 1: { QVariant _r = _t->firstAuthorizedCloudInfo();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariant _r = _t->cloudInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantList _r = _t->visibilityModel((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariant _r = _t->dialogText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->load(); break;
        case 6: _t->createAccount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->signIn((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->signOut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CloudsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CloudsModel::userAuthorizedChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CloudsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->userAuthorized(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::cloud::CloudsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__cloud__CloudsModel.data,
    qt_meta_data_mu__cloud__CloudsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::cloud::CloudsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::cloud::CloudsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__cloud__CloudsModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::cloud::CloudsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void mu::cloud::CloudsModel::userAuthorizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE