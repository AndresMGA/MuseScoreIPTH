/****************************************************************************
** Meta object code from reading C++ file 'editshortcutmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/shortcuts/view/editshortcutmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editshortcutmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__shortcuts__EditShortcutModel_t {
    QByteArrayData data[17];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__shortcuts__EditShortcutModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__shortcuts__EditShortcutModel_t qt_meta_stringdata_mu__shortcuts__EditShortcutModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::shortcuts::EditShortcutModel"
QT_MOC_LITERAL(1, 33, 21), // "originSequenceChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 18), // "newSequenceChanged"
QT_MOC_LITERAL(4, 75, 25), // "applyNewSequenceRequested"
QT_MOC_LITERAL(5, 101, 11), // "newSequence"
QT_MOC_LITERAL(6, 113, 21), // "conflictShortcutIndex"
QT_MOC_LITERAL(7, 135, 4), // "load"
QT_MOC_LITERAL(8, 140, 8), // "shortcut"
QT_MOC_LITERAL(9, 149, 12), // "allShortcuts"
QT_MOC_LITERAL(10, 162, 8), // "inputKey"
QT_MOC_LITERAL(11, 171, 3), // "key"
QT_MOC_LITERAL(12, 175, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(13, 197, 9), // "modifiers"
QT_MOC_LITERAL(14, 207, 16), // "applyNewSequence"
QT_MOC_LITERAL(15, 224, 14), // "originSequence"
QT_MOC_LITERAL(16, 239, 15) // "conflictWarning"

    },
    "mu::shortcuts::EditShortcutModel\0"
    "originSequenceChanged\0\0newSequenceChanged\0"
    "applyNewSequenceRequested\0newSequence\0"
    "conflictShortcutIndex\0load\0shortcut\0"
    "allShortcuts\0inputKey\0key\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "applyNewSequence\0originSequence\0"
    "conflictWarning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__shortcuts__EditShortcutModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    2,   51,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x26 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   59,    2, 0x02 /* Public */,
      10,    2,   64,    2, 0x02 /* Public */,
      14,    0,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariantList,    8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00495001,
       5, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       1,

       0        // eod
};

void mu::shortcuts::EditShortcutModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditShortcutModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->originSequenceChanged(); break;
        case 1: _t->newSequenceChanged(); break;
        case 2: _t->applyNewSequenceRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->applyNewSequenceRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->load((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 5: _t->inputKey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 6: _t->applyNewSequence(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditShortcutModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditShortcutModel::originSequenceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditShortcutModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditShortcutModel::newSequenceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EditShortcutModel::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditShortcutModel::applyNewSequenceRequested)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EditShortcutModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->originSequenceInNativeFormat(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->newSequenceInNativeFormat(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->conflictWarning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::shortcuts::EditShortcutModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__shortcuts__EditShortcutModel.data,
    qt_meta_data_mu__shortcuts__EditShortcutModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::shortcuts::EditShortcutModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::shortcuts::EditShortcutModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__shortcuts__EditShortcutModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::shortcuts::EditShortcutModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void mu::shortcuts::EditShortcutModel::originSequenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::shortcuts::EditShortcutModel::newSequenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::shortcuts::EditShortcutModel::applyNewSequenceRequested(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
