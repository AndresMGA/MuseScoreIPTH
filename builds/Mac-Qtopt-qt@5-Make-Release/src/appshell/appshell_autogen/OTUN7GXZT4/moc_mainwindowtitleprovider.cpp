/****************************************************************************
** Meta object code from reading C++ file 'mainwindowtitleprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/mainwindowtitleprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowtitleprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__MainWindowTitleProvider_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__MainWindowTitleProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__MainWindowTitleProvider_t qt_meta_stringdata_mu__appshell__MainWindowTitleProvider = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::appshell::MainWindowTitle..."
QT_MOC_LITERAL(1, 38, 12), // "titleChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 5), // "title"
QT_MOC_LITERAL(4, 58, 15), // "filePathChanged"
QT_MOC_LITERAL(5, 74, 8), // "filePath"
QT_MOC_LITERAL(6, 83, 19), // "fileModifiedChanged"
QT_MOC_LITERAL(7, 103, 12), // "fileModified"
QT_MOC_LITERAL(8, 116, 4) // "load"

    },
    "mu::appshell::MainWindowTitleProvider\0"
    "titleChanged\0\0title\0filePathChanged\0"
    "filePath\0fileModifiedChanged\0fileModified\0"
    "load"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__MainWindowTitleProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,
       5, QMetaType::QString, 0x00495001,
       7, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::appshell::MainWindowTitleProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindowTitleProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->filePathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->fileModifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindowTitleProvider::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowTitleProvider::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindowTitleProvider::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowTitleProvider::filePathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindowTitleProvider::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowTitleProvider::fileModifiedChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainWindowTitleProvider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->fileModified(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::MainWindowTitleProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__MainWindowTitleProvider.data,
    qt_meta_data_mu__appshell__MainWindowTitleProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::MainWindowTitleProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::MainWindowTitleProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__MainWindowTitleProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::MainWindowTitleProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mu::appshell::MainWindowTitleProvider::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::appshell::MainWindowTitleProvider::filePathChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::appshell::MainWindowTitleProvider::fileModifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE