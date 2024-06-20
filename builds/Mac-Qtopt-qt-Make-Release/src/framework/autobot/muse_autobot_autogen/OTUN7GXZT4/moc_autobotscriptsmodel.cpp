/****************************************************************************
** Meta object code from reading C++ file 'autobotscriptsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/autobot/view/autobotscriptsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autobotscriptsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEAutobotScriptsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEAutobotScriptsModelENDCLASS = QtMocHelpers::stringData(
    "muse::autobot::AutobotScriptsModel",
    "isRunAllTCModeChanged",
    "",
    "requireStartTC",
    "path",
    "isAllSelectedChanged",
    "type",
    "arg",
    "speedModeChanged",
    "setIsRunAllTCMode",
    "load",
    "runScript",
    "scriptIndex",
    "runAllTC",
    "tryRunNextTC",
    "stopRunAllTC",
    "toggleSelect",
    "index",
    "toggleAllSelect",
    "isAllSelected",
    "isRunAllTCMode",
    "speedMode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEautobotSCOPEAutobotScriptsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  121, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    3 /* Public */,
       3,    1,   93,    2, 0x06,    4 /* Public */,
       5,    2,   96,    2, 0x06,    6 /* Public */,
       8,    0,  101,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  102,    2, 0x0a,   10 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  105,    2, 0x02,   12 /* Public */,
      11,    1,  106,    2, 0x02,   13 /* Public */,
      13,    0,  109,    2, 0x02,   15 /* Public */,
      14,    0,  110,    2, 0x02,   16 /* Public */,
      15,    0,  111,    2, 0x02,   17 /* Public */,
      16,    1,  112,    2, 0x02,   18 /* Public */,
      18,    1,  115,    2, 0x02,   20 /* Public */,
      19,    1,  118,    2, 0x102,   22 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString,    6,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00015103, uint(0), 0,
      21, QMetaType::QString, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::autobot::AutobotScriptsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEAutobotScriptsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEautobotSCOPEAutobotScriptsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEAutobotScriptsModelENDCLASS_t,
        // property 'isRunAllTCMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'speedMode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutobotScriptsModel, std::true_type>,
        // method 'isRunAllTCModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requireStartTC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isAllSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'speedModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIsRunAllTCMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'runScript'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'runAllTC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tryRunNextTC'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stopRunAllTC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'toggleAllSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isAllSelected'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void muse::autobot::AutobotScriptsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutobotScriptsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isRunAllTCModeChanged(); break;
        case 1: _t->requireStartTC((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->isAllSelectedChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->speedModeChanged(); break;
        case 4: _t->setIsRunAllTCMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->load(); break;
        case 6: _t->runScript((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->runAllTC(); break;
        case 8: { bool _r = _t->tryRunNextTC();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->stopRunAllTC(); break;
        case 10: _t->toggleSelect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->toggleAllSelect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: { bool _r = _t->isAllSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutobotScriptsModel::*)();
            if (_t _q_method = &AutobotScriptsModel::isRunAllTCModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutobotScriptsModel::*)(const QString & );
            if (_t _q_method = &AutobotScriptsModel::requireStartTC; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AutobotScriptsModel::*)(const QString & , bool );
            if (_t _q_method = &AutobotScriptsModel::isAllSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AutobotScriptsModel::*)();
            if (_t _q_method = &AutobotScriptsModel::speedModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AutobotScriptsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRunAllTCMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->speedMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AutobotScriptsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsRunAllTCMode(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSpeedMode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::autobot::AutobotScriptsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::autobot::AutobotScriptsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEAutobotScriptsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int muse::autobot::AutobotScriptsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void muse::autobot::AutobotScriptsModel::isRunAllTCModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::autobot::AutobotScriptsModel::requireStartTC(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::autobot::AutobotScriptsModel::isAllSelectedChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void muse::autobot::AutobotScriptsModel::speedModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
