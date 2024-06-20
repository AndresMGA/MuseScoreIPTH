/****************************************************************************
** Meta object code from reading C++ file 'generalpreferencesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/preferences/generalpreferencesmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generalpreferencesmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEGeneralPreferencesModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEGeneralPreferencesModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::GeneralPreferencesModel",
    "languagesChanged",
    "",
    "languages",
    "currentLanguageCodeChanged",
    "currentLanguageCode",
    "currentKeyboardLayoutChanged",
    "isOSCRemoteControlChanged",
    "isOSCRemoteControl",
    "oscPortChanged",
    "oscPort",
    "receivingUpdateForCurrentLanguage",
    "current",
    "total",
    "status",
    "isNeedRestartChanged",
    "startupModesChanged",
    "setCurrentLanguageCode",
    "setCurrentKeyboardLayout",
    "keyboardLayout",
    "setIsOSCRemoteControl",
    "setOscPort",
    "setIsNeedRestart",
    "newIsNeedRestart",
    "load",
    "checkUpdateForCurrentLanguage",
    "setCurrentStartupMode",
    "modeIndex",
    "setStartupScorePath",
    "scorePath",
    "scorePathFilter",
    "keyboardLayouts",
    "currentKeyboardLayout",
    "isNeedRestart",
    "startupModes"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPEGeneralPreferencesModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       8,  168, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    9 /* Public */,
       4,    1,  125,    2, 0x06,   11 /* Public */,
       6,    0,  128,    2, 0x06,   13 /* Public */,
       7,    1,  129,    2, 0x06,   14 /* Public */,
       9,    1,  132,    2, 0x06,   16 /* Public */,
      11,    3,  135,    2, 0x06,   18 /* Public */,
      15,    0,  142,    2, 0x06,   22 /* Public */,
      16,    0,  143,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    1,  144,    2, 0x0a,   24 /* Public */,
      18,    1,  147,    2, 0x0a,   26 /* Public */,
      20,    1,  150,    2, 0x0a,   28 /* Public */,
      21,    1,  153,    2, 0x0a,   30 /* Public */,
      22,    1,  156,    2, 0x0a,   32 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      24,    0,  159,    2, 0x02,   34 /* Public */,
      25,    0,  160,    2, 0x02,   35 /* Public */,
      26,    1,  161,    2, 0x02,   36 /* Public */,
      28,    1,  164,    2, 0x02,   38 /* Public */,
      30,    0,  167,    2, 0x102,   40 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   23,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::QStringList,

 // properties: name, type, flags
       3, QMetaType::QVariantList, 0x00015001, uint(0), 0,
       5, QMetaType::QString, 0x00015103, uint(1), 0,
      31, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      32, QMetaType::QString, 0x00015103, uint(2), 0,
       8, QMetaType::Bool, 0x00015103, uint(3), 0,
      10, QMetaType::Int, 0x00015103, uint(4), 0,
      33, QMetaType::Bool, 0x00015103, uint(6), 0,
      34, QMetaType::QVariantList, 0x00015001, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::appshell::GeneralPreferencesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEGeneralPreferencesModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPEGeneralPreferencesModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEGeneralPreferencesModelENDCLASS_t,
        // property 'languages'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'currentLanguageCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'keyboardLayouts'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'currentKeyboardLayout'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isOSCRemoteControl'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'oscPort'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isNeedRestart'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'startupModes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GeneralPreferencesModel, std::true_type>,
        // method 'languagesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'currentLanguageCodeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'currentKeyboardLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isOSCRemoteControlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'oscPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'receivingUpdateForCurrentLanguage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'isNeedRestartChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startupModesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentLanguageCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurrentKeyboardLayout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setIsOSCRemoteControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setOscPort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setIsNeedRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkUpdateForCurrentLanguage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentStartupMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setStartupScorePath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'scorePathFilter'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>
    >,
    nullptr
} };

void mu::appshell::GeneralPreferencesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeneralPreferencesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->languagesChanged((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 1: _t->currentLanguageCodeChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->currentKeyboardLayoutChanged(); break;
        case 3: _t->isOSCRemoteControlChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->oscPortChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->receivingUpdateForCurrentLanguage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->isNeedRestartChanged(); break;
        case 7: _t->startupModesChanged(); break;
        case 8: _t->setCurrentLanguageCode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setCurrentKeyboardLayout((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setIsOSCRemoteControl((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setOscPort((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->setIsNeedRestart((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->load(); break;
        case 14: _t->checkUpdateForCurrentLanguage(); break;
        case 15: _t->setCurrentStartupMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->setStartupScorePath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: { QStringList _r = _t->scorePathFilter();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeneralPreferencesModel::*)(QVariantList );
            if (_t _q_method = &GeneralPreferencesModel::languagesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeneralPreferencesModel::*)(QString );
            if (_t _q_method = &GeneralPreferencesModel::currentLanguageCodeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeneralPreferencesModel::*)();
            if (_t _q_method = &GeneralPreferencesModel::currentKeyboardLayoutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GeneralPreferencesModel::*)(bool );
            if (_t _q_method = &GeneralPreferencesModel::isOSCRemoteControlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GeneralPreferencesModel::*)(int );
            if (_t _q_method = &GeneralPreferencesModel::oscPortChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GeneralPreferencesModel::*)(int , int , QString );
            if (_t _q_method = &GeneralPreferencesModel::receivingUpdateForCurrentLanguage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GeneralPreferencesModel::*)();
            if (_t _q_method = &GeneralPreferencesModel::isNeedRestartChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GeneralPreferencesModel::*)();
            if (_t _q_method = &GeneralPreferencesModel::startupModesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GeneralPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->languages(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentLanguageCode(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->keyboardLayouts(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentKeyboardLayout(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isOSCRemoteControl(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->oscPort(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isNeedRestart(); break;
        case 7: *reinterpret_cast< QVariantList*>(_v) = _t->startupModes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GeneralPreferencesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentLanguageCode(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentKeyboardLayout(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setIsOSCRemoteControl(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setOscPort(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setIsNeedRestart(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::appshell::GeneralPreferencesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::GeneralPreferencesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEGeneralPreferencesModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::GeneralPreferencesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mu::appshell::GeneralPreferencesModel::languagesChanged(QVariantList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::appshell::GeneralPreferencesModel::currentLanguageCodeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::appshell::GeneralPreferencesModel::currentKeyboardLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::GeneralPreferencesModel::isOSCRemoteControlChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::appshell::GeneralPreferencesModel::oscPortChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::appshell::GeneralPreferencesModel::receivingUpdateForCurrentLanguage(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::appshell::GeneralPreferencesModel::isNeedRestartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::appshell::GeneralPreferencesModel::startupModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
