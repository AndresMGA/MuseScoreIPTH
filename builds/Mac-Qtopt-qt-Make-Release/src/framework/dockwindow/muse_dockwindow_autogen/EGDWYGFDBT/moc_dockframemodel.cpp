/****************************************************************************
** Meta object code from reading C++ file 'dockframemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/dockwindow/internal/dockframemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockframemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockFrameModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockFrameModelENDCLASS = QtMocHelpers::stringData(
    "muse::dock::DockFrameModel",
    "frameChanged",
    "",
    "QQuickItem*",
    "frame",
    "tabsChanged",
    "titleBarVisibleChanged",
    "visible",
    "isHorizontalPanelChanged",
    "navigationSectionChanged",
    "currentDockChanged",
    "highlightingVisibleChanged",
    "setFrame",
    "item",
    "handleMenuItem",
    "itemId",
    "tabs",
    "titleBarVisible",
    "isHorizontalPanel",
    "navigationSection",
    "currentDockUniqueName",
    "currentDockContextMenuModel",
    "highlightingVisible",
    "highlightingRect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEdockSCOPEDockFrameModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   85, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,   10 /* Public */,
       5,    0,   71,    2, 0x06,   12 /* Public */,
       6,    1,   72,    2, 0x06,   13 /* Public */,
       8,    0,   75,    2, 0x06,   15 /* Public */,
       9,    0,   76,    2, 0x06,   16 /* Public */,
      10,    0,   77,    2, 0x06,   17 /* Public */,
      11,    0,   78,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   79,    2, 0x0a,   19 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,   82,    2, 0x102,   21 /* Public | MethodIsConst  */,

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
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      16, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      17, QMetaType::Bool, 0x00015001, uint(2), 0,
      18, QMetaType::Bool, 0x00015001, uint(3), 0,
      19, QMetaType::QObjectStar, 0x00015001, uint(4), 0,
      20, QMetaType::QString, 0x00015001, uint(5), 0,
      21, QMetaType::QVariant, 0x00015001, uint(5), 0,
      22, QMetaType::Bool, 0x00015001, uint(6), 0,
      23, QMetaType::QRect, 0x00015001, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::dock::DockFrameModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockFrameModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEdockSCOPEDockFrameModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockFrameModelENDCLASS_t,
        // property 'frame'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'tabs'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'titleBarVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isHorizontalPanel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'navigationSection'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // property 'currentDockUniqueName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentDockContextMenuModel'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'highlightingVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'highlightingRect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockFrameModel, std::true_type>,
        // method 'frameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'tabsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'titleBarVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isHorizontalPanelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'navigationSectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentDockChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'highlightingVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'handleMenuItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void muse::dock::DockFrameModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockFrameModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->frameChanged((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 1: _t->tabsChanged(); break;
        case 2: _t->titleBarVisibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isHorizontalPanelChanged(); break;
        case 4: _t->navigationSectionChanged(); break;
        case 5: _t->currentDockChanged(); break;
        case 6: _t->highlightingVisibleChanged(); break;
        case 7: _t->setFrame((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 8: _t->handleMenuItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockFrameModel::*)(QQuickItem * );
            if (_t _q_method = &DockFrameModel::frameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (_t _q_method = &DockFrameModel::tabsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)(bool );
            if (_t _q_method = &DockFrameModel::titleBarVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (_t _q_method = &DockFrameModel::isHorizontalPanelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (_t _q_method = &DockFrameModel::navigationSectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (_t _q_method = &DockFrameModel::currentDockChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockFrameModel::*)();
            if (_t _q_method = &DockFrameModel::highlightingVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
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
    }  else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::dock::DockFrameModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::dock::DockFrameModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockFrameModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::dock::DockFrameModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void muse::dock::DockFrameModel::frameChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::dock::DockFrameModel::tabsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::dock::DockFrameModel::titleBarVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void muse::dock::DockFrameModel::isHorizontalPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::dock::DockFrameModel::navigationSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void muse::dock::DockFrameModel::currentDockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void muse::dock::DockFrameModel::highlightingVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
