/****************************************************************************
** Meta object code from reading C++ file 'scoreappearancesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/score/scoreappearancesettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scoreappearancesettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__ScoreAppearanceSettingsModel_t {
    QByteArrayData data[10];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__ScoreAppearanceSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__ScoreAppearanceSettingsModel_t qt_meta_stringdata_mu__inspector__ScoreAppearanceSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 43), // "mu::inspector::ScoreAppearanc..."
QT_MOC_LITERAL(1, 44, 22), // "hideEmptyStavesChanged"
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 39), // "dontHideEmptyStavesInFirstSys..."
QT_MOC_LITERAL(4, 108, 42), // "showBracketsWhenSpanningSingl..."
QT_MOC_LITERAL(5, 151, 16), // "showPageSettings"
QT_MOC_LITERAL(6, 168, 17), // "showStyleSettings"
QT_MOC_LITERAL(7, 186, 15), // "hideEmptyStaves"
QT_MOC_LITERAL(8, 202, 32), // "dontHideEmptyStavesInFirstSystem"
QT_MOC_LITERAL(9, 235, 35) // "showBracketsWhenSpanningSingl..."

    },
    "mu::inspector::ScoreAppearanceSettingsModel\0"
    "hideEmptyStavesChanged\0\0"
    "dontHideEmptyStavesInFirstSystemChanged\0"
    "showBracketsWhenSpanningSingleStaffChanged\0"
    "showPageSettings\0showStyleSettings\0"
    "hideEmptyStaves\0dontHideEmptyStavesInFirstSystem\0"
    "showBracketsWhenSpanningSingleStaff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__ScoreAppearanceSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x02 /* Public */,
       6,    0,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void mu::inspector::ScoreAppearanceSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScoreAppearanceSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hideEmptyStavesChanged(); break;
        case 1: _t->dontHideEmptyStavesInFirstSystemChanged(); break;
        case 2: _t->showBracketsWhenSpanningSingleStaffChanged(); break;
        case 3: _t->showPageSettings(); break;
        case 4: _t->showStyleSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScoreAppearanceSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreAppearanceSettingsModel::hideEmptyStavesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScoreAppearanceSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreAppearanceSettingsModel::dontHideEmptyStavesInFirstSystemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScoreAppearanceSettingsModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScoreAppearanceSettingsModel::showBracketsWhenSpanningSingleStaffChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScoreAppearanceSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hideEmptyStaves(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dontHideEmptyStavesInFirstSystem(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showBracketsWhenSpanningSingleStaff(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScoreAppearanceSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHideEmptyStaves(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDontHideEmptyStavesInFirstSystem(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowBracketsWhenSpanningSingleStaff(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::ScoreAppearanceSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__ScoreAppearanceSettingsModel.data,
    qt_meta_data_mu__inspector__ScoreAppearanceSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::ScoreAppearanceSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::ScoreAppearanceSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__ScoreAppearanceSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::ScoreAppearanceSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void mu::inspector::ScoreAppearanceSettingsModel::hideEmptyStavesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::ScoreAppearanceSettingsModel::dontHideEmptyStavesInFirstSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::inspector::ScoreAppearanceSettingsModel::showBracketsWhenSpanningSingleStaffChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
