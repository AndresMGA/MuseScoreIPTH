/****************************************************************************
** Meta object code from reading C++ file 'filtervalue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/uicomponents/view/filtervalue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filtervalue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__uicomponents__CompareType_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__uicomponents__CompareType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__uicomponents__CompareType_t qt_meta_stringdata_mu__uicomponents__CompareType = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::uicomponents::CompareType"
QT_MOC_LITERAL(1, 30, 4), // "Type"
QT_MOC_LITERAL(2, 35, 5), // "Equal"
QT_MOC_LITERAL(3, 41, 8), // "NotEqual"
QT_MOC_LITERAL(4, 50, 8) // "Contains"

    },
    "mu::uicomponents::CompareType\0Type\0"
    "Equal\0NotEqual\0Contains"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__uicomponents__CompareType[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(mu::uicomponents::CompareType::Equal),
       3, uint(mu::uicomponents::CompareType::NotEqual),
       4, uint(mu::uicomponents::CompareType::Contains),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::uicomponents::CompareType::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__uicomponents__CompareType.data,
    qt_meta_data_mu__uicomponents__CompareType,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_mu__uicomponents__FilterValue_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__uicomponents__FilterValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__uicomponents__FilterValue_t qt_meta_stringdata_mu__uicomponents__FilterValue = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::uicomponents::FilterValue"
QT_MOC_LITERAL(1, 30, 11), // "dataChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "setRoleName"
QT_MOC_LITERAL(4, 55, 8), // "roleName"
QT_MOC_LITERAL(5, 64, 12), // "setRoleValue"
QT_MOC_LITERAL(6, 77, 9), // "roleValue"
QT_MOC_LITERAL(7, 87, 14), // "setCompareType"
QT_MOC_LITERAL(8, 102, 35), // "mu::uicomponents::CompareType..."
QT_MOC_LITERAL(9, 138, 11), // "compareType"
QT_MOC_LITERAL(10, 150, 10), // "setEnabled"
QT_MOC_LITERAL(11, 161, 7), // "enabled"
QT_MOC_LITERAL(12, 169, 5) // "async"

    },
    "mu::uicomponents::FilterValue\0dataChanged\0"
    "\0setRoleName\0roleName\0setRoleValue\0"
    "roleValue\0setCompareType\0"
    "mu::uicomponents::CompareType::Type\0"
    "compareType\0setEnabled\0enabled\0async"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__uicomponents__FilterValue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
      10,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00495103,
       6, QMetaType::QVariant, 0x00495103,
       9, 0x80000000 | 8, 0x0049510b,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void mu::uicomponents::FilterValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterValue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->setRoleName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setRoleValue((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->setCompareType((*reinterpret_cast< mu::uicomponents::CompareType::Type(*)>(_a[1]))); break;
        case 4: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterValue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterValue::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FilterValue *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->roleName(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->roleValue(); break;
        case 2: *reinterpret_cast< mu::uicomponents::CompareType::Type*>(_v) = _t->compareType(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->async(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FilterValue *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoleName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setRoleValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 2: _t->setCompareType(*reinterpret_cast< mu::uicomponents::CompareType::Type*>(_v)); break;
        case 3: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAsync(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_mu__uicomponents__FilterValue[] = {
    QMetaObject::SuperData::link<mu::uicomponents::CompareType::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject mu::uicomponents::FilterValue::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__uicomponents__FilterValue.data,
    qt_meta_data_mu__uicomponents__FilterValue,
    qt_static_metacall,
    qt_meta_extradata_mu__uicomponents__FilterValue,
    nullptr
} };


const QMetaObject *mu::uicomponents::FilterValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::uicomponents::FilterValue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__uicomponents__FilterValue.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::uicomponents::FilterValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::uicomponents::FilterValue::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
