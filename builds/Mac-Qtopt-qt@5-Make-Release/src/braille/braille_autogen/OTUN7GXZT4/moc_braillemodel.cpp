/****************************************************************************
** Meta object code from reading C++ file 'braillemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/braille/view/braillemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'braillemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__engraving__BrailleModel_t {
    QByteArrayData data[18];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__engraving__BrailleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__engraving__BrailleModel_t qt_meta_stringdata_mu__engraving__BrailleModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::engraving::BrailleModel"
QT_MOC_LITERAL(1, 28, 18), // "brailleInfoChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(4, 70, 18), // "currentItemChanged"
QT_MOC_LITERAL(5, 89, 9), // "keysFired"
QT_MOC_LITERAL(6, 99, 26), // "braillePanelEnabledChanged"
QT_MOC_LITERAL(7, 126, 18), // "brailleModeChanged"
QT_MOC_LITERAL(8, 145, 18), // "cursorColorChanged"
QT_MOC_LITERAL(9, 164, 4), // "load"
QT_MOC_LITERAL(10, 169, 11), // "brailleInfo"
QT_MOC_LITERAL(11, 181, 14), // "cursorPosition"
QT_MOC_LITERAL(12, 196, 24), // "currentItemPositionStart"
QT_MOC_LITERAL(13, 221, 22), // "currentItemPositionEnd"
QT_MOC_LITERAL(14, 244, 4), // "keys"
QT_MOC_LITERAL(15, 249, 7), // "enabled"
QT_MOC_LITERAL(16, 257, 4), // "mode"
QT_MOC_LITERAL(17, 262, 11) // "cursorColor"

    },
    "mu::engraving::BrailleModel\0"
    "brailleInfoChanged\0\0cursorPositionChanged\0"
    "currentItemChanged\0keysFired\0"
    "braillePanelEnabledChanged\0"
    "brailleModeChanged\0cursorColorChanged\0"
    "load\0brailleInfo\0cursorPosition\0"
    "currentItemPositionStart\0"
    "currentItemPositionEnd\0keys\0enabled\0"
    "mode\0cursorColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__engraving__BrailleModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,
       3,
       4,
       5,
       5,

       0        // eod
};

void mu::engraving::BrailleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrailleModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->brailleInfoChanged(); break;
        case 1: _t->cursorPositionChanged(); break;
        case 2: _t->currentItemChanged(); break;
        case 3: _t->keysFired(); break;
        case 4: _t->braillePanelEnabledChanged(); break;
        case 5: _t->brailleModeChanged(); break;
        case 6: _t->cursorColorChanged(); break;
        case 7: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrailleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrailleModel::brailleInfoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrailleModel::cursorPositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrailleModel::currentItemChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrailleModel::keysFired)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrailleModel::braillePanelEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrailleModel::brailleModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrailleModel::cursorColorChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BrailleModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->brailleInfo(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentItemPositionStart(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentItemPositionEnd(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->keys(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->mode(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->cursorColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BrailleModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setKeys(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setMode(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::engraving::BrailleModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__engraving__BrailleModel.data,
    qt_meta_data_mu__engraving__BrailleModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::engraving::BrailleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::BrailleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__engraving__BrailleModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    if (!strcmp(_clname, "actions::Actionable"))
        return static_cast< actions::Actionable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::engraving::BrailleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::engraving::BrailleModel::brailleInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::engraving::BrailleModel::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::engraving::BrailleModel::currentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::engraving::BrailleModel::keysFired()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::engraving::BrailleModel::braillePanelEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::engraving::BrailleModel::brailleModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::engraving::BrailleModel::cursorColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
