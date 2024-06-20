/****************************************************************************
** Meta object code from reading C++ file 'DockRegistry_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../src/framework/dockwindow/thirdparty/KDDockWidgets/src/private/DockRegistry_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockRegistry_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDockRegistryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDockRegistryENDCLASS = QtMocHelpers::stringData(
    "KDDockWidgets::DockRegistry",
    "windowChangedScreen",
    "",
    "QWindow*",
    "frameInMDIResizeChanged",
    "dropIndicatorsInhibitedChanged",
    "inhibited",
    "focusedDockWidget",
    "KDDockWidgets::DockWidgetBase*",
    "containsDockWidget",
    "uniqueName",
    "containsMainWindow",
    "dockByName",
    "KDDockWidgets::DockRegistry::DockByNameFlags",
    "mainWindowByName",
    "KDDockWidgets::MainWindowBase*",
    "mdiMainWindowByName",
    "KDDockWidgets::MainWindowMDI*",
    "hasFloatingWindows",
    "clear",
    "affinities",
    "frameInMDIResize",
    "KDDockWidgets::Frame*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKDDockWidgetsSCOPEDockRegistryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  125, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    2 /* Public */,
       4,    0,   95,    2, 0x06,    4 /* Public */,
       5,    1,   96,    2, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   99,    2, 0x102,    7 /* Public | MethodIsConst  */,
       9,    1,  100,    2, 0x102,    8 /* Public | MethodIsConst  */,
      11,    1,  103,    2, 0x102,   10 /* Public | MethodIsConst  */,
      12,    2,  106,    2, 0x102,   12 /* Public | MethodIsConst  */,
      12,    1,  111,    2, 0x122,   15 /* Public | MethodCloned | MethodIsConst  */,
      14,    1,  114,    2, 0x102,   17 /* Public | MethodIsConst  */,
      16,    1,  117,    2, 0x102,   19 /* Public | MethodIsConst  */,
      18,    0,  120,    2, 0x102,   21 /* Public | MethodIsConst  */,
      19,    1,  121,    2, 0x02,   22 /* Public */,
      19,    0,  124,    2, 0x22,   24 /* Public | MethodCloned */,

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
      21, 0x80000000 | 22, 0x00015009, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject KDDockWidgets::DockRegistry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDockRegistryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKDDockWidgetsSCOPEDockRegistryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDockRegistryENDCLASS_t,
        // property 'frameInMDIResize'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::Frame*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockRegistry, std::true_type>,
        // method 'windowChangedScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>,
        // method 'frameInMDIResizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dropIndicatorsInhibitedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'focusedDockWidget'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::DockWidgetBase *, std::false_type>,
        // method 'containsDockWidget'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'containsMainWindow'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dockByName'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::DockWidgetBase *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<KDDockWidgets::DockRegistry::DockByNameFlags, std::false_type>,
        // method 'dockByName'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::DockWidgetBase *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'mainWindowByName'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::MainWindowBase *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'mdiMainWindowByName'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::MainWindowMDI *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'hasFloatingWindows'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void KDDockWidgets::DockRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockRegistry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->windowChangedScreen((*reinterpret_cast< std::add_pointer_t<QWindow*>>(_a[1]))); break;
        case 1: _t->frameInMDIResizeChanged(); break;
        case 2: _t->dropIndicatorsInhibitedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: { KDDockWidgets::DockWidgetBase* _r = _t->focusedDockWidget();
            if (_a[0]) *reinterpret_cast< KDDockWidgets::DockWidgetBase**>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->containsDockWidget((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->containsMainWindow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { KDDockWidgets::DockWidgetBase* _r = _t->dockByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<KDDockWidgets::DockRegistry::DockByNameFlags>>(_a[2])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::DockWidgetBase**>(_a[0]) = std::move(_r); }  break;
        case 7: { KDDockWidgets::DockWidgetBase* _r = _t->dockByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::DockWidgetBase**>(_a[0]) = std::move(_r); }  break;
        case 8: { KDDockWidgets::MainWindowBase* _r = _t->mainWindowByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::MainWindowBase**>(_a[0]) = std::move(_r); }  break;
        case 9: { KDDockWidgets::MainWindowMDI* _r = _t->mdiMainWindowByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< KDDockWidgets::MainWindowMDI**>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->hasFloatingWindows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->clear((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 12: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockRegistry::*)(QWindow * );
            if (_t _q_method = &DockRegistry::windowChangedScreen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockRegistry::*)();
            if (_t _q_method = &DockRegistry::frameInMDIResizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockRegistry::*)(bool );
            if (_t _q_method = &DockRegistry::dropIndicatorsInhibitedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
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
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockRegistry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KDDockWidgets::Frame**>(_v) = _t->frameInMDIResize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *KDDockWidgets::DockRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::DockRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSKDDockWidgetsSCOPEDockRegistryENDCLASS.stringdata0))
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
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
