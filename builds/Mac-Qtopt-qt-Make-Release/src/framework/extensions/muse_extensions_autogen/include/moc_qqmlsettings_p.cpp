/****************************************************************************
** Meta object code from reading C++ file 'qqmlsettings_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/extensions/api/v1/qqmlsettings_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlsettings_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQQmlSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQQmlSettingsENDCLASS = QtMocHelpers::stringData(
    "QQmlSettings",
    "QML.Element",
    "Settings",
    "_q_propertyChanged",
    "",
    "value",
    "key",
    "defaultValue",
    "setValue",
    "sync",
    "category",
    "fileName"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQQmlSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       2,   61, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   46,    4, 0x08,    3 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   47,    4, 0x102,    4 /* Public | MethodIsConst  */,
       5,    1,   52,    4, 0x122,    7 /* Public | MethodCloned | MethodIsConst  */,
       8,    2,   55,    4, 0x02,    9 /* Public */,
       9,    0,   60,    4, 0x02,   12 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,    6,    7,
    QMetaType::QVariant, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    6,    5,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015903, uint(-1), 0,
      11, QMetaType::QString, 0x00015903, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QQmlSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQQmlSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQQmlSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'category'
        QString,
        // property 'fileName'
        QString,
        // Q_OBJECT / Q_GADGET
        QQmlSettings,
        // method '_q_propertyChanged'
        void,
        // method 'value'
        QVariant,
        const QString &,
        const QVariant &,
        // method 'value'
        QVariant,
        const QString &,
        // method 'setValue'
        void,
        const QString &,
        const QVariant &,
        // method 'sync'
        void
    >,
    nullptr
} };

void QQmlSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQmlSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->_q_propertyChanged(); break;
        case 1: { QVariant _r = _t->value((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariant _r = _t->value((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 4: _t->sync(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQmlSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQmlSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCategory(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QQmlSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQQmlSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
