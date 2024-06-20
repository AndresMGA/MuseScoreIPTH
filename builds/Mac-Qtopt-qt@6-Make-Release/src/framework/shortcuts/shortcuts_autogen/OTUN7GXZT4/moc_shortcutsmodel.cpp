/****************************************************************************
** Meta object code from reading C++ file 'shortcutsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/shortcuts/view/shortcutsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__shortcuts__ShortcutsModel_t {
    QByteArrayData data[18];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__shortcuts__ShortcutsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__shortcuts__ShortcutsModel_t qt_meta_stringdata_mu__shortcuts__ShortcutsModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::shortcuts::ShortcutsModel"
QT_MOC_LITERAL(1, 30, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "setSelection"
QT_MOC_LITERAL(4, 61, 14), // "QItemSelection"
QT_MOC_LITERAL(5, 76, 9), // "selection"
QT_MOC_LITERAL(6, 86, 4), // "load"
QT_MOC_LITERAL(7, 91, 5), // "apply"
QT_MOC_LITERAL(8, 97, 5), // "reset"
QT_MOC_LITERAL(9, 103, 23), // "importShortcutsFromFile"
QT_MOC_LITERAL(10, 127, 21), // "exportShortcutsToFile"
QT_MOC_LITERAL(11, 149, 30), // "applySequenceToCurrentShortcut"
QT_MOC_LITERAL(12, 180, 11), // "newSequence"
QT_MOC_LITERAL(13, 192, 21), // "conflictShortcutIndex"
QT_MOC_LITERAL(14, 214, 22), // "clearSelectedShortcuts"
QT_MOC_LITERAL(15, 237, 31), // "resetToDefaultSelectedShortcuts"
QT_MOC_LITERAL(16, 269, 9), // "shortcuts"
QT_MOC_LITERAL(17, 279, 15) // "currentShortcut"

    },
    "mu::shortcuts::ShortcutsModel\0"
    "selectionChanged\0\0setSelection\0"
    "QItemSelection\0selection\0load\0apply\0"
    "reset\0importShortcutsFromFile\0"
    "exportShortcutsToFile\0"
    "applySequenceToCurrentShortcut\0"
    "newSequence\0conflictShortcutIndex\0"
    "clearSelectedShortcuts\0"
    "resetToDefaultSelectedShortcuts\0"
    "shortcuts\0currentShortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__shortcuts__ShortcutsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   78,    2, 0x02 /* Public */,
       7,    0,   79,    2, 0x02 /* Public */,
       8,    0,   80,    2, 0x02 /* Public */,
       9,    0,   81,    2, 0x02 /* Public */,
      10,    0,   82,    2, 0x02 /* Public */,
      11,    2,   83,    2, 0x02 /* Public */,
      11,    1,   88,    2, 0x22 /* Public | MethodCloned */,
      14,    0,   91,    2, 0x02 /* Public */,
      15,    0,   92,    2, 0x02 /* Public */,
      16,    0,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariantList,

 // properties: name, type, flags
       5, 0x80000000 | 4, 0x0049510b,
      17, QMetaType::QVariant, 0x00495001,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void mu::shortcuts::ShortcutsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->setSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 2: _t->load(); break;
        case 3: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->reset(); break;
        case 5: _t->importShortcutsFromFile(); break;
        case 6: _t->exportShortcutsToFile(); break;
        case 7: _t->applySequenceToCurrentShortcut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->applySequenceToCurrentShortcut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->clearSelectedShortcuts(); break;
        case 10: _t->resetToDefaultSelectedShortcuts(); break;
        case 11: { QVariantList _r = _t->shortcuts();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShortcutsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortcutsModel::selectionChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShortcutsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QItemSelection*>(_v) = _t->selection(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->currentShortcut(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShortcutsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelection(*reinterpret_cast< QItemSelection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::shortcuts::ShortcutsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__shortcuts__ShortcutsModel.data,
    qt_meta_data_mu__shortcuts__ShortcutsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::shortcuts::ShortcutsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::shortcuts::ShortcutsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__shortcuts__ShortcutsModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::shortcuts::ShortcutsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::shortcuts::ShortcutsModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
