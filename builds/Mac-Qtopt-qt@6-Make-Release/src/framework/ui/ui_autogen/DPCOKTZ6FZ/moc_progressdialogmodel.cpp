/****************************************************************************
** Meta object code from reading C++ file 'progressdialogmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/internal/progressdialogmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progressdialogmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__ProgressDialogModel_t {
    QByteArrayData data[14];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__ProgressDialogModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__ProgressDialogModel_t qt_meta_stringdata_mu__ui__ProgressDialogModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::ui::ProgressDialogModel"
QT_MOC_LITERAL(1, 28, 11), // "fromChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "valueChanged"
QT_MOC_LITERAL(4, 54, 9), // "toChanged"
QT_MOC_LITERAL(5, 64, 20), // "statusMessageChanged"
QT_MOC_LITERAL(6, 85, 8), // "finished"
QT_MOC_LITERAL(7, 94, 4), // "load"
QT_MOC_LITERAL(8, 99, 11), // "progressObj"
QT_MOC_LITERAL(9, 111, 6), // "cancel"
QT_MOC_LITERAL(10, 118, 4), // "from"
QT_MOC_LITERAL(11, 123, 5), // "value"
QT_MOC_LITERAL(12, 129, 2), // "to"
QT_MOC_LITERAL(13, 132, 13) // "statusMessage"

    },
    "mu::ui::ProgressDialogModel\0fromChanged\0"
    "\0valueChanged\0toChanged\0statusMessageChanged\0"
    "finished\0load\0progressObj\0cancel\0from\0"
    "value\0to\0statusMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__ProgressDialogModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x02 /* Public */,
       9,    0,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariant,    8,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495001,
      11, QMetaType::Int, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void mu::ui::ProgressDialogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressDialogModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fromChanged(); break;
        case 1: _t->valueChanged(); break;
        case 2: _t->toChanged(); break;
        case 3: _t->statusMessageChanged(); break;
        case 4: _t->finished(); break;
        case 5: _t->load((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 6: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProgressDialogModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProgressDialogModel::fromChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProgressDialogModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProgressDialogModel::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProgressDialogModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProgressDialogModel::toChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProgressDialogModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProgressDialogModel::statusMessageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProgressDialogModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProgressDialogModel::finished)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ProgressDialogModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->to(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->statusMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::ProgressDialogModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__ProgressDialogModel.data,
    qt_meta_data_mu__ui__ProgressDialogModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::ProgressDialogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::ProgressDialogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__ProgressDialogModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::ProgressDialogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::ui::ProgressDialogModel::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::ui::ProgressDialogModel::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::ui::ProgressDialogModel::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::ui::ProgressDialogModel::statusMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::ui::ProgressDialogModel::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
