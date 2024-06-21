/****************************************************************************
** Meta object code from reading C++ file 'scorespagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/project/view/scorespagemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scorespagemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__project__ScoresPageModel_t {
    QByteArrayData data[15];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__project__ScoresPageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__project__ScoresPageModel_t qt_meta_stringdata_mu__project__ScoresPageModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "mu::project::ScoresPageModel"
QT_MOC_LITERAL(1, 29, 15), // "tabIndexChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "viewTypeChanged"
QT_MOC_LITERAL(4, 62, 14), // "createNewScore"
QT_MOC_LITERAL(5, 77, 9), // "openOther"
QT_MOC_LITERAL(6, 87, 9), // "openScore"
QT_MOC_LITERAL(7, 97, 9), // "scorePath"
QT_MOC_LITERAL(8, 107, 19), // "displayNameOverride"
QT_MOC_LITERAL(9, 127, 16), // "openScoreManager"
QT_MOC_LITERAL(10, 144, 8), // "tabIndex"
QT_MOC_LITERAL(11, 153, 8), // "viewType"
QT_MOC_LITERAL(12, 162, 8), // "ViewType"
QT_MOC_LITERAL(13, 171, 4), // "Grid"
QT_MOC_LITERAL(14, 176, 4) // "List"

    },
    "mu::project::ScoresPageModel\0"
    "tabIndexChanged\0\0viewTypeChanged\0"
    "createNewScore\0openOther\0openScore\0"
    "scorePath\0displayNameOverride\0"
    "openScoreManager\0tabIndex\0viewType\0"
    "ViewType\0Grid\0List"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__project__ScoresPageModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   54, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x02 /* Public */,
       5,    0,   47,    2, 0x02 /* Public */,
       6,    2,   48,    2, 0x02 /* Public */,
       9,    0,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    2,   67,

 // enum data: key, value
      13, uint(mu::project::ScoresPageModel::Grid),
      14, uint(mu::project::ScoresPageModel::List),

       0        // eod
};

void mu::project::ScoresPageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScoresPageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tabIndexChanged(); break;
        case 1: _t->viewTypeChanged(); break;
        case 2: _t->createNewScore(); break;
        case 3: _t->openOther(); break;
        case 4: _t->openScore((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->openScoreManager(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScoresPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoresPageModel::tabIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScoresPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoresPageModel::viewTypeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScoresPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->tabIndex(); break;
        case 1: *reinterpret_cast< ViewType*>(_v) = _t->viewType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScoresPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTabIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setViewType(*reinterpret_cast< ViewType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::project::ScoresPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__project__ScoresPageModel.data,
    qt_meta_data_mu__project__ScoresPageModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::project::ScoresPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::ScoresPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__project__ScoresPageModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::project::ScoresPageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void mu::project::ScoresPageModel::tabIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::project::ScoresPageModel::viewTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
