/****************************************************************************
** Meta object code from reading C++ file 'abstractnavigation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/abstractnavigation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractnavigation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__AbstractNavigation_t {
    QByteArrayData data[28];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__AbstractNavigation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__AbstractNavigation_t qt_meta_stringdata_mu__ui__AbstractNavigation = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mu::ui::AbstractNavigation"
QT_MOC_LITERAL(1, 27, 11), // "nameChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "name"
QT_MOC_LITERAL(4, 45, 12), // "orderChanged"
QT_MOC_LITERAL(5, 58, 5), // "order"
QT_MOC_LITERAL(6, 64, 13), // "columnChanged"
QT_MOC_LITERAL(7, 78, 6), // "column"
QT_MOC_LITERAL(8, 85, 10), // "rowChanged"
QT_MOC_LITERAL(9, 96, 3), // "row"
QT_MOC_LITERAL(10, 100, 14), // "enabledChanged"
QT_MOC_LITERAL(11, 115, 7), // "enabled"
QT_MOC_LITERAL(12, 123, 13), // "activeChanged"
QT_MOC_LITERAL(13, 137, 6), // "active"
QT_MOC_LITERAL(14, 144, 16), // "highlightChanged"
QT_MOC_LITERAL(15, 161, 17), // "accessibleChanged"
QT_MOC_LITERAL(16, 179, 15), // "navigationEvent"
QT_MOC_LITERAL(17, 195, 5), // "event"
QT_MOC_LITERAL(18, 201, 7), // "setName"
QT_MOC_LITERAL(19, 209, 8), // "setOrder"
QT_MOC_LITERAL(20, 218, 9), // "setColumn"
QT_MOC_LITERAL(21, 228, 6), // "setRow"
QT_MOC_LITERAL(22, 235, 10), // "setEnabled"
QT_MOC_LITERAL(23, 246, 9), // "setActive"
QT_MOC_LITERAL(24, 256, 13), // "setAccessible"
QT_MOC_LITERAL(25, 270, 15), // "AccessibleItem*"
QT_MOC_LITERAL(26, 286, 10), // "accessible"
QT_MOC_LITERAL(27, 297, 9) // "highlight"

    },
    "mu::ui::AbstractNavigation\0nameChanged\0"
    "\0name\0orderChanged\0order\0columnChanged\0"
    "column\0rowChanged\0row\0enabledChanged\0"
    "enabled\0activeChanged\0active\0"
    "highlightChanged\0accessibleChanged\0"
    "navigationEvent\0event\0setName\0setOrder\0"
    "setColumn\0setRow\0setEnabled\0setActive\0"
    "setAccessible\0AccessibleItem*\0accessible\0"
    "highlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__AbstractNavigation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       8,  138, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       8,    1,  103,    2, 0x06 /* Public */,
      10,    1,  106,    2, 0x06 /* Public */,
      12,    1,  109,    2, 0x06 /* Public */,
      14,    0,  112,    2, 0x06 /* Public */,
      15,    0,  113,    2, 0x06 /* Public */,
      16,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  117,    2, 0x0a /* Public */,
      19,    1,  120,    2, 0x0a /* Public */,
      20,    1,  123,    2, 0x0a /* Public */,
      21,    1,  126,    2, 0x0a /* Public */,
      22,    1,  129,    2, 0x0a /* Public */,
      23,    1,  132,    2, 0x0a /* Public */,
      24,    1,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 25,   26,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
      27, QMetaType::Bool, 0x00495001,
      26, 0x80000000 | 25, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void mu::ui::AbstractNavigation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractNavigation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->orderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->columnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->rowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->highlightChanged(); break;
        case 7: _t->accessibleChanged(); break;
        case 8: _t->navigationEvent((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 9: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setOrder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setAccessible((*reinterpret_cast< AccessibleItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccessibleItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractNavigation::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::orderChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::columnChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::rowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::enabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::activeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::highlightChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::accessibleChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AbstractNavigation::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractNavigation::navigationEvent)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccessibleItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractNavigation *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->order(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->column(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->row(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->highlight(); break;
        case 7: *reinterpret_cast< AccessibleItem**>(_v) = _t->accessible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AbstractNavigation *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setOrder(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRow(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setAccessible(*reinterpret_cast< AccessibleItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::AbstractNavigation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__AbstractNavigation.data,
    qt_meta_data_mu__ui__AbstractNavigation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::AbstractNavigation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::AbstractNavigation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__AbstractNavigation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::AbstractNavigation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::ui::AbstractNavigation::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::ui::AbstractNavigation::orderChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::ui::AbstractNavigation::columnChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::ui::AbstractNavigation::rowChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::ui::AbstractNavigation::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::ui::AbstractNavigation::activeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::ui::AbstractNavigation::highlightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::ui::AbstractNavigation::accessibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void mu::ui::AbstractNavigation::navigationEvent(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
