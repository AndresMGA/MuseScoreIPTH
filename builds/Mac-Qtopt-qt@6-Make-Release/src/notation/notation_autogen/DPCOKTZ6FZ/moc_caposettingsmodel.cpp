/****************************************************************************
** Meta object code from reading C++ file 'caposettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/internal/caposettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caposettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__CapoSettingsModel_t {
    QByteArrayData data[29];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__CapoSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__CapoSettingsModel_t qt_meta_stringdata_mu__notation__CapoSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "mu::notation::CapoSettingsModel"
QT_MOC_LITERAL(1, 32, 15), // "capoIsOnChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "isOn"
QT_MOC_LITERAL(4, 54, 19), // "fretPositionChanged"
QT_MOC_LITERAL(5, 74, 8), // "position"
QT_MOC_LITERAL(6, 83, 14), // "stringsChanged"
QT_MOC_LITERAL(7, 98, 18), // "QList<StringItem*>"
QT_MOC_LITERAL(8, 117, 7), // "strings"
QT_MOC_LITERAL(9, 125, 20), // "capoPlacementChanged"
QT_MOC_LITERAL(10, 146, 9), // "placement"
QT_MOC_LITERAL(11, 156, 30), // "capoTextSpecifiedByUserChanged"
QT_MOC_LITERAL(12, 187, 5), // "value"
QT_MOC_LITERAL(13, 193, 19), // "userCapoTextChanged"
QT_MOC_LITERAL(14, 213, 4), // "text"
QT_MOC_LITERAL(15, 218, 11), // "setCapoIsOn"
QT_MOC_LITERAL(16, 230, 15), // "setFretPosition"
QT_MOC_LITERAL(17, 246, 16), // "setCapoPlacement"
QT_MOC_LITERAL(18, 263, 26), // "setCapoTextSpecifiedByUser"
QT_MOC_LITERAL(19, 290, 15), // "setUserCapoText"
QT_MOC_LITERAL(20, 306, 4), // "init"
QT_MOC_LITERAL(21, 311, 19), // "toggleCapoForString"
QT_MOC_LITERAL(22, 331, 11), // "stringIndex"
QT_MOC_LITERAL(23, 343, 22), // "possibleCapoPlacements"
QT_MOC_LITERAL(24, 366, 8), // "capoIsOn"
QT_MOC_LITERAL(25, 375, 12), // "fretPosition"
QT_MOC_LITERAL(26, 388, 13), // "capoPlacement"
QT_MOC_LITERAL(27, 402, 23), // "capoTextSpecifiedByUser"
QT_MOC_LITERAL(28, 426, 12) // "userCapoText"

    },
    "mu::notation::CapoSettingsModel\0"
    "capoIsOnChanged\0\0isOn\0fretPositionChanged\0"
    "position\0stringsChanged\0QList<StringItem*>\0"
    "strings\0capoPlacementChanged\0placement\0"
    "capoTextSpecifiedByUserChanged\0value\0"
    "userCapoTextChanged\0text\0setCapoIsOn\0"
    "setFretPosition\0setCapoPlacement\0"
    "setCapoTextSpecifiedByUser\0setUserCapoText\0"
    "init\0toggleCapoForString\0stringIndex\0"
    "possibleCapoPlacements\0capoIsOn\0"
    "fretPosition\0capoPlacement\0"
    "capoTextSpecifiedByUser\0userCapoText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__CapoSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       6,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       9,    1,   93,    2, 0x06 /* Public */,
      11,    1,   96,    2, 0x06 /* Public */,
      13,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  102,    2, 0x0a /* Public */,
      16,    1,  105,    2, 0x0a /* Public */,
      17,    1,  108,    2, 0x0a /* Public */,
      18,    1,  111,    2, 0x0a /* Public */,
      19,    1,  114,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    0,  117,    2, 0x02 /* Public */,
      21,    1,  118,    2, 0x02 /* Public */,
      23,    0,  121,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::QVariantList,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00495103,
      25, QMetaType::Int, 0x00495103,
       8, 0x80000000 | 7, 0x00495009,
      26, QMetaType::Int, 0x00495103,
      27, QMetaType::Bool, 0x00495103,
      28, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void mu::notation::CapoSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CapoSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->capoIsOnChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fretPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stringsChanged((*reinterpret_cast< QList<StringItem*>(*)>(_a[1]))); break;
        case 3: _t->capoPlacementChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->capoTextSpecifiedByUserChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->userCapoTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setCapoIsOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFretPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setCapoPlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setCapoTextSpecifiedByUser((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setUserCapoText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->init(); break;
        case 12: _t->toggleCapoForString((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { QVariantList _r = _t->possibleCapoPlacements();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<StringItem*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CapoSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CapoSettingsModel::capoIsOnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CapoSettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CapoSettingsModel::fretPositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CapoSettingsModel::*)(QList<StringItem*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CapoSettingsModel::stringsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CapoSettingsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CapoSettingsModel::capoPlacementChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CapoSettingsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CapoSettingsModel::capoTextSpecifiedByUserChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CapoSettingsModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CapoSettingsModel::userCapoTextChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<StringItem*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CapoSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->capoIsOn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->fretPosition(); break;
        case 2: *reinterpret_cast< QList<StringItem*>*>(_v) = _t->strings(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->capoPlacement(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->capoTextSpecifiedByUser(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->userCapoText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CapoSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCapoIsOn(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFretPosition(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCapoPlacement(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setCapoTextSpecifiedByUser(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setUserCapoText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::CapoSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractElementPopupModel::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__CapoSettingsModel.data,
    qt_meta_data_mu__notation__CapoSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::CapoSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::CapoSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__CapoSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractElementPopupModel::qt_metacast(_clname);
}

int mu::notation::CapoSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractElementPopupModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::notation::CapoSettingsModel::capoIsOnChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::notation::CapoSettingsModel::fretPositionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::notation::CapoSettingsModel::stringsChanged(QList<StringItem*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::notation::CapoSettingsModel::capoPlacementChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::notation::CapoSettingsModel::capoTextSpecifiedByUserChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::notation::CapoSettingsModel::userCapoTextChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_mu__notation__StringItem_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__StringItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__StringItem_t qt_meta_stringdata_mu__notation__StringItem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::notation::StringItem"
QT_MOC_LITERAL(1, 25, 16), // "applyCapoChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "apply"
QT_MOC_LITERAL(4, 49, 9) // "applyCapo"

    },
    "mu::notation::StringItem\0applyCapoChanged\0"
    "\0apply\0applyCapo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__StringItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::notation::StringItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StringItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->applyCapoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StringItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StringItem::applyCapoChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StringItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->applyCapo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::StringItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__StringItem.data,
    qt_meta_data_mu__notation__StringItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::StringItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::StringItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__StringItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::notation::StringItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::notation::StringItem::applyCapoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
