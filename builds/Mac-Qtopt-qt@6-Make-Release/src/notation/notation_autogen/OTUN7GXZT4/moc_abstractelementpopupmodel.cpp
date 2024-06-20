/****************************************************************************
** Meta object code from reading C++ file 'abstractelementpopupmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/abstractelementpopupmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractelementpopupmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__AbstractElementPopupModel_t {
    QByteArrayData data[13];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__AbstractElementPopupModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__AbstractElementPopupModel_t qt_meta_stringdata_mu__notation__AbstractElementPopupModel = {
    {
QT_MOC_LITERAL(0, 0, 39), // "mu::notation::AbstractElement..."
QT_MOC_LITERAL(1, 40, 11), // "dataChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "itemRectChanged"
QT_MOC_LITERAL(4, 69, 4), // "rect"
QT_MOC_LITERAL(5, 74, 9), // "modelType"
QT_MOC_LITERAL(6, 84, 14), // "PopupModelType"
QT_MOC_LITERAL(7, 99, 8), // "itemRect"
QT_MOC_LITERAL(8, 108, 14), // "TYPE_UNDEFINED"
QT_MOC_LITERAL(9, 123, 17), // "TYPE_HARP_DIAGRAM"
QT_MOC_LITERAL(10, 141, 9), // "TYPE_CAPO"
QT_MOC_LITERAL(11, 151, 19), // "TYPE_STRING_TUNINGS"
QT_MOC_LITERAL(12, 171, 15) // "TYPE_SOUND_FLAG"

    },
    "mu::notation::AbstractElementPopupModel\0"
    "dataChanged\0\0itemRectChanged\0rect\0"
    "modelType\0PopupModelType\0itemRect\0"
    "TYPE_UNDEFINED\0TYPE_HARP_DIAGRAM\0"
    "TYPE_CAPO\0TYPE_STRING_TUNINGS\0"
    "TYPE_SOUND_FLAG"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__AbstractElementPopupModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::QRect, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
       6,    6, 0x2,    5,   41,

 // enum data: key, value
       8, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_UNDEFINED),
       9, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_HARP_DIAGRAM),
      10, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_CAPO),
      11, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_STRING_TUNINGS),
      12, uint(mu::notation::AbstractElementPopupModel::PopupModelType::TYPE_SOUND_FLAG),

       0        // eod
};

void mu::notation::AbstractElementPopupModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractElementPopupModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->itemRectChanged((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractElementPopupModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractElementPopupModel::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractElementPopupModel::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractElementPopupModel::itemRectChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractElementPopupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PopupModelType*>(_v) = _t->modelType(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->itemRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::AbstractElementPopupModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__AbstractElementPopupModel.data,
    qt_meta_data_mu__notation__AbstractElementPopupModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::AbstractElementPopupModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::AbstractElementPopupModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__AbstractElementPopupModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    if (!strcmp(_clname, "actions::Actionable"))
        return static_cast< actions::Actionable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::notation::AbstractElementPopupModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void mu::notation::AbstractElementPopupModel::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::AbstractElementPopupModel::itemRectChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
