/****************************************************************************
** Meta object code from reading C++ file 'palettecellpropertiesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/palettecellpropertiesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettecellpropertiesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__PaletteCellPropertiesModel_t {
    QByteArrayData data[17];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PaletteCellPropertiesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PaletteCellPropertiesModel_t qt_meta_stringdata_mu__palette__PaletteCellPropertiesModel = {
    {
QT_MOC_LITERAL(0, 0, 39), // "mu::palette::PaletteCellPrope..."
QT_MOC_LITERAL(1, 40, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 7), // "setName"
QT_MOC_LITERAL(4, 67, 4), // "name"
QT_MOC_LITERAL(5, 72, 10), // "setXOffset"
QT_MOC_LITERAL(6, 83, 7), // "xOffset"
QT_MOC_LITERAL(7, 91, 10), // "setYOffset"
QT_MOC_LITERAL(8, 102, 7), // "yOffset"
QT_MOC_LITERAL(9, 110, 14), // "setScaleFactor"
QT_MOC_LITERAL(10, 125, 5), // "scale"
QT_MOC_LITERAL(11, 131, 12), // "setDrawStaff"
QT_MOC_LITERAL(12, 144, 9), // "drawStaff"
QT_MOC_LITERAL(13, 154, 4), // "load"
QT_MOC_LITERAL(14, 159, 10), // "properties"
QT_MOC_LITERAL(15, 170, 6), // "reject"
QT_MOC_LITERAL(16, 177, 11) // "scaleFactor"

    },
    "mu::palette::PaletteCellPropertiesModel\0"
    "propertiesChanged\0\0setName\0name\0"
    "setXOffset\0xOffset\0setYOffset\0yOffset\0"
    "setScaleFactor\0scale\0setDrawStaff\0"
    "drawStaff\0load\0properties\0reject\0"
    "scaleFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PaletteCellPropertiesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   70,    2, 0x02 /* Public */,
      15,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariant,   14,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00495103,
       6, QMetaType::Double, 0x00495103,
       8, QMetaType::Double, 0x00495103,
      16, QMetaType::Double, 0x00495103,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void mu::palette::PaletteCellPropertiesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteCellPropertiesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->propertiesChanged(); break;
        case 1: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setXOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setYOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setScaleFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setDrawStaff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->load((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteCellPropertiesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCellPropertiesModel::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteCellPropertiesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->xOffset(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->yOffset(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->scaleFactor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->drawStaff(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PaletteCellPropertiesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setXOffset(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setYOffset(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setScaleFactor(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setDrawStaff(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PaletteCellPropertiesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PaletteCellPropertiesModel.data,
    qt_meta_data_mu__palette__PaletteCellPropertiesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PaletteCellPropertiesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteCellPropertiesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PaletteCellPropertiesModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::palette::PaletteCellPropertiesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::palette::PaletteCellPropertiesModel::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
