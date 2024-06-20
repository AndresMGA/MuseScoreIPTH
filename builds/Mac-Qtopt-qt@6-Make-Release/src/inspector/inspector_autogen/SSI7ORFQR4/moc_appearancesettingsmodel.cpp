/****************************************************************************
** Meta object code from reading C++ file 'appearancesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/general/appearance/appearancesettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearancesettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__AppearanceSettingsModel_t {
    QByteArrayData data[22];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__AppearanceSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__AppearanceSettingsModel_t qt_meta_stringdata_mu__inspector__AppearanceSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 38), // "mu::inspector::AppearanceSett..."
QT_MOC_LITERAL(1, 39, 22), // "isSnappedToGridChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 15), // "isSnappedToGrid"
QT_MOC_LITERAL(4, 79, 32), // "isVerticalOffsetAvailableChanged"
QT_MOC_LITERAL(5, 112, 25), // "isVerticalOffsetAvailable"
QT_MOC_LITERAL(6, 138, 18), // "setIsSnappedToGrid"
QT_MOC_LITERAL(7, 157, 9), // "isSnapped"
QT_MOC_LITERAL(8, 167, 28), // "setIsVerticalOffsetAvailable"
QT_MOC_LITERAL(9, 196, 11), // "isAvailable"
QT_MOC_LITERAL(10, 208, 20), // "pushBackwardsInOrder"
QT_MOC_LITERAL(11, 229, 19), // "pushForwardsInOrder"
QT_MOC_LITERAL(12, 249, 17), // "pushToBackInOrder"
QT_MOC_LITERAL(13, 267, 18), // "pushToFrontInOrder"
QT_MOC_LITERAL(14, 286, 13), // "configureGrid"
QT_MOC_LITERAL(15, 300, 12), // "leadingSpace"
QT_MOC_LITERAL(16, 313, 13), // "PropertyItem*"
QT_MOC_LITERAL(17, 327, 12), // "measureWidth"
QT_MOC_LITERAL(18, 340, 15), // "minimumDistance"
QT_MOC_LITERAL(19, 356, 5), // "color"
QT_MOC_LITERAL(20, 362, 12), // "arrangeOrder"
QT_MOC_LITERAL(21, 375, 6) // "offset"

    },
    "mu::inspector::AppearanceSettingsModel\0"
    "isSnappedToGridChanged\0\0isSnappedToGrid\0"
    "isVerticalOffsetAvailableChanged\0"
    "isVerticalOffsetAvailable\0setIsSnappedToGrid\0"
    "isSnapped\0setIsVerticalOffsetAvailable\0"
    "isAvailable\0pushBackwardsInOrder\0"
    "pushForwardsInOrder\0pushToBackInOrder\0"
    "pushToFrontInOrder\0configureGrid\0"
    "leadingSpace\0PropertyItem*\0measureWidth\0"
    "minimumDistance\0color\0arrangeOrder\0"
    "offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__AppearanceSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   71,    2, 0x02 /* Public */,
      11,    0,   72,    2, 0x02 /* Public */,
      12,    0,   73,    2, 0x02 /* Public */,
      13,    0,   74,    2, 0x02 /* Public */,
      14,    0,   75,    2, 0x02 /* Public */,

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
      15, 0x80000000 | 16, 0x00095409,
      17, 0x80000000 | 16, 0x00095409,
      18, 0x80000000 | 16, 0x00095409,
      19, 0x80000000 | 16, 0x00095409,
      20, 0x80000000 | 16, 0x00095409,
      21, 0x80000000 | 16, 0x00095409,
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void mu::inspector::AppearanceSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppearanceSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isSnappedToGridChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isVerticalOffsetAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setIsSnappedToGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setIsVerticalOffsetAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearanceSettingsModel::isSnappedToGridChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppearanceSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearanceSettingsModel::isVerticalOffsetAvailableChanged)) {
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
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::AppearanceSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__AppearanceSettingsModel.data,
    qt_meta_data_mu__inspector__AppearanceSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::AppearanceSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::AppearanceSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__AppearanceSettingsModel.stringdata0))
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
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
QT_END_MOC_NAMESPACE
