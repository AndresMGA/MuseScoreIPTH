/****************************************************************************
** Meta object code from reading C++ file 'saveandpublishpreferencesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/preferences/saveandpublishpreferencesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saveandpublishpreferencesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__SaveAndPublishPreferencesModel_t {
    QByteArrayData data[16];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__SaveAndPublishPreferencesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__SaveAndPublishPreferencesModel_t qt_meta_stringdata_mu__appshell__SaveAndPublishPreferencesModel = {
    {
QT_MOC_LITERAL(0, 0, 44), // "mu::appshell::SaveAndPublishP..."
QT_MOC_LITERAL(1, 45, 22), // "autoSaveEnabledChanged"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 7), // "enabled"
QT_MOC_LITERAL(4, 77, 23), // "autoSaveIntervalChanged"
QT_MOC_LITERAL(5, 101, 7), // "minutes"
QT_MOC_LITERAL(6, 109, 24), // "alsoShareAudioComChanged"
QT_MOC_LITERAL(7, 134, 6), // "prompt"
QT_MOC_LITERAL(8, 141, 18), // "setAutoSaveEnabled"
QT_MOC_LITERAL(9, 160, 19), // "setAutoSaveInterval"
QT_MOC_LITERAL(10, 180, 20), // "setAlsoShareAudioCom"
QT_MOC_LITERAL(11, 201, 5), // "share"
QT_MOC_LITERAL(12, 207, 4), // "load"
QT_MOC_LITERAL(13, 212, 17), // "isAutoSaveEnabled"
QT_MOC_LITERAL(14, 230, 16), // "autoSaveInterval"
QT_MOC_LITERAL(15, 247, 17) // "alsoShareAudioCom"

    },
    "mu::appshell::SaveAndPublishPreferencesModel\0"
    "autoSaveEnabledChanged\0\0enabled\0"
    "autoSaveIntervalChanged\0minutes\0"
    "alsoShareAudioComChanged\0prompt\0"
    "setAutoSaveEnabled\0setAutoSaveInterval\0"
    "setAlsoShareAudioCom\0share\0load\0"
    "isAutoSaveEnabled\0autoSaveInterval\0"
    "alsoShareAudioCom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__SaveAndPublishPreferencesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   67,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495003,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::appshell::SaveAndPublishPreferencesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveAndPublishPreferencesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->autoSaveEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->autoSaveIntervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->alsoShareAudioComChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setAutoSaveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setAutoSaveInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setAlsoShareAudioCom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SaveAndPublishPreferencesModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SaveAndPublishPreferencesModel::autoSaveEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SaveAndPublishPreferencesModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SaveAndPublishPreferencesModel::autoSaveIntervalChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SaveAndPublishPreferencesModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SaveAndPublishPreferencesModel::alsoShareAudioComChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SaveAndPublishPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAutoSaveEnabled(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->autoSaveInterval(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->alsoShareAudioCom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SaveAndPublishPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoSaveEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAutoSaveInterval(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAlsoShareAudioCom(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::SaveAndPublishPreferencesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__SaveAndPublishPreferencesModel.data,
    qt_meta_data_mu__appshell__SaveAndPublishPreferencesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::SaveAndPublishPreferencesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::SaveAndPublishPreferencesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__SaveAndPublishPreferencesModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::SaveAndPublishPreferencesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mu::appshell::SaveAndPublishPreferencesModel::autoSaveEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::appshell::SaveAndPublishPreferencesModel::autoSaveIntervalChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::appshell::SaveAndPublishPreferencesModel::alsoShareAudioComChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
