/****************************************************************************
** Meta object code from reading C++ file 'dynamicsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/dynamics/dynamicsettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamicsettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__DynamicsSettingsModel_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__DynamicsSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__DynamicsSettingsModel_t qt_meta_stringdata_mu__inspector__DynamicsSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "mu::inspector::DynamicsSettin..."
QT_MOC_LITERAL(1, 37, 13), // "avoidBarLines"
QT_MOC_LITERAL(2, 51, 13), // "PropertyItem*"
QT_MOC_LITERAL(3, 65, 11), // "dynamicSize"
QT_MOC_LITERAL(4, 77, 16), // "centerOnNotehead"
QT_MOC_LITERAL(5, 94, 9), // "placement"
QT_MOC_LITERAL(6, 104, 9), // "frameType"
QT_MOC_LITERAL(7, 114, 16), // "frameBorderColor"
QT_MOC_LITERAL(8, 131, 14), // "frameFillColor"
QT_MOC_LITERAL(9, 146, 14), // "frameThickness"
QT_MOC_LITERAL(10, 161, 11), // "frameMargin"
QT_MOC_LITERAL(11, 173, 17) // "frameCornerRadius"

    },
    "mu::inspector::DynamicsSettingsModel\0"
    "avoidBarLines\0PropertyItem*\0dynamicSize\0"
    "centerOnNotehead\0placement\0frameType\0"
    "frameBorderColor\0frameFillColor\0"
    "frameThickness\0frameMargin\0frameCornerRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__DynamicsSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,
       6, 0x80000000 | 2, 0x00095409,
       7, 0x80000000 | 2, 0x00095409,
       8, 0x80000000 | 2, 0x00095409,
       9, 0x80000000 | 2, 0x00095409,
      10, 0x80000000 | 2, 0x00095409,
      11, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void mu::inspector::DynamicsSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DynamicsSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->avoidBarLines(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->dynamicSize(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->centerOnNotehead(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->placement(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->frameType(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->frameBorderColor(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->frameFillColor(); break;
        case 7: *reinterpret_cast< PropertyItem**>(_v) = _t->frameThickness(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->frameMargin(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->frameCornerRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::DynamicsSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__DynamicsSettingsModel.data,
    qt_meta_data_mu__inspector__DynamicsSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::DynamicsSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::DynamicsSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__DynamicsSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::DynamicsSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
