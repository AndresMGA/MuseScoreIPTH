/****************************************************************************
** Meta object code from reading C++ file 'timeline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/widgets/timeline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__TRowLabels_t {
    QByteArrayData data[13];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__TRowLabels_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__TRowLabels_t qt_meta_stringdata_mu__notation__TRowLabels = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::notation::TRowLabels"
QT_MOC_LITERAL(1, 25, 5), // "moved"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 1), // "p"
QT_MOC_LITERAL(4, 34, 8), // "swapMeta"
QT_MOC_LITERAL(5, 43, 1), // "r"
QT_MOC_LITERAL(6, 45, 2), // "up"
QT_MOC_LITERAL(7, 48, 18), // "requestContextMenu"
QT_MOC_LITERAL(8, 67, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(9, 86, 14), // "restrictScroll"
QT_MOC_LITERAL(10, 101, 5), // "value"
QT_MOC_LITERAL(11, 107, 9), // "mouseOver"
QT_MOC_LITERAL(12, 117, 7) // "scenePt"

    },
    "mu::notation::TRowLabels\0moved\0\0p\0"
    "swapMeta\0r\0up\0requestContextMenu\0"
    "QContextMenuEvent*\0restrictScroll\0"
    "value\0mouseOver\0scenePt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__TRowLabels[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   50,    2, 0x08 /* Private */,
      11,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QPointF,   12,

       0        // eod
};

void mu::notation::TRowLabels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TRowLabels *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->swapMeta((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->requestContextMenu((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 3: _t->restrictScroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mouseOver((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TRowLabels::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TRowLabels::moved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TRowLabels::*)(unsigned  , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TRowLabels::swapMeta)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TRowLabels::*)(QContextMenuEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TRowLabels::requestContextMenu)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::TRowLabels::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__TRowLabels.data,
    qt_meta_data_mu__notation__TRowLabels,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::TRowLabels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::TRowLabels::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__TRowLabels.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int mu::notation::TRowLabels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void mu::notation::TRowLabels::moved(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::notation::TRowLabels::swapMeta(unsigned  _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::notation::TRowLabels::requestContextMenu(QContextMenuEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_mu__notation__Timeline_t {
    QByteArrayData data[22];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__Timeline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__Timeline_t qt_meta_stringdata_mu__notation__Timeline = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::notation::Timeline"
QT_MOC_LITERAL(1, 23, 5), // "moved"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "handleScroll"
QT_MOC_LITERAL(4, 43, 5), // "value"
QT_MOC_LITERAL(5, 49, 15), // "changeSelection"
QT_MOC_LITERAL(6, 65, 19), // "engraving::SelState"
QT_MOC_LITERAL(7, 85, 9), // "mouseOver"
QT_MOC_LITERAL(8, 95, 3), // "pos"
QT_MOC_LITERAL(9, 99, 8), // "swapMeta"
QT_MOC_LITERAL(10, 108, 3), // "row"
QT_MOC_LITERAL(11, 112, 8), // "switchUp"
QT_MOC_LITERAL(12, 121, 23), // "requestInstrumentDialog"
QT_MOC_LITERAL(13, 145, 13), // "toggleMetaRow"
QT_MOC_LITERAL(14, 159, 19), // "updateTimelineTheme"
QT_MOC_LITERAL(15, 179, 16), // "contextMenuEvent"
QT_MOC_LITERAL(16, 196, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(17, 215, 5), // "event"
QT_MOC_LITERAL(18, 221, 8), // "ItemType"
QT_MOC_LITERAL(19, 230, 12), // "TYPE_UNKNOWN"
QT_MOC_LITERAL(20, 243, 12), // "TYPE_MEASURE"
QT_MOC_LITERAL(21, 256, 9) // "TYPE_META"

    },
    "mu::notation::Timeline\0moved\0\0"
    "handleScroll\0value\0changeSelection\0"
    "engraving::SelState\0mouseOver\0pos\0"
    "swapMeta\0row\0switchUp\0requestInstrumentDialog\0"
    "toggleMetaRow\0updateTimelineTheme\0"
    "contextMenuEvent\0QContextMenuEvent*\0"
    "event\0ItemType\0TYPE_UNKNOWN\0TYPE_MEASURE\0"
    "TYPE_META"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__Timeline[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   62,    2, 0x08 /* Private */,
       5,    1,   65,    2, 0x08 /* Private */,
       7,    1,   68,    2, 0x08 /* Private */,
       9,    2,   71,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QPointF,    8,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

 // enums: name, alias, flags, count, data
      18,   18, 0x2,    3,   87,

 // enum data: key, value
      19, uint(mu::notation::Timeline::ItemType::TYPE_UNKNOWN),
      20, uint(mu::notation::Timeline::ItemType::TYPE_MEASURE),
      21, uint(mu::notation::Timeline::ItemType::TYPE_META),

       0        // eod
};

void mu::notation::Timeline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Timeline *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->handleScroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeSelection((*reinterpret_cast< engraving::SelState(*)>(_a[1]))); break;
        case 3: _t->mouseOver((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->swapMeta((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->requestInstrumentDialog(); break;
        case 6: _t->toggleMetaRow(); break;
        case 7: _t->updateTimelineTheme(); break;
        case 8: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Timeline::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Timeline::moved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::Timeline::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__Timeline.data,
    qt_meta_data_mu__notation__Timeline,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::Timeline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::Timeline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__Timeline.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "mu::async::Asyncable"))
        return static_cast< mu::async::Asyncable*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int mu::notation::Timeline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void mu::notation::Timeline::moved(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
