/****************************************************************************
** Meta object code from reading C++ file 'interactiveprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/interactiveprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactiveprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__QmlLaunchData_t {
    QByteArrayData data[7];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__QmlLaunchData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__QmlLaunchData_t qt_meta_stringdata_mu__ui__QmlLaunchData = {
    {
QT_MOC_LITERAL(0, 0, 21), // "mu::ui::QmlLaunchData"
QT_MOC_LITERAL(1, 22, 5), // "value"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "key"
QT_MOC_LITERAL(4, 33, 8), // "setValue"
QT_MOC_LITERAL(5, 42, 3), // "val"
QT_MOC_LITERAL(6, 46, 4) // "data"

    },
    "mu::ui::QmlLaunchData\0value\0\0key\0"
    "setValue\0val\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__QmlLaunchData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       4,    2,   32,    2, 0x02 /* Public */,
       6,    0,   37,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariant, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    5,
    QMetaType::QVariant,

       0        // eod
};

void mu::ui::QmlLaunchData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QmlLaunchData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: { QVariant _r = _t->data();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::QmlLaunchData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__QmlLaunchData.data,
    qt_meta_data_mu__ui__QmlLaunchData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::QmlLaunchData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::QmlLaunchData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__QmlLaunchData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::QmlLaunchData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_mu__ui__InteractiveProvider_t {
    QByteArrayData data[19];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__InteractiveProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__InteractiveProvider_t qt_meta_stringdata_mu__ui__InteractiveProvider = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::ui::InteractiveProvider"
QT_MOC_LITERAL(1, 28, 8), // "fireOpen"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "mu::ui::QmlLaunchData*"
QT_MOC_LITERAL(4, 61, 4), // "data"
QT_MOC_LITERAL(5, 66, 9), // "fireClose"
QT_MOC_LITERAL(6, 76, 9), // "fireRaise"
QT_MOC_LITERAL(7, 86, 22), // "fireOpenStandardDialog"
QT_MOC_LITERAL(8, 109, 18), // "fireOpenFileDialog"
QT_MOC_LITERAL(9, 128, 22), // "fireOpenProgressDialog"
QT_MOC_LITERAL(10, 151, 9), // "topWindow"
QT_MOC_LITERAL(11, 161, 8), // "QWindow*"
QT_MOC_LITERAL(12, 170, 8), // "objectId"
QT_MOC_LITERAL(13, 179, 3), // "val"
QT_MOC_LITERAL(14, 183, 6), // "onOpen"
QT_MOC_LITERAL(15, 190, 4), // "type"
QT_MOC_LITERAL(16, 195, 6), // "window"
QT_MOC_LITERAL(17, 202, 7), // "onClose"
QT_MOC_LITERAL(18, 210, 2) // "rv"

    },
    "mu::ui::InteractiveProvider\0fireOpen\0"
    "\0mu::ui::QmlLaunchData*\0data\0fireClose\0"
    "fireRaise\0fireOpenStandardDialog\0"
    "fireOpenFileDialog\0fireOpenProgressDialog\0"
    "topWindow\0QWindow*\0objectId\0val\0onOpen\0"
    "type\0window\0onClose\0rv"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__InteractiveProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       7,    1,   78,    2, 0x06 /* Public */,
       8,    1,   81,    2, 0x06 /* Public */,
       9,    1,   84,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   87,    2, 0x02 /* Public */,
      12,    1,   88,    2, 0x02 /* Public */,
      14,    3,   91,    2, 0x02 /* Public */,
      14,    2,   98,    2, 0x22 /* Public | MethodCloned */,
      17,    2,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    0x80000000 | 11,
    QMetaType::QString, QMetaType::QVariant,   13,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QObjectStar,   15,   12,   16,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,   15,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   12,   18,

       0        // eod
};

void mu::ui::InteractiveProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fireOpen((*reinterpret_cast< mu::ui::QmlLaunchData*(*)>(_a[1]))); break;
        case 1: _t->fireClose((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->fireRaise((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->fireOpenStandardDialog((*reinterpret_cast< mu::ui::QmlLaunchData*(*)>(_a[1]))); break;
        case 4: _t->fireOpenFileDialog((*reinterpret_cast< mu::ui::QmlLaunchData*(*)>(_a[1]))); break;
        case 5: _t->fireOpenProgressDialog((*reinterpret_cast< mu::ui::QmlLaunchData*(*)>(_a[1]))); break;
        case 6: { QWindow* _r = _t->topWindow();
            if (_a[0]) *reinterpret_cast< QWindow**>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->objectId((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->onOpen((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        case 9: _t->onOpen((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 10: _t->onClose((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::QmlLaunchData* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::QmlLaunchData* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::QmlLaunchData* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::QmlLaunchData* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InteractiveProvider::*)(mu::ui::QmlLaunchData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveProvider::fireOpen)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InteractiveProvider::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveProvider::fireClose)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InteractiveProvider::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveProvider::fireRaise)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InteractiveProvider::*)(mu::ui::QmlLaunchData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveProvider::fireOpenStandardDialog)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InteractiveProvider::*)(mu::ui::QmlLaunchData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveProvider::fireOpenFileDialog)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InteractiveProvider::*)(mu::ui::QmlLaunchData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveProvider::fireOpenProgressDialog)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::InteractiveProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__InteractiveProvider.data,
    qt_meta_data_mu__ui__InteractiveProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::InteractiveProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::InteractiveProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__InteractiveProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IInteractiveProvider"))
        return static_cast< IInteractiveProvider*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::InteractiveProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void mu::ui::InteractiveProvider::fireOpen(mu::ui::QmlLaunchData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::ui::InteractiveProvider::fireClose(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::ui::InteractiveProvider::fireRaise(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::ui::InteractiveProvider::fireOpenStandardDialog(mu::ui::QmlLaunchData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::ui::InteractiveProvider::fireOpenFileDialog(mu::ui::QmlLaunchData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::ui::InteractiveProvider::fireOpenProgressDialog(mu::ui::QmlLaunchData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
