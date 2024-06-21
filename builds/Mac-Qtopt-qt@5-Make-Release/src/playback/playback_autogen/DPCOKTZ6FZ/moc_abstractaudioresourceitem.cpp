/****************************************************************************
** Meta object code from reading C++ file 'abstractaudioresourceitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/playback/view/internal/abstractaudioresourceitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractaudioresourceitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__playback__AbstractAudioResourceItem_t {
    QByteArrayData data[18];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__playback__AbstractAudioResourceItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__playback__AbstractAudioResourceItem_t qt_meta_stringdata_mu__playback__AbstractAudioResourceItem = {
    {
QT_MOC_LITERAL(0, 0, 39), // "mu::playback::AbstractAudioRe..."
QT_MOC_LITERAL(1, 40, 12), // "titleChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 14), // "isBlankChanged"
QT_MOC_LITERAL(4, 69, 15), // "isActiveChanged"
QT_MOC_LITERAL(5, 85, 29), // "hasNativeEditorSupportChanged"
QT_MOC_LITERAL(6, 115, 31), // "nativeEditorViewLaunchRequested"
QT_MOC_LITERAL(7, 147, 30), // "nativeEditorViewCloseRequested"
QT_MOC_LITERAL(8, 178, 29), // "availableResourceListResolved"
QT_MOC_LITERAL(9, 208, 9), // "resources"
QT_MOC_LITERAL(10, 218, 25), // "requestAvailableResources"
QT_MOC_LITERAL(11, 244, 31), // "requestToLaunchNativeEditorView"
QT_MOC_LITERAL(12, 276, 14), // "handleMenuItem"
QT_MOC_LITERAL(13, 291, 10), // "menuItemId"
QT_MOC_LITERAL(14, 302, 5), // "title"
QT_MOC_LITERAL(15, 308, 7), // "isBlank"
QT_MOC_LITERAL(16, 316, 8), // "isActive"
QT_MOC_LITERAL(17, 325, 22) // "hasNativeEditorSupport"

    },
    "mu::playback::AbstractAudioResourceItem\0"
    "titleChanged\0\0isBlankChanged\0"
    "isActiveChanged\0hasNativeEditorSupportChanged\0"
    "nativeEditorViewLaunchRequested\0"
    "nativeEditorViewCloseRequested\0"
    "availableResourceListResolved\0resources\0"
    "requestAvailableResources\0"
    "requestToLaunchNativeEditorView\0"
    "handleMenuItem\0menuItemId\0title\0isBlank\0"
    "isActive\0hasNativeEditorSupport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__playback__AbstractAudioResourceItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    1,   70,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   73,    2, 0x02 /* Public */,
      11,    0,   74,    2, 0x02 /* Public */,
      12,    1,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantList,    9,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void mu::playback::AbstractAudioResourceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractAudioResourceItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->isBlankChanged(); break;
        case 2: _t->isActiveChanged(); break;
        case 3: _t->hasNativeEditorSupportChanged(); break;
        case 4: _t->nativeEditorViewLaunchRequested(); break;
        case 5: _t->nativeEditorViewCloseRequested(); break;
        case 6: _t->availableResourceListResolved((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 7: _t->requestAvailableResources(); break;
        case 8: _t->requestToLaunchNativeEditorView(); break;
        case 9: _t->handleMenuItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractAudioResourceItem::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractAudioResourceItem::isBlankChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractAudioResourceItem::isActiveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractAudioResourceItem::hasNativeEditorSupportChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractAudioResourceItem::nativeEditorViewLaunchRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractAudioResourceItem::nativeEditorViewCloseRequested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)(const QVariantList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractAudioResourceItem::availableResourceListResolved)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractAudioResourceItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isBlank(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasNativeEditorSupport(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::playback::AbstractAudioResourceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__playback__AbstractAudioResourceItem.data,
    qt_meta_data_mu__playback__AbstractAudioResourceItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::playback::AbstractAudioResourceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::AbstractAudioResourceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__playback__AbstractAudioResourceItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::playback::AbstractAudioResourceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void mu::playback::AbstractAudioResourceItem::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::playback::AbstractAudioResourceItem::isBlankChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::playback::AbstractAudioResourceItem::isActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::playback::AbstractAudioResourceItem::hasNativeEditorSupportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::playback::AbstractAudioResourceItem::nativeEditorViewLaunchRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::playback::AbstractAudioResourceItem::nativeEditorViewCloseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::playback::AbstractAudioResourceItem::availableResourceListResolved(const QVariantList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
