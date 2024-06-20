/****************************************************************************
** Meta object code from reading C++ file 'firstlaunchsetupmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/firstlaunchsetup/firstlaunchsetupmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firstlaunchsetupmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEFirstLaunchSetupModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEFirstLaunchSetupModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::FirstLaunchSetupModel",
    "currentPageChanged",
    "",
    "setCurrentPageIndex",
    "index",
    "load",
    "askAboutClosingEarly",
    "finish",
    "numberOfPages",
    "currentPageIndex",
    "currentPage",
    "canGoBack",
    "canGoForward",
    "canFinish"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPEFirstLaunchSetupModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   51, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   45,    2, 0x0a,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   48,    2, 0x02,   10 /* Public */,
       6,    0,   49,    2, 0x02,   11 /* Public */,
       7,    0,   50,    2, 0x02,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00015401, uint(-1), 0,
       9, QMetaType::Int, 0x00015103, uint(0), 0,
      10, QMetaType::QVariantMap, 0x00015001, uint(0), 0,
      11, QMetaType::Bool, 0x00015001, uint(0), 0,
      12, QMetaType::Bool, 0x00015001, uint(0), 0,
      13, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::appshell::FirstLaunchSetupModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEFirstLaunchSetupModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPEFirstLaunchSetupModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEFirstLaunchSetupModelENDCLASS_t,
        // property 'numberOfPages'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentPageIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentPage'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'canGoBack'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canGoForward'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canFinish'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FirstLaunchSetupModel, std::true_type>,
        // method 'currentPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentPageIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'askAboutClosingEarly'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::appshell::FirstLaunchSetupModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FirstLaunchSetupModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentPageChanged(); break;
        case 1: _t->setCurrentPageIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->load(); break;
        case 3: { bool _r = _t->askAboutClosingEarly();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->finish(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FirstLaunchSetupModel::*)();
            if (_t _q_method = &FirstLaunchSetupModel::currentPageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FirstLaunchSetupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->numberOfPages(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentPageIndex(); break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->currentPage(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canGoBack(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->canGoForward(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->canFinish(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FirstLaunchSetupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentPageIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::appshell::FirstLaunchSetupModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::FirstLaunchSetupModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEFirstLaunchSetupModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::FirstLaunchSetupModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mu::appshell::FirstLaunchSetupModel::currentPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
