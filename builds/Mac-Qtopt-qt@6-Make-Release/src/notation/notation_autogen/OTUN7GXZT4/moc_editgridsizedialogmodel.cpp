/****************************************************************************
** Meta object code from reading C++ file 'editgridsizedialogmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/editgridsizedialogmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editgridsizedialogmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__EditGridSizeDialogModel_t {
    QByteArrayData data[11];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__EditGridSizeDialogModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__EditGridSizeDialogModel_t qt_meta_stringdata_mu__notation__EditGridSizeDialogModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::notation::EditGridSizeDia..."
QT_MOC_LITERAL(1, 38, 30), // "verticalGridSizeSpatiumChanged"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 4), // "size"
QT_MOC_LITERAL(4, 75, 32), // "horizontalGridSizeSpatiumChanged"
QT_MOC_LITERAL(5, 108, 26), // "setVerticalGridSizeSpatium"
QT_MOC_LITERAL(6, 135, 28), // "setHorizontalGridSizeSpatium"
QT_MOC_LITERAL(7, 164, 4), // "load"
QT_MOC_LITERAL(8, 169, 5), // "apply"
QT_MOC_LITERAL(9, 175, 23), // "verticalGridSizeSpatium"
QT_MOC_LITERAL(10, 199, 25) // "horizontalGridSizeSpatium"

    },
    "mu::notation::EditGridSizeDialogModel\0"
    "verticalGridSizeSpatiumChanged\0\0size\0"
    "horizontalGridSizeSpatiumChanged\0"
    "setVerticalGridSizeSpatium\0"
    "setHorizontalGridSizeSpatium\0load\0"
    "apply\0verticalGridSizeSpatium\0"
    "horizontalGridSizeSpatium"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__EditGridSizeDialogModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   56,    2, 0x02 /* Public */,
       8,    0,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void mu::notation::EditGridSizeDialogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditGridSizeDialogModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->verticalGridSizeSpatiumChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->horizontalGridSizeSpatiumChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setVerticalGridSizeSpatium((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setHorizontalGridSizeSpatium((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->load(); break;
        case 5: _t->apply(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditGridSizeDialogModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditGridSizeDialogModel::verticalGridSizeSpatiumChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditGridSizeDialogModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditGridSizeDialogModel::horizontalGridSizeSpatiumChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EditGridSizeDialogModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->verticalGridSizeSpatium(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->horizontalGridSizeSpatium(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EditGridSizeDialogModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVerticalGridSizeSpatium(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHorizontalGridSizeSpatium(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::EditGridSizeDialogModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__EditGridSizeDialogModel.data,
    qt_meta_data_mu__notation__EditGridSizeDialogModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::EditGridSizeDialogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::EditGridSizeDialogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__EditGridSizeDialogModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::notation::EditGridSizeDialogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void mu::notation::EditGridSizeDialogModel::verticalGridSizeSpatiumChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::notation::EditGridSizeDialogModel::horizontalGridSizeSpatiumChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
