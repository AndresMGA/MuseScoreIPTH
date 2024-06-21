/****************************************************************************
** Meta object code from reading C++ file 'projectpropertiesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/project/view/projectpropertiesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectpropertiesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__project__ProjectPropertiesModel_t {
    QByteArrayData data[13];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__project__ProjectPropertiesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__project__ProjectPropertiesModel_t qt_meta_stringdata_mu__project__ProjectPropertiesModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "mu::project::ProjectPropertie..."
QT_MOC_LITERAL(1, 36, 13), // "propertyAdded"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "index"
QT_MOC_LITERAL(4, 57, 4), // "load"
QT_MOC_LITERAL(5, 62, 11), // "newProperty"
QT_MOC_LITERAL(6, 74, 14), // "deleteProperty"
QT_MOC_LITERAL(7, 89, 14), // "saveProperties"
QT_MOC_LITERAL(8, 104, 16), // "openFileLocation"
QT_MOC_LITERAL(9, 121, 8), // "filePath"
QT_MOC_LITERAL(10, 130, 7), // "version"
QT_MOC_LITERAL(11, 138, 8), // "revision"
QT_MOC_LITERAL(12, 147, 8) // "apiLevel"

    },
    "mu::project::ProjectPropertiesModel\0"
    "propertyAdded\0\0index\0load\0newProperty\0"
    "deleteProperty\0saveProperties\0"
    "openFileLocation\0filePath\0version\0"
    "revision\0apiLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__project__ProjectPropertiesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       6,    1,   49,    2, 0x02 /* Public */,
       7,    0,   52,    2, 0x02 /* Public */,
       8,    0,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QString, 0x00095401,

       0        // eod
};

void mu::project::ProjectPropertiesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectPropertiesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->propertyAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->load(); break;
        case 2: _t->newProperty(); break;
        case 3: _t->deleteProperty((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->saveProperties(); break;
        case 5: _t->openFileLocation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectPropertiesModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectPropertiesModel::propertyAdded)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ProjectPropertiesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->revision(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->apiLevel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::project::ProjectPropertiesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__project__ProjectPropertiesModel.data,
    qt_meta_data_mu__project__ProjectPropertiesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::project::ProjectPropertiesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::ProjectPropertiesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__project__ProjectPropertiesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::project::ProjectPropertiesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void mu::project::ProjectPropertiesModel::propertyAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
