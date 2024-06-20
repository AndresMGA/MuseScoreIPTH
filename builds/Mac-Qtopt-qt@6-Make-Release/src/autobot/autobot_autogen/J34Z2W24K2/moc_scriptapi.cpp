/****************************************************************************
** Meta object code from reading C++ file 'scriptapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/internal/api/scriptapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__api__ScriptApi_t {
    QByteArrayData data[14];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__api__ScriptApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__api__ScriptApi_t qt_meta_stringdata_mu__api__ScriptApi = {
    {
QT_MOC_LITERAL(0, 0, 18), // "mu::api::ScriptApi"
QT_MOC_LITERAL(1, 19, 3), // "log"
QT_MOC_LITERAL(2, 23, 8), // "QJSValue"
QT_MOC_LITERAL(3, 32, 7), // "autobot"
QT_MOC_LITERAL(4, 40, 10), // "dispatcher"
QT_MOC_LITERAL(5, 51, 10), // "navigation"
QT_MOC_LITERAL(6, 62, 7), // "context"
QT_MOC_LITERAL(7, 70, 9), // "shortcuts"
QT_MOC_LITERAL(8, 80, 11), // "interactive"
QT_MOC_LITERAL(9, 92, 8), // "keyboard"
QT_MOC_LITERAL(10, 101, 13), // "accessibility"
QT_MOC_LITERAL(11, 115, 11), // "diagnostics"
QT_MOC_LITERAL(12, 127, 7), // "process"
QT_MOC_LITERAL(13, 135, 10) // "filesystem"

    },
    "mu::api::ScriptApi\0log\0QJSValue\0autobot\0"
    "dispatcher\0navigation\0context\0shortcuts\0"
    "interactive\0keyboard\0accessibility\0"
    "diagnostics\0process\0filesystem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__api__ScriptApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,
       6, 0x80000000 | 2, 0x00095409,
       7, 0x80000000 | 2, 0x00095409,
       8, 0x80000000 | 2, 0x00095409,
       9, 0x80000000 | 2, 0x00095409,
      10, 0x80000000 | 2, 0x00095409,
      11, 0x80000000 | 2, 0x00095409,
      12, 0x80000000 | 2, 0x00095409,
      13, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void mu::api::ScriptApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScriptApi *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->log(); break;
        case 1: *reinterpret_cast< QJSValue*>(_v) = _t->autobot(); break;
        case 2: *reinterpret_cast< QJSValue*>(_v) = _t->dispatcher(); break;
        case 3: *reinterpret_cast< QJSValue*>(_v) = _t->navigation(); break;
        case 4: *reinterpret_cast< QJSValue*>(_v) = _t->context(); break;
        case 5: *reinterpret_cast< QJSValue*>(_v) = _t->shortcuts(); break;
        case 6: *reinterpret_cast< QJSValue*>(_v) = _t->interactive(); break;
        case 7: *reinterpret_cast< QJSValue*>(_v) = _t->keyboard(); break;
        case 8: *reinterpret_cast< QJSValue*>(_v) = _t->accessibility(); break;
        case 9: *reinterpret_cast< QJSValue*>(_v) = _t->diagnostics(); break;
        case 10: *reinterpret_cast< QJSValue*>(_v) = _t->process(); break;
        case 11: *reinterpret_cast< QJSValue*>(_v) = _t->filesystem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

QT_INIT_METAOBJECT const QMetaObject mu::api::ScriptApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__api__ScriptApi.data,
    qt_meta_data_mu__api__ScriptApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::api::ScriptApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::api::ScriptApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__api__ScriptApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::api::ScriptApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
