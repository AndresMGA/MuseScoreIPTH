/****************************************************************************
** Meta object code from reading C++ file 'beamsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/notes/beams/beamsettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beamsettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__BeamSettingsModel_t {
    QByteArrayData data[20];
    char stringdata0[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__BeamSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__BeamSettingsModel_t qt_meta_stringdata_mu__inspector__BeamSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::inspector::BeamSettingsModel"
QT_MOC_LITERAL(1, 33, 25), // "isBeamHeightLockedChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 18), // "isBeamHeightLocked"
QT_MOC_LITERAL(4, 79, 21), // "featheringModeChanged"
QT_MOC_LITERAL(5, 101, 25), // "BeamTypes::FeatheringMode"
QT_MOC_LITERAL(6, 127, 14), // "featheringMode"
QT_MOC_LITERAL(7, 142, 21), // "setIsBeamHeightLocked"
QT_MOC_LITERAL(8, 164, 17), // "setFeatheringMode"
QT_MOC_LITERAL(9, 182, 14), // "beamModesModel"
QT_MOC_LITERAL(10, 197, 20), // "featheringHeightLeft"
QT_MOC_LITERAL(11, 218, 13), // "PropertyItem*"
QT_MOC_LITERAL(12, 232, 21), // "featheringHeightRight"
QT_MOC_LITERAL(13, 254, 40), // "mu::inspector::BeamTypes::Fea..."
QT_MOC_LITERAL(14, 295, 33), // "isFeatheringHeightChangingAll..."
QT_MOC_LITERAL(15, 329, 14), // "beamHeightLeft"
QT_MOC_LITERAL(16, 344, 15), // "beamHeightRight"
QT_MOC_LITERAL(17, 360, 12), // "isBeamHidden"
QT_MOC_LITERAL(18, 373, 15), // "forceHorizontal"
QT_MOC_LITERAL(19, 389, 16) // "customPositioned"

    },
    "mu::inspector::BeamSettingsModel\0"
    "isBeamHeightLockedChanged\0\0"
    "isBeamHeightLocked\0featheringModeChanged\0"
    "BeamTypes::FeatheringMode\0featheringMode\0"
    "setIsBeamHeightLocked\0setFeatheringMode\0"
    "beamModesModel\0featheringHeightLeft\0"
    "PropertyItem*\0featheringHeightRight\0"
    "mu::inspector::BeamTypes::FeatheringMode\0"
    "isFeatheringHeightChangingAllowed\0"
    "beamHeightLeft\0beamHeightRight\0"
    "isBeamHidden\0forceHorizontal\0"
    "customPositioned"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__BeamSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      11,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       9, QMetaType::QObjectStar, 0x00095401,
      10, 0x80000000 | 11, 0x00095409,
      12, 0x80000000 | 11, 0x00095409,
       6, 0x80000000 | 13, 0x0049510b,
      14, QMetaType::Bool, 0x00495001,
      15, 0x80000000 | 11, 0x00095409,
      16, 0x80000000 | 11, 0x00095409,
       3, QMetaType::Bool, 0x00495103,
      17, 0x80000000 | 11, 0x00095409,
      18, 0x80000000 | 11, 0x00095409,
      19, 0x80000000 | 11, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       1,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void mu::inspector::BeamSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BeamSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isBeamHeightLockedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->featheringModeChanged((*reinterpret_cast< BeamTypes::FeatheringMode(*)>(_a[1]))); break;
        case 2: _t->setIsBeamHeightLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFeatheringMode((*reinterpret_cast< BeamTypes::FeatheringMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BeamSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeamSettingsModel::isBeamHeightLockedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BeamSettingsModel::*)(BeamTypes::FeatheringMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeamSettingsModel::featheringModeChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 9:
        case 8:
        case 6:
        case 5:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BeamSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->beamModesModel(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->featheringHeightLeft(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->featheringHeightRight(); break;
        case 3: *reinterpret_cast< mu::inspector::BeamTypes::FeatheringMode*>(_v) = _t->featheringMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isFeatheringHeightChangingAllowed(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->beamHeightLeft(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->beamHeightRight(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isBeamHeightLocked(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->isBeamHidden(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->forceHorizontal(); break;
        case 10: *reinterpret_cast< PropertyItem**>(_v) = _t->customPositioned(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BeamSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setFeatheringMode(*reinterpret_cast< mu::inspector::BeamTypes::FeatheringMode*>(_v)); break;
        case 7: _t->setIsBeamHeightLocked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_mu__inspector__BeamSettingsModel[] = {
    QMetaObject::SuperData::link<mu::inspector::BeamTypes::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject mu::inspector::BeamSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__BeamSettingsModel.data,
    qt_meta_data_mu__inspector__BeamSettingsModel,
    qt_static_metacall,
    qt_meta_extradata_mu__inspector__BeamSettingsModel,
    nullptr
} };


const QMetaObject *mu::inspector::BeamSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::BeamSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__BeamSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::BeamSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::inspector::BeamSettingsModel::isBeamHeightLockedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::BeamSettingsModel::featheringModeChanged(BeamTypes::FeatheringMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
