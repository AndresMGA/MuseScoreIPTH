/****************************************************************************
** Meta object code from reading C++ file 'paletteprovider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/palette/internal/paletteprovider.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paletteprovider.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteElementEditorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteElementEditorENDCLASS = QtMocHelpers::stringData(
    "mu::palette::PaletteElementEditor",
    "open",
    "",
    "valid",
    "actionName"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteElementEditorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x02,    3 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015401, uint(-1), 0,
       4, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::PaletteElementEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteElementEditorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteElementEditorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteElementEditorENDCLASS_t,
        // property 'valid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'actionName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PaletteElementEditor, std::true_type>,
        // method 'open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::palette::PaletteElementEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteElementEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->open(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteElementEditor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->valid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->actionName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *mu::palette::PaletteElementEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteElementEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteElementEditorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::palette::PaletteElementEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEAbstractPaletteControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEAbstractPaletteControllerENDCLASS = QtMocHelpers::stringData(
    "mu::palette::AbstractPaletteController",
    "dropAction",
    "Qt::DropAction",
    "",
    "mimeData",
    "proposedAction",
    "QModelIndex",
    "parent",
    "internal",
    "move",
    "sourceParent",
    "sourceRow",
    "destinationParent",
    "destinationChild",
    "insert",
    "row",
    "action",
    "insertNewItem",
    "name",
    "remove",
    "removeSelection",
    "QModelIndexList",
    "canEdit",
    "editPaletteProperties",
    "index",
    "editCellProperties",
    "applyPaletteElement",
    "Qt::KeyboardModifiers",
    "modifiers",
    "elementEditor",
    "mu::palette::PaletteElementEditor*",
    "canDropElements"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEAbstractPaletteControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   86,    3, 0x102,    2 /* Public | MethodIsConst  */,
       9,    4,   95,    3, 0x02,    7 /* Public */,
      14,    4,  104,    3, 0x02,   12 /* Public */,
      17,    3,  113,    3, 0x02,   17 /* Public */,
      19,    1,  120,    3, 0x02,   21 /* Public */,
      20,    2,  123,    3, 0x02,   23 /* Public */,
      20,    1,  128,    3, 0x22,   26 /* Public | MethodCloned */,
      22,    1,  131,    3, 0x102,   28 /* Public | MethodIsConst  */,
      23,    1,  134,    3, 0x02,   30 /* Public */,
      25,    1,  137,    3, 0x02,   32 /* Public */,
      26,    2,  140,    3, 0x02,   34 /* Public */,
      29,    1,  145,    3, 0x02,   37 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::QVariantMap, 0x80000000 | 2, 0x80000000 | 6, QMetaType::Bool,    4,    5,    7,    8,
    QMetaType::Bool, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 6, QMetaType::Int,   10,   11,   12,   13,
    QMetaType::Bool, 0x80000000 | 6, QMetaType::Int, QMetaType::QVariantMap, 0x80000000 | 2,    7,   15,    4,   16,
    QMetaType::Bool, 0x80000000 | 6, QMetaType::Int, QMetaType::QString,    7,   15,   18,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 6,    3,    7,
    QMetaType::Void, 0x80000000 | 21,    3,
    QMetaType::Bool, 0x80000000 | 6,    3,
    QMetaType::Void, 0x80000000 | 6,   24,
    QMetaType::Void, 0x80000000 | 6,   24,
    QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 27,   24,   28,
    0x80000000 | 30, 0x80000000 | 6,   24,

 // properties: name, type, flags
      31, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::AbstractPaletteController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEAbstractPaletteControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEAbstractPaletteControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEAbstractPaletteControllerENDCLASS_t,
        // property 'canDropElements'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractPaletteController, std::true_type>,
        // method 'dropAction'
        QtPrivate::TypeAndForceComplete<Qt::DropAction, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::DropAction, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'move'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'insert'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::DropAction, std::false_type>,
        // method 'insertNewItem'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'removeSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndexList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'removeSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndexList &, std::false_type>,
        // method 'canEdit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'editPaletteProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'editCellProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'applyPaletteElement'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>,
        // method 'elementEditor'
        QtPrivate::TypeAndForceComplete<mu::palette::PaletteElementEditor *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void mu::palette::AbstractPaletteController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractPaletteController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { Qt::DropAction _r = _t->dropAction((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::DropAction>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< Qt::DropAction*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->move((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->insert((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Qt::DropAction>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->insertNewItem((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->remove((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->removeSelection((*reinterpret_cast< std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 6: _t->removeSelection((*reinterpret_cast< std::add_pointer_t<QModelIndexList>>(_a[1]))); break;
        case 7: { bool _r = _t->canEdit((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->editPaletteProperties((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->editCellProperties((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: { bool _r = _t->applyPaletteElement((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { mu::palette::PaletteElementEditor* _r = _t->elementEditor((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< mu::palette::PaletteElementEditor**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractPaletteController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canDropElements(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::palette::AbstractPaletteController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::AbstractPaletteController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEAbstractPaletteControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::palette::AbstractPaletteController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEUserPaletteControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEUserPaletteControllerENDCLASS = QtMocHelpers::stringData(
    "mu::palette::UserPaletteController"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEUserPaletteControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::UserPaletteController::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPaletteController::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEUserPaletteControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEUserPaletteControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEUserPaletteControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserPaletteController, std::true_type>
    >,
    nullptr
} };

void mu::palette::UserPaletteController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mu::palette::UserPaletteController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::UserPaletteController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEUserPaletteControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return AbstractPaletteController::qt_metacast(_clname);
}

int mu::palette::UserPaletteController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPaletteController::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteProviderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteProviderENDCLASS = QtMocHelpers::stringData(
    "mu::palette::PaletteProvider",
    "userPaletteChanged",
    "",
    "mainPaletteChanged",
    "isSinglePaletteChanged",
    "isSingleClickToOpenPaletteChanged",
    "notifyAboutUserPaletteChanged",
    "poolPaletteIndex",
    "QModelIndex",
    "index",
    "mu::palette::FilterPaletteTreeModel*",
    "poolPalette",
    "customElementsPaletteIndex",
    "poolPaletteModel",
    "poolPaletteController",
    "mu::palette::AbstractPaletteController*",
    "rootIndex",
    "availableExtraPalettesModel",
    "QAbstractItemModel*",
    "addPalette",
    "QPersistentModelIndex",
    "removeCustomPalette",
    "resetPalette",
    "savePalette",
    "loadPalette",
    "setSearching",
    "searching",
    "mainPaletteModel",
    "mainPaletteController",
    "customElementsPaletteModel",
    "customElementsPaletteController",
    "isSinglePalette",
    "isSingleClickToOpenPalette"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteProviderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       6,  150, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,    7 /* Public */,
       3,    0,  111,    2, 0x06,    8 /* Public */,
       4,    0,  112,    2, 0x06,    9 /* Public */,
       5,    0,  113,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  114,    2, 0x08,   11 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,  115,    2, 0x102,   12 /* Public | MethodIsConst  */,
      12,    1,  120,    2, 0x02,   15 /* Public */,
      13,    1,  123,    2, 0x102,   17 /* Public | MethodIsConst  */,
      14,    2,  126,    2, 0x102,   19 /* Public | MethodIsConst  */,
      17,    0,  131,    2, 0x102,   22 /* Public | MethodIsConst  */,
      19,    1,  132,    2, 0x02,   23 /* Public */,
      21,    1,  135,    2, 0x02,   25 /* Public */,
      22,    1,  138,    2, 0x02,   27 /* Public */,
      23,    1,  141,    2, 0x02,   29 /* Public */,
      24,    1,  144,    2, 0x02,   31 /* Public */,
      25,    1,  147,    2, 0x02,   33 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    0x80000000 | 8, 0x80000000 | 8,    9,
    0x80000000 | 10, 0x80000000 | 8,    9,
    0x80000000 | 15, 0x80000000 | 10, 0x80000000 | 8,    2,   16,
    0x80000000 | 18,
    QMetaType::Bool, 0x80000000 | 20,    2,
    QMetaType::Bool, 0x80000000 | 20,    2,
    QMetaType::Bool, 0x80000000 | 8,    2,
    QMetaType::Bool, 0x80000000 | 8,    2,
    QMetaType::Bool, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Bool,   26,

 // properties: name, type, flags
      27, 0x80000000 | 18, 0x00015009, uint(1), 0,
      28, 0x80000000 | 15, 0x00015009, uint(1), 0,
      29, 0x80000000 | 10, 0x00015409, uint(-1), 0,
      30, 0x80000000 | 15, 0x00015409, uint(-1), 0,
      31, QMetaType::Bool, 0x00015001, uint(2), 0,
      32, QMetaType::Bool, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::PaletteProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteProviderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEPaletteProviderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteProviderENDCLASS_t,
        // property 'mainPaletteModel'
        QtPrivate::TypeAndForceComplete<QAbstractItemModel*, std::true_type>,
        // property 'mainPaletteController'
        QtPrivate::TypeAndForceComplete<mu::palette::AbstractPaletteController*, std::true_type>,
        // property 'customElementsPaletteModel'
        QtPrivate::TypeAndForceComplete<mu::palette::FilterPaletteTreeModel*, std::true_type>,
        // property 'customElementsPaletteController'
        QtPrivate::TypeAndForceComplete<mu::palette::AbstractPaletteController*, std::true_type>,
        // property 'isSinglePalette'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSingleClickToOpenPalette'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PaletteProvider, std::true_type>,
        // method 'userPaletteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mainPaletteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSinglePaletteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSingleClickToOpenPaletteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notifyAboutUserPaletteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'poolPaletteIndex'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<mu::palette::FilterPaletteTreeModel *, std::false_type>,
        // method 'customElementsPaletteIndex'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'poolPaletteModel'
        QtPrivate::TypeAndForceComplete<mu::palette::FilterPaletteTreeModel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'poolPaletteController'
        QtPrivate::TypeAndForceComplete<mu::palette::AbstractPaletteController *, std::false_type>,
        QtPrivate::TypeAndForceComplete<mu::palette::FilterPaletteTreeModel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'availableExtraPalettesModel'
        QtPrivate::TypeAndForceComplete<QAbstractItemModel *, std::false_type>,
        // method 'addPalette'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPersistentModelIndex &, std::false_type>,
        // method 'removeCustomPalette'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPersistentModelIndex &, std::false_type>,
        // method 'resetPalette'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'savePalette'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'loadPalette'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'setSearching'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::palette::PaletteProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userPaletteChanged(); break;
        case 1: _t->mainPaletteChanged(); break;
        case 2: _t->isSinglePaletteChanged(); break;
        case 3: _t->isSingleClickToOpenPaletteChanged(); break;
        case 4: _t->notifyAboutUserPaletteChanged(); break;
        case 5: { QModelIndex _r = _t->poolPaletteIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<mu::palette::FilterPaletteTreeModel*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 6: { QModelIndex _r = _t->customElementsPaletteIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 7: { mu::palette::FilterPaletteTreeModel* _r = _t->poolPaletteModel((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< mu::palette::FilterPaletteTreeModel**>(_a[0]) = std::move(_r); }  break;
        case 8: { mu::palette::AbstractPaletteController* _r = _t->poolPaletteController((*reinterpret_cast< std::add_pointer_t<mu::palette::FilterPaletteTreeModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< mu::palette::AbstractPaletteController**>(_a[0]) = std::move(_r); }  break;
        case 9: { QAbstractItemModel* _r = _t->availableExtraPalettesModel();
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->addPalette((*reinterpret_cast< std::add_pointer_t<QPersistentModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->removeCustomPalette((*reinterpret_cast< std::add_pointer_t<QPersistentModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->resetPalette((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->savePalette((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->loadPalette((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setSearching((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mu::palette::FilterPaletteTreeModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mu::palette::FilterPaletteTreeModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteProvider::*)();
            if (_t _q_method = &PaletteProvider::userPaletteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PaletteProvider::*)();
            if (_t _q_method = &PaletteProvider::mainPaletteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PaletteProvider::*)();
            if (_t _q_method = &PaletteProvider::isSinglePaletteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PaletteProvider::*)();
            if (_t _q_method = &PaletteProvider::isSingleClickToOpenPaletteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        case 3:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::palette::AbstractPaletteController* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::palette::FilterPaletteTreeModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteProvider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->mainPaletteModel(); break;
        case 1: *reinterpret_cast< mu::palette::AbstractPaletteController**>(_v) = _t->mainPaletteController(); break;
        case 2: *reinterpret_cast< mu::palette::FilterPaletteTreeModel**>(_v) = _t->customElementsPaletteModel(); break;
        case 3: *reinterpret_cast< mu::palette::AbstractPaletteController**>(_v) = _t->customElementsPaletteController(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isSinglePalette(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isSingleClickToOpenPalette(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::palette::PaletteProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPaletteProviderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IPaletteProvider"))
        return static_cast< IPaletteProvider*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::palette::PaletteProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mu::palette::PaletteProvider::userPaletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::palette::PaletteProvider::mainPaletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::palette::PaletteProvider::isSinglePaletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::palette::PaletteProvider::isSingleClickToOpenPaletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
