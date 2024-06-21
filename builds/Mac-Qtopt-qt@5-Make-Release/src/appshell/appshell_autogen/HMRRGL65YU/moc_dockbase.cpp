/****************************************************************************
** Meta object code from reading C++ file 'dockbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/dockwindow/internal/dockbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__dock__DockBase_t {
    QByteArrayData data[57];
    char stringdata0[866];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__dock__DockBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__dock__DockBase_t qt_meta_stringdata_mu__dock__DockBase = {
    {
QT_MOC_LITERAL(0, 0, 18), // "mu::dock::DockBase"
QT_MOC_LITERAL(1, 19, 12), // "titleChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "minimumSizeChanged"
QT_MOC_LITERAL(4, 52, 18), // "maximumSizeChanged"
QT_MOC_LITERAL(5, 71, 18), // "contentSizeChanged"
QT_MOC_LITERAL(6, 90, 15), // "locationChanged"
QT_MOC_LITERAL(7, 106, 23), // "dropDestinationsChanged"
QT_MOC_LITERAL(8, 130, 16), // "floatableChanged"
QT_MOC_LITERAL(9, 147, 15), // "closableChanged"
QT_MOC_LITERAL(10, 163, 16), // "resizableChanged"
QT_MOC_LITERAL(11, 180, 24), // "separatorsVisibleChanged"
QT_MOC_LITERAL(12, 205, 15), // "floatingChanged"
QT_MOC_LITERAL(13, 221, 13), // "initedChanged"
QT_MOC_LITERAL(14, 235, 29), // "contentNavigationPanelChanged"
QT_MOC_LITERAL(15, 265, 26), // "reorderNavigationRequested"
QT_MOC_LITERAL(16, 292, 8), // "setTitle"
QT_MOC_LITERAL(17, 301, 5), // "title"
QT_MOC_LITERAL(18, 307, 15), // "setMinimumWidth"
QT_MOC_LITERAL(19, 323, 5), // "width"
QT_MOC_LITERAL(20, 329, 16), // "setMinimumHeight"
QT_MOC_LITERAL(21, 346, 6), // "height"
QT_MOC_LITERAL(22, 353, 15), // "setMaximumWidth"
QT_MOC_LITERAL(23, 369, 16), // "setMaximumHeight"
QT_MOC_LITERAL(24, 386, 15), // "setContentWidth"
QT_MOC_LITERAL(25, 402, 16), // "setContentHeight"
QT_MOC_LITERAL(26, 419, 11), // "setLocation"
QT_MOC_LITERAL(27, 431, 8), // "location"
QT_MOC_LITERAL(28, 440, 19), // "setDropDestinations"
QT_MOC_LITERAL(29, 460, 12), // "destinations"
QT_MOC_LITERAL(30, 473, 12), // "setFloatable"
QT_MOC_LITERAL(31, 486, 9), // "floatable"
QT_MOC_LITERAL(32, 496, 11), // "setClosable"
QT_MOC_LITERAL(33, 508, 8), // "closable"
QT_MOC_LITERAL(34, 517, 12), // "setResizable"
QT_MOC_LITERAL(35, 530, 9), // "resizable"
QT_MOC_LITERAL(36, 540, 20), // "setSeparatorsVisible"
QT_MOC_LITERAL(37, 561, 7), // "visible"
QT_MOC_LITERAL(38, 569, 11), // "setFloating"
QT_MOC_LITERAL(39, 581, 8), // "floating"
QT_MOC_LITERAL(40, 590, 25), // "setContentNavigationPanel"
QT_MOC_LITERAL(41, 616, 24), // "mu::ui::NavigationPanel*"
QT_MOC_LITERAL(42, 641, 5), // "panel"
QT_MOC_LITERAL(43, 647, 20), // "applySizeConstraints"
QT_MOC_LITERAL(44, 668, 20), // "updateFloatingStatus"
QT_MOC_LITERAL(45, 689, 23), // "onIsInMainWindowChanged"
QT_MOC_LITERAL(46, 713, 6), // "resize"
QT_MOC_LITERAL(47, 720, 12), // "minimumWidth"
QT_MOC_LITERAL(48, 733, 13), // "minimumHeight"
QT_MOC_LITERAL(49, 747, 12), // "maximumWidth"
QT_MOC_LITERAL(50, 760, 13), // "maximumHeight"
QT_MOC_LITERAL(51, 774, 12), // "contentWidth"
QT_MOC_LITERAL(52, 787, 13), // "contentHeight"
QT_MOC_LITERAL(53, 801, 16), // "dropDestinations"
QT_MOC_LITERAL(54, 818, 17), // "separatorsVisible"
QT_MOC_LITERAL(55, 836, 6), // "inited"
QT_MOC_LITERAL(56, 843, 22) // "contentNavigationPanel"

    },
    "mu::dock::DockBase\0titleChanged\0\0"
    "minimumSizeChanged\0maximumSizeChanged\0"
    "contentSizeChanged\0locationChanged\0"
    "dropDestinationsChanged\0floatableChanged\0"
    "closableChanged\0resizableChanged\0"
    "separatorsVisibleChanged\0floatingChanged\0"
    "initedChanged\0contentNavigationPanelChanged\0"
    "reorderNavigationRequested\0setTitle\0"
    "title\0setMinimumWidth\0width\0"
    "setMinimumHeight\0height\0setMaximumWidth\0"
    "setMaximumHeight\0setContentWidth\0"
    "setContentHeight\0setLocation\0location\0"
    "setDropDestinations\0destinations\0"
    "setFloatable\0floatable\0setClosable\0"
    "closable\0setResizable\0resizable\0"
    "setSeparatorsVisible\0visible\0setFloating\0"
    "floating\0setContentNavigationPanel\0"
    "mu::ui::NavigationPanel*\0panel\0"
    "applySizeConstraints\0updateFloatingStatus\0"
    "onIsInMainWindowChanged\0resize\0"
    "minimumWidth\0minimumHeight\0maximumWidth\0"
    "maximumHeight\0contentWidth\0contentHeight\0"
    "dropDestinations\0separatorsVisible\0"
    "inited\0contentNavigationPanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__dock__DockBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
      16,  246, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  179,    2, 0x06 /* Public */,
       3,    0,  180,    2, 0x06 /* Public */,
       4,    0,  181,    2, 0x06 /* Public */,
       5,    0,  182,    2, 0x06 /* Public */,
       6,    0,  183,    2, 0x06 /* Public */,
       7,    0,  184,    2, 0x06 /* Public */,
       8,    0,  185,    2, 0x06 /* Public */,
       9,    0,  186,    2, 0x06 /* Public */,
      10,    0,  187,    2, 0x06 /* Public */,
      11,    0,  188,    2, 0x06 /* Public */,
      12,    0,  189,    2, 0x06 /* Public */,
      13,    0,  190,    2, 0x06 /* Public */,
      14,    0,  191,    2, 0x06 /* Public */,
      15,    0,  192,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  193,    2, 0x0a /* Public */,
      18,    1,  196,    2, 0x0a /* Public */,
      20,    1,  199,    2, 0x0a /* Public */,
      22,    1,  202,    2, 0x0a /* Public */,
      23,    1,  205,    2, 0x0a /* Public */,
      24,    1,  208,    2, 0x0a /* Public */,
      25,    1,  211,    2, 0x0a /* Public */,
      26,    1,  214,    2, 0x0a /* Public */,
      28,    1,  217,    2, 0x0a /* Public */,
      30,    1,  220,    2, 0x0a /* Public */,
      32,    1,  223,    2, 0x0a /* Public */,
      34,    1,  226,    2, 0x0a /* Public */,
      36,    1,  229,    2, 0x0a /* Public */,
      38,    1,  232,    2, 0x0a /* Public */,
      40,    1,  235,    2, 0x0a /* Public */,
      43,    0,  238,    2, 0x09 /* Protected */,
      44,    0,  239,    2, 0x08 /* Private */,
      45,    0,  240,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      46,    2,  241,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::QVariantList,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   21,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00495103,
      47, QMetaType::Int, 0x00495103,
      48, QMetaType::Int, 0x00495103,
      49, QMetaType::Int, 0x00495103,
      50, QMetaType::Int, 0x00495103,
      51, QMetaType::Int, 0x00495103,
      52, QMetaType::Int, 0x00495103,
      27, QMetaType::Int, 0x00495103,
      53, QMetaType::QVariantList, 0x00495103,
      31, QMetaType::Bool, 0x00495103,
      33, QMetaType::Bool, 0x00495103,
      35, QMetaType::Bool, 0x00495103,
      54, QMetaType::Bool, 0x00495103,
      39, QMetaType::Bool, 0x00495001,
      55, QMetaType::Bool, 0x00495001,
      56, 0x80000000 | 41, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       1,
       2,
       2,
       3,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,

       0        // eod
};

void mu::dock::DockBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->minimumSizeChanged(); break;
        case 2: _t->maximumSizeChanged(); break;
        case 3: _t->contentSizeChanged(); break;
        case 4: _t->locationChanged(); break;
        case 5: _t->dropDestinationsChanged(); break;
        case 6: _t->floatableChanged(); break;
        case 7: _t->closableChanged(); break;
        case 8: _t->resizableChanged(); break;
        case 9: _t->separatorsVisibleChanged(); break;
        case 10: _t->floatingChanged(); break;
        case 11: _t->initedChanged(); break;
        case 12: _t->contentNavigationPanelChanged(); break;
        case 13: _t->reorderNavigationRequested(); break;
        case 14: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->setMinimumWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setMinimumHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setMaximumWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setMaximumHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setContentWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setContentHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setLocation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->setDropDestinations((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 23: _t->setFloatable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setClosable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setResizable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setSeparatorsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setFloating((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->setContentNavigationPanel((*reinterpret_cast< mu::ui::NavigationPanel*(*)>(_a[1]))); break;
        case 29: _t->applySizeConstraints(); break;
        case 30: _t->updateFloatingStatus(); break;
        case 31: _t->onIsInMainWindowChanged(); break;
        case 32: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::NavigationPanel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::minimumSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::maximumSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::contentSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::locationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::dropDestinationsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::floatableChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::closableChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::resizableChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::separatorsVisibleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::floatingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::initedChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::contentNavigationPanelChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockBase::reorderNavigationRequested)) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::NavigationPanel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockBase *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minimumWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->minimumHeight(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maximumWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->maximumHeight(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->contentWidth(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->contentHeight(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->locationProperty(); break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = _t->dropDestinationsProperty(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->floatable(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->closable(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->resizable(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->separatorsVisible(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->floating(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->inited(); break;
        case 15: *reinterpret_cast< mu::ui::NavigationPanel**>(_v) = _t->contentNavigationPanel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockBase *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMinimumWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMinimumHeight(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMaximumWidth(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMaximumHeight(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setContentWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setContentHeight(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setLocation(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setDropDestinations(*reinterpret_cast< QVariantList*>(_v)); break;
        case 9: _t->setFloatable(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setClosable(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setResizable(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setSeparatorsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setContentNavigationPanel(*reinterpret_cast< mu::ui::NavigationPanel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::dock::DockBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_mu__dock__DockBase.data,
    qt_meta_data_mu__dock__DockBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::dock::DockBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::dock::DockBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__dock__DockBase.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int mu::dock::DockBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::dock::DockBase::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::dock::DockBase::minimumSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::dock::DockBase::maximumSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::dock::DockBase::contentSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::dock::DockBase::locationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::dock::DockBase::dropDestinationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::dock::DockBase::floatableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::dock::DockBase::closableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void mu::dock::DockBase::resizableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void mu::dock::DockBase::separatorsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void mu::dock::DockBase::floatingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void mu::dock::DockBase::initedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void mu::dock::DockBase::contentNavigationPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void mu::dock::DockBase::reorderNavigationRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
