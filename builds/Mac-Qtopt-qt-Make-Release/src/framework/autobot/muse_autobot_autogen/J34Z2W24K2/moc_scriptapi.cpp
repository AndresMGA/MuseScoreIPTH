/****************************************************************************
** Meta object code from reading C++ file 'scriptapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/autobot/internal/api/scriptapi.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptapi.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEScriptApiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEScriptApiENDCLASS = QtMocHelpers::stringData(
    "muse::autobot::ScriptApi",
    "log",
    "QJSValue",
    "autobot",
    "dispatcher",
    "navigation",
    "context",
    "shortcuts",
    "interactive",
    "keyboard",
    "accessibility",
    "process",
    "filesystem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEautobotSCOPEScriptApiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       8, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::autobot::ScriptApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEScriptApiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEautobotSCOPEScriptApiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEScriptApiENDCLASS_t,
        // property 'log'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'autobot'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'dispatcher'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'navigation'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'context'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'shortcuts'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'interactive'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'keyboard'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'accessibility'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'process'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // property 'filesystem'
        QtPrivate::TypeAndForceComplete<QJSValue, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScriptApi, std::true_type>
    >,
    nullptr
} };

void muse::autobot::ScriptApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScriptApi *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->log(); break;
        case 1: *reinterpret_cast< QJSValue*>(_v) = _t->autobot(); break;
        case 2: *reinterpret_cast< QJSValue*>(_v) = _t->dispatcher(); break;
        case 3: *reinterpret_cast< QJSValue*>(_v) = _t->navigation(); break;
        case 4: *reinterpret_cast< QJSValue*>(_v) = _t->context(); break;
        case 5: *reinterpret_cast< QJSValue*>(_v) = _t->shortcuts(); break;
        case 6: *reinterpret_cast< QJSValue*>(_v) = _t->interactive(); break;
        case 7: *reinterpret_cast< QJSValue*>(_v) = _t->keyboard(); break;
        case 8: *reinterpret_cast< QJSValue*>(_v) = _t->accessibility(); break;
        case 9: *reinterpret_cast< QJSValue*>(_v) = _t->process(); break;
        case 10: *reinterpret_cast< QJSValue*>(_v) = _t->filesystem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *muse::autobot::ScriptApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::autobot::ScriptApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEautobotSCOPEScriptApiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::autobot::ScriptApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
