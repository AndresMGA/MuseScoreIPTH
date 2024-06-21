/****************************************************************************
** Meta object code from reading C++ file 'braillepreferencesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/preferences/braillepreferencesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'braillepreferencesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__BraillePreferencesModel_t {
    QByteArrayData data[16];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__BraillePreferencesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__BraillePreferencesModel_t qt_meta_stringdata_mu__appshell__BraillePreferencesModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::appshell::BraillePreferen..."
QT_MOC_LITERAL(1, 38, 26), // "braillePanelEnabledChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 5), // "value"
QT_MOC_LITERAL(4, 72, 19), // "brailleTableChanged"
QT_MOC_LITERAL(5, 92, 24), // "intervalDirectionChanged"
QT_MOC_LITERAL(6, 117, 22), // "setBraillePanelEnabled"
QT_MOC_LITERAL(7, 140, 15), // "setBrailleTable"
QT_MOC_LITERAL(8, 156, 5), // "table"
QT_MOC_LITERAL(9, 162, 20), // "setIntervalDirection"
QT_MOC_LITERAL(10, 183, 9), // "direction"
QT_MOC_LITERAL(11, 193, 13), // "brailleTables"
QT_MOC_LITERAL(12, 207, 18), // "intervalDirections"
QT_MOC_LITERAL(13, 226, 19), // "braillePanelEnabled"
QT_MOC_LITERAL(14, 246, 12), // "brailleTable"
QT_MOC_LITERAL(15, 259, 17) // "intervalDirection"

    },
    "mu::appshell::BraillePreferencesModel\0"
    "braillePanelEnabledChanged\0\0value\0"
    "brailleTableChanged\0intervalDirectionChanged\0"
    "setBraillePanelEnabled\0setBrailleTable\0"
    "table\0setIntervalDirection\0direction\0"
    "brailleTables\0intervalDirections\0"
    "braillePanelEnabled\0brailleTable\0"
    "intervalDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__BraillePreferencesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   72,    2, 0x02 /* Public */,
      12,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // methods: parameters
    QMetaType::QStringList,
    QMetaType::QVariantList,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::appshell::BraillePreferencesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BraillePreferencesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->braillePanelEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->brailleTableChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->intervalDirectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setBraillePanelEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setBrailleTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setIntervalDirection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { QStringList _r = _t->brailleTables();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariantList _r = _t->intervalDirections();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BraillePreferencesModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BraillePreferencesModel::braillePanelEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BraillePreferencesModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BraillePreferencesModel::brailleTableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BraillePreferencesModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BraillePreferencesModel::intervalDirectionChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BraillePreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->braillePanelEnabled(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->brailleTable(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->intervalDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BraillePreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBraillePanelEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setBrailleTable(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIntervalDirection(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::BraillePreferencesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__BraillePreferencesModel.data,
    qt_meta_data_mu__appshell__BraillePreferencesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::BraillePreferencesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::BraillePreferencesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__BraillePreferencesModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::BraillePreferencesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::appshell::BraillePreferencesModel::braillePanelEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::appshell::BraillePreferencesModel::brailleTableChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::appshell::BraillePreferencesModel::intervalDirectionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
