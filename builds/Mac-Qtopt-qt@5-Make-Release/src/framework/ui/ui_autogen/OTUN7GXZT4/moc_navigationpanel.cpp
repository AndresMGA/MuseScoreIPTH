/****************************************************************************
** Meta object code from reading C++ file 'navigationpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/navigationpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__NavigationPanel_t {
    QByteArrayData data[24];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__NavigationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__NavigationPanel_t qt_meta_stringdata_mu__ui__NavigationPanel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::ui::NavigationPanel"
QT_MOC_LITERAL(1, 24, 14), // "sectionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "NavigationSection*"
QT_MOC_LITERAL(4, 59, 7), // "section"
QT_MOC_LITERAL(5, 67, 16), // "directionChanged"
QT_MOC_LITERAL(6, 84, 19), // "setSection_property"
QT_MOC_LITERAL(7, 104, 10), // "setSection"
QT_MOC_LITERAL(8, 115, 19), // "INavigationSection*"
QT_MOC_LITERAL(9, 135, 12), // "setDirection"
QT_MOC_LITERAL(10, 148, 12), // "QmlDirection"
QT_MOC_LITERAL(11, 161, 9), // "direction"
QT_MOC_LITERAL(12, 171, 18), // "onSectionDestroyed"
QT_MOC_LITERAL(13, 190, 13), // "requestActive"
QT_MOC_LITERAL(14, 204, 19), // "INavigationControl*"
QT_MOC_LITERAL(15, 224, 7), // "control"
QT_MOC_LITERAL(16, 232, 15), // "enableHighlight"
QT_MOC_LITERAL(17, 248, 14), // "ActivationType"
QT_MOC_LITERAL(18, 263, 14), // "activationType"
QT_MOC_LITERAL(19, 278, 26), // "mu::ui::NavigationSection*"
QT_MOC_LITERAL(20, 305, 13), // "directionInfo"
QT_MOC_LITERAL(21, 319, 10), // "Horizontal"
QT_MOC_LITERAL(22, 330, 8), // "Vertical"
QT_MOC_LITERAL(23, 339, 4) // "Both"

    },
    "mu::ui::NavigationPanel\0sectionChanged\0"
    "\0NavigationSection*\0section\0"
    "directionChanged\0setSection_property\0"
    "setSection\0INavigationSection*\0"
    "setDirection\0QmlDirection\0direction\0"
    "onSectionDestroyed\0requestActive\0"
    "INavigationControl*\0control\0enableHighlight\0"
    "ActivationType\0activationType\0"
    "mu::ui::NavigationSection*\0directionInfo\0"
    "Horizontal\0Vertical\0Both"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__NavigationPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   94, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   68,    2, 0x0a /* Public */,
       7,    1,   71,    2, 0x0a /* Public */,
       9,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    3,   78,    2, 0x02 /* Public */,
      13,    2,   85,    2, 0x22 /* Public | MethodCloned */,
      13,    1,   90,    2, 0x22 /* Public | MethodCloned */,
      13,    0,   93,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool, 0x80000000 | 17,   15,   16,   18,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   16,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 19, 0x0049500b,
      11, 0x80000000 | 10, 0x0049510b,
      20, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       1,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    3,  111,

 // enum data: key, value
      21, uint(mu::ui::NavigationPanel::Horizontal),
      22, uint(mu::ui::NavigationPanel::Vertical),
      23, uint(mu::ui::NavigationPanel::Both),

       0        // eod
};

void mu::ui::NavigationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sectionChanged((*reinterpret_cast< NavigationSection*(*)>(_a[1]))); break;
        case 1: _t->directionChanged(); break;
        case 2: _t->setSection_property((*reinterpret_cast< NavigationSection*(*)>(_a[1]))); break;
        case 3: _t->setSection((*reinterpret_cast< INavigationSection*(*)>(_a[1]))); break;
        case 4: _t->setDirection((*reinterpret_cast< QmlDirection(*)>(_a[1]))); break;
        case 5: _t->onSectionDestroyed(); break;
        case 6: _t->requestActive((*reinterpret_cast< INavigationControl*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< ActivationType(*)>(_a[3]))); break;
        case 7: _t->requestActive((*reinterpret_cast< INavigationControl*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->requestActive((*reinterpret_cast< INavigationControl*(*)>(_a[1]))); break;
        case 9: _t->requestActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationPanel::*)(NavigationSection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationPanel::sectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NavigationPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationPanel::directionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavigationPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< mu::ui::NavigationSection**>(_v) = _t->section_property(); break;
        case 1: *reinterpret_cast< QmlDirection*>(_v) = _t->direction_property(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->directionInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavigationPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSection_property(*reinterpret_cast< mu::ui::NavigationSection**>(_v)); break;
        case 1: _t->setDirection(*reinterpret_cast< QmlDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::NavigationPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNavigation::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__NavigationPanel.data,
    qt_meta_data_mu__ui__NavigationPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::NavigationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::NavigationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__NavigationPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INavigationPanel"))
        return static_cast< INavigationPanel*>(this);
    return AbstractNavigation::qt_metacast(_clname);
}

int mu::ui::NavigationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNavigation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void mu::ui::NavigationPanel::sectionChanged(NavigationSection * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::ui::NavigationPanel::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
