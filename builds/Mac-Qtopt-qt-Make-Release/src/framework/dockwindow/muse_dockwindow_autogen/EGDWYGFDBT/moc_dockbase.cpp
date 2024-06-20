/****************************************************************************
** Meta object code from reading C++ file 'dockbase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/dockwindow/internal/dockbase.h"
#include "ui/view/navigationpanel.h"
#include "ui/view/navigationsection.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockbase.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockBaseENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockBaseENDCLASS = QtMocHelpers::stringData(
    "muse::dock::DockBase",
    "titleChanged",
    "",
    "minimumSizeChanged",
    "maximumSizeChanged",
    "contentSizeChanged",
    "locationChanged",
    "dropDestinationsChanged",
    "floatableChanged",
    "closableChanged",
    "resizableChanged",
    "separatorsVisibleChanged",
    "floatingChanged",
    "initedChanged",
    "contentNavigationPanelChanged",
    "reorderNavigationRequested",
    "setTitle",
    "title",
    "setMinimumWidth",
    "width",
    "setMinimumHeight",
    "height",
    "setMaximumWidth",
    "setMaximumHeight",
    "setContentWidth",
    "setContentHeight",
    "setLocation",
    "location",
    "setDropDestinations",
    "destinations",
    "setFloatable",
    "floatable",
    "setClosable",
    "closable",
    "setResizable",
    "resizable",
    "setSeparatorsVisible",
    "visible",
    "setFloating",
    "floating",
    "setContentNavigationPanel",
    "ui::NavigationPanel*",
    "panel",
    "applySizeConstraints",
    "updateFloatingStatus",
    "onIsInMainWindowChanged",
    "resize",
    "minimumWidth",
    "minimumHeight",
    "maximumWidth",
    "maximumHeight",
    "contentWidth",
    "contentHeight",
    "dropDestinations",
    "separatorsVisible",
    "inited",
    "contentNavigationPanel",
    "muse::ui::NavigationPanel*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEdockSCOPEDockBaseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
      16,  279, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  212,    2, 0x06,   17 /* Public */,
       3,    0,  213,    2, 0x06,   18 /* Public */,
       4,    0,  214,    2, 0x06,   19 /* Public */,
       5,    0,  215,    2, 0x06,   20 /* Public */,
       6,    0,  216,    2, 0x06,   21 /* Public */,
       7,    0,  217,    2, 0x06,   22 /* Public */,
       8,    0,  218,    2, 0x06,   23 /* Public */,
       9,    0,  219,    2, 0x06,   24 /* Public */,
      10,    0,  220,    2, 0x06,   25 /* Public */,
      11,    0,  221,    2, 0x06,   26 /* Public */,
      12,    0,  222,    2, 0x06,   27 /* Public */,
      13,    0,  223,    2, 0x06,   28 /* Public */,
      14,    0,  224,    2, 0x06,   29 /* Public */,
      15,    0,  225,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  226,    2, 0x0a,   31 /* Public */,
      18,    1,  229,    2, 0x0a,   33 /* Public */,
      20,    1,  232,    2, 0x0a,   35 /* Public */,
      22,    1,  235,    2, 0x0a,   37 /* Public */,
      23,    1,  238,    2, 0x0a,   39 /* Public */,
      24,    1,  241,    2, 0x0a,   41 /* Public */,
      25,    1,  244,    2, 0x0a,   43 /* Public */,
      26,    1,  247,    2, 0x0a,   45 /* Public */,
      28,    1,  250,    2, 0x0a,   47 /* Public */,
      30,    1,  253,    2, 0x0a,   49 /* Public */,
      32,    1,  256,    2, 0x0a,   51 /* Public */,
      34,    1,  259,    2, 0x0a,   53 /* Public */,
      36,    1,  262,    2, 0x0a,   55 /* Public */,
      38,    1,  265,    2, 0x0a,   57 /* Public */,
      40,    1,  268,    2, 0x0a,   59 /* Public */,
      43,    0,  271,    2, 0x09,   61 /* Protected */,
      44,    0,  272,    2, 0x08,   62 /* Private */,
      45,    0,  273,    2, 0x08,   63 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      46,    2,  274,    2, 0x02,   64 /* Public */,

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
      17, QMetaType::QString, 0x00015103, uint(0), 0,
      47, QMetaType::Int, 0x00015103, uint(1), 0,
      48, QMetaType::Int, 0x00015103, uint(1), 0,
      49, QMetaType::Int, 0x00015103, uint(2), 0,
      50, QMetaType::Int, 0x00015103, uint(2), 0,
      51, QMetaType::Int, 0x00015103, uint(3), 0,
      52, QMetaType::Int, 0x00015103, uint(3), 0,
      27, QMetaType::Int, 0x00015103, uint(4), 0,
      53, QMetaType::QVariantList, 0x00015103, uint(5), 0,
      31, QMetaType::Bool, 0x00015103, uint(6), 0,
      33, QMetaType::Bool, 0x00015103, uint(7), 0,
      35, QMetaType::Bool, 0x00015103, uint(8), 0,
      54, QMetaType::Bool, 0x00015103, uint(9), 0,
      39, QMetaType::Bool, 0x00015001, uint(10), 0,
      55, QMetaType::Bool, 0x00015001, uint(11), 0,
      56, 0x80000000 | 57, 0x0001510b, uint(12), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::dock::DockBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockBaseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEdockSCOPEDockBaseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockBaseENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'minimumWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'minimumHeight'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximumWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximumHeight'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'contentWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'contentHeight'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'location'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'dropDestinations'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'floatable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'closable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'resizable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'separatorsVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'floating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'inited'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'contentNavigationPanel'
        QtPrivate::TypeAndForceComplete<muse::ui::NavigationPanel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockBase, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimumSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maximumSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'locationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dropDestinationsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'floatableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resizableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'separatorsVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'floatingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentNavigationPanelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reorderNavigationRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setMinimumWidth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMinimumHeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMaximumWidth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMaximumHeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setContentWidth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setContentHeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setLocation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setDropDestinations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'setFloatable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setClosable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setResizable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSeparatorsVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFloating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setContentNavigationPanel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ui::NavigationPanel *, std::false_type>,
        // method 'applySizeConstraints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateFloatingStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIsInMainWindowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void muse::dock::DockBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        case 14: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->setMinimumWidth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->setMinimumHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->setMaximumWidth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->setMaximumHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->setContentWidth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->setContentHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->setLocation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->setDropDestinations((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 23: _t->setFloatable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setClosable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->setResizable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->setSeparatorsVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->setFloating((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setContentNavigationPanel((*reinterpret_cast< std::add_pointer_t<ui::NavigationPanel*>>(_a[1]))); break;
        case 29: _t->applySizeConstraints(); break;
        case 30: _t->updateFloatingStatus(); break;
        case 31: _t->onIsInMainWindowChanged(); break;
        case 32: _t->resize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::minimumSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::maximumSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::contentSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::locationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::dropDestinationsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::floatableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::closableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::resizableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::separatorsVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::floatingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::initedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::contentNavigationPanelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DockBase::*)();
            if (_t _q_method = &DockBase::reorderNavigationRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< muse::ui::NavigationPanel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
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
        case 15: *reinterpret_cast< muse::ui::NavigationPanel**>(_v) = _t->contentNavigationPanel(); break;
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
        case 15: _t->setContentNavigationPanel(*reinterpret_cast< muse::ui::NavigationPanel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::dock::DockBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::dock::DockBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEdockSCOPEDockBaseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int muse::dock::DockBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void muse::dock::DockBase::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::dock::DockBase::minimumSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::dock::DockBase::maximumSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::dock::DockBase::contentSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::dock::DockBase::locationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void muse::dock::DockBase::dropDestinationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void muse::dock::DockBase::floatableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void muse::dock::DockBase::closableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void muse::dock::DockBase::resizableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void muse::dock::DockBase::separatorsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void muse::dock::DockBase::floatingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void muse::dock::DockBase::initedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void muse::dock::DockBase::contentNavigationPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void muse::dock::DockBase::reorderNavigationRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
