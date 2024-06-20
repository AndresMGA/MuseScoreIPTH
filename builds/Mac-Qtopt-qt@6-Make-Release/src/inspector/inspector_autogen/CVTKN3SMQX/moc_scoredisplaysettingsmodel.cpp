/****************************************************************************
** Meta object code from reading C++ file 'scoredisplaysettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/score/scoredisplaysettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoredisplaysettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__ScoreSettingsModel_t {
    QByteArrayData data[17];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__ScoreSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__ScoreSettingsModel_t qt_meta_stringdata_mu__inspector__ScoreSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::inspector::ScoreSettingsM..."
QT_MOC_LITERAL(1, 34, 26), // "shouldShowInvisibleChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 19), // "shouldShowInvisible"
QT_MOC_LITERAL(4, 82, 27), // "shouldShowFormattingChanged"
QT_MOC_LITERAL(5, 110, 20), // "shouldShowFormatting"
QT_MOC_LITERAL(6, 131, 23), // "shouldShowFramesChanged"
QT_MOC_LITERAL(7, 155, 16), // "shouldShowFrames"
QT_MOC_LITERAL(8, 172, 28), // "shouldShowPageMarginsChanged"
QT_MOC_LITERAL(9, 201, 21), // "shouldShowPageMargins"
QT_MOC_LITERAL(10, 223, 27), // "shouldShowSoundFlagsChanged"
QT_MOC_LITERAL(11, 251, 20), // "shouldShowSoundFlags"
QT_MOC_LITERAL(12, 272, 22), // "setShouldShowInvisible"
QT_MOC_LITERAL(13, 295, 23), // "setShouldShowFormatting"
QT_MOC_LITERAL(14, 319, 19), // "setShouldShowFrames"
QT_MOC_LITERAL(15, 339, 24), // "setShouldShowPageMargins"
QT_MOC_LITERAL(16, 364, 23) // "setShouldShowSoundFlags"

    },
    "mu::inspector::ScoreSettingsModel\0"
    "shouldShowInvisibleChanged\0\0"
    "shouldShowInvisible\0shouldShowFormattingChanged\0"
    "shouldShowFormatting\0shouldShowFramesChanged\0"
    "shouldShowFrames\0shouldShowPageMarginsChanged\0"
    "shouldShowPageMargins\0shouldShowSoundFlagsChanged\0"
    "shouldShowSoundFlags\0setShouldShowInvisible\0"
    "setShouldShowFormatting\0setShouldShowFrames\0"
    "setShouldShowPageMargins\0"
    "setShouldShowSoundFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__ScoreSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void mu::inspector::ScoreSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScoreSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shouldShowInvisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->shouldShowFormattingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->shouldShowFramesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->shouldShowPageMarginsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->shouldShowSoundFlagsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setShouldShowInvisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setShouldShowFormatting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setShouldShowFrames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setShouldShowPageMargins((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setShouldShowSoundFlags((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScoreSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreSettingsModel::shouldShowInvisibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScoreSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreSettingsModel::shouldShowFormattingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScoreSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreSettingsModel::shouldShowFramesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScoreSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreSettingsModel::shouldShowPageMarginsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScoreSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreSettingsModel::shouldShowSoundFlagsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScoreSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->shouldShowInvisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->shouldShowFormatting(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->shouldShowFrames(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->shouldShowPageMargins(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->shouldShowSoundFlags(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScoreSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShouldShowInvisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShouldShowFormatting(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShouldShowFrames(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setShouldShowPageMargins(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShouldShowSoundFlags(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::ScoreSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__ScoreSettingsModel.data,
    qt_meta_data_mu__inspector__ScoreSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::ScoreSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::ScoreSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__ScoreSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::ScoreSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::inspector::ScoreSettingsModel::shouldShowInvisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::ScoreSettingsModel::shouldShowFormattingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::ScoreSettingsModel::shouldShowFramesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::ScoreSettingsModel::shouldShowPageMarginsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::inspector::ScoreSettingsModel::shouldShowSoundFlagsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
