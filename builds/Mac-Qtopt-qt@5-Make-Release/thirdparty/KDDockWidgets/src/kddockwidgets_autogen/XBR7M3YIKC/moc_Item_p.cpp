/****************************************************************************
** Meta object code from reading C++ file 'Item_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/multisplitter/Item_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Item_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Layouting__Item_t {
    QByteArrayData data[20];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Layouting__Item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Layouting__Item_t qt_meta_stringdata_Layouting__Item = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Layouting::Item"
QT_MOC_LITERAL(1, 16, 15), // "geometryChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "xChanged"
QT_MOC_LITERAL(4, 42, 8), // "yChanged"
QT_MOC_LITERAL(5, 51, 12), // "widthChanged"
QT_MOC_LITERAL(6, 64, 13), // "heightChanged"
QT_MOC_LITERAL(7, 78, 14), // "visibleChanged"
QT_MOC_LITERAL(8, 93, 16), // "Layouting::Item*"
QT_MOC_LITERAL(9, 110, 8), // "thisItem"
QT_MOC_LITERAL(10, 119, 7), // "visible"
QT_MOC_LITERAL(11, 127, 14), // "minSizeChanged"
QT_MOC_LITERAL(12, 142, 14), // "maxSizeChanged"
QT_MOC_LITERAL(13, 157, 23), // "onWidgetLayoutRequested"
QT_MOC_LITERAL(14, 181, 1), // "x"
QT_MOC_LITERAL(15, 183, 1), // "y"
QT_MOC_LITERAL(16, 185, 5), // "width"
QT_MOC_LITERAL(17, 191, 6), // "height"
QT_MOC_LITERAL(18, 198, 8), // "geometry"
QT_MOC_LITERAL(19, 207, 11) // "isContainer"

    },
    "Layouting::Item\0geometryChanged\0\0"
    "xChanged\0yChanged\0widthChanged\0"
    "heightChanged\0visibleChanged\0"
    "Layouting::Item*\0thisItem\0visible\0"
    "minSizeChanged\0maxSizeChanged\0"
    "onWidgetLayoutRequested\0x\0y\0width\0"
    "height\0geometry\0isContainer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Layouting__Item[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    2,   64,    2, 0x06 /* Public */,
      11,    1,   69,    2, 0x06 /* Public */,
      12,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::Int, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::QRect, 0x00495001,
      19, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       0,
       0,

       0        // eod
};

void Layouting::Item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Item *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->geometryChanged(); break;
        case 1: _t->xChanged(); break;
        case 2: _t->yChanged(); break;
        case 3: _t->widthChanged(); break;
        case 4: _t->heightChanged(); break;
        case 5: _t->visibleChanged((*reinterpret_cast< Layouting::Item*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->minSizeChanged((*reinterpret_cast< Layouting::Item*(*)>(_a[1]))); break;
        case 7: _t->maxSizeChanged((*reinterpret_cast< Layouting::Item*(*)>(_a[1]))); break;
        case 8: _t->onWidgetLayoutRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Layouting::Item* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Layouting::Item* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Layouting::Item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Item::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::geometryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Item::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::xChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Item::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::yChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Item::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::widthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Item::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::heightChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Item::*)(Layouting::Item * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::visibleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Item::*)(Layouting::Item * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::minSizeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Item::*)(Layouting::Item * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Item::maxSizeChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Item *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isContainer(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Layouting::Item::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Layouting__Item.data,
    qt_meta_data_Layouting__Item,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Layouting::Item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Layouting::Item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Layouting__Item.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Layouting::Item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Layouting::Item::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Layouting::Item::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Layouting::Item::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Layouting::Item::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Layouting::Item::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Layouting::Item::visibleChanged(Layouting::Item * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Layouting::Item::minSizeChanged(Layouting::Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Layouting::Item::maxSizeChanged(Layouting::Item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
struct qt_meta_stringdata_Layouting__ItemContainer_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Layouting__ItemContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Layouting__ItemContainer_t qt_meta_stringdata_Layouting__ItemContainer = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Layouting::ItemContainer"
QT_MOC_LITERAL(1, 25, 12), // "itemsChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "numVisibleItemsChanged"
QT_MOC_LITERAL(4, 62, 15) // "numItemsChanged"

    },
    "Layouting::ItemContainer\0itemsChanged\0"
    "\0numVisibleItemsChanged\0numItemsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Layouting__ItemContainer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       4,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void Layouting::ItemContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ItemContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemsChanged(); break;
        case 1: _t->numVisibleItemsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->numItemsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ItemContainer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemContainer::itemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ItemContainer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemContainer::numVisibleItemsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ItemContainer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemContainer::numItemsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Layouting::ItemContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<Item::staticMetaObject>(),
    qt_meta_stringdata_Layouting__ItemContainer.data,
    qt_meta_data_Layouting__ItemContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Layouting::ItemContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Layouting::ItemContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Layouting__ItemContainer.stringdata0))
        return static_cast<void*>(this);
    return Item::qt_metacast(_clname);
}

int Layouting::ItemContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Layouting::ItemContainer::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Layouting::ItemContainer::numVisibleItemsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Layouting::ItemContainer::numItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_Layouting__ItemBoxContainer_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Layouting__ItemBoxContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Layouting__ItemBoxContainer_t qt_meta_stringdata_Layouting__ItemBoxContainer = {
    {
QT_MOC_LITERAL(0, 0, 27) // "Layouting::ItemBoxContainer"

    },
    "Layouting::ItemBoxContainer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Layouting__ItemBoxContainer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Layouting::ItemBoxContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Layouting::ItemBoxContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<ItemContainer::staticMetaObject>(),
    qt_meta_stringdata_Layouting__ItemBoxContainer.data,
    qt_meta_data_Layouting__ItemBoxContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Layouting::ItemBoxContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Layouting::ItemBoxContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Layouting__ItemBoxContainer.stringdata0))
        return static_cast<void*>(this);
    return ItemContainer::qt_metacast(_clname);
}

int Layouting::ItemBoxContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemContainer::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Layouting_t {
    QByteArrayData data[11];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Layouting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Layouting_t qt_meta_stringdata_Layouting = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Layouting"
QT_MOC_LITERAL(1, 10, 4), // "Side"
QT_MOC_LITERAL(2, 15, 5), // "Side1"
QT_MOC_LITERAL(3, 21, 5), // "Side2"
QT_MOC_LITERAL(4, 27, 22), // "ChildrenResizeStrategy"
QT_MOC_LITERAL(5, 50, 10), // "Percentage"
QT_MOC_LITERAL(6, 61, 18), // "Side1SeparatorMove"
QT_MOC_LITERAL(7, 80, 18), // "Side2SeparatorMove"
QT_MOC_LITERAL(8, 99, 24), // "NeighbourSqueezeStrategy"
QT_MOC_LITERAL(9, 124, 13), // "AllNeighbours"
QT_MOC_LITERAL(10, 138, 24) // "ImmediateNeighboursFirst"

    },
    "Layouting\0Side\0Side1\0Side2\0"
    "ChildrenResizeStrategy\0Percentage\0"
    "Side1SeparatorMove\0Side2SeparatorMove\0"
    "NeighbourSqueezeStrategy\0AllNeighbours\0"
    "ImmediateNeighboursFirst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Layouting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   29,
       4,    4, 0x2,    3,   33,
       8,    8, 0x2,    2,   39,

 // enum data: key, value
       2, uint(Layouting::Side1),
       3, uint(Layouting::Side2),
       5, uint(Layouting::ChildrenResizeStrategy::Percentage),
       6, uint(Layouting::ChildrenResizeStrategy::Side1SeparatorMove),
       7, uint(Layouting::ChildrenResizeStrategy::Side2SeparatorMove),
       9, uint(Layouting::NeighbourSqueezeStrategy::AllNeighbours),
      10, uint(Layouting::NeighbourSqueezeStrategy::ImmediateNeighboursFirst),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject Layouting::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Layouting.data,
    qt_meta_data_Layouting,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
