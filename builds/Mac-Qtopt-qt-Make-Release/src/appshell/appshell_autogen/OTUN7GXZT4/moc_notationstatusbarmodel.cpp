/****************************************************************************
** Meta object code from reading C++ file 'notationstatusbarmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/notationstatusbarmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notationstatusbarmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPENotationStatusBarModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPENotationStatusBarModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::NotationStatusBarModel",
    "accessibilityInfoChanged",
    "",
    "currentWorkspaceActionChanged",
    "concertPitchActionChanged",
    "currentViewModeChanged",
    "availableViewModeListChanged",
    "zoomEnabledChanged",
    "availableZoomListChanged",
    "currentZoomPercentageChanged",
    "setCurrentZoomPercentage",
    "zoomPercentage",
    "load",
    "selectWorkspace",
    "toggleConcertPitch",
    "setCurrentViewMode",
    "modeCode",
    "minZoomPercentage",
    "maxZoomPercentage",
    "setCurrentZoom",
    "zoomId",
    "zoomIn",
    "zoomOut",
    "handleAction",
    "actionCode",
    "accessibilityInfo",
    "currentWorkspaceItem",
    "concertPitchItem",
    "currentViewMode",
    "zoomEnabled",
    "availableViewModeList",
    "availableZoomList",
    "currentZoomPercentage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPENotationStatusBarModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       8,  155, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    9 /* Public */,
       3,    0,  129,    2, 0x06,   10 /* Public */,
       4,    0,  130,    2, 0x06,   11 /* Public */,
       5,    0,  131,    2, 0x06,   12 /* Public */,
       6,    0,  132,    2, 0x06,   13 /* Public */,
       7,    0,  133,    2, 0x06,   14 /* Public */,
       8,    0,  134,    2, 0x06,   15 /* Public */,
       9,    0,  135,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  136,    2, 0x0a,   17 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  139,    2, 0x02,   19 /* Public */,
      13,    0,  140,    2, 0x02,   20 /* Public */,
      14,    0,  141,    2, 0x02,   21 /* Public */,
      15,    1,  142,    2, 0x02,   22 /* Public */,
      17,    0,  145,    2, 0x102,   24 /* Public | MethodIsConst  */,
      18,    0,  146,    2, 0x102,   25 /* Public | MethodIsConst  */,
      19,    1,  147,    2, 0x02,   26 /* Public */,
      21,    0,  150,    2, 0x02,   28 /* Public */,
      22,    0,  151,    2, 0x02,   29 /* Public */,
      23,    1,  152,    2, 0x02,   30 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,

 // properties: name, type, flags
      25, QMetaType::QString, 0x00015001, uint(0), 0,
      26, QMetaType::QVariant, 0x00015001, uint(1), 0,
      27, QMetaType::QVariant, 0x00015001, uint(2), 0,
      28, QMetaType::QVariant, 0x00015001, uint(3), 0,
      29, QMetaType::Bool, 0x00015001, uint(5), 0,
      30, QMetaType::QVariantList, 0x00015001, uint(4), 0,
      31, QMetaType::QVariantList, 0x00015001, uint(6), 0,
      32, QMetaType::Int, 0x00015103, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::appshell::NotationStatusBarModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPENotationStatusBarModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPENotationStatusBarModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPENotationStatusBarModelENDCLASS_t,
        // property 'accessibilityInfo'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentWorkspaceItem'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'concertPitchItem'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'currentViewMode'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'zoomEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'availableViewModeList'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'availableZoomList'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'currentZoomPercentage'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotationStatusBarModel, std::true_type>,
        // method 'accessibilityInfoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentWorkspaceActionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'concertPitchActionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentViewModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'availableViewModeListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'availableZoomListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentZoomPercentageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentZoomPercentage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectWorkspace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleConcertPitch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentViewMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'minZoomPercentage'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'maxZoomPercentage'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void mu::appshell::NotationStatusBarModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotationStatusBarModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accessibilityInfoChanged(); break;
        case 1: _t->currentWorkspaceActionChanged(); break;
        case 2: _t->concertPitchActionChanged(); break;
        case 3: _t->currentViewModeChanged(); break;
        case 4: _t->availableViewModeListChanged(); break;
        case 5: _t->zoomEnabledChanged(); break;
        case 6: _t->availableZoomListChanged(); break;
        case 7: _t->currentZoomPercentageChanged(); break;
        case 8: _t->setCurrentZoomPercentage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->load(); break;
        case 10: _t->selectWorkspace(); break;
        case 11: _t->toggleConcertPitch(); break;
        case 12: _t->setCurrentViewMode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: { int _r = _t->minZoomPercentage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->maxZoomPercentage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setCurrentZoom((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->zoomIn(); break;
        case 17: _t->zoomOut(); break;
        case 18: _t->handleAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::accessibilityInfoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::currentWorkspaceActionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::concertPitchActionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::currentViewModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::availableViewModeListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::zoomEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::availableZoomListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NotationStatusBarModel::*)();
            if (_t _q_method = &NotationStatusBarModel::currentZoomPercentageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NotationStatusBarModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->accessibilityInfo(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->currentWorkspaceItem(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->concertPitchItem(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->currentViewMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->zoomEnabled(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->availableViewModeList_property(); break;
        case 6: *reinterpret_cast< QVariantList*>(_v) = _t->availableZoomList_property(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->currentZoomPercentage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NotationStatusBarModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setCurrentZoomPercentage(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::appshell::NotationStatusBarModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::NotationStatusBarModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPENotationStatusBarModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    if (!strcmp(_clname, "muse::actions::Actionable"))
        return static_cast< muse::actions::Actionable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::NotationStatusBarModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mu::appshell::NotationStatusBarModel::accessibilityInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::appshell::NotationStatusBarModel::currentWorkspaceActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::NotationStatusBarModel::concertPitchActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::NotationStatusBarModel::currentViewModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::appshell::NotationStatusBarModel::availableViewModeListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::appshell::NotationStatusBarModel::zoomEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::appshell::NotationStatusBarModel::availableZoomListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::appshell::NotationStatusBarModel::currentZoomPercentageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
