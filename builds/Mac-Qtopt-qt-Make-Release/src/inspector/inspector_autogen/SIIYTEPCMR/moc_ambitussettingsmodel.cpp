/****************************************************************************
** Meta object code from reading C++ file 'ambitussettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/notation/ambituses/ambitussettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ambitussettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAmbitusSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAmbitusSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::AmbitusSettingsModel",
    "matchRangesToStaff",
    "",
    "noteheadGroup",
    "PropertyItem*",
    "noteheadType",
    "topTpc",
    "bottomTpc",
    "topOctave",
    "bottomOctave",
    "topPitch",
    "bottomPitch",
    "direction",
    "lineThickness"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEAmbitusSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      10,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x02,   11 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       8, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 4, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::AmbitusSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAmbitusSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEAmbitusSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAmbitusSettingsModelENDCLASS_t,
        // property 'noteheadGroup'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'noteheadType'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'topTpc'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'bottomTpc'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'topOctave'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'bottomOctave'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'topPitch'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'bottomPitch'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'direction'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'lineThickness'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AmbitusSettingsModel, std::true_type>,
        // method 'matchRangesToStaff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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
    }  else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::AmbitusSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::AmbitusSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAmbitusSettingsModelENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
