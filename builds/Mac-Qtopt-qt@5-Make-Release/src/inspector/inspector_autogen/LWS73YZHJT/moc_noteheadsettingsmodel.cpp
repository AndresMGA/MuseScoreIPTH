/****************************************************************************
** Meta object code from reading C++ file 'noteheadsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/notes/noteheads/noteheadsettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteheadsettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__NoteheadSettingsModel_t {
    QByteArrayData data[17];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__NoteheadSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__NoteheadSettingsModel_t qt_meta_stringdata_mu__inspector__NoteheadSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "mu::inspector::NoteheadSettin..."
QT_MOC_LITERAL(1, 37, 21), // "isTrillCueNoteChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 14), // "isTrillCueNote"
QT_MOC_LITERAL(4, 75, 17), // "setIsTrillCueNote"
QT_MOC_LITERAL(5, 93, 1), // "v"
QT_MOC_LITERAL(6, 95, 23), // "possibleHeadSystemTypes"
QT_MOC_LITERAL(7, 119, 12), // "isHeadHidden"
QT_MOC_LITERAL(8, 132, 13), // "PropertyItem*"
QT_MOC_LITERAL(9, 146, 11), // "isHeadSmall"
QT_MOC_LITERAL(10, 158, 18), // "hasHeadParentheses"
QT_MOC_LITERAL(11, 177, 13), // "headDirection"
QT_MOC_LITERAL(12, 191, 9), // "headGroup"
QT_MOC_LITERAL(13, 201, 8), // "headType"
QT_MOC_LITERAL(14, 210, 10), // "headSystem"
QT_MOC_LITERAL(15, 221, 11), // "dotPosition"
QT_MOC_LITERAL(16, 233, 6) // "offset"

    },
    "mu::inspector::NoteheadSettingsModel\0"
    "isTrillCueNoteChanged\0\0isTrillCueNote\0"
    "setIsTrillCueNote\0v\0possibleHeadSystemTypes\0"
    "isHeadHidden\0PropertyItem*\0isHeadSmall\0"
    "hasHeadParentheses\0headDirection\0"
    "headGroup\0headType\0headSystem\0dotPosition\0"
    "offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__NoteheadSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      10,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,

 // methods: parameters
    QMetaType::QVariantList,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00095409,
       9, 0x80000000 | 8, 0x00095409,
      10, 0x80000000 | 8, 0x00095409,
      11, 0x80000000 | 8, 0x00095409,
      12, 0x80000000 | 8, 0x00095409,
      13, 0x80000000 | 8, 0x00095409,
      14, 0x80000000 | 8, 0x00095409,
      15, 0x80000000 | 8, 0x00095409,
      16, 0x80000000 | 8, 0x00095409,
       3, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void mu::inspector::NoteheadSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteheadSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isTrillCueNoteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setIsTrillCueNote((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { QVariantList _r = _t->possibleHeadSystemTypes();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteheadSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteheadSettingsModel::isTrillCueNoteChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NoteheadSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->isHeadHidden(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->isHeadSmall(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->hasHeadParentheses(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->headDirection(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->headGroup(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->headType(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->headSystem(); break;
        case 7: *reinterpret_cast< PropertyItem**>(_v) = _t->dotPosition(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->offset(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isTrillCueNote(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::NoteheadSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__NoteheadSettingsModel.data,
    qt_meta_data_mu__inspector__NoteheadSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::NoteheadSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::NoteheadSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__NoteheadSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::NoteheadSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
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
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::inspector::NoteheadSettingsModel::isTrillCueNoteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE