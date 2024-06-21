/****************************************************************************
** Meta object code from reading C++ file 'noteinputbarcustomiseitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/noteinputbarcustomiseitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteinputbarcustomiseitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__NoteInputBarCustomiseItem_t {
    QByteArrayData data[18];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__NoteInputBarCustomiseItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__NoteInputBarCustomiseItem_t qt_meta_stringdata_mu__notation__NoteInputBarCustomiseItem = {
    {
QT_MOC_LITERAL(0, 0, 39), // "mu::notation::NoteInputBarCus..."
QT_MOC_LITERAL(1, 40, 12), // "titleChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "iconChanged"
QT_MOC_LITERAL(4, 66, 14), // "checkedChanged"
QT_MOC_LITERAL(5, 81, 7), // "checked"
QT_MOC_LITERAL(6, 89, 8), // "setTitle"
QT_MOC_LITERAL(7, 98, 5), // "title"
QT_MOC_LITERAL(8, 104, 7), // "setIcon"
QT_MOC_LITERAL(9, 112, 18), // "ui::IconCode::Code"
QT_MOC_LITERAL(10, 131, 4), // "icon"
QT_MOC_LITERAL(11, 136, 10), // "setChecked"
QT_MOC_LITERAL(12, 147, 2), // "id"
QT_MOC_LITERAL(13, 150, 4), // "type"
QT_MOC_LITERAL(14, 155, 8), // "ItemType"
QT_MOC_LITERAL(15, 164, 9), // "UNDEFINED"
QT_MOC_LITERAL(16, 174, 6), // "ACTION"
QT_MOC_LITERAL(17, 181, 9) // "SEPARATOR"

    },
    "mu::notation::NoteInputBarCustomiseItem\0"
    "titleChanged\0\0iconChanged\0checkedChanged\0"
    "checked\0setTitle\0title\0setIcon\0"
    "ui::IconCode::Code\0icon\0setChecked\0"
    "id\0type\0ItemType\0UNDEFINED\0ACTION\0"
    "SEPARATOR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__NoteInputBarCustomiseItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   64, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
      11,    1,   60,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,    5,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x00095409,
       7, QMetaType::QString, 0x00495103,
      10, QMetaType::Int, 0x00495001,
       5, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    3,   85,

 // enum data: key, value
      15, uint(mu::notation::NoteInputBarCustomiseItem::UNDEFINED),
      16, uint(mu::notation::NoteInputBarCustomiseItem::ACTION),
      17, uint(mu::notation::NoteInputBarCustomiseItem::SEPARATOR),

       0        // eod
};

void mu::notation::NoteInputBarCustomiseItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteInputBarCustomiseItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->iconChanged(); break;
        case 2: _t->checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setIcon((*reinterpret_cast< ui::IconCode::Code(*)>(_a[1]))); break;
        case 5: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { QString _r = _t->id();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteInputBarCustomiseItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteInputBarCustomiseItem::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NoteInputBarCustomiseItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteInputBarCustomiseItem::iconChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NoteInputBarCustomiseItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteInputBarCustomiseItem::checkedChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NoteInputBarCustomiseItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ItemType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NoteInputBarCustomiseItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::NoteInputBarCustomiseItem::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::SelectableItemListModel::Item::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__NoteInputBarCustomiseItem.data,
    qt_meta_data_mu__notation__NoteInputBarCustomiseItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::NoteInputBarCustomiseItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::NoteInputBarCustomiseItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__NoteInputBarCustomiseItem.stringdata0))
        return static_cast<void*>(this);
    return uicomponents::SelectableItemListModel::Item::qt_metacast(_clname);
}

int mu::notation::NoteInputBarCustomiseItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::SelectableItemListModel::Item::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::notation::NoteInputBarCustomiseItem::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::NoteInputBarCustomiseItem::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::notation::NoteInputBarCustomiseItem::checkedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
