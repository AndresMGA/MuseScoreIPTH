/****************************************************************************
** Meta object code from reading C++ file 'navigationsection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/navigationsection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationsection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__NavigationSection_t {
    QByteArrayData data[16];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__NavigationSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__NavigationSection_t qt_meta_stringdata_mu__ui__NavigationSection = {
    {
QT_MOC_LITERAL(0, 0, 25), // "mu::ui::NavigationSection"
QT_MOC_LITERAL(1, 26, 11), // "typeChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "QmlType"
QT_MOC_LITERAL(4, 47, 4), // "type"
QT_MOC_LITERAL(5, 52, 7), // "setType"
QT_MOC_LITERAL(6, 60, 13), // "requestActive"
QT_MOC_LITERAL(7, 74, 17), // "INavigationPanel*"
QT_MOC_LITERAL(8, 92, 5), // "panel"
QT_MOC_LITERAL(9, 98, 19), // "INavigationControl*"
QT_MOC_LITERAL(10, 118, 7), // "control"
QT_MOC_LITERAL(11, 126, 15), // "enableHighlight"
QT_MOC_LITERAL(12, 142, 14), // "ActivationType"
QT_MOC_LITERAL(13, 157, 14), // "activationType"
QT_MOC_LITERAL(14, 172, 7), // "Regular"
QT_MOC_LITERAL(15, 180, 9) // "Exclusive"

    },
    "mu::ui::NavigationSection\0typeChanged\0"
    "\0QmlType\0type\0setType\0requestActive\0"
    "INavigationPanel*\0panel\0INavigationControl*\0"
    "control\0enableHighlight\0ActivationType\0"
    "activationType\0Regular\0Exclusive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__NavigationSection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   80, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    4,   55,    2, 0x02 /* Public */,
       6,    3,   64,    2, 0x22 /* Public | MethodCloned */,
       6,    2,   71,    2, 0x22 /* Public | MethodCloned */,
       6,    1,   76,    2, 0x22 /* Public | MethodCloned */,
       6,    0,   79,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, QMetaType::Bool, 0x80000000 | 12,    8,   10,   11,   13,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, QMetaType::Bool,    8,   10,   11,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    2,   89,

 // enum data: key, value
      14, uint(mu::ui::NavigationSection::Regular),
      15, uint(mu::ui::NavigationSection::Exclusive),

       0        // eod
};

void mu::ui::NavigationSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeChanged((*reinterpret_cast< QmlType(*)>(_a[1]))); break;
        case 1: _t->setType((*reinterpret_cast< QmlType(*)>(_a[1]))); break;
        case 2: _t->requestActive((*reinterpret_cast< INavigationPanel*(*)>(_a[1])),(*reinterpret_cast< INavigationControl*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< ActivationType(*)>(_a[4]))); break;
        case 3: _t->requestActive((*reinterpret_cast< INavigationPanel*(*)>(_a[1])),(*reinterpret_cast< INavigationControl*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->requestActive((*reinterpret_cast< INavigationPanel*(*)>(_a[1])),(*reinterpret_cast< INavigationControl*(*)>(_a[2]))); break;
        case 5: _t->requestActive((*reinterpret_cast< INavigationPanel*(*)>(_a[1]))); break;
        case 6: _t->requestActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationSection::*)(QmlType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationSection::typeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavigationSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlType*>(_v) = _t->type_property(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavigationSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< QmlType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::NavigationSection::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNavigation::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__NavigationSection.data,
    qt_meta_data_mu__ui__NavigationSection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::NavigationSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::NavigationSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__NavigationSection.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INavigationSection"))
        return static_cast< INavigationSection*>(this);
    return AbstractNavigation::qt_metacast(_clname);
}

int mu::ui::NavigationSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNavigation::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::ui::NavigationSection::typeChanged(QmlType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
