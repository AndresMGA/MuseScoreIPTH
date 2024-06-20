/****************************************************************************
** Meta object code from reading C++ file 'DockRegistry_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/DockRegistry_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockRegistry_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__DockRegistry_t {
    QByteArrayData data[23];
    char stringdata0[450];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__DockRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__DockRegistry_t qt_meta_stringdata_KDDockWidgets__DockRegistry = {
    {
QT_MOC_LITERAL(0, 0, 27), // "KDDockWidgets::DockRegistry"
QT_MOC_LITERAL(1, 28, 19), // "windowChangedScreen"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "QWindow*"
QT_MOC_LITERAL(4, 58, 23), // "frameInMDIResizeChanged"
QT_MOC_LITERAL(5, 82, 30), // "dropIndicatorsInhibitedChanged"
QT_MOC_LITERAL(6, 113, 9), // "inhibited"
QT_MOC_LITERAL(7, 123, 17), // "focusedDockWidget"
QT_MOC_LITERAL(8, 141, 30), // "KDDockWidgets::DockWidgetBase*"
QT_MOC_LITERAL(9, 172, 18), // "containsDockWidget"
QT_MOC_LITERAL(10, 191, 10), // "uniqueName"
QT_MOC_LITERAL(11, 202, 18), // "containsMainWindow"
QT_MOC_LITERAL(12, 221, 10), // "dockByName"
QT_MOC_LITERAL(13, 232, 44), // "KDDockWidgets::DockRegistry::..."
QT_MOC_LITERAL(14, 277, 16), // "mainWindowByName"
QT_MOC_LITERAL(15, 294, 30), // "KDDockWidgets::MainWindowBase*"
QT_MOC_LITERAL(16, 325, 19), // "mdiMainWindowByName"
QT_MOC_LITERAL(17, 345, 29), // "KDDockWidgets::MainWindowMDI*"
QT_MOC_LITERAL(18, 375, 18), // "hasFloatingWindows"
QT_MOC_LITERAL(19, 394, 5), // "clear"
QT_MOC_LITERAL(20, 400, 10), // "affinities"
QT_MOC_LITERAL(21, 411, 16), // "frameInMDIResize"
QT_MOC_LITERAL(22, 428, 21) // "KDDockWidgets::Frame*"

    },
    "KDDockWidgets::DockRegistry\0"
    "windowChangedScreen\0\0QWindow*\0"
    "frameInMDIResizeChanged\0"
    "dropIndicatorsInhibitedChanged\0inhibited\0"
    "focusedDockWidget\0KDDockWidgets::DockWidgetBase*\0"
    "containsDockWidget\0uniqueName\0"
    "containsMainWindow\0dockByName\0"
    "KDDockWidgets::DockRegistry::DockByNameFlags\0"
    "mainWindowByName\0KDDockWidgets::MainWindowBase*\0"
    "mdiMainWindowByName\0KDDockWidgets::MainWindowMDI*\0"
    "hasFloatingWindows\0clear\0affinities\0"
    "frameInMDIResize\0KDDockWidgets::Frame*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__DockRegistry[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    0,   82,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   86,    2, 0x02 /* Public */,
       9,    1,   87,    2, 0x02 /* Public */,
      11,    1,   90,    2, 0x02 /* Public */,
      12,    2,   93,    2, 0x02 /* Public */,
      12,    1,   98,    2, 0x22 /* Public | MethodCloned */,
      14,    1,  101,    2, 0x02 /* Public */,
      16,    1,  104,    2, 0x02 /* Public */,
      18,    0,  107,    2, 0x02 /* Public */,
      19,    1,  108,    2, 0x02 /* Public */,
      19,    0,  111,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // methods: parameters
    0x80000000 | 8,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::Bool, QMetaType::QString,   10,
    0x80000000 | 8, QMetaType::QString, 0x80000000 | 13,    2,    2,
    0x80000000 | 8, QMetaType::QString,    2,
    0x80000000 | 15, QMetaType::QString,    2,
    0x80000000 | 17, QMetaType::QString,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QStringList,   20,
    QMetaType::Void,

 // properties: name, type, flags
      21, 0x80000000 | 22, 0x00495009,

 // properties: notify_signal_id
       1,

       0        // eod
};

void KDDockWidgets::DockRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockRegistry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->windowChangedScreen((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 1: _t->frameInMDIResizeChanged(); break;
        case 2: _t->dropIndicatorsInhibitedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { KDDockWidgets::DockWidgetBase* _r = _t->focusedDockWidget();
            if (_a[0]) *reinterpret_cast< KDDockWidgets::DockWidgetBase**>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->containsDockWidget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->containsMainWindow((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { KDDockWidgets::DockWidgetBase* _r = _t->dockByName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< KDDockWidgets::DockRegistry::DockByNameFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::DockWidgetBase**>(_a[0]) = std::move(_r); }  break;
        case 7: { KDDockWidgets::DockWidgetBase* _r = _t->dockByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::DockWidgetBase**>(_a[0]) = std::move(_r); }  break;
        case 8: { KDDockWidgets::MainWindowBase* _r = _t->mainWindowByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::MainWindowBase**>(_a[0]) = std::move(_r); }  break;
        case 9: { KDDockWidgets::MainWindowMDI* _r = _t->mdiMainWindowByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::MainWindowMDI**>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->hasFloatingWindows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->clear((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 12: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            using _t = void (DockRegistry::*)(QWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRegistry::windowChangedScreen)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockRegistry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRegistry::frameInMDIResizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockRegistry::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockRegistry::dropIndicatorsInhibitedChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDDockWidgets::Frame* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockRegistry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KDDockWidgets::Frame**>(_v) = _t->frameInMDIResize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::DockRegistry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__DockRegistry.data,
    qt_meta_data_KDDockWidgets__DockRegistry,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::DockRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::DockRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__DockRegistry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDDockWidgets::DockRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void KDDockWidgets::DockRegistry::windowChangedScreen(QWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDDockWidgets::DockRegistry::frameInMDIResizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDDockWidgets::DockRegistry::dropIndicatorsInhibitedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
