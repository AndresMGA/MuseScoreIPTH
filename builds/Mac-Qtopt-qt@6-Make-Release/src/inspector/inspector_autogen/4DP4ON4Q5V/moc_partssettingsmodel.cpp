/****************************************************************************
** Meta object code from reading C++ file 'partssettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/parts/partssettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partssettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__PartsSettingsModel_t {
    QByteArrayData data[16];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__PartsSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__PartsSettingsModel_t qt_meta_stringdata_mu__inspector__PartsSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::inspector::PartsSettingsM..."
QT_MOC_LITERAL(1, 34, 28), // "showPartLinkingOptionChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 15), // "showPartsOption"
QT_MOC_LITERAL(4, 80, 24), // "showExcludeOptionChanged"
QT_MOC_LITERAL(5, 105, 13), // "excludeOption"
QT_MOC_LITERAL(6, 119, 28), // "showTextLinkingOptionChanged"
QT_MOC_LITERAL(7, 148, 12), // "showTextLink"
QT_MOC_LITERAL(8, 161, 22), // "positionLinkedToMaster"
QT_MOC_LITERAL(9, 184, 13), // "PropertyItem*"
QT_MOC_LITERAL(10, 198, 24), // "appearanceLinkedToMaster"
QT_MOC_LITERAL(11, 223, 18), // "textLinkedToMaster"
QT_MOC_LITERAL(12, 242, 21), // "excludeFromOtherParts"
QT_MOC_LITERAL(13, 264, 21), // "showPartLinkingOption"
QT_MOC_LITERAL(14, 286, 17), // "showExcludeOption"
QT_MOC_LITERAL(15, 304, 21) // "showTextLinkingOption"

    },
    "mu::inspector::PartsSettingsModel\0"
    "showPartLinkingOptionChanged\0\0"
    "showPartsOption\0showExcludeOptionChanged\0"
    "excludeOption\0showTextLinkingOptionChanged\0"
    "showTextLink\0positionLinkedToMaster\0"
    "PropertyItem*\0appearanceLinkedToMaster\0"
    "textLinkedToMaster\0excludeFromOtherParts\0"
    "showPartLinkingOption\0showExcludeOption\0"
    "showTextLinkingOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__PartsSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 9, 0x00095409,
      11, 0x80000000 | 9, 0x00095409,
      12, 0x80000000 | 9, 0x00095409,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,
       2,

       0        // eod
};

void mu::inspector::PartsSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartsSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showPartLinkingOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showExcludeOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showTextLinkingOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PartsSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartsSettingsModel::showPartLinkingOptionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PartsSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartsSettingsModel::showExcludeOptionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PartsSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartsSettingsModel::showTextLinkingOptionChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PartsSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->positionLinkedToMaster(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->appearanceLinkedToMaster(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->textLinkedToMaster(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->excludeFromOtherParts(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showPartLinkingOption(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showExcludeOption(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showTextLinkingOption(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::PartsSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__PartsSettingsModel.data,
    qt_meta_data_mu__inspector__PartsSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::PartsSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::PartsSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__PartsSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::PartsSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::inspector::PartsSettingsModel::showPartLinkingOptionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::inspector::PartsSettingsModel::showExcludeOptionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::PartsSettingsModel::showTextLinkingOptionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
