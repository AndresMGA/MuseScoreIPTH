/****************************************************************************
** Meta object code from reading C++ file 'mididevicemappingmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/shortcuts/view/mididevicemappingmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mididevicemappingmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__shortcuts__MidiDeviceMappingModel_t {
    QByteArrayData data[19];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__shortcuts__MidiDeviceMappingModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__shortcuts__MidiDeviceMappingModel_t qt_meta_stringdata_mu__shortcuts__MidiDeviceMappingModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::shortcuts::MidiDeviceMapp..."
QT_MOC_LITERAL(1, 38, 23), // "useRemoteControlChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 5), // "value"
QT_MOC_LITERAL(4, 69, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 86, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 101, 9), // "selection"
QT_MOC_LITERAL(7, 111, 19), // "setUseRemoteControl"
QT_MOC_LITERAL(8, 131, 12), // "setSelection"
QT_MOC_LITERAL(9, 144, 4), // "load"
QT_MOC_LITERAL(10, 149, 5), // "apply"
QT_MOC_LITERAL(11, 155, 5), // "reset"
QT_MOC_LITERAL(12, 161, 20), // "clearSelectedActions"
QT_MOC_LITERAL(13, 182, 15), // "clearAllActions"
QT_MOC_LITERAL(14, 198, 13), // "currentAction"
QT_MOC_LITERAL(15, 212, 27), // "mapCurrentActionToMidiEvent"
QT_MOC_LITERAL(16, 240, 5), // "event"
QT_MOC_LITERAL(17, 246, 16), // "useRemoteControl"
QT_MOC_LITERAL(18, 263, 13) // "canEditAction"

    },
    "mu::shortcuts::MidiDeviceMappingModel\0"
    "useRemoteControlChanged\0\0value\0"
    "selectionChanged\0QItemSelection\0"
    "selection\0setUseRemoteControl\0"
    "setSelection\0load\0apply\0reset\0"
    "clearSelectedActions\0clearAllActions\0"
    "currentAction\0mapCurrentActionToMidiEvent\0"
    "event\0useRemoteControl\0canEditAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__shortcuts__MidiDeviceMappingModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   75,    2, 0x0a /* Public */,
       8,    1,   78,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   81,    2, 0x02 /* Public */,
      10,    0,   82,    2, 0x02 /* Public */,
      11,    0,   83,    2, 0x02 /* Public */,
      12,    0,   84,    2, 0x02 /* Public */,
      13,    0,   85,    2, 0x02 /* Public */,
      14,    0,   86,    2, 0x02 /* Public */,
      15,    1,   87,    2, 0x02 /* Public */,

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
      17, QMetaType::Bool, 0x00495103,
       6, 0x80000000 | 5, 0x0049510b,
      18, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       1,

       0        // eod
};

void mu::shortcuts::MidiDeviceMappingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiDeviceMappingModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->useRemoteControlChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 2: _t->setUseRemoteControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 4: _t->load(); break;
        case 5: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->reset(); break;
        case 7: _t->clearSelectedActions(); break;
        case 8: _t->clearAllActions(); break;
        case 9: { QVariant _r = _t->currentAction();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->mapCurrentActionToMidiEvent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MidiDeviceMappingModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MidiDeviceMappingModel::useRemoteControlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MidiDeviceMappingModel::*)(const QItemSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MidiDeviceMappingModel::selectionChanged)) {
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
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::shortcuts::MidiDeviceMappingModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_mu__shortcuts__MidiDeviceMappingModel.data,
    qt_meta_data_mu__shortcuts__MidiDeviceMappingModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::shortcuts::MidiDeviceMappingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::shortcuts::MidiDeviceMappingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__shortcuts__MidiDeviceMappingModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::shortcuts::MidiDeviceMappingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mu::shortcuts::MidiDeviceMappingModel::useRemoteControlChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::shortcuts::MidiDeviceMappingModel::selectionChanged(const QItemSelection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
