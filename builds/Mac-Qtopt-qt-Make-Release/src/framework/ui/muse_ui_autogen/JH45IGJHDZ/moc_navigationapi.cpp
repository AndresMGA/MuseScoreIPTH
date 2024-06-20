/****************************************************************************
** Meta object code from reading C++ file 'navigationapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/api/navigationapi.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationapi.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEapiSCOPENavigationApiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEapiSCOPENavigationApiENDCLASS = QtMocHelpers::stringData(
    "muse::api::NavigationApi",
    "nextPanel",
    "",
    "prevPanel",
    "right",
    "left",
    "up",
    "down",
    "escape",
    "goToControl",
    "section",
    "panel",
    "QJSValue",
    "controlNameOrIndex",
    "trigger",
    "triggerControl",
    "activeSection",
    "activePanel",
    "activeControl",
    "dump"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEapiSCOPENavigationApiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x02,    1 /* Public */,
       3,    0,   99,    2, 0x02,    2 /* Public */,
       4,    0,  100,    2, 0x02,    3 /* Public */,
       5,    0,  101,    2, 0x02,    4 /* Public */,
       6,    0,  102,    2, 0x02,    5 /* Public */,
       7,    0,  103,    2, 0x02,    6 /* Public */,
       8,    0,  104,    2, 0x02,    7 /* Public */,
       9,    3,  105,    2, 0x02,    8 /* Public */,
      14,    0,  112,    2, 0x02,   12 /* Public */,
      15,    3,  113,    2, 0x02,   13 /* Public */,
      16,    0,  120,    2, 0x102,   17 /* Public | MethodIsConst  */,
      17,    0,  121,    2, 0x102,   18 /* Public | MethodIsConst  */,
      18,    0,  122,    2, 0x102,   19 /* Public | MethodIsConst  */,
      19,    0,  123,    2, 0x102,   20 /* Public | MethodIsConst  */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 12,   10,   11,   13,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 12,   10,   11,   13,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::api::NavigationApi::staticMetaObject = { {
    QMetaObject::SuperData::link<api::ApiObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEapiSCOPENavigationApiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEapiSCOPENavigationApiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEapiSCOPENavigationApiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NavigationApi, std::true_type>,
        // method 'nextPanel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prevPanel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'right'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'left'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'up'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'down'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'escape'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goToControl'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJSValue &, std::false_type>,
        // method 'trigger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerControl'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJSValue &, std::false_type>,
        // method 'activeSection'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'activePanel'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'activeControl'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'dump'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::api::NavigationApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nextPanel(); break;
        case 1: _t->prevPanel(); break;
        case 2: _t->right(); break;
        case 3: _t->left(); break;
        case 4: _t->up(); break;
        case 5: _t->down(); break;
        case 6: _t->escape(); break;
        case 7: { bool _r = _t->goToControl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->trigger(); break;
        case 9: { bool _r = _t->triggerControl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->activeSection();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->activePanel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->activeControl();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->dump(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    }
}

const QMetaObject *muse::api::NavigationApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::api::NavigationApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEapiSCOPENavigationApiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return api::ApiObject::qt_metacast(_clname);
}

int muse::api::NavigationApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = api::ApiObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
