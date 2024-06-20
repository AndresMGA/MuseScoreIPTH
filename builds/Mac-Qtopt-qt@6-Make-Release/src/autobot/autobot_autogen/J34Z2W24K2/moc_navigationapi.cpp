/****************************************************************************
** Meta object code from reading C++ file 'navigationapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/internal/api/navigationapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navigationapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__api__NavigationApi_t {
    QByteArrayData data[20];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__api__NavigationApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__api__NavigationApi_t qt_meta_stringdata_mu__api__NavigationApi = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::api::NavigationApi"
QT_MOC_LITERAL(1, 23, 9), // "nextPanel"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "prevPanel"
QT_MOC_LITERAL(4, 44, 5), // "right"
QT_MOC_LITERAL(5, 50, 4), // "left"
QT_MOC_LITERAL(6, 55, 2), // "up"
QT_MOC_LITERAL(7, 58, 4), // "down"
QT_MOC_LITERAL(8, 63, 6), // "escape"
QT_MOC_LITERAL(9, 70, 11), // "goToControl"
QT_MOC_LITERAL(10, 82, 7), // "section"
QT_MOC_LITERAL(11, 90, 5), // "panel"
QT_MOC_LITERAL(12, 96, 8), // "QJSValue"
QT_MOC_LITERAL(13, 105, 18), // "controlNameOrIndex"
QT_MOC_LITERAL(14, 124, 7), // "trigger"
QT_MOC_LITERAL(15, 132, 14), // "triggerControl"
QT_MOC_LITERAL(16, 147, 13), // "activeSection"
QT_MOC_LITERAL(17, 161, 11), // "activePanel"
QT_MOC_LITERAL(18, 173, 13), // "activeControl"
QT_MOC_LITERAL(19, 187, 4) // "dump"

    },
    "mu::api::NavigationApi\0nextPanel\0\0"
    "prevPanel\0right\0left\0up\0down\0escape\0"
    "goToControl\0section\0panel\0QJSValue\0"
    "controlNameOrIndex\0trigger\0triggerControl\0"
    "activeSection\0activePanel\0activeControl\0"
    "dump"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__api__NavigationApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x02 /* Public */,
       3,    0,   85,    2, 0x02 /* Public */,
       4,    0,   86,    2, 0x02 /* Public */,
       5,    0,   87,    2, 0x02 /* Public */,
       6,    0,   88,    2, 0x02 /* Public */,
       7,    0,   89,    2, 0x02 /* Public */,
       8,    0,   90,    2, 0x02 /* Public */,
       9,    3,   91,    2, 0x02 /* Public */,
      14,    0,   98,    2, 0x02 /* Public */,
      15,    3,   99,    2, 0x02 /* Public */,
      16,    0,  106,    2, 0x02 /* Public */,
      17,    0,  107,    2, 0x02 /* Public */,
      18,    0,  108,    2, 0x02 /* Public */,
      19,    0,  109,    2, 0x02 /* Public */,

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

void mu::api::NavigationApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        case 7: { bool _r = _t->goToControl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QJSValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->trigger(); break;
        case 9: { bool _r = _t->triggerControl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QJSValue(*)>(_a[3])));
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
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::api::NavigationApi::staticMetaObject = { {
    QMetaObject::SuperData::link<ApiObject::staticMetaObject>(),
    qt_meta_stringdata_mu__api__NavigationApi.data,
    qt_meta_data_mu__api__NavigationApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::api::NavigationApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::api::NavigationApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__api__NavigationApi.stringdata0))
        return static_cast<void*>(this);
    return ApiObject::qt_metacast(_clname);
}

int mu::api::NavigationApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApiObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
