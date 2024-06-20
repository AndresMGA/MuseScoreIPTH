/****************************************************************************
** Meta object code from reading C++ file 'shortcutsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/shortcuts/view/shortcutsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEShortcutsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEShortcutsModelENDCLASS = QtMocHelpers::stringData(
    "muse::shortcuts::ShortcutsModel",
    "selectionChanged",
    "",
    "setSelection",
    "QItemSelection",
    "selection",
    "load",
    "apply",
    "reset",
    "importShortcutsFromFile",
    "exportShortcutsToFile",
    "applySequenceToCurrentShortcut",
    "newSequence",
    "conflictShortcutIndex",
    "clearSelectedShortcuts",
    "resetToDefaultSelectedShortcuts",
    "shortcuts",
    "currentShortcut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEshortcutsSCOPEShortcutsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   87,    2, 0x0a,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   90,    2, 0x02,    6 /* Public */,
       7,    0,   91,    2, 0x02,    7 /* Public */,
       8,    0,   92,    2, 0x02,    8 /* Public */,
       9,    0,   93,    2, 0x02,    9 /* Public */,
      10,    0,   94,    2, 0x02,   10 /* Public */,
      11,    2,   95,    2, 0x02,   11 /* Public */,
      11,    1,  100,    2, 0x22,   14 /* Public | MethodCloned */,
      14,    0,  103,    2, 0x02,   16 /* Public */,
      15,    0,  104,    2, 0x02,   17 /* Public */,
      16,    0,  105,    2, 0x102,   18 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariantList,

 // properties: name, type, flags
       5, 0x80000000 | 4, 0x0001510b, uint(0), 0,
      17, QMetaType::QVariant, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::shortcuts::ShortcutsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEShortcutsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEshortcutsSCOPEShortcutsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEShortcutsModelENDCLASS_t,
        // property 'selection'
        QtPrivate::TypeAndForceComplete<QItemSelection, std::true_type>,
        // property 'currentShortcut'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShortcutsModel, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'apply'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'importShortcutsFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportShortcutsToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applySequenceToCurrentShortcut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'applySequenceToCurrentShortcut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clearSelectedShortcuts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetToDefaultSelectedShortcuts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shortcuts'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>
    >,
    nullptr
} };

void muse::shortcuts::ShortcutsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->setSelection((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 2: _t->load(); break;
        case 3: { bool _r = _t->apply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->reset(); break;
        case 5: _t->importShortcutsFromFile(); break;
        case 6: _t->exportShortcutsToFile(); break;
        case 7: _t->applySequenceToCurrentShortcut((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->applySequenceToCurrentShortcut((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->clearSelectedShortcuts(); break;
        case 10: _t->resetToDefaultSelectedShortcuts(); break;
        case 11: { QVariantList _r = _t->shortcuts();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShortcutsModel::*)();
            if (_t _q_method = &ShortcutsModel::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShortcutsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QItemSelection*>(_v) = _t->selection(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->currentShortcut(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShortcutsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelection(*reinterpret_cast< QItemSelection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::shortcuts::ShortcutsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::shortcuts::ShortcutsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEshortcutsSCOPEShortcutsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int muse::shortcuts::ShortcutsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void muse::shortcuts::ShortcutsModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
