/****************************************************************************
** Meta object code from reading C++ file 'articulationpatternitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/mpe/view/articulationpatternitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articulationpatternitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__mpe__ArticulationPatternItem_t {
    QByteArrayData data[16];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__mpe__ArticulationPatternItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__mpe__ArticulationPatternItem_t qt_meta_stringdata_mu__mpe__ArticulationPatternItem = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::mpe::ArticulationPatternItem"
QT_MOC_LITERAL(1, 33, 12), // "titleChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 28), // "currentPatternSegmentChanged"
QT_MOC_LITERAL(4, 76, 20), // "requestedToBeRemoved"
QT_MOC_LITERAL(5, 97, 15), // "isActiveChanged"
QT_MOC_LITERAL(6, 113, 17), // "isSelectedChanged"
QT_MOC_LITERAL(7, 131, 16), // "appendNewSegment"
QT_MOC_LITERAL(8, 148, 20), // "removeCurrentSegment"
QT_MOC_LITERAL(9, 169, 28), // "isAbleToRemoveCurrentSegment"
QT_MOC_LITERAL(10, 198, 5), // "title"
QT_MOC_LITERAL(11, 204, 8), // "isActive"
QT_MOC_LITERAL(12, 213, 10), // "isSelected"
QT_MOC_LITERAL(13, 224, 16), // "isSingleNoteType"
QT_MOC_LITERAL(14, 241, 21), // "currentPatternSegment"
QT_MOC_LITERAL(15, 263, 31) // "ArticulationPatternSegmentItem*"

    },
    "mu::mpe::ArticulationPatternItem\0"
    "titleChanged\0\0currentPatternSegmentChanged\0"
    "requestedToBeRemoved\0isActiveChanged\0"
    "isSelectedChanged\0appendNewSegment\0"
    "removeCurrentSegment\0isAbleToRemoveCurrentSegment\0"
    "title\0isActive\0isSelected\0isSingleNoteType\0"
    "currentPatternSegment\0"
    "ArticulationPatternSegmentItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__mpe__ArticulationPatternItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x02 /* Public */,
       8,    0,   60,    2, 0x02 /* Public */,
       9,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00095401,
      14, 0x80000000 | 15, 0x0049510b,

 // properties: notify_signal_id
       0,
       3,
       4,
       0,
       1,

       0        // eod
};

void mu::mpe::ArticulationPatternItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArticulationPatternItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->currentPatternSegmentChanged(); break;
        case 2: _t->requestedToBeRemoved(); break;
        case 3: _t->isActiveChanged(); break;
        case 4: _t->isSelectedChanged(); break;
        case 5: _t->appendNewSegment(); break;
        case 6: _t->removeCurrentSegment(); break;
        case 7: { bool _r = _t->isAbleToRemoveCurrentSegment();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArticulationPatternItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationPatternItem::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationPatternItem::currentPatternSegmentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationPatternItem::requestedToBeRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationPatternItem::isActiveChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationPatternItem::isSelectedChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ArticulationPatternSegmentItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ArticulationPatternItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSelected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isSingleNoteType(); break;
        case 4: *reinterpret_cast< ArticulationPatternSegmentItem**>(_v) = _t->currentPatternSegment(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ArticulationPatternItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setIsActive(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsSelected(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setCurrentPatternSegment(*reinterpret_cast< ArticulationPatternSegmentItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::mpe::ArticulationPatternItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__mpe__ArticulationPatternItem.data,
    qt_meta_data_mu__mpe__ArticulationPatternItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::mpe::ArticulationPatternItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::mpe::ArticulationPatternItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__mpe__ArticulationPatternItem.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::mpe::ArticulationPatternItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void mu::mpe::ArticulationPatternItem::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::mpe::ArticulationPatternItem::currentPatternSegmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::mpe::ArticulationPatternItem::requestedToBeRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::mpe::ArticulationPatternItem::isActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::mpe::ArticulationPatternItem::isSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
