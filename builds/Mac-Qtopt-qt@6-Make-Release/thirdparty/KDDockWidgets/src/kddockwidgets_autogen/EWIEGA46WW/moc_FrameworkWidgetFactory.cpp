/****************************************************************************
** Meta object code from reading C++ file 'FrameworkWidgetFactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/FrameworkWidgetFactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameworkWidgetFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__FrameworkWidgetFactory_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__FrameworkWidgetFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__FrameworkWidgetFactory_t qt_meta_stringdata_KDDockWidgets__FrameworkWidgetFactory = {
    {
QT_MOC_LITERAL(0, 0, 37) // "KDDockWidgets::FrameworkWidge..."

    },
    "KDDockWidgets::FrameworkWidgetFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__FrameworkWidgetFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void KDDockWidgets::FrameworkWidgetFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::FrameworkWidgetFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__FrameworkWidgetFactory.data,
    qt_meta_data_KDDockWidgets__FrameworkWidgetFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::FrameworkWidgetFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::FrameworkWidgetFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__FrameworkWidgetFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDDockWidgets::FrameworkWidgetFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_KDDockWidgets__DefaultWidgetFactory_t {
    QByteArrayData data[3];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__DefaultWidgetFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__DefaultWidgetFactory_t qt_meta_stringdata_KDDockWidgets__DefaultWidgetFactory = {
    {
QT_MOC_LITERAL(0, 0, 35), // "KDDockWidgets::DefaultWidgetF..."
QT_MOC_LITERAL(1, 36, 16), // "titleBarFilename"
QT_MOC_LITERAL(2, 53, 0) // ""

    },
    "KDDockWidgets::DefaultWidgetFactory\0"
    "titleBarFilename\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__DefaultWidgetFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QUrl,

       0        // eod
};

void KDDockWidgets::DefaultWidgetFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DefaultWidgetFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QUrl _r = _t->titleBarFilename();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::DefaultWidgetFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<FrameworkWidgetFactory::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__DefaultWidgetFactory.data,
    qt_meta_data_KDDockWidgets__DefaultWidgetFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::DefaultWidgetFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::DefaultWidgetFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__DefaultWidgetFactory.stringdata0))
        return static_cast<void*>(this);
    return FrameworkWidgetFactory::qt_metacast(_clname);
}

int KDDockWidgets::DefaultWidgetFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FrameworkWidgetFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
