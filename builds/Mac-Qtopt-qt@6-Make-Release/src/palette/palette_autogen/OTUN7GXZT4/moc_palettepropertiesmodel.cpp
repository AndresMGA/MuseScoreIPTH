/****************************************************************************
** Meta object code from reading C++ file 'palettepropertiesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/palettepropertiesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettepropertiesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__PalettePropertiesModel_t {
    QByteArrayData data[22];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PalettePropertiesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PalettePropertiesModel_t qt_meta_stringdata_mu__palette__PalettePropertiesModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "mu::palette::PalettePropertie..."
QT_MOC_LITERAL(1, 36, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 7), // "setName"
QT_MOC_LITERAL(4, 63, 4), // "name"
QT_MOC_LITERAL(5, 68, 12), // "setCellWidth"
QT_MOC_LITERAL(6, 81, 5), // "width"
QT_MOC_LITERAL(7, 87, 13), // "setCellHeight"
QT_MOC_LITERAL(8, 101, 6), // "height"
QT_MOC_LITERAL(9, 108, 16), // "setElementOffset"
QT_MOC_LITERAL(10, 125, 6), // "offset"
QT_MOC_LITERAL(11, 132, 14), // "setScaleFactor"
QT_MOC_LITERAL(12, 147, 5), // "scale"
QT_MOC_LITERAL(13, 153, 11), // "setShowGrid"
QT_MOC_LITERAL(14, 165, 8), // "showGrid"
QT_MOC_LITERAL(15, 174, 4), // "load"
QT_MOC_LITERAL(16, 179, 10), // "properties"
QT_MOC_LITERAL(17, 190, 6), // "reject"
QT_MOC_LITERAL(18, 197, 9), // "cellWidth"
QT_MOC_LITERAL(19, 207, 10), // "cellHeight"
QT_MOC_LITERAL(20, 218, 13), // "elementOffset"
QT_MOC_LITERAL(21, 232, 11) // "scaleFactor"

    },
    "mu::palette::PalettePropertiesModel\0"
    "propertiesChanged\0\0setName\0name\0"
    "setCellWidth\0width\0setCellHeight\0"
    "height\0setElementOffset\0offset\0"
    "setScaleFactor\0scale\0setShowGrid\0"
    "showGrid\0load\0properties\0reject\0"
    "cellWidth\0cellHeight\0elementOffset\0"
    "scaleFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PalettePropertiesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    1,   78,    2, 0x02 /* Public */,
      17,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00495103,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::Double, 0x00495103,
      21, QMetaType::Double, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void mu::palette::PalettePropertiesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PalettePropertiesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->propertiesChanged(); break;
        case 1: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setCellWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCellHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setElementOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setScaleFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->load((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 8: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PalettePropertiesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PalettePropertiesModel::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PalettePropertiesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cellWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->cellHeight(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->elementOffset(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->scaleFactor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showGrid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PalettePropertiesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCellWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCellHeight(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setElementOffset(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setScaleFactor(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setShowGrid(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PalettePropertiesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PalettePropertiesModel.data,
    qt_meta_data_mu__palette__PalettePropertiesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PalettePropertiesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PalettePropertiesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PalettePropertiesModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::palette::PalettePropertiesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::palette::PalettePropertiesModel::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
