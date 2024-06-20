/****************************************************************************
** Meta object code from reading C++ file 'dockpanelview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/dockwindow/dockpanelview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockpanelview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__dock__DockPanelView_t {
    QByteArrayData data[16];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockPanelView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockPanelView_t qt_meta_stringdata_mu__dock__DockPanelView = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::dock::DockPanelView"
QT_MOC_LITERAL(1, 24, 16), // "groupNameChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "navigationSectionChanged"
QT_MOC_LITERAL(4, 67, 23), // "contextMenuModelChanged"
QT_MOC_LITERAL(5, 91, 12), // "setGroupName"
QT_MOC_LITERAL(6, 104, 4), // "name"
QT_MOC_LITERAL(7, 109, 20), // "setNavigationSection"
QT_MOC_LITERAL(8, 130, 13), // "newNavigation"
QT_MOC_LITERAL(9, 144, 19), // "setContextMenuModel"
QT_MOC_LITERAL(10, 164, 32), // "uicomponents::AbstractMenuModel*"
QT_MOC_LITERAL(11, 197, 5), // "model"
QT_MOC_LITERAL(12, 203, 9), // "groupName"
QT_MOC_LITERAL(13, 213, 17), // "navigationSection"
QT_MOC_LITERAL(14, 231, 16), // "contextMenuModel"
QT_MOC_LITERAL(15, 248, 36) // "mu::uicomponents::AbstractMen..."

    },
    "mu::dock::DockPanelView\0groupNameChanged\0"
    "\0navigationSectionChanged\0"
    "contextMenuModelChanged\0setGroupName\0"
    "name\0setNavigationSection\0newNavigation\0"
    "setContextMenuModel\0"
    "uicomponents::AbstractMenuModel*\0model\0"
    "groupName\0navigationSection\0"
    "contextMenuModel\0mu::uicomponents::AbstractMenuModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockPanelView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QObjectStar,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QObjectStar, 0x00495103,
      14, 0x80000000 | 15, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::dock::DockPanelView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockPanelView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->groupNameChanged(); break;
        case 1: _t->navigationSectionChanged(); break;
        case 2: _t->contextMenuModelChanged(); break;
        case 3: _t->setGroupName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setNavigationSection((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->setContextMenuModel((*reinterpret_cast< uicomponents::AbstractMenuModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockPanelView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockPanelView::groupNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockPanelView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockPanelView::navigationSectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockPanelView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockPanelView::contextMenuModelChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::uicomponents::AbstractMenuModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockPanelView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->groupName(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->navigationSection(); break;
        case 2: *reinterpret_cast< mu::uicomponents::AbstractMenuModel**>(_v) = _t->contextMenuModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockPanelView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGroupName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setNavigationSection(*reinterpret_cast< QObject**>(_v)); break;
        case 2: _t->setContextMenuModel(*reinterpret_cast< mu::uicomponents::AbstractMenuModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockPanelView::staticMetaObject = { {
    QMetaObject::SuperData::link<DockBase::staticMetaObject>(),
    qt_meta_stringdata_mu__dock__DockPanelView.data,
    qt_meta_data_mu__dock__DockPanelView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::dock::DockPanelView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::dock::DockPanelView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__dock__DockPanelView.stringdata0))
        return static_cast<void*>(this);
    return DockBase::qt_metacast(_clname);
}

int mu::dock::DockPanelView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockBase::qt_metacall(_c, _id, _a);
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
void mu::dock::DockPanelView::groupNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::dock::DockPanelView::navigationSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::dock::DockPanelView::contextMenuModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
