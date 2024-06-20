/****************************************************************************
** Meta object code from reading C++ file 'abstractaudioresourceitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/playback/view/internal/abstractaudioresourceitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractaudioresourceitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEAbstractAudioResourceItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEAbstractAudioResourceItemENDCLASS = QtMocHelpers::stringData(
    "mu::playback::AbstractAudioResourceItem",
    "titleChanged",
    "",
    "isBlankChanged",
    "isActiveChanged",
    "hasNativeEditorSupportChanged",
    "nativeEditorViewLaunchRequested",
    "nativeEditorViewCloseRequested",
    "availableResourceListResolved",
    "resources",
    "requestAvailableResources",
    "requestToLaunchNativeEditorView",
    "handleMenuItem",
    "menuItemId",
    "title",
    "isBlank",
    "isActive",
    "hasNativeEditorSupport"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEplaybackSCOPEAbstractAudioResourceItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    5 /* Public */,
       3,    0,   75,    2, 0x06,    6 /* Public */,
       4,    0,   76,    2, 0x06,    7 /* Public */,
       5,    0,   77,    2, 0x06,    8 /* Public */,
       6,    0,   78,    2, 0x06,    9 /* Public */,
       7,    0,   79,    2, 0x06,   10 /* Public */,
       8,    1,   80,    2, 0x06,   11 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   83,    2, 0x02,   13 /* Public */,
      11,    0,   84,    2, 0x02,   14 /* Public */,
      12,    1,   85,    2, 0x02,   15 /* Public */,

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
      14, QMetaType::QString, 0x00015001, uint(0), 0,
      15, QMetaType::Bool, 0x00015001, uint(1), 0,
      16, QMetaType::Bool, 0x00015001, uint(2), 0,
      17, QMetaType::Bool, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::playback::AbstractAudioResourceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEAbstractAudioResourceItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEplaybackSCOPEAbstractAudioResourceItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEAbstractAudioResourceItemENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isBlank'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasNativeEditorSupport'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractAudioResourceItem, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isBlankChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hasNativeEditorSupportChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nativeEditorViewLaunchRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nativeEditorViewCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'availableResourceListResolved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'requestAvailableResources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestToLaunchNativeEditorView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleMenuItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

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
        case 6: _t->availableResourceListResolved((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 7: _t->requestAvailableResources(); break;
        case 8: _t->requestToLaunchNativeEditorView(); break;
        case 9: _t->handleMenuItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (_t _q_method = &AbstractAudioResourceItem::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (_t _q_method = &AbstractAudioResourceItem::isBlankChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (_t _q_method = &AbstractAudioResourceItem::isActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (_t _q_method = &AbstractAudioResourceItem::hasNativeEditorSupportChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (_t _q_method = &AbstractAudioResourceItem::nativeEditorViewLaunchRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)();
            if (_t _q_method = &AbstractAudioResourceItem::nativeEditorViewCloseRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AbstractAudioResourceItem::*)(const QVariantList & );
            if (_t _q_method = &AbstractAudioResourceItem::availableResourceListResolved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::playback::AbstractAudioResourceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::playback::AbstractAudioResourceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEplaybackSCOPEAbstractAudioResourceItemENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
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
