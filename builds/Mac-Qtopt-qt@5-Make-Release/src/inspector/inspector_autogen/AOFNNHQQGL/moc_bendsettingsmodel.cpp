/****************************************************************************
** Meta object code from reading C++ file 'bendsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/bends/bendsettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bendsettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__BendSettingsModel_t {
    QByteArrayData data[14];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__BendSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__BendSettingsModel_t qt_meta_stringdata_mu__inspector__BendSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::inspector::BendSettingsModel"
QT_MOC_LITERAL(1, 33, 27), // "areSettingsAvailableChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 20), // "areSettingsAvailable"
QT_MOC_LITERAL(4, 83, 30), // "isShowHoldLineAvailableChanged"
QT_MOC_LITERAL(5, 114, 11), // "isAvailable"
QT_MOC_LITERAL(6, 126, 25), // "isBendCurveEnabledChanged"
QT_MOC_LITERAL(7, 152, 16), // "bendCurveChanged"
QT_MOC_LITERAL(8, 169, 13), // "bendDirection"
QT_MOC_LITERAL(9, 183, 13), // "PropertyItem*"
QT_MOC_LITERAL(10, 197, 12), // "showHoldLine"
QT_MOC_LITERAL(11, 210, 23), // "isShowHoldLineAvailable"
QT_MOC_LITERAL(12, 234, 18), // "isBendCurveEnabled"
QT_MOC_LITERAL(13, 253, 9) // "bendCurve"

    },
    "mu::inspector::BendSettingsModel\0"
    "areSettingsAvailableChanged\0\0"
    "areSettingsAvailable\0"
    "isShowHoldLineAvailableChanged\0"
    "isAvailable\0isBendCurveEnabledChanged\0"
    "bendCurveChanged\0bendDirection\0"
    "PropertyItem*\0showHoldLine\0"
    "isShowHoldLineAvailable\0isBendCurveEnabled\0"
    "bendCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__BendSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,
       7,    0,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 9, 0x00095409,
      11, QMetaType::Bool, 0x00495001,
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::QVariantList, 0x00495103,
       3, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       0,

       0        // eod
};

void mu::inspector::BendSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BendSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->areSettingsAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isShowHoldLineAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->isBendCurveEnabledChanged(); break;
        case 3: _t->bendCurveChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BendSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BendSettingsModel::areSettingsAvailableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BendSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BendSettingsModel::isShowHoldLineAvailableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BendSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BendSettingsModel::isBendCurveEnabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BendSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BendSettingsModel::bendCurveChanged)) {
                *result = 3;
                return;
            }
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
        auto *_t = static_cast<BendSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->bendDirection(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->showHoldLine(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isShowHoldLineAvailable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isBendCurveEnabled(); break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->bendCurve(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->areSettingsAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BendSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setBendCurve(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::BendSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__BendSettingsModel.data,
    qt_meta_data_mu__inspector__BendSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::BendSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::BendSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__BendSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::BendSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mu::inspector::BendSettingsModel::areSettingsAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::BendSettingsModel::isShowHoldLineAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::BendSettingsModel::isBendCurveEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::inspector::BendSettingsModel::bendCurveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE