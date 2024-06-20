/****************************************************************************
** Meta object code from reading C++ file 'playbackloadingmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/playback/view/playbackloadingmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playbackloadingmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__playback__PlaybackLoadingModel_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__playback__PlaybackLoadingModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__playback__PlaybackLoadingModel_t qt_meta_stringdata_mu__playback__PlaybackLoadingModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mu::playback::PlaybackLoading..."
QT_MOC_LITERAL(1, 35, 22), // "currentProgressChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 20), // "totalProgressChanged"
QT_MOC_LITERAL(4, 80, 20), // "progressTitleChanged"
QT_MOC_LITERAL(5, 101, 7), // "started"
QT_MOC_LITERAL(6, 109, 8), // "finished"
QT_MOC_LITERAL(7, 118, 4), // "load"
QT_MOC_LITERAL(8, 123, 15), // "currentProgress"
QT_MOC_LITERAL(9, 139, 13), // "totalProgress"
QT_MOC_LITERAL(10, 153, 13) // "progressTitle"

    },
    "mu::playback::PlaybackLoadingModel\0"
    "currentProgressChanged\0\0totalProgressChanged\0"
    "progressTitleChanged\0started\0finished\0"
    "load\0currentProgress\0totalProgress\0"
    "progressTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__playback__PlaybackLoadingModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495001,
       9, QMetaType::Int, 0x00495001,
      10, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::playback::PlaybackLoadingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaybackLoadingModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentProgressChanged(); break;
        case 1: _t->totalProgressChanged(); break;
        case 2: _t->progressTitleChanged(); break;
        case 3: _t->started(); break;
        case 4: _t->finished(); break;
        case 5: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaybackLoadingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackLoadingModel::currentProgressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaybackLoadingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackLoadingModel::totalProgressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaybackLoadingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackLoadingModel::progressTitleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaybackLoadingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackLoadingModel::started)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaybackLoadingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaybackLoadingModel::finished)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlaybackLoadingModel *>(_o);
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
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::playback::PlaybackLoadingModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__playback__PlaybackLoadingModel.data,
    qt_meta_data_mu__playback__PlaybackLoadingModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::playback::PlaybackLoadingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::PlaybackLoadingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__playback__PlaybackLoadingModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::playback::PlaybackLoadingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mu::playback::PlaybackLoadingModel::currentProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::playback::PlaybackLoadingModel::totalProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::playback::PlaybackLoadingModel::progressTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::playback::PlaybackLoadingModel::started()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::playback::PlaybackLoadingModel::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
