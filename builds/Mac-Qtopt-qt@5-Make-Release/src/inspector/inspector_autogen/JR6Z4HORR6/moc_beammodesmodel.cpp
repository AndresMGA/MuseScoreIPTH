/****************************************************************************
** Meta object code from reading C++ file 'beammodesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/beams/beammodesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beammodesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__BeamModesModel_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__BeamModesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__BeamModesModel_t qt_meta_stringdata_mu__inspector__BeamModesModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::inspector::BeamModesModel"
QT_MOC_LITERAL(1, 30, 16), // "createProperties"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 15), // "requestElements"
QT_MOC_LITERAL(4, 64, 14), // "loadProperties"
QT_MOC_LITERAL(5, 79, 15), // "resetProperties"
QT_MOC_LITERAL(6, 95, 4), // "mode"
QT_MOC_LITERAL(7, 100, 13), // "PropertyItem*"
QT_MOC_LITERAL(8, 114, 21) // "isFeatheringAvailable"

    },
    "mu::inspector::BeamModesModel\0"
    "createProperties\0\0requestElements\0"
    "loadProperties\0resetProperties\0mode\0"
    "PropertyItem*\0isFeatheringAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__BeamModesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00095409,
       8, 0x80000000 | 7, 0x00095409,

       0        // eod
};

void mu::inspector::BeamModesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BeamModesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createProperties(); break;
        case 1: _t->requestElements(); break;
        case 2: _t->loadProperties(); break;
        case 3: _t->resetProperties(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BeamModesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->isFeatheringAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::BeamModesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__BeamModesModel.data,
    qt_meta_data_mu__inspector__BeamModesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::BeamModesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::BeamModesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__BeamModesModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::BeamModesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE