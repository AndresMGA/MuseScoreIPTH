/****************************************************************************
** Meta object code from reading C++ file 'preferencepageitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/preferences/preferencepageitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferencepageitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__PreferencePageItem_t {
    QByteArrayData data[18];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__PreferencePageItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__PreferencePageItem_t qt_meta_stringdata_mu__appshell__PreferencePageItem = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::appshell::PreferencePageItem"
QT_MOC_LITERAL(1, 33, 9), // "idChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 2), // "id"
QT_MOC_LITERAL(4, 47, 12), // "titleChanged"
QT_MOC_LITERAL(5, 60, 5), // "title"
QT_MOC_LITERAL(6, 66, 11), // "iconChanged"
QT_MOC_LITERAL(7, 78, 4), // "icon"
QT_MOC_LITERAL(8, 83, 11), // "pathChanged"
QT_MOC_LITERAL(9, 95, 4), // "path"
QT_MOC_LITERAL(10, 100, 15), // "expandedChanged"
QT_MOC_LITERAL(11, 116, 8), // "expanded"
QT_MOC_LITERAL(12, 125, 8), // "setTitle"
QT_MOC_LITERAL(13, 134, 5), // "setId"
QT_MOC_LITERAL(14, 140, 7), // "setIcon"
QT_MOC_LITERAL(15, 148, 18), // "ui::IconCode::Code"
QT_MOC_LITERAL(16, 167, 7), // "setPath"
QT_MOC_LITERAL(17, 175, 11) // "setExpanded"

    },
    "mu::appshell::PreferencePageItem\0"
    "idChanged\0\0id\0titleChanged\0title\0"
    "iconChanged\0icon\0pathChanged\0path\0"
    "expandedChanged\0expanded\0setTitle\0"
    "setId\0setIcon\0ui::IconCode::Code\0"
    "setPath\0setExpanded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__PreferencePageItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      16,    1,   88,    2, 0x0a /* Public */,
      17,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 15,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,
       5, QMetaType::QString, 0x00495001,
       7, QMetaType::Int, 0x00495001,
       9, QMetaType::QString, 0x00495001,
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void mu::appshell::PreferencePageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreferencePageItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->iconChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->pathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->expandedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setIcon((*reinterpret_cast< ui::IconCode::Code(*)>(_a[1]))); break;
        case 8: _t->setPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setExpanded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreferencePageItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencePageItem::idChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PreferencePageItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencePageItem::titleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PreferencePageItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencePageItem::iconChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PreferencePageItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencePageItem::pathChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PreferencePageItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencePageItem::expandedChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PreferencePageItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->expanded(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::PreferencePageItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__PreferencePageItem.data,
    qt_meta_data_mu__appshell__PreferencePageItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::PreferencePageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::PreferencePageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__PreferencePageItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::PreferencePageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void mu::appshell::PreferencePageItem::idChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::appshell::PreferencePageItem::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::appshell::PreferencePageItem::iconChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::appshell::PreferencePageItem::pathChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::appshell::PreferencePageItem::expandedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
