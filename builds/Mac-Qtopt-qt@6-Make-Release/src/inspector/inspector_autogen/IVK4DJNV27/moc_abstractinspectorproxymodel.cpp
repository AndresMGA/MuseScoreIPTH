/****************************************************************************
** Meta object code from reading C++ file 'abstractinspectorproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/abstractinspectorproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractinspectorproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__AbstractInspectorProxyModel_t {
    QByteArrayData data[14];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__AbstractInspectorProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__AbstractInspectorProxyModel_t qt_meta_stringdata_mu__inspector__AbstractInspectorProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "mu::inspector::AbstractInspec..."
QT_MOC_LITERAL(1, 43, 13), // "modelsChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 26), // "defaultSubModelTypeChanged"
QT_MOC_LITERAL(4, 85, 22), // "setDefaultSubModelType"
QT_MOC_LITERAL(5, 108, 33), // "mu::inspector::InspectorModel..."
QT_MOC_LITERAL(6, 142, 9), // "modelType"
QT_MOC_LITERAL(7, 152, 11), // "modelByType"
QT_MOC_LITERAL(8, 164, 18), // "InspectorModelType"
QT_MOC_LITERAL(9, 183, 4), // "type"
QT_MOC_LITERAL(10, 188, 12), // "isMultiModel"
QT_MOC_LITERAL(11, 201, 6), // "models"
QT_MOC_LITERAL(12, 208, 10), // "firstModel"
QT_MOC_LITERAL(13, 219, 19) // "defaultSubModelType"

    },
    "mu::inspector::AbstractInspectorProxyModel\0"
    "modelsChanged\0\0defaultSubModelTypeChanged\0"
    "setDefaultSubModelType\0"
    "mu::inspector::InspectorModelType\0"
    "modelType\0modelByType\0InspectorModelType\0"
    "type\0isMultiModel\0models\0firstModel\0"
    "defaultSubModelType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__AbstractInspectorProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::QObjectStar, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::QVariantList, 0x00495001,
      12, QMetaType::QObjectStar, 0x00495001,
      13, 0x80000000 | 8, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,

       0        // eod
};

void mu::inspector::AbstractInspectorProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractInspectorProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modelsChanged(); break;
        case 1: _t->defaultSubModelTypeChanged(); break;
        case 2: _t->setDefaultSubModelType((*reinterpret_cast< mu::inspector::InspectorModelType(*)>(_a[1]))); break;
        case 3: { QObject* _r = _t->modelByType((*reinterpret_cast< InspectorModelType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractInspectorProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractInspectorProxyModel::modelsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractInspectorProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractInspectorProxyModel::defaultSubModelTypeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractInspectorProxyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isMultiModel(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->models(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->firstModel(); break;
        case 3: *reinterpret_cast< InspectorModelType*>(_v) = _t->defaultSubModelType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::AbstractInspectorProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__AbstractInspectorProxyModel.data,
    qt_meta_data_mu__inspector__AbstractInspectorProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::AbstractInspectorProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::AbstractInspectorProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__AbstractInspectorProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::AbstractInspectorProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::inspector::AbstractInspectorProxyModel::modelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::AbstractInspectorProxyModel::defaultSubModelTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
