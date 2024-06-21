/****************************************************************************
** Meta object code from reading C++ file 'navigationevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/navigationevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__NavigationEvent_t {
    QByteArrayData data[17];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__NavigationEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__NavigationEvent_t qt_meta_stringdata_mu__ui__NavigationEvent = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::ui::NavigationEvent"
QT_MOC_LITERAL(1, 24, 4), // "data"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "key"
QT_MOC_LITERAL(4, 34, 7), // "setData"
QT_MOC_LITERAL(5, 42, 3), // "val"
QT_MOC_LITERAL(6, 46, 4), // "type"
QT_MOC_LITERAL(7, 51, 4), // "Type"
QT_MOC_LITERAL(8, 56, 8), // "accepted"
QT_MOC_LITERAL(9, 65, 9), // "Undefined"
QT_MOC_LITERAL(10, 75, 4), // "Left"
QT_MOC_LITERAL(11, 80, 5), // "Right"
QT_MOC_LITERAL(12, 86, 2), // "Up"
QT_MOC_LITERAL(13, 89, 4), // "Down"
QT_MOC_LITERAL(14, 94, 7), // "Trigger"
QT_MOC_LITERAL(15, 102, 6), // "Escape"
QT_MOC_LITERAL(16, 109, 11) // "AboutActive"

    },
    "mu::ui::NavigationEvent\0data\0\0key\0"
    "setData\0val\0type\0Type\0accepted\0Undefined\0"
    "Left\0Right\0Up\0Down\0Trigger\0Escape\0"
    "AboutActive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__NavigationEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   32, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       4,    2,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariant, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    5,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00095409,
       8, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    8,   43,

 // enum data: key, value
       9, uint(mu::ui::NavigationEvent::Undefined),
      10, uint(mu::ui::NavigationEvent::Left),
      11, uint(mu::ui::NavigationEvent::Right),
      12, uint(mu::ui::NavigationEvent::Up),
      13, uint(mu::ui::NavigationEvent::Down),
      14, uint(mu::ui::NavigationEvent::Trigger),
      15, uint(mu::ui::NavigationEvent::Escape),
      16, uint(mu::ui::NavigationEvent::AboutActive),

       0        // eod
};

void mu::ui::NavigationEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<NavigationEvent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QVariant _r = _t->data((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::NavigationEvent::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__ui__NavigationEvent.data,
    qt_meta_data_mu__ui__NavigationEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
