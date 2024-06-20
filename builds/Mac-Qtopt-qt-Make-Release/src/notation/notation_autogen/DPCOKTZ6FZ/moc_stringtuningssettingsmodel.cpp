/****************************************************************************
** Meta object code from reading C++ file 'stringtuningssettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/internal/stringtuningssettingsmodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stringtuningssettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::notation::StringTuningsSettingsModel",
    "presetsChanged",
    "",
    "currentPresetChanged",
    "numbersOfStringsChanged",
    "currentNumberOfStringsChanged",
    "stringsChanged",
    "init",
    "pitchToString",
    "pitch",
    "toggleString",
    "stringIndex",
    "setStringValue",
    "stringValue",
    "increaseStringValue",
    "decreaseStringValue",
    "presets",
    "currentPreset",
    "numbersOfStrings",
    "currentNumberOfStrings",
    "strings",
    "QList<StringTuningsItem*>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEStringTuningsSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,  103, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    6 /* Public */,
       3,    0,   81,    2, 0x06,    7 /* Public */,
       4,    0,   82,    2, 0x06,    8 /* Public */,
       5,    0,   83,    2, 0x06,    9 /* Public */,
       6,    0,   84,    2, 0x06,   10 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   85,    2, 0x02,   11 /* Public */,
       8,    1,   86,    2, 0x02,   12 /* Public */,
      10,    1,   89,    2, 0x02,   14 /* Public */,
      12,    2,   92,    2, 0x02,   16 /* Public */,
      14,    1,   97,    2, 0x02,   19 /* Public */,
      15,    1,  100,    2, 0x02,   21 /* Public */,

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
      16, QMetaType::QVariantList, 0x00015001, uint(0), 0,
      17, QMetaType::QString, 0x00015103, uint(1), 0,
      18, QMetaType::QVariantList, 0x00015001, uint(2), 0,
      19, QMetaType::Int, 0x00015103, uint(3), 0,
      20, 0x80000000 | 21, 0x00015009, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::StringTuningsSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractElementPopupModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEStringTuningsSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsSettingsModelENDCLASS_t,
        // property 'presets'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'currentPreset'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'numbersOfStrings'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'currentNumberOfStrings'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'strings'
        QtPrivate::TypeAndForceComplete<QList<StringTuningsItem*>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StringTuningsSettingsModel, std::true_type>,
        // method 'presetsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentPresetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'numbersOfStringsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentNumberOfStringsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stringsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pitchToString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'toggleString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setStringValue'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'increaseStringValue'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'decreaseStringValue'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

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
        case 6: { QString _r = _t->pitchToString((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->toggleString((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: { bool _r = _t->setStringValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->increaseStringValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->decreaseStringValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (_t _q_method = &StringTuningsSettingsModel::presetsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (_t _q_method = &StringTuningsSettingsModel::currentPresetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (_t _q_method = &StringTuningsSettingsModel::numbersOfStringsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (_t _q_method = &StringTuningsSettingsModel::currentNumberOfStringsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StringTuningsSettingsModel::*)();
            if (_t _q_method = &StringTuningsSettingsModel::stringsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
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
    }  else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::notation::StringTuningsSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::StringTuningsSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsSettingsModelENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsItemENDCLASS = QtMocHelpers::stringData(
    "mu::notation::StringTuningsItem",
    "showChanged",
    "",
    "numberChanged",
    "valueChanged",
    "show",
    "number",
    "value",
    "valueStr",
    "useFlat"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEStringTuningsItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    6 /* Public */,
       3,    0,   33,    2, 0x06,    7 /* Public */,
       4,    0,   34,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00015001, uint(0), 0,
       6, QMetaType::QString, 0x00015001, uint(1), 0,
       7, QMetaType::Int, 0x00015001, uint(2), 0,
       8, QMetaType::QString, 0x00015001, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::StringTuningsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEStringTuningsItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsItemENDCLASS_t,
        // property 'show'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'number'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'value'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'valueStr'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'useFlat'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StringTuningsItem, std::true_type>,
        // method 'showChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'numberChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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
            if (_t _q_method = &StringTuningsItem::showChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StringTuningsItem::*)();
            if (_t _q_method = &StringTuningsItem::numberChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StringTuningsItem::*)();
            if (_t _q_method = &StringTuningsItem::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *mu::notation::StringTuningsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::StringTuningsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEStringTuningsItemENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
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
