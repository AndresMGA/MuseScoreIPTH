/****************************************************************************
** Meta object code from reading C++ file 'staffsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/instrumentsscene/view/staffsettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'staffsettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEStaffSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEStaffSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::instrumentsscene::StaffSettingsModel",
    "staffTypeChanged",
    "",
    "voicesChanged",
    "voiceVisibilityChanged",
    "voiceIndex",
    "visible",
    "isSmallStaffChanged",
    "cutawayEnabledChanged",
    "allStaffTypesChanged",
    "isMainScoreChanged",
    "isMainScore",
    "setStaffType",
    "type",
    "setIsSmallStaff",
    "value",
    "setCutawayEnabled",
    "load",
    "staffId",
    "createLinkedStaff",
    "setVoiceVisible",
    "staffType",
    "isSmallStaff",
    "cutawayEnabled",
    "voices",
    "allStaffTypes"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEStaffSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  123, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    7 /* Public */,
       3,    0,   93,    2, 0x06,    8 /* Public */,
       4,    2,   94,    2, 0x06,    9 /* Public */,
       7,    0,   99,    2, 0x06,   12 /* Public */,
       8,    0,  100,    2, 0x06,   13 /* Public */,
       9,    0,  101,    2, 0x06,   14 /* Public */,
      10,    1,  102,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  105,    2, 0x0a,   17 /* Public */,
      14,    1,  108,    2, 0x0a,   19 /* Public */,
      16,    1,  111,    2, 0x0a,   21 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      17,    1,  114,    2, 0x02,   23 /* Public */,
      19,    0,  117,    2, 0x02,   25 /* Public */,
      20,    2,  118,    2, 0x02,   26 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    6,

 // properties: name, type, flags
      21, QMetaType::Int, 0x00015103, uint(0), 0,
      22, QMetaType::Bool, 0x00015103, uint(3), 0,
      23, QMetaType::Bool, 0x00015103, uint(4), 0,
      24, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      25, QMetaType::QVariantList, 0x00015001, uint(5), 0,
      11, QMetaType::Bool, 0x00015001, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::instrumentsscene::StaffSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEStaffSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEStaffSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEStaffSettingsModelENDCLASS_t,
        // property 'staffType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isSmallStaff'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cutawayEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'voices'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'allStaffTypes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'isMainScore'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StaffSettingsModel, std::true_type>,
        // method 'staffTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'voicesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'voiceVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isSmallStaffChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cutawayEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'allStaffTypesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isMainScoreChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setStaffType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setIsSmallStaff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCutawayEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createLinkedStaff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setVoiceVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::instrumentsscene::StaffSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StaffSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->staffTypeChanged(); break;
        case 1: _t->voicesChanged(); break;
        case 2: _t->voiceVisibilityChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->isSmallStaffChanged(); break;
        case 4: _t->cutawayEnabledChanged(); break;
        case 5: _t->allStaffTypesChanged(); break;
        case 6: _t->isMainScoreChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setStaffType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setIsSmallStaff((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setCutawayEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->createLinkedStaff(); break;
        case 12: _t->setVoiceVisible((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StaffSettingsModel::*)();
            if (_t _q_method = &StaffSettingsModel::staffTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StaffSettingsModel::*)();
            if (_t _q_method = &StaffSettingsModel::voicesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StaffSettingsModel::*)(int , bool );
            if (_t _q_method = &StaffSettingsModel::voiceVisibilityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StaffSettingsModel::*)();
            if (_t _q_method = &StaffSettingsModel::isSmallStaffChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StaffSettingsModel::*)();
            if (_t _q_method = &StaffSettingsModel::cutawayEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StaffSettingsModel::*)();
            if (_t _q_method = &StaffSettingsModel::allStaffTypesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StaffSettingsModel::*)(bool );
            if (_t _q_method = &StaffSettingsModel::isMainScoreChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StaffSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->staffType(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSmallStaff(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->cutawayEnabled(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->voices(); break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->allStaffTypes(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMainScore(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StaffSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStaffType(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setIsSmallStaff(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCutawayEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::instrumentsscene::StaffSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::StaffSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEStaffSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::instrumentsscene::StaffSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mu::instrumentsscene::StaffSettingsModel::staffTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::instrumentsscene::StaffSettingsModel::voicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::instrumentsscene::StaffSettingsModel::voiceVisibilityChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::instrumentsscene::StaffSettingsModel::isSmallStaffChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::instrumentsscene::StaffSettingsModel::cutawayEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::instrumentsscene::StaffSettingsModel::allStaffTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::instrumentsscene::StaffSettingsModel::isMainScoreChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
