/****************************************************************************
** Meta object code from reading C++ file 'testcaserunmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/view/testcaserunmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testcaserunmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__autobot__TestCaseRunModel_t {
    QByteArrayData data[14];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__autobot__TestCaseRunModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__autobot__TestCaseRunModel_t qt_meta_stringdata_mu__autobot__TestCaseRunModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::autobot::TestCaseRunModel"
QT_MOC_LITERAL(1, 30, 15), // "testCaseChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 13), // "statusChanged"
QT_MOC_LITERAL(4, 61, 12), // "stepsChanged"
QT_MOC_LITERAL(5, 74, 18), // "currentStepChanged"
QT_MOC_LITERAL(6, 93, 9), // "stepIndex"
QT_MOC_LITERAL(7, 103, 8), // "loadInfo"
QT_MOC_LITERAL(8, 112, 4), // "path"
QT_MOC_LITERAL(9, 117, 7), // "perform"
QT_MOC_LITERAL(10, 125, 5), // "abort"
QT_MOC_LITERAL(11, 131, 8), // "testCase"
QT_MOC_LITERAL(12, 140, 6), // "status"
QT_MOC_LITERAL(13, 147, 5) // "steps"

    },
    "mu::autobot::TestCaseRunModel\0"
    "testCaseChanged\0\0statusChanged\0"
    "stepsChanged\0currentStepChanged\0"
    "stepIndex\0loadInfo\0path\0perform\0abort\0"
    "testCase\0status\0steps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__autobot__TestCaseRunModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   55,    2, 0x02 /* Public */,
       9,    0,   58,    2, 0x02 /* Public */,
      10,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QVariantMap, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::autobot::TestCaseRunModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestCaseRunModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testCaseChanged(); break;
        case 1: _t->statusChanged(); break;
        case 2: _t->stepsChanged(); break;
        case 3: _t->currentStepChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { bool _r = _t->loadInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->perform(); break;
        case 6: _t->abort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestCaseRunModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestCaseRunModel::testCaseChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TestCaseRunModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestCaseRunModel::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TestCaseRunModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestCaseRunModel::stepsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TestCaseRunModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestCaseRunModel::currentStepChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TestCaseRunModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->testCase(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->steps(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::autobot::TestCaseRunModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__autobot__TestCaseRunModel.data,
    qt_meta_data_mu__autobot__TestCaseRunModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::autobot::TestCaseRunModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::autobot::TestCaseRunModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__autobot__TestCaseRunModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::autobot::TestCaseRunModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void mu::autobot::TestCaseRunModel::testCaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::autobot::TestCaseRunModel::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::autobot::TestCaseRunModel::stepsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::autobot::TestCaseRunModel::currentStepChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
