/****************************************************************************
** Meta object code from reading C++ file 'autobotscriptsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/view/autobotscriptsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autobotscriptsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__autobot__AutobotScriptsModel_t {
    QByteArrayData data[22];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__autobot__AutobotScriptsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__autobot__AutobotScriptsModel_t qt_meta_stringdata_mu__autobot__AutobotScriptsModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::autobot::AutobotScriptsModel"
QT_MOC_LITERAL(1, 33, 21), // "isRunAllTCModeChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 14), // "requireStartTC"
QT_MOC_LITERAL(4, 71, 4), // "path"
QT_MOC_LITERAL(5, 76, 20), // "isAllSelectedChanged"
QT_MOC_LITERAL(6, 97, 4), // "type"
QT_MOC_LITERAL(7, 102, 3), // "arg"
QT_MOC_LITERAL(8, 106, 16), // "speedModeChanged"
QT_MOC_LITERAL(9, 123, 17), // "setIsRunAllTCMode"
QT_MOC_LITERAL(10, 141, 4), // "load"
QT_MOC_LITERAL(11, 146, 9), // "runScript"
QT_MOC_LITERAL(12, 156, 11), // "scriptIndex"
QT_MOC_LITERAL(13, 168, 8), // "runAllTC"
QT_MOC_LITERAL(14, 177, 12), // "tryRunNextTC"
QT_MOC_LITERAL(15, 190, 12), // "stopRunAllTC"
QT_MOC_LITERAL(16, 203, 12), // "toggleSelect"
QT_MOC_LITERAL(17, 216, 5), // "index"
QT_MOC_LITERAL(18, 222, 15), // "toggleAllSelect"
QT_MOC_LITERAL(19, 238, 13), // "isAllSelected"
QT_MOC_LITERAL(20, 252, 14), // "isRunAllTCMode"
QT_MOC_LITERAL(21, 267, 9) // "speedMode"

    },
    "mu::autobot::AutobotScriptsModel\0"
    "isRunAllTCModeChanged\0\0requireStartTC\0"
    "path\0isAllSelectedChanged\0type\0arg\0"
    "speedModeChanged\0setIsRunAllTCMode\0"
    "load\0runScript\0scriptIndex\0runAllTC\0"
    "tryRunNextTC\0stopRunAllTC\0toggleSelect\0"
    "index\0toggleAllSelect\0isAllSelected\0"
    "isRunAllTCMode\0speedMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__autobot__AutobotScriptsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    2,   83,    2, 0x06 /* Public */,
       8,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   89,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   92,    2, 0x02 /* Public */,
      11,    1,   93,    2, 0x02 /* Public */,
      13,    0,   96,    2, 0x02 /* Public */,
      14,    0,   97,    2, 0x02 /* Public */,
      15,    0,   98,    2, 0x02 /* Public */,
      16,    1,   99,    2, 0x02 /* Public */,
      18,    1,  102,    2, 0x02 /* Public */,
      19,    1,  105,    2, 0x02 /* Public */,

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
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       3,

       0        // eod
};

void mu::autobot::AutobotScriptsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutobotScriptsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isRunAllTCModeChanged(); break;
        case 1: _t->requireStartTC((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->isAllSelectedChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->speedModeChanged(); break;
        case 4: _t->setIsRunAllTCMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->load(); break;
        case 6: _t->runScript((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->runAllTC(); break;
        case 8: { bool _r = _t->tryRunNextTC();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->stopRunAllTC(); break;
        case 10: _t->toggleSelect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->toggleAllSelect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: { bool _r = _t->isAllSelected((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutobotScriptsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutobotScriptsModel::isRunAllTCModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutobotScriptsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutobotScriptsModel::requireStartTC)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AutobotScriptsModel::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutobotScriptsModel::isAllSelectedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AutobotScriptsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutobotScriptsModel::speedModeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::autobot::AutobotScriptsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__autobot__AutobotScriptsModel.data,
    qt_meta_data_mu__autobot__AutobotScriptsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::autobot::AutobotScriptsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::autobot::AutobotScriptsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__autobot__AutobotScriptsModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::autobot::AutobotScriptsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::autobot::AutobotScriptsModel::isRunAllTCModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::autobot::AutobotScriptsModel::requireStartTC(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::autobot::AutobotScriptsModel::isAllSelectedChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::autobot::AutobotScriptsModel::speedModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
