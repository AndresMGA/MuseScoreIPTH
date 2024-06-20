/****************************************************************************
** Meta object code from reading C++ file 'appearancesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/general/appearance/appearancesettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearancesettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAppearanceSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAppearanceSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::AppearanceSettingsModel",
    "isSnappedToGridChanged",
    "",
    "isSnappedToGrid",
    "isVerticalOffsetAvailableChanged",
    "isVerticalOffsetAvailable",
    "setIsSnappedToGrid",
    "isSnapped",
    "setIsVerticalOffsetAvailable",
    "isAvailable",
    "pushBackwardsInOrder",
    "pushForwardsInOrder",
    "pushToBackInOrder",
    "pushToFrontInOrder",
    "configureGrid",
    "leadingSpace",
    "PropertyItem*",
    "measureWidth",
    "minimumDistance",
    "color",
    "arrangeOrder",
    "offset"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEAppearanceSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   85, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    9 /* Public */,
       4,    1,   71,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   74,    2, 0x0a,   13 /* Public */,
       8,    1,   77,    2, 0x0a,   15 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   80,    2, 0x02,   17 /* Public */,
      11,    0,   81,    2, 0x02,   18 /* Public */,
      12,    0,   82,    2, 0x02,   19 /* Public */,
      13,    0,   83,    2, 0x02,   20 /* Public */,
      14,    0,   84,    2, 0x02,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      17, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      18, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      19, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      20, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      21, 0x80000000 | 16, 0x00015409, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
       5, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::AppearanceSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAppearanceSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEAppearanceSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAppearanceSettingsModelENDCLASS_t,
        // property 'leadingSpace'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'measureWidth'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'minimumDistance'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'color'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'arrangeOrder'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'offset'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isSnappedToGrid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isVerticalOffsetAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AppearanceSettingsModel, std::true_type>,
        // method 'isSnappedToGridChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isVerticalOffsetAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsSnappedToGrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsVerticalOffsetAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pushBackwardsInOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pushForwardsInOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pushToBackInOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pushToFrontInOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'configureGrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::AppearanceSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppearanceSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isSnappedToGridChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->isVerticalOffsetAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setIsSnappedToGrid((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setIsVerticalOffsetAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->pushBackwardsInOrder(); break;
        case 5: _t->pushForwardsInOrder(); break;
        case 6: _t->pushToBackInOrder(); break;
        case 7: _t->pushToFrontInOrder(); break;
        case 8: _t->configureGrid(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppearanceSettingsModel::*)(bool );
            if (_t _q_method = &AppearanceSettingsModel::isSnappedToGridChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppearanceSettingsModel::*)(bool );
            if (_t _q_method = &AppearanceSettingsModel::isVerticalOffsetAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AppearanceSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->leadingSpace(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->measureWidth(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->minimumDistance(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->color(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->arrangeOrder(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->offset(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isSnappedToGrid(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isVerticalOffsetAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AppearanceSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setIsSnappedToGrid(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::AppearanceSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::AppearanceSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAppearanceSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::AppearanceSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::AppearanceSettingsModel::isSnappedToGridChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::AppearanceSettingsModel::isVerticalOffsetAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
