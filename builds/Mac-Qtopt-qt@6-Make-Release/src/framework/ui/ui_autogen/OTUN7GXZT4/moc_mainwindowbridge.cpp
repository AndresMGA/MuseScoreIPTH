/****************************************************************************
** Meta object code from reading C++ file 'mainwindowbridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/mainwindowbridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowbridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__MainWindowBridge_t {
    QByteArrayData data[14];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__MainWindowBridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__MainWindowBridge_t qt_meta_stringdata_mu__ui__MainWindowBridge = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::ui::MainWindowBridge"
QT_MOC_LITERAL(1, 25, 13), // "windowChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "filePathChanged"
QT_MOC_LITERAL(4, 56, 19), // "fileModifiedChanged"
QT_MOC_LITERAL(5, 76, 9), // "setWindow"
QT_MOC_LITERAL(6, 86, 8), // "QWindow*"
QT_MOC_LITERAL(7, 95, 6), // "window"
QT_MOC_LITERAL(8, 102, 11), // "setFilePath"
QT_MOC_LITERAL(9, 114, 8), // "filePath"
QT_MOC_LITERAL(10, 123, 15), // "setFileModified"
QT_MOC_LITERAL(11, 139, 8), // "modified"
QT_MOC_LITERAL(12, 148, 34), // "showMinimizedWithSavePrevious..."
QT_MOC_LITERAL(13, 183, 12) // "fileModified"

    },
    "mu::ui::MainWindowBridge\0windowChanged\0"
    "\0filePathChanged\0fileModifiedChanged\0"
    "setWindow\0QWindow*\0window\0setFilePath\0"
    "filePath\0setFileModified\0modified\0"
    "showMinimizedWithSavePreviousState\0"
    "fileModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__MainWindowBridge[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 6, 0x0049510b,
       9, QMetaType::QString, 0x00495103,
      13, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::ui::MainWindowBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindowBridge *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->windowChanged(); break;
        case 1: _t->filePathChanged(); break;
        case 2: _t->fileModifiedChanged(); break;
        case 3: _t->setWindow((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 4: _t->setFilePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setFileModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showMinimizedWithSavePreviousState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindowBridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBridge::windowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindowBridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBridge::filePathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindowBridge::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowBridge::fileModifiedChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainWindowBridge *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWindow**>(_v) = _t->qWindow(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->fileModified(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MainWindowBridge *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWindow(*reinterpret_cast< QWindow**>(_v)); break;
        case 1: _t->setFilePath(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFileModified(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::MainWindowBridge::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__MainWindowBridge.data,
    qt_meta_data_mu__ui__MainWindowBridge,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::MainWindowBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::MainWindowBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__MainWindowBridge.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::MainWindowBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
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
void mu::ui::MainWindowBridge::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::ui::MainWindowBridge::filePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::ui::MainWindowBridge::fileModifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
