/****************************************************************************
** Meta object code from reading C++ file 'palettespanelcontextmenumodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/palettespanelcontextmenumodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettespanelcontextmenumodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__PalettesPanelContextMenuModel_t {
    QByteArrayData data[5];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PalettesPanelContextMenuModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PalettesPanelContextMenuModel_t qt_meta_stringdata_mu__palette__PalettesPanelContextMenuModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "mu::palette::PalettesPanelCon..."
QT_MOC_LITERAL(1, 43, 26), // "expandCollapseAllRequested"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 6), // "expand"
QT_MOC_LITERAL(4, 78, 4) // "load"

    },
    "mu::palette::PalettesPanelContextMenuModel\0"
    "expandCollapseAllRequested\0\0expand\0"
    "load"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PalettesPanelContextMenuModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void mu::palette::PalettesPanelContextMenuModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PalettesPanelContextMenuModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->expandCollapseAllRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PalettesPanelContextMenuModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PalettesPanelContextMenuModel::expandCollapseAllRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PalettesPanelContextMenuModel::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::AbstractMenuModel::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PalettesPanelContextMenuModel.data,
    qt_meta_data_mu__palette__PalettesPanelContextMenuModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PalettesPanelContextMenuModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PalettesPanelContextMenuModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PalettesPanelContextMenuModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "actions::Actionable"))
        return static_cast< actions::Actionable*>(this);
    return uicomponents::AbstractMenuModel::qt_metacast(_clname);
}

int mu::palette::PalettesPanelContextMenuModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::AbstractMenuModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void mu::palette::PalettesPanelContextMenuModel::expandCollapseAllRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
