/****************************************************************************
** Meta object code from reading C++ file 'dockframemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/dockwindow/internal/dockframemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockframemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__dock__DockFrameModel_t {
    QByteArrayData data[24];
    char stringdata0[376];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockFrameModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockFrameModel_t qt_meta_stringdata_mu__dock__DockFrameModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::dock::DockFrameModel"
QT_MOC_LITERAL(1, 25, 12), // "frameChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "QQuickItem*"
QT_MOC_LITERAL(4, 51, 5), // "frame"
QT_MOC_LITERAL(5, 57, 11), // "tabsChanged"
QT_MOC_LITERAL(6, 69, 22), // "titleBarVisibleChanged"
QT_MOC_LITERAL(7, 92, 7), // "visible"
QT_MOC_LITERAL(8, 100, 24), // "isHorizontalPanelChanged"
QT_MOC_LITERAL(9, 125, 24), // "navigationSectionChanged"
QT_MOC_LITERAL(10, 150, 18), // "currentDockChanged"
QT_MOC_LITERAL(11, 169, 26), // "highlightingVisibleChanged"
QT_MOC_LITERAL(12, 196, 8), // "setFrame"
QT_MOC_LITERAL(13, 205, 4), // "item"
QT_MOC_LITERAL(14, 210, 14), // "handleMenuItem"
QT_MOC_LITERAL(15, 225, 6), // "itemId"
QT_MOC_LITERAL(16, 232, 4), // "tabs"
QT_MOC_LITERAL(17, 237, 15), // "titleBarVisible"
QT_MOC_LITERAL(18, 253, 17), // "isHorizontalPanel"
QT_MOC_LITERAL(19, 271, 17), // "navigationSection"
QT_MOC_LITERAL(20, 289, 21), // "currentDockUniqueName"
QT_MOC_LITERAL(21, 311, 27), // "currentDockContextMenuModel"
QT_MOC_LITERAL(22, 339, 19), // "highlightingVisible"
QT_MOC_LITERAL(23, 359, 16) // "highlightingRect"

    },
    "mu::dock::DockFrameModel\0frameChanged\0"
    "\0QQuickItem*\0frame\0tabsChanged\0"
    "titleBarVisibleChanged\0visible\0"
    "isHorizontalPanelChanged\0"
    "navigationSectionChanged\0currentDockChanged\0"
    "highlightingVisibleChanged\0setFrame\0"
    "item\0handleMenuItem\0itemId\0tabs\0"
    "titleBarVisible\0isHorizontalPanel\0"
    "navigationSection\0currentDockUniqueName\0"
    "currentDockContextMenuModel\0"
    "highlightingVisible\0highlightingRect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockFrameModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       8,    0,   66,    2, 0x06 /* Public */,
       9,    0,   67,    2, 0x06 /* Public */,
      10,    0,   68,    2, 0x06 /* Public */,
      11,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   70,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   13,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   15,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      16, QMetaType::QVariantList, 0x00495001,
      17, QMetaType::Bool, 0x00495001,
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::QObjectStar, 0x00495001,
      20, QMetaType::QString, 0x00495001,
      21, QMetaType::QVariant, 0x00495001,
      22, QMetaType::Bool, 0x00495001,
      23, QMetaType::QRect, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       5,
       6,
       6,

       0        // eod
};

void mu::dock::DockFrameModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockFrameModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->frameChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 1: _t->tabsChanged(); break;
        case 2: _t->titleBarVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->isHorizontalPanelChanged(); break;
        case 4: _t->navigationSectionChanged(); break;
        case 5: _t->currentDockChanged(); break;
        case 6: _t->highlightingVisibleChanged(); break;
        case 7: _t->setFrame((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 8: _t->handleMenuItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockFrameModel::*)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFrameModel::frameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFrameModel::tabsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFrameModel::titleBarVisibleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFrameModel::isHorizontalPanelChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFrameModel::navigationSectionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFrameModel::currentDockChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockFrameModel::highlightingVisibleChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockFrameModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->frame(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->tabs(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->titleBarVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isHorizontalPanel(); break;
        case 4: *reinterpret_cast< QObject**>(_v) = _t->navigationSection(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->currentDockUniqueName(); break;
        case 6: *reinterpret_cast< QVariant*>(_v) = _t->currentDockContextMenuModel(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->highlightingVisible(); break;
        case 8: *reinterpret_cast< QRect*>(_v) = _t->highlightingRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockFrameModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrame(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockFrameModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__dock__DockFrameModel.data,
    qt_meta_data_mu__dock__DockFrameModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::dock::DockFrameModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::dock::DockFrameModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__dock__DockFrameModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::dock::DockFrameModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::dock::DockFrameModel::frameChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::dock::DockFrameModel::tabsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::dock::DockFrameModel::titleBarVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::dock::DockFrameModel::isHorizontalPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::dock::DockFrameModel::navigationSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::dock::DockFrameModel::currentDockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::dock::DockFrameModel::highlightingVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
