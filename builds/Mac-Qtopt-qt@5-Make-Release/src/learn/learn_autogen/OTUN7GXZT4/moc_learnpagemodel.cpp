/****************************************************************************
** Meta object code from reading C++ file 'learnpagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/learn/view/learnpagemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'learnpagemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__learn__LearnPageModel_t {
    QByteArrayData data[13];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__learn__LearnPageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__learn__LearnPageModel_t qt_meta_stringdata_mu__learn__LearnPageModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mu::learn::LearnPageModel"
QT_MOC_LITERAL(1, 26, 22), // "startedPlaylistChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 23), // "advancedPlaylistChanged"
QT_MOC_LITERAL(4, 74, 18), // "setStartedPlaylist"
QT_MOC_LITERAL(5, 93, 8), // "Playlist"
QT_MOC_LITERAL(6, 102, 15), // "startedPlaylist"
QT_MOC_LITERAL(7, 118, 19), // "setAdvancedPlaylist"
QT_MOC_LITERAL(8, 138, 16), // "advancedPlaylist"
QT_MOC_LITERAL(9, 155, 4), // "load"
QT_MOC_LITERAL(10, 160, 13), // "setSearchText"
QT_MOC_LITERAL(11, 174, 4), // "text"
QT_MOC_LITERAL(12, 179, 13) // "classesAuthor"

    },
    "mu::learn::LearnPageModel\0"
    "startedPlaylistChanged\0\0advancedPlaylistChanged\0"
    "setStartedPlaylist\0Playlist\0startedPlaylist\0"
    "setAdvancedPlaylist\0advancedPlaylist\0"
    "load\0setSearchText\0text\0classesAuthor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__learn__LearnPageModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   51,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   57,    2, 0x02 /* Public */,
      10,    1,   58,    2, 0x02 /* Public */,
      12,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::QVariantMap,

 // properties: name, type, flags
       6, QMetaType::QVariantList, 0x00495001,
       8, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void mu::learn::LearnPageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LearnPageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startedPlaylistChanged(); break;
        case 1: _t->advancedPlaylistChanged(); break;
        case 2: _t->setStartedPlaylist((*reinterpret_cast< Playlist(*)>(_a[1]))); break;
        case 3: _t->setAdvancedPlaylist((*reinterpret_cast< Playlist(*)>(_a[1]))); break;
        case 4: _t->load(); break;
        case 5: _t->setSearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { QVariantMap _r = _t->classesAuthor();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LearnPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LearnPageModel::startedPlaylistChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LearnPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LearnPageModel::advancedPlaylistChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LearnPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->startedPlaylist(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->advancedPlaylist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::learn::LearnPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__learn__LearnPageModel.data,
    qt_meta_data_mu__learn__LearnPageModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::learn::LearnPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::learn::LearnPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__learn__LearnPageModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::learn::LearnPageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::learn::LearnPageModel::startedPlaylistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::learn::LearnPageModel::advancedPlaylistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
