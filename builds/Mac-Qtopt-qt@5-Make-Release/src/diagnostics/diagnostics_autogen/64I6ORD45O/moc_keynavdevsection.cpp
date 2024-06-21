/****************************************************************************
** Meta object code from reading C++ file 'keynavdevsection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/diagnostics/view/keynav/keynavdevsection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keynavdevsection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__diagnostics__KeyNavDevSection_t {
    QByteArrayData data[9];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__diagnostics__KeyNavDevSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__diagnostics__KeyNavDevSection_t qt_meta_stringdata_mu__diagnostics__KeyNavDevSection = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::diagnostics::KeyNavDevSec..."
QT_MOC_LITERAL(1, 34, 18), // "subsectionsChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 18), // "panelsCountChanged"
QT_MOC_LITERAL(4, 73, 20), // "controlsCountChanged"
QT_MOC_LITERAL(5, 94, 14), // "setSubsections"
QT_MOC_LITERAL(6, 109, 11), // "subsections"
QT_MOC_LITERAL(7, 121, 11), // "panelsCount"
QT_MOC_LITERAL(8, 133, 13) // "controlsCount"

    },
    "mu::diagnostics::KeyNavDevSection\0"
    "subsectionsChanged\0\0panelsCountChanged\0"
    "controlsCountChanged\0setSubsections\0"
    "subsections\0panelsCount\0controlsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__diagnostics__KeyNavDevSection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    6,

 // properties: name, type, flags
       6, QMetaType::QVariantList, 0x00495001,
       7, QMetaType::Int, 0x00495001,
       8, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::diagnostics::KeyNavDevSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyNavDevSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->subsectionsChanged(); break;
        case 1: _t->panelsCountChanged(); break;
        case 2: _t->controlsCountChanged(); break;
        case 3: _t->setSubsections((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyNavDevSection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyNavDevSection::subsectionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyNavDevSection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyNavDevSection::panelsCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyNavDevSection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyNavDevSection::controlsCountChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KeyNavDevSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->subsections(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->panelsCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->controlsCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::diagnostics::KeyNavDevSection::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractKeyNavDevItem::staticMetaObject>(),
    qt_meta_stringdata_mu__diagnostics__KeyNavDevSection.data,
    qt_meta_data_mu__diagnostics__KeyNavDevSection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::diagnostics::KeyNavDevSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::diagnostics::KeyNavDevSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__diagnostics__KeyNavDevSection.stringdata0))
        return static_cast<void*>(this);
    return AbstractKeyNavDevItem::qt_metacast(_clname);
}

int mu::diagnostics::KeyNavDevSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractKeyNavDevItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void mu::diagnostics::KeyNavDevSection::subsectionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::diagnostics::KeyNavDevSection::panelsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::diagnostics::KeyNavDevSection::controlsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
