/****************************************************************************
** Meta object code from reading C++ file 'instrumentsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/instrumentsscene/view/instrumentsettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrumentsettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__instrumentsscene__InstrumentSettingsModel_t {
    QByteArrayData data[14];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__instrumentsscene__InstrumentSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__instrumentsscene__InstrumentSettingsModel_t qt_meta_stringdata_mu__instrumentsscene__InstrumentSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 45), // "mu::instrumentsscene::Instrum..."
QT_MOC_LITERAL(1, 46, 11), // "dataChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 18), // "isMainScoreChanged"
QT_MOC_LITERAL(4, 78, 17), // "setInstrumentName"
QT_MOC_LITERAL(5, 96, 4), // "name"
QT_MOC_LITERAL(6, 101, 15), // "setAbbreviature"
QT_MOC_LITERAL(7, 117, 12), // "abbreviature"
QT_MOC_LITERAL(8, 130, 4), // "load"
QT_MOC_LITERAL(9, 135, 10), // "instrument"
QT_MOC_LITERAL(10, 146, 17), // "replaceInstrument"
QT_MOC_LITERAL(11, 164, 18), // "resetAllFormatting"
QT_MOC_LITERAL(12, 183, 14), // "instrumentName"
QT_MOC_LITERAL(13, 198, 11) // "isMainScore"

    },
    "mu::instrumentsscene::InstrumentSettingsModel\0"
    "dataChanged\0\0isMainScoreChanged\0"
    "setInstrumentName\0name\0setAbbreviature\0"
    "abbreviature\0load\0instrument\0"
    "replaceInstrument\0resetAllFormatting\0"
    "instrumentName\0isMainScore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__instrumentsscene__InstrumentSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   51,    2, 0x0a /* Public */,
       6,    1,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   57,    2, 0x02 /* Public */,
      10,    0,   60,    2, 0x02 /* Public */,
      11,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Bool,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariant,    9,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495103,
       7, QMetaType::QString, 0x00495103,
      13, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void mu::instrumentsscene::InstrumentSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: { bool _r = _t->isMainScoreChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setInstrumentName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAbbreviature((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->load((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->replaceInstrument(); break;
        case 6: _t->resetAllFormatting(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstrumentSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentSettingsModel::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = bool (InstrumentSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentSettingsModel::isMainScoreChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InstrumentSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->instrumentName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->abbreviature(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isMainScore(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InstrumentSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInstrumentName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAbbreviature(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::instrumentsscene::InstrumentSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__instrumentsscene__InstrumentSettingsModel.data,
    qt_meta_data_mu__instrumentsscene__InstrumentSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::instrumentsscene::InstrumentSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::InstrumentSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__instrumentsscene__InstrumentSettingsModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::instrumentsscene::InstrumentSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void mu::instrumentsscene::InstrumentSettingsModel::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
bool mu::instrumentsscene::InstrumentSettingsModel::isMainScoreChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
