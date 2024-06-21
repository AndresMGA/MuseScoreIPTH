/****************************************************************************
** Meta object code from reading C++ file 'ambitussettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/ambituses/ambitussettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ambitussettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__AmbitusSettingsModel_t {
    QByteArrayData data[14];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__AmbitusSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__AmbitusSettingsModel_t qt_meta_stringdata_mu__inspector__AmbitusSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "mu::inspector::AmbitusSetting..."
QT_MOC_LITERAL(1, 36, 18), // "matchRangesToStaff"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 13), // "noteheadGroup"
QT_MOC_LITERAL(4, 70, 13), // "PropertyItem*"
QT_MOC_LITERAL(5, 84, 12), // "noteheadType"
QT_MOC_LITERAL(6, 97, 6), // "topTpc"
QT_MOC_LITERAL(7, 104, 9), // "bottomTpc"
QT_MOC_LITERAL(8, 114, 9), // "topOctave"
QT_MOC_LITERAL(9, 124, 12), // "bottomOctave"
QT_MOC_LITERAL(10, 137, 8), // "topPitch"
QT_MOC_LITERAL(11, 146, 11), // "bottomPitch"
QT_MOC_LITERAL(12, 158, 9), // "direction"
QT_MOC_LITERAL(13, 168, 13) // "lineThickness"

    },
    "mu::inspector::AmbitusSettingsModel\0"
    "matchRangesToStaff\0\0noteheadGroup\0"
    "PropertyItem*\0noteheadType\0topTpc\0"
    "bottomTpc\0topOctave\0bottomOctave\0"
    "topPitch\0bottomPitch\0direction\0"
    "lineThickness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__AmbitusSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      10,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 4, 0x00095409,
       6, 0x80000000 | 4, 0x00095409,
       7, 0x80000000 | 4, 0x00095409,
       8, 0x80000000 | 4, 0x00095409,
       9, 0x80000000 | 4, 0x00095409,
      10, 0x80000000 | 4, 0x00095409,
      11, 0x80000000 | 4, 0x00095409,
      12, 0x80000000 | 4, 0x00095409,
      13, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void mu::inspector::AmbitusSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AmbitusSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->matchRangesToStaff(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
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
        auto *_t = static_cast<AmbitusSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->noteheadGroup(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->noteheadType(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->topTpc(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->bottomTpc(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->topOctave(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->bottomOctave(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->topPitch(); break;
        case 7: *reinterpret_cast< PropertyItem**>(_v) = _t->bottomPitch(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->direction(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->lineThickness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::AmbitusSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__AmbitusSettingsModel.data,
    qt_meta_data_mu__inspector__AmbitusSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::AmbitusSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::AmbitusSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__AmbitusSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::AmbitusSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
