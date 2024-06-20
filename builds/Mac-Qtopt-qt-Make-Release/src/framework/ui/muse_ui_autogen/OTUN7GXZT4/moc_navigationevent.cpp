/****************************************************************************
** Meta object code from reading C++ file 'navigationevent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/view/navigationevent.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationevent.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationEventENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationEventENDCLASS = QtMocHelpers::stringData(
    "muse::ui::NavigationEvent",
    "data",
    "",
    "key",
    "setData",
    "val",
    "type",
    "Type",
    "accepted",
    "Undefined",
    "Left",
    "Right",
    "Up",
    "Down",
    "Trigger",
    "Escape",
    "AboutActive"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationEventENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   34, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x102,    4 /* Public | MethodIsConst  */,
       4,    2,   29,    2, 0x02,    6 /* Public */,

 // methods: parameters
    QMetaType::QVariant, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    5,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00015409, uint(-1), 0,
       8, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    8,   49,

 // enum data: key, value
       9, uint(muse::ui::NavigationEvent::Undefined),
      10, uint(muse::ui::NavigationEvent::Left),
      11, uint(muse::ui::NavigationEvent::Right),
      12, uint(muse::ui::NavigationEvent::Up),
      13, uint(muse::ui::NavigationEvent::Down),
      14, uint(muse::ui::NavigationEvent::Trigger),
      15, uint(muse::ui::NavigationEvent::Escape),
      16, uint(muse::ui::NavigationEvent::AboutActive),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::ui::NavigationEvent::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationEventENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPENavigationEventENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPENavigationEventENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Type, std::true_type>,
        // property 'accepted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<NavigationEvent::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NavigationEvent, std::true_type>,
        // method 'data'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void muse::ui::NavigationEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<NavigationEvent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QVariant _r = _t->data((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<NavigationEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->accepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<NavigationEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}
QT_WARNING_POP
