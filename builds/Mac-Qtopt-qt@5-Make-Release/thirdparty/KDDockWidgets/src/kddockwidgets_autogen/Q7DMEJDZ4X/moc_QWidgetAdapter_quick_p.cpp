/****************************************************************************
** Meta object code from reading C++ file 'QWidgetAdapter_quick_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/quick/QWidgetAdapter_quick_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QWidgetAdapter_quick_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__QWidgetAdapter_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__QWidgetAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__QWidgetAdapter_t qt_meta_stringdata_KDDockWidgets__QWidgetAdapter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "KDDockWidgets::QWidgetAdapter"
QT_MOC_LITERAL(1, 30, 15), // "geometryUpdated"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 19), // "itemGeometryChanged"
QT_MOC_LITERAL(4, 67, 13), // "showMaximized"
QT_MOC_LITERAL(5, 81, 13), // "showMinimized"
QT_MOC_LITERAL(6, 95, 10), // "showNormal"
QT_MOC_LITERAL(7, 106, 19), // "redirectMouseEvents"
QT_MOC_LITERAL(8, 126, 4), // "from"
QT_MOC_LITERAL(9, 131, 5) // "close"

    },
    "KDDockWidgets::QWidgetAdapter\0"
    "geometryUpdated\0\0itemGeometryChanged\0"
    "showMaximized\0showMinimized\0showNormal\0"
    "redirectMouseEvents\0from\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__QWidgetAdapter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x02 /* Public */,
       5,    0,   52,    2, 0x02 /* Public */,
       6,    0,   53,    2, 0x02 /* Public */,
       7,    1,   54,    2, 0x02 /* Public */,
       9,    0,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    8,
    QMetaType::Bool,

       0        // eod
};

void KDDockWidgets::QWidgetAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWidgetAdapter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->geometryUpdated(); break;
        case 1: _t->itemGeometryChanged(); break;
        case 2: _t->showMaximized(); break;
        case 3: _t->showMinimized(); break;
        case 4: _t->showNormal(); break;
        case 5: _t->redirectMouseEvents((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QWidgetAdapter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWidgetAdapter::geometryUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QWidgetAdapter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWidgetAdapter::itemGeometryChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::QWidgetAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__QWidgetAdapter.data,
    qt_meta_data_KDDockWidgets__QWidgetAdapter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::QWidgetAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::QWidgetAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__QWidgetAdapter.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int KDDockWidgets::QWidgetAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void KDDockWidgets::QWidgetAdapter::geometryUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KDDockWidgets::QWidgetAdapter::itemGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
