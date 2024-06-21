/****************************************************************************
** Meta object code from reading C++ file 'harppedalpopupmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/internal/harppedalpopupmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'harppedalpopupmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__HarpPedalPopupModel_t {
    QByteArrayData data[16];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__HarpPedalPopupModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__HarpPedalPopupModel_t qt_meta_stringdata_mu__notation__HarpPedalPopupModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::notation::HarpPedalPopupM..."
QT_MOC_LITERAL(1, 34, 16), // "isDiagramChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 9), // "isDiagram"
QT_MOC_LITERAL(4, 62, 17), // "pedalStateChanged"
QT_MOC_LITERAL(5, 80, 52), // "QVector<mu::notation::HarpPed..."
QT_MOC_LITERAL(6, 133, 10), // "pedalState"
QT_MOC_LITERAL(7, 144, 12), // "setIsDiagram"
QT_MOC_LITERAL(8, 157, 20), // "setDiagramPedalState"
QT_MOC_LITERAL(9, 178, 4), // "init"
QT_MOC_LITERAL(10, 183, 8), // "staffPos"
QT_MOC_LITERAL(11, 192, 8), // "Position"
QT_MOC_LITERAL(12, 201, 4), // "FLAT"
QT_MOC_LITERAL(13, 206, 7), // "NATURAL"
QT_MOC_LITERAL(14, 214, 5), // "SHARP"
QT_MOC_LITERAL(15, 220, 5) // "UNSET"

    },
    "mu::notation::HarpPedalPopupModel\0"
    "isDiagramChanged\0\0isDiagram\0"
    "pedalStateChanged\0"
    "QVector<mu::notation::HarpPedalPopupModel::Position>\0"
    "pedalState\0setIsDiagram\0setDiagramPedalState\0"
    "init\0staffPos\0Position\0FLAT\0NATURAL\0"
    "SHARP\0UNSET"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__HarpPedalPopupModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   52, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       6, 0x80000000 | 5, 0x0049500b,
      10, QMetaType::QRectF, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       0,

 // enums: name, alias, flags, count, data
      11,   11, 0x2,    4,   69,

 // enum data: key, value
      12, uint(mu::notation::HarpPedalPopupModel::Position::FLAT),
      13, uint(mu::notation::HarpPedalPopupModel::Position::NATURAL),
      14, uint(mu::notation::HarpPedalPopupModel::Position::SHARP),
      15, uint(mu::notation::HarpPedalPopupModel::Position::UNSET),

       0        // eod
};

void mu::notation::HarpPedalPopupModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HarpPedalPopupModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isDiagramChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pedalStateChanged((*reinterpret_cast< QVector<mu::notation::HarpPedalPopupModel::Position>(*)>(_a[1]))); break;
        case 2: _t->setIsDiagram((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDiagramPedalState((*reinterpret_cast< QVector<mu::notation::HarpPedalPopupModel::Position>(*)>(_a[1]))); break;
        case 4: _t->init(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<mu::notation::HarpPedalPopupModel::Position> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<mu::notation::HarpPedalPopupModel::Position> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HarpPedalPopupModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HarpPedalPopupModel::isDiagramChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HarpPedalPopupModel::*)(QVector<mu::notation::HarpPedalPopupModel::Position> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HarpPedalPopupModel::pedalStateChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<mu::notation::HarpPedalPopupModel::Position> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HarpPedalPopupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isDiagram(); break;
        case 1: *reinterpret_cast< QVector<mu::notation::HarpPedalPopupModel::Position>*>(_v) = _t->pedalState(); break;
        case 2: *reinterpret_cast< QRectF*>(_v) = _t->staffPos(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HarpPedalPopupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsDiagram(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDiagramPedalState(*reinterpret_cast< QVector<mu::notation::HarpPedalPopupModel::Position>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::HarpPedalPopupModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractElementPopupModel::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__HarpPedalPopupModel.data,
    qt_meta_data_mu__notation__HarpPedalPopupModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::HarpPedalPopupModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::HarpPedalPopupModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__HarpPedalPopupModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractElementPopupModel::qt_metacast(_clname);
}

int mu::notation::HarpPedalPopupModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractElementPopupModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::notation::HarpPedalPopupModel::isDiagramChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::notation::HarpPedalPopupModel::pedalStateChanged(QVector<mu::notation::HarpPedalPopupModel::Position> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
