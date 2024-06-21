/****************************************************************************
** Meta object code from reading C++ file 'stringtuningssettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/internal/stringtuningssettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stringtuningssettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__StringTuningsSettingsModel_t {
    QByteArrayData data[22];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__StringTuningsSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__StringTuningsSettingsModel_t qt_meta_stringdata_mu__notation__StringTuningsSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "mu::notation::StringTuningsSe..."
QT_MOC_LITERAL(1, 41, 14), // "presetsChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 20), // "currentPresetChanged"
QT_MOC_LITERAL(4, 78, 23), // "numbersOfStringsChanged"
QT_MOC_LITERAL(5, 102, 29), // "currentNumberOfStringsChanged"
QT_MOC_LITERAL(6, 132, 14), // "stringsChanged"
QT_MOC_LITERAL(7, 147, 4), // "init"
QT_MOC_LITERAL(8, 152, 13), // "pitchToString"
QT_MOC_LITERAL(9, 166, 5), // "pitch"
QT_MOC_LITERAL(10, 172, 12), // "toggleString"
QT_MOC_LITERAL(11, 185, 11), // "stringIndex"
QT_MOC_LITERAL(12, 197, 14), // "setStringValue"
QT_MOC_LITERAL(13, 212, 11), // "stringValue"
QT_MOC_LITERAL(14, 224, 19), // "increaseStringValue"
QT_MOC_LITERAL(15, 244, 19), // "decreaseStringValue"
QT_MOC_LITERAL(16, 264, 7), // "presets"
QT_MOC_LITERAL(17, 272, 13), // "currentPreset"
QT_MOC_LITERAL(18, 286, 16), // "numbersOfStrings"
QT_MOC_LITERAL(19, 303, 22), // "currentNumberOfStrings"
QT_MOC_LITERAL(20, 326, 7), // "strings"
QT_MOC_LITERAL(21, 334, 25) // "QList<StringTuningsItem*>"

    },
    "mu::notation::StringTuningsSettingsModel\0"
    "presetsChanged\0\0currentPresetChanged\0"
    "numbersOfStringsChanged\0"
    "currentNumberOfStringsChanged\0"
    "stringsChanged\0init\0pitchToString\0"
    "pitch\0toggleString\0stringIndex\0"
    "setStringValue\0stringValue\0"
    "increaseStringValue\0decreaseStringValue\0"
    "presets\0currentPreset\0numbersOfStrings\0"
    "currentNumberOfStrings\0strings\0"
    "QList<StringTuningsItem*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__StringTuningsSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   74,    2, 0x02 /* Public */,
       8,    1,   75,    2, 0x02 /* Public */,
      10,    1,   78,    2, 0x02 /* Public */,
      12,    2,   81,    2, 0x02 /* Public */,
      14,    1,   86,    2, 0x02 /* Public */,
      15,    1,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,   11,   13,
    QMetaType::QString, QMetaType::QString,   13,
    QMetaType::QString, QMetaType::QString,   13,

 // properties: name, type, flags
      16, QMetaType::QVariantList, 0x00495001,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QVariantList, 0x00495001,
      19, QMetaType::Int, 0x00495103,
      20, 0x80000000 | 21, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void mu::notation::StringTuningsSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StringTuningsSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->presetsChanged(); break;
        case 1: _t->currentPresetChanged(); break;
        case 2: _t->numbersOfStringsChanged(); break;
        case 3: _t->currentNumberOfStringsChanged(); break;
        case 4: _t->stringsChanged(); break;
        case 5: _t->init(); break;
        case 6: { QString _r = _t->pitchToString((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->toggleString((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: { bool _r = _t->setStringValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->increaseStringValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->decreaseStringValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsSettingsModel::presetsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsSettingsModel::currentPresetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsSettingsModel::numbersOfStringsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsSettingsModel::currentNumberOfStringsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsSettingsModel::stringsChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<StringTuningsItem*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StringTuningsSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->presets(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentPreset(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->numbersOfStrings(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentNumberOfStrings(); break;
        case 4: *reinterpret_cast< QList<StringTuningsItem*>*>(_v) = _t->strings(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StringTuningsSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentPreset(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentNumberOfStrings(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::StringTuningsSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractElementPopupModel::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__StringTuningsSettingsModel.data,
    qt_meta_data_mu__notation__StringTuningsSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::StringTuningsSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::StringTuningsSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__StringTuningsSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractElementPopupModel::qt_metacast(_clname);
}

int mu::notation::StringTuningsSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractElementPopupModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void mu::notation::StringTuningsSettingsModel::presetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::StringTuningsSettingsModel::currentPresetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::notation::StringTuningsSettingsModel::numbersOfStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::notation::StringTuningsSettingsModel::currentNumberOfStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::notation::StringTuningsSettingsModel::stringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_mu__notation__StringTuningsItem_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__StringTuningsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__StringTuningsItem_t qt_meta_stringdata_mu__notation__StringTuningsItem = {
    {
QT_MOC_LITERAL(0, 0, 31), // "mu::notation::StringTuningsItem"
QT_MOC_LITERAL(1, 32, 11), // "showChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "numberChanged"
QT_MOC_LITERAL(4, 59, 12), // "valueChanged"
QT_MOC_LITERAL(5, 72, 4), // "show"
QT_MOC_LITERAL(6, 77, 6), // "number"
QT_MOC_LITERAL(7, 84, 5), // "value"
QT_MOC_LITERAL(8, 90, 8), // "valueStr"
QT_MOC_LITERAL(9, 99, 7) // "useFlat"

    },
    "mu::notation::StringTuningsItem\0"
    "showChanged\0\0numberChanged\0valueChanged\0"
    "show\0number\0value\0valueStr\0useFlat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__StringTuningsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00495001,
       6, QMetaType::QString, 0x00495001,
       7, QMetaType::Int, 0x00495001,
       8, QMetaType::QString, 0x00495001,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,
       2,

       0        // eod
};

void mu::notation::StringTuningsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StringTuningsItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showChanged(); break;
        case 1: _t->numberChanged(); break;
        case 2: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StringTuningsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsItem::showChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StringTuningsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsItem::numberChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StringTuningsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringTuningsItem::valueChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StringTuningsItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->show(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->number(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->valueStr(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->useFlat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StringTuningsItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setUseFlat(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::StringTuningsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__StringTuningsItem.data,
    qt_meta_data_mu__notation__StringTuningsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::StringTuningsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::StringTuningsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__StringTuningsItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::notation::StringTuningsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void mu::notation::StringTuningsItem::showChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::StringTuningsItem::numberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::notation::StringTuningsItem::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
