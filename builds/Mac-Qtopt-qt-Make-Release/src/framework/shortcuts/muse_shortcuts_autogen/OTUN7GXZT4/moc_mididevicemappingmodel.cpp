/****************************************************************************
** Meta object code from reading C++ file 'mididevicemappingmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/shortcuts/view/mididevicemappingmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mididevicemappingmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEMidiDeviceMappingModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEMidiDeviceMappingModelENDCLASS = QtMocHelpers::stringData(
    "muse::shortcuts::MidiDeviceMappingModel",
    "useRemoteControlChanged",
    "",
    "value",
    "selectionChanged",
    "QItemSelection",
    "selection",
    "setUseRemoteControl",
    "setSelection",
    "load",
    "apply",
    "reset",
    "clearSelectedActions",
    "clearAllActions",
    "currentAction",
    "mapCurrentActionToMidiEvent",
    "event",
    "useRemoteControl",
    "canEditAction"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEshortcutsSCOPEMidiDeviceMappingModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,  101, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    4 /* Public */,
       4,    1,   83,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   86,    2, 0x0a,    8 /* Public */,
       8,    1,   89,    2, 0x0a,   10 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   92,    2, 0x02,   12 /* Public */,
      10,    0,   93,    2, 0x02,   13 /* Public */,
      11,    0,   94,    2, 0x02,   14 /* Public */,
      12,    0,   95,    2, 0x02,   15 /* Public */,
      13,    0,   96,    2, 0x02,   16 /* Public */,
      14,    0,   97,    2, 0x102,   17 /* Public | MethodIsConst  */,
      15,    1,   98,    2, 0x02,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,   16,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00015103, uint(0), 0,
       6, 0x80000000 | 5, 0x0001510b, uint(1), 0,
      18, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::shortcuts::MidiDeviceMappingModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEMidiDeviceMappingModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEshortcutsSCOPEMidiDeviceMappingModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEMidiDeviceMappingModelENDCLASS_t,
        // property 'useRemoteControl'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selection'
        QtPrivate::TypeAndForceComplete<QItemSelection, std::true_type>,
        // property 'canEditAction'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MidiDeviceMappingModel, std::true_type>,
        // method 'useRemoteControlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'setUseRemoteControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'apply'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSelectedActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearAllActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentAction'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'mapCurrentActionToMidiEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void muse::shortcuts::MidiDeviceMappingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiDeviceMappingModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->useRemoteControlChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 2: _t->setUseRemoteControl((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setSelection((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 4: _t->load(); break;
        case 5: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->reset(); break;
        case 7: _t->clearSelectedActions(); break;
        case 8: _t->clearAllActions(); break;
        case 9: { QVariant _r = _t->currentAction();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->mapCurrentActionToMidiEvent((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MidiDeviceMappingModel::*)(bool );
            if (_t _q_method = &MidiDeviceMappingModel::useRemoteControlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MidiDeviceMappingModel::*)(const QItemSelection & );
            if (_t _q_method = &MidiDeviceMappingModel::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MidiDeviceMappingModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->useRemoteControl(); break;
        case 1: *reinterpret_cast< QItemSelection*>(_v) = _t->selection(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canEditAction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MidiDeviceMappingModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUseRemoteControl(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSelection(*reinterpret_cast< QItemSelection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::shortcuts::MidiDeviceMappingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::shortcuts::MidiDeviceMappingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEMidiDeviceMappingModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int muse::shortcuts::MidiDeviceMappingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void muse::shortcuts::MidiDeviceMappingModel::useRemoteControlChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::shortcuts::MidiDeviceMappingModel::selectionChanged(const QItemSelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
