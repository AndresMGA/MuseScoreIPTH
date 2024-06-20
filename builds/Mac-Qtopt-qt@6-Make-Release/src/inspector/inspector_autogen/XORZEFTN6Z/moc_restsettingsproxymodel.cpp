/****************************************************************************
** Meta object code from reading C++ file 'restsettingsproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/rests/restsettingsproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restsettingsproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__RestSettingsProxyModel_t {
    QByteArrayData data[5];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__RestSettingsProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__RestSettingsProxyModel_t qt_meta_stringdata_mu__inspector__RestSettingsProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::inspector::RestSettingsPr..."
QT_MOC_LITERAL(1, 38, 17), // "onElementsUpdated"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 36), // "QList<mu::engraving::Engravin..."
QT_MOC_LITERAL(4, 94, 11) // "newElements"

    },
    "mu::inspector::RestSettingsProxyModel\0"
    "onElementsUpdated\0\0"
    "QList<mu::engraving::EngravingItem*>\0"
    "newElements"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__RestSettingsProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void mu::inspector::RestSettingsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RestSettingsProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onElementsUpdated((*reinterpret_cast< const QList<mu::engraving::EngravingItem*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::RestSettingsProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorProxyModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__RestSettingsProxyModel.data,
    qt_meta_data_mu__inspector__RestSettingsProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::RestSettingsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::RestSettingsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__RestSettingsProxyModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorProxyModel::qt_metacast(_clname);
}

int mu::inspector::RestSettingsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorProxyModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
