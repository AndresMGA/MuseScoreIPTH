/****************************************************************************
** Meta object code from reading C++ file 'noteinputbarcustomisemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/noteinputbarcustomisemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteinputbarcustomisemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__NoteInputBarCustomiseModel_t {
    QByteArrayData data[9];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__NoteInputBarCustomiseModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__NoteInputBarCustomiseModel_t qt_meta_stringdata_mu__notation__NoteInputBarCustomiseModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "mu::notation::NoteInputBarCus..."
QT_MOC_LITERAL(1, 41, 30), // "isAddSeparatorAvailableChanged"
QT_MOC_LITERAL(2, 72, 0), // ""
QT_MOC_LITERAL(3, 73, 23), // "isAddSeparatorAvailable"
QT_MOC_LITERAL(4, 97, 4), // "load"
QT_MOC_LITERAL(5, 102, 16), // "addSeparatorLine"
QT_MOC_LITERAL(6, 119, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 136, 14), // "selectionModel"
QT_MOC_LITERAL(8, 151, 20) // "QItemSelectionModel*"

    },
    "mu::notation::NoteInputBarCustomiseModel\0"
    "isAddSeparatorAvailableChanged\0\0"
    "isAddSeparatorAvailable\0load\0"
    "addSeparatorLine\0selectionChanged\0"
    "selectionModel\0QItemSelectionModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__NoteInputBarCustomiseModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x02 /* Public */,
       5,    0,   33,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00495009,
       3, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
    1879048198,
       0,

       0        // eod
};

void mu::notation::NoteInputBarCustomiseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteInputBarCustomiseModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isAddSeparatorAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->load(); break;
        case 2: _t->addSeparatorLine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteInputBarCustomiseModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteInputBarCustomiseModel::isAddSeparatorAvailableChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelectionModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NoteInputBarCustomiseModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QItemSelectionModel**>(_v) = _t->selectionModel(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAddSeparatorAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::NoteInputBarCustomiseModel::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::SelectableItemListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__NoteInputBarCustomiseModel.data,
    qt_meta_data_mu__notation__NoteInputBarCustomiseModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::NoteInputBarCustomiseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::NoteInputBarCustomiseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__NoteInputBarCustomiseModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return uicomponents::SelectableItemListModel::qt_metacast(_clname);
}

int mu::notation::NoteInputBarCustomiseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::SelectableItemListModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::notation::NoteInputBarCustomiseModel::isAddSeparatorAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_mu__notation__NoteInputBarCustomiseModel(mu::notation::NoteInputBarCustomiseModel *t) {
    t->selectionChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
