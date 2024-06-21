/****************************************************************************
** Meta object code from reading C++ file 'measuressettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/measures/measuressettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'measuressettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__MeasuresSettingsModel_t {
    QByteArrayData data[11];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__MeasuresSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__MeasuresSettingsModel_t qt_meta_stringdata_mu__inspector__MeasuresSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "mu::inspector::MeasuresSettin..."
QT_MOC_LITERAL(1, 37, 14), // "insertMeasures"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 16), // "numberOfMeasures"
QT_MOC_LITERAL(4, 70, 20), // "InsertMeasuresTarget"
QT_MOC_LITERAL(5, 91, 6), // "target"
QT_MOC_LITERAL(6, 98, 22), // "deleteSelectedMeasures"
QT_MOC_LITERAL(7, 121, 14), // "AfterSelection"
QT_MOC_LITERAL(8, 136, 15), // "BeforeSelection"
QT_MOC_LITERAL(9, 152, 14), // "AtStartOfScore"
QT_MOC_LITERAL(10, 167, 12) // "AtEndOfScore"

    },
    "mu::inspector::MeasuresSettingsModel\0"
    "insertMeasures\0\0numberOfMeasures\0"
    "InsertMeasuresTarget\0target\0"
    "deleteSelectedMeasures\0AfterSelection\0"
    "BeforeSelection\0AtStartOfScore\0"
    "AtEndOfScore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__MeasuresSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       6,    0,   29,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       4,    4, 0x2,    4,   35,

 // enum data: key, value
       7, uint(mu::inspector::MeasuresSettingsModel::InsertMeasuresTarget::AfterSelection),
       8, uint(mu::inspector::MeasuresSettingsModel::InsertMeasuresTarget::BeforeSelection),
       9, uint(mu::inspector::MeasuresSettingsModel::InsertMeasuresTarget::AtStartOfScore),
      10, uint(mu::inspector::MeasuresSettingsModel::InsertMeasuresTarget::AtEndOfScore),

       0        // eod
};

void mu::inspector::MeasuresSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeasuresSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->insertMeasures((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< InsertMeasuresTarget(*)>(_a[2]))); break;
        case 1: _t->deleteSelectedMeasures(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::MeasuresSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__MeasuresSettingsModel.data,
    qt_meta_data_mu__inspector__MeasuresSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::MeasuresSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::MeasuresSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__MeasuresSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::MeasuresSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
