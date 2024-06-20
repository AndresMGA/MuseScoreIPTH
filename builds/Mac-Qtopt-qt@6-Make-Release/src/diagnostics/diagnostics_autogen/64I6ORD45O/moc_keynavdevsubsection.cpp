/****************************************************************************
** Meta object code from reading C++ file 'keynavdevsubsection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/diagnostics/view/keynav/keynavdevsubsection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keynavdevsubsection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__diagnostics__KeyNavDevSubSection_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__diagnostics__KeyNavDevSubSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__diagnostics__KeyNavDevSubSection_t qt_meta_stringdata_mu__diagnostics__KeyNavDevSubSection = {
    {
QT_MOC_LITERAL(0, 0, 36), // "mu::diagnostics::KeyNavDevSub..."
QT_MOC_LITERAL(1, 37, 15), // "controlsChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 20), // "controlsCountChanged"
QT_MOC_LITERAL(4, 75, 11), // "setControls"
QT_MOC_LITERAL(5, 87, 8), // "controls"
QT_MOC_LITERAL(6, 96, 9), // "direction"
QT_MOC_LITERAL(7, 106, 13) // "controlsCount"

    },
    "mu::diagnostics::KeyNavDevSubSection\0"
    "controlsChanged\0\0controlsCountChanged\0"
    "setControls\0controls\0direction\0"
    "controlsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__diagnostics__KeyNavDevSubSection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095401,
       5, QMetaType::QVariantList, 0x00495001,
       7, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void mu::diagnostics::KeyNavDevSubSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyNavDevSubSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->controlsChanged(); break;
        case 1: _t->controlsCountChanged(); break;
        case 2: _t->setControls((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyNavDevSubSection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyNavDevSubSection::controlsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyNavDevSubSection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyNavDevSubSection::controlsCountChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KeyNavDevSubSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->controls(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->controlsCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::diagnostics::KeyNavDevSubSection::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractKeyNavDevItem::staticMetaObject>(),
    qt_meta_stringdata_mu__diagnostics__KeyNavDevSubSection.data,
    qt_meta_data_mu__diagnostics__KeyNavDevSubSection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::diagnostics::KeyNavDevSubSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::diagnostics::KeyNavDevSubSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__diagnostics__KeyNavDevSubSection.stringdata0))
        return static_cast<void*>(this);
    return AbstractKeyNavDevItem::qt_metacast(_clname);
}

int mu::diagnostics::KeyNavDevSubSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractKeyNavDevItem::qt_metacall(_c, _id, _a);
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
void mu::diagnostics::KeyNavDevSubSection::controlsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::diagnostics::KeyNavDevSubSection::controlsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
