/****************************************************************************
** Meta object code from reading C++ file 'instrumentlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/instrumentsscene/view/instrumentlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrumentlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__instrumentsscene__InstrumentListModel_t {
    QByteArrayData data[27];
    char stringdata0[442];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__instrumentsscene__InstrumentListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__instrumentsscene__InstrumentListModel_t qt_meta_stringdata_mu__instrumentsscene__InstrumentListModel = {
    {
QT_MOC_LITERAL(0, 0, 41), // "mu::instrumentsscene::Instrum..."
QT_MOC_LITERAL(1, 42, 13), // "genresChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 13), // "groupsChanged"
QT_MOC_LITERAL(4, 71, 24), // "currentGenreIndexChanged"
QT_MOC_LITERAL(5, 96, 24), // "currentGroupIndexChanged"
QT_MOC_LITERAL(6, 121, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 138, 14), // "focusRequested"
QT_MOC_LITERAL(8, 153, 10), // "groupIndex"
QT_MOC_LITERAL(9, 164, 15), // "instrumentIndex"
QT_MOC_LITERAL(10, 180, 20), // "setCurrentGenreIndex"
QT_MOC_LITERAL(11, 201, 5), // "index"
QT_MOC_LITERAL(12, 207, 20), // "setCurrentGroupIndex"
QT_MOC_LITERAL(13, 228, 4), // "load"
QT_MOC_LITERAL(14, 233, 28), // "canSelectMultipleInstruments"
QT_MOC_LITERAL(15, 262, 19), // "currentInstrumentId"
QT_MOC_LITERAL(16, 282, 16), // "saveCurrentGroup"
QT_MOC_LITERAL(17, 299, 13), // "setSearchText"
QT_MOC_LITERAL(18, 313, 4), // "text"
QT_MOC_LITERAL(19, 318, 16), // "selectInstrument"
QT_MOC_LITERAL(20, 335, 24), // "selectedInstrumentIdList"
QT_MOC_LITERAL(21, 360, 6), // "genres"
QT_MOC_LITERAL(22, 367, 6), // "groups"
QT_MOC_LITERAL(23, 374, 17), // "currentGenreIndex"
QT_MOC_LITERAL(24, 392, 17), // "currentGroupIndex"
QT_MOC_LITERAL(25, 410, 12), // "hasSelection"
QT_MOC_LITERAL(26, 423, 18) // "selectedInstrument"

    },
    "mu::instrumentsscene::InstrumentListModel\0"
    "genresChanged\0\0groupsChanged\0"
    "currentGenreIndexChanged\0"
    "currentGroupIndexChanged\0selectionChanged\0"
    "focusRequested\0groupIndex\0instrumentIndex\0"
    "setCurrentGenreIndex\0index\0"
    "setCurrentGroupIndex\0load\0"
    "canSelectMultipleInstruments\0"
    "currentInstrumentId\0saveCurrentGroup\0"
    "setSearchText\0text\0selectInstrument\0"
    "selectedInstrumentIdList\0genres\0groups\0"
    "currentGenreIndex\0currentGroupIndex\0"
    "hasSelection\0selectedInstrument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__instrumentsscene__InstrumentListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    2,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   89,    2, 0x0a /* Public */,
      12,    1,   92,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    2,   95,    2, 0x02 /* Public */,
      16,    0,  100,    2, 0x02 /* Public */,
      17,    1,  101,    2, 0x02 /* Public */,
      19,    1,  104,    2, 0x02 /* Public */,
      20,    0,  107,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::QStringList,

 // properties: name, type, flags
      21, QMetaType::QStringList, 0x00495001,
      22, QMetaType::QStringList, 0x00495001,
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Int, 0x00495103,
      25, QMetaType::Bool, 0x00495001,
      26, QMetaType::QVariant, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       4,

       0        // eod
};

void mu::instrumentsscene::InstrumentListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->genresChanged(); break;
        case 1: _t->groupsChanged(); break;
        case 2: _t->currentGenreIndexChanged(); break;
        case 3: _t->currentGroupIndexChanged(); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->focusRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->setCurrentGenreIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setCurrentGroupIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->load((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->saveCurrentGroup(); break;
        case 10: _t->setSearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->selectInstrument((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: { QStringList _r = _t->selectedInstrumentIdList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstrumentListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentListModel::genresChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentListModel::groupsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentListModel::currentGenreIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentListModel::currentGroupIndexChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentListModel::selectionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentListModel::focusRequested)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InstrumentListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->genres(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->groups(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentGenreIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentGroupIndex(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSelection(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->selectedInstrument(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InstrumentListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCurrentGenreIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCurrentGroupIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::instrumentsscene::InstrumentListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__instrumentsscene__InstrumentListModel.data,
    qt_meta_data_mu__instrumentsscene__InstrumentListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::instrumentsscene::InstrumentListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::InstrumentListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__instrumentsscene__InstrumentListModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::instrumentsscene::InstrumentListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void mu::instrumentsscene::InstrumentListModel::genresChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::instrumentsscene::InstrumentListModel::groupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::instrumentsscene::InstrumentListModel::currentGenreIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::instrumentsscene::InstrumentListModel::currentGroupIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::instrumentsscene::InstrumentListModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::instrumentsscene::InstrumentListModel::focusRequested(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
