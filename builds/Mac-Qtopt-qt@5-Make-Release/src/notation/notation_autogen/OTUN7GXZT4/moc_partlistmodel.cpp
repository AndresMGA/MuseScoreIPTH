/****************************************************************************
** Meta object code from reading C++ file 'partlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/partlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__PartListModel_t {
    QByteArrayData data[18];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__PartListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__PartListModel_t qt_meta_stringdata_mu__notation__PartListModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::notation::PartListModel"
QT_MOC_LITERAL(1, 28, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 9), // "partAdded"
QT_MOC_LITERAL(4, 56, 5), // "index"
QT_MOC_LITERAL(5, 62, 4), // "load"
QT_MOC_LITERAL(6, 67, 13), // "createNewPart"
QT_MOC_LITERAL(7, 81, 17), // "openSelectedParts"
QT_MOC_LITERAL(8, 99, 12), // "openAllParts"
QT_MOC_LITERAL(9, 112, 10), // "selectPart"
QT_MOC_LITERAL(10, 123, 9), // "partIndex"
QT_MOC_LITERAL(11, 133, 9), // "resetPart"
QT_MOC_LITERAL(12, 143, 10), // "removePart"
QT_MOC_LITERAL(13, 154, 8), // "copyPart"
QT_MOC_LITERAL(14, 163, 17), // "validatePartTitle"
QT_MOC_LITERAL(15, 181, 5), // "title"
QT_MOC_LITERAL(16, 187, 12), // "setPartTitle"
QT_MOC_LITERAL(17, 200, 12) // "hasSelection"

    },
    "mu::notation::PartListModel\0"
    "selectionChanged\0\0partAdded\0index\0"
    "load\0createNewPart\0openSelectedParts\0"
    "openAllParts\0selectPart\0partIndex\0"
    "resetPart\0removePart\0copyPart\0"
    "validatePartTitle\0title\0setPartTitle\0"
    "hasSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__PartListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   78,    2, 0x02 /* Public */,
       6,    0,   79,    2, 0x02 /* Public */,
       7,    0,   80,    2, 0x02 /* Public */,
       8,    0,   81,    2, 0x02 /* Public */,
       9,    1,   82,    2, 0x02 /* Public */,
      11,    1,   85,    2, 0x02 /* Public */,
      12,    1,   88,    2, 0x02 /* Public */,
      13,    1,   91,    2, 0x02 /* Public */,
      14,    2,   94,    2, 0x02 /* Public */,
      16,    2,   99,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::QString, QMetaType::Int, QMetaType::QString,   10,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   15,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::notation::PartListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->partAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->load(); break;
        case 3: _t->createNewPart(); break;
        case 4: _t->openSelectedParts(); break;
        case 5: _t->openAllParts(); break;
        case 6: _t->selectPart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->resetPart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->removePart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->copyPart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: { QString _r = _t->validatePartTitle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setPartTitle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PartListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartListModel::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PartListModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartListModel::partAdded)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PartListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasSelection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::PartListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__PartListModel.data,
    qt_meta_data_mu__notation__PartListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::PartListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::PartListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__PartListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::notation::PartListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::notation::PartListModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::PartListModel::partAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
