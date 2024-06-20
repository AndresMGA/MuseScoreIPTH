/****************************************************************************
** Meta object code from reading C++ file 'commonaudioapiconfigurationmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/preferences/commonaudioapiconfigurationmodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commonaudioapiconfigurationmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECommonAudioApiConfigurationModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECommonAudioApiConfigurationModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::CommonAudioApiConfigurationModel",
    "currentDeviceIdChanged",
    "",
    "deviceListChanged",
    "bufferSizeChanged",
    "bufferSizeListChanged",
    "load",
    "deviceSelected",
    "deviceId",
    "bufferSizeSelected",
    "bufferSizeStr",
    "currentDeviceId",
    "deviceList",
    "bufferSize",
    "bufferSizeList",
    "QList<uint>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPECommonAudioApiConfigurationModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   67, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    5 /* Public */,
       3,    0,   57,    2, 0x06,    6 /* Public */,
       4,    0,   58,    2, 0x06,    7 /* Public */,
       5,    0,   59,    2, 0x06,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   60,    2, 0x02,    9 /* Public */,
       7,    1,   61,    2, 0x02,   10 /* Public */,
       9,    1,   64,    2, 0x02,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00015001, uint(0), 0,
      12, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      13, QMetaType::UInt, 0x00015001, uint(2), 0,
      14, 0x80000000 | 15, 0x00015009, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::appshell::CommonAudioApiConfigurationModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECommonAudioApiConfigurationModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPECommonAudioApiConfigurationModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECommonAudioApiConfigurationModelENDCLASS_t,
        // property 'currentDeviceId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'deviceList'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'bufferSize'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'bufferSizeList'
        QtPrivate::TypeAndForceComplete<QList<uint>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CommonAudioApiConfigurationModel, std::true_type>,
        // method 'currentDeviceIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bufferSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bufferSizeListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'bufferSizeSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void mu::appshell::CommonAudioApiConfigurationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommonAudioApiConfigurationModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentDeviceIdChanged(); break;
        case 1: _t->deviceListChanged(); break;
        case 2: _t->bufferSizeChanged(); break;
        case 3: _t->bufferSizeListChanged(); break;
        case 4: _t->load(); break;
        case 5: _t->deviceSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->bufferSizeSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (_t _q_method = &CommonAudioApiConfigurationModel::currentDeviceIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (_t _q_method = &CommonAudioApiConfigurationModel::deviceListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (_t _q_method = &CommonAudioApiConfigurationModel::bufferSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CommonAudioApiConfigurationModel::*)();
            if (_t _q_method = &CommonAudioApiConfigurationModel::bufferSizeListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<uint> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CommonAudioApiConfigurationModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentDeviceId(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->deviceList(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->bufferSize(); break;
        case 3: *reinterpret_cast< QList<uint>*>(_v) = _t->bufferSizeList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::appshell::CommonAudioApiConfigurationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::CommonAudioApiConfigurationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPECommonAudioApiConfigurationModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::CommonAudioApiConfigurationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void mu::appshell::CommonAudioApiConfigurationModel::currentDeviceIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::appshell::CommonAudioApiConfigurationModel::deviceListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::appshell::CommonAudioApiConfigurationModel::bufferSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::appshell::CommonAudioApiConfigurationModel::bufferSizeListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
