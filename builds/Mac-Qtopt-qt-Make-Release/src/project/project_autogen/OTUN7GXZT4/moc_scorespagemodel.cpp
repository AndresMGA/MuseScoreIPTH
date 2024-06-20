/****************************************************************************
** Meta object code from reading C++ file 'scorespagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/project/view/scorespagemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scorespagemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEScoresPageModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEScoresPageModelENDCLASS = QtMocHelpers::stringData(
    "mu::project::ScoresPageModel",
    "tabIndexChanged",
    "",
    "viewTypeChanged",
    "createNewScore",
    "openOther",
    "openScore",
    "scorePath",
    "displayNameOverride",
    "openScoreManager",
    "tabIndex",
    "viewType",
    "ViewType",
    "Grid",
    "List"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEprojectSCOPEScoresPageModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   60, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    4 /* Public */,
       3,    0,   51,    2, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   52,    2, 0x02,    6 /* Public */,
       5,    0,   53,    2, 0x02,    7 /* Public */,
       6,    2,   54,    2, 0x02,    8 /* Public */,
       9,    0,   59,    2, 0x02,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00015103, uint(0), 0,
      11, 0x80000000 | 12, 0x0001510b, uint(1), 0,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    2,   75,

 // enum data: key, value
      13, uint(mu::project::ScoresPageModel::Grid),
      14, uint(mu::project::ScoresPageModel::List),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::project::ScoresPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEScoresPageModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEprojectSCOPEScoresPageModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEScoresPageModelENDCLASS_t,
        // property 'tabIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'viewType'
        QtPrivate::TypeAndForceComplete<ViewType, std::true_type>,
        // enum 'ViewType'
        QtPrivate::TypeAndForceComplete<ScoresPageModel::ViewType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScoresPageModel, std::true_type>,
        // method 'tabIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'viewTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createNewScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openOther'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openScoreManager'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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
        case 4: _t->openScore((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->openScoreManager(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScoresPageModel::*)();
            if (_t _q_method = &ScoresPageModel::tabIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScoresPageModel::*)();
            if (_t _q_method = &ScoresPageModel::viewTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::project::ScoresPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::ScoresPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEScoresPageModelENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
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
