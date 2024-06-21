/****************************************************************************
** Meta object code from reading C++ file 'selectmultipledirectoriesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/uicomponents/view/selectmultipledirectoriesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectmultipledirectoriesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__uicomponents__SelectMultipleDirectoriesModel_t {
    QByteArrayData data[14];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__uicomponents__SelectMultipleDirectoriesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__uicomponents__SelectMultipleDirectoriesModel_t qt_meta_stringdata_mu__uicomponents__SelectMultipleDirectoriesModel = {
    {
QT_MOC_LITERAL(0, 0, 48), // "mu::uicomponents::SelectMulti..."
QT_MOC_LITERAL(1, 49, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 14), // "directoryAdded"
QT_MOC_LITERAL(4, 82, 5), // "index"
QT_MOC_LITERAL(5, 88, 4), // "load"
QT_MOC_LITERAL(6, 93, 8), // "startDir"
QT_MOC_LITERAL(7, 102, 14), // "directoriesStr"
QT_MOC_LITERAL(8, 117, 9), // "selectRow"
QT_MOC_LITERAL(9, 127, 3), // "row"
QT_MOC_LITERAL(10, 131, 25), // "removeSelectedDirectories"
QT_MOC_LITERAL(11, 157, 12), // "addDirectory"
QT_MOC_LITERAL(12, 170, 11), // "directories"
QT_MOC_LITERAL(13, 182, 19) // "isRemovingAvailable"

    },
    "mu::uicomponents::SelectMultipleDirectoriesModel\0"
    "selectionChanged\0\0directoryAdded\0index\0"
    "load\0startDir\0directoriesStr\0selectRow\0"
    "row\0removeSelectedDirectories\0"
    "addDirectory\0directories\0isRemovingAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__uicomponents__SelectMultipleDirectoriesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   53,    2, 0x02 /* Public */,
       8,    1,   58,    2, 0x02 /* Public */,
      10,    0,   61,    2, 0x02 /* Public */,
      11,    0,   62,    2, 0x02 /* Public */,
      12,    0,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::uicomponents::SelectMultipleDirectoriesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectMultipleDirectoriesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->directoryAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->load((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->selectRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->removeSelectedDirectories(); break;
        case 5: _t->addDirectory(); break;
        case 6: { QString _r = _t->directories();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectMultipleDirectoriesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectMultipleDirectoriesModel::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SelectMultipleDirectoriesModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectMultipleDirectoriesModel::directoryAdded)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SelectMultipleDirectoriesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRemovingAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::uicomponents::SelectMultipleDirectoriesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__uicomponents__SelectMultipleDirectoriesModel.data,
    qt_meta_data_mu__uicomponents__SelectMultipleDirectoriesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::uicomponents::SelectMultipleDirectoriesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::uicomponents::SelectMultipleDirectoriesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__uicomponents__SelectMultipleDirectoriesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::uicomponents::SelectMultipleDirectoriesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::uicomponents::SelectMultipleDirectoriesModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::uicomponents::SelectMultipleDirectoriesModel::directoryAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
