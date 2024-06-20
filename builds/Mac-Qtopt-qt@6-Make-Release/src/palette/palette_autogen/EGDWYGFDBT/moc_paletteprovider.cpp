/****************************************************************************
** Meta object code from reading C++ file 'paletteprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/internal/paletteprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paletteprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__PaletteElementEditor_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PaletteElementEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PaletteElementEditor_t qt_meta_stringdata_mu__palette__PaletteElementEditor = {
    {
QT_MOC_LITERAL(0, 0, 33), // "mu::palette::PaletteElementEd..."
QT_MOC_LITERAL(1, 34, 4), // "open"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "valid"
QT_MOC_LITERAL(4, 46, 10) // "actionName"

    },
    "mu::palette::PaletteElementEditor\0"
    "open\0\0valid\0actionName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PaletteElementEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095401,
       4, QMetaType::QString, 0x00095401,

       0        // eod
};

void mu::palette::PaletteElementEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteElementEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->open(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PaletteElementEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PaletteElementEditor.data,
    qt_meta_data_mu__palette__PaletteElementEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PaletteElementEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteElementEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PaletteElementEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_mu__palette__AbstractPaletteController_t {
    QByteArrayData data[32];
    char stringdata0[429];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__AbstractPaletteController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__AbstractPaletteController_t qt_meta_stringdata_mu__palette__AbstractPaletteController = {
    {
QT_MOC_LITERAL(0, 0, 38), // "mu::palette::AbstractPaletteC..."
QT_MOC_LITERAL(1, 39, 10), // "dropAction"
QT_MOC_LITERAL(2, 50, 14), // "Qt::DropAction"
QT_MOC_LITERAL(3, 65, 0), // ""
QT_MOC_LITERAL(4, 66, 8), // "mimeData"
QT_MOC_LITERAL(5, 75, 14), // "proposedAction"
QT_MOC_LITERAL(6, 90, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 102, 6), // "parent"
QT_MOC_LITERAL(8, 109, 8), // "internal"
QT_MOC_LITERAL(9, 118, 4), // "move"
QT_MOC_LITERAL(10, 123, 12), // "sourceParent"
QT_MOC_LITERAL(11, 136, 9), // "sourceRow"
QT_MOC_LITERAL(12, 146, 17), // "destinationParent"
QT_MOC_LITERAL(13, 164, 16), // "destinationChild"
QT_MOC_LITERAL(14, 181, 6), // "insert"
QT_MOC_LITERAL(15, 188, 3), // "row"
QT_MOC_LITERAL(16, 192, 6), // "action"
QT_MOC_LITERAL(17, 199, 13), // "insertNewItem"
QT_MOC_LITERAL(18, 213, 4), // "name"
QT_MOC_LITERAL(19, 218, 6), // "remove"
QT_MOC_LITERAL(20, 225, 15), // "removeSelection"
QT_MOC_LITERAL(21, 241, 15), // "QModelIndexList"
QT_MOC_LITERAL(22, 257, 7), // "canEdit"
QT_MOC_LITERAL(23, 265, 21), // "editPaletteProperties"
QT_MOC_LITERAL(24, 287, 5), // "index"
QT_MOC_LITERAL(25, 293, 18), // "editCellProperties"
QT_MOC_LITERAL(26, 312, 19), // "applyPaletteElement"
QT_MOC_LITERAL(27, 332, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(28, 354, 9), // "modifiers"
QT_MOC_LITERAL(29, 364, 13), // "elementEditor"
QT_MOC_LITERAL(30, 378, 34), // "mu::palette::PaletteElementEd..."
QT_MOC_LITERAL(31, 413, 15) // "canDropElements"

    },
    "mu::palette::AbstractPaletteController\0"
    "dropAction\0Qt::DropAction\0\0mimeData\0"
    "proposedAction\0QModelIndex\0parent\0"
    "internal\0move\0sourceParent\0sourceRow\0"
    "destinationParent\0destinationChild\0"
    "insert\0row\0action\0insertNewItem\0name\0"
    "remove\0removeSelection\0QModelIndexList\0"
    "canEdit\0editPaletteProperties\0index\0"
    "editCellProperties\0applyPaletteElement\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "elementEditor\0mu::palette::PaletteElementEditor*\0"
    "canDropElements"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__AbstractPaletteController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  136, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    4,   74,    3, 0x02 /* Public */,
       9,    4,   83,    3, 0x02 /* Public */,
      14,    4,   92,    3, 0x02 /* Public */,
      17,    3,  101,    3, 0x02 /* Public */,
      19,    1,  108,    3, 0x02 /* Public */,
      20,    2,  111,    3, 0x02 /* Public */,
      20,    1,  116,    3, 0x22 /* Public | MethodCloned */,
      22,    1,  119,    3, 0x02 /* Public */,
      23,    1,  122,    3, 0x02 /* Public */,
      25,    1,  125,    3, 0x02 /* Public */,
      26,    2,  128,    3, 0x02 /* Public */,
      29,    1,  133,    3, 0x02 /* Public */,

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
      31, QMetaType::Bool, 0x00095401,

       0        // eod
};

void mu::palette::AbstractPaletteController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractPaletteController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { Qt::DropAction _r = _t->dropAction((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< Qt::DropAction(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< Qt::DropAction*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->move((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->insert((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< Qt::DropAction(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->insertNewItem((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->remove((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->removeSelection((*reinterpret_cast< const QModelIndexList(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->removeSelection((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 7: { bool _r = _t->canEdit((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->editPaletteProperties((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->editCellProperties((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: { bool _r = _t->applyPaletteElement((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { mu::palette::PaletteElementEditor* _r = _t->elementEditor((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< mu::palette::PaletteElementEditor**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractPaletteController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canDropElements(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::AbstractPaletteController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__AbstractPaletteController.data,
    qt_meta_data_mu__palette__AbstractPaletteController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::AbstractPaletteController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::AbstractPaletteController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__AbstractPaletteController.stringdata0))
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
struct qt_meta_stringdata_mu__palette__UserPaletteController_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__UserPaletteController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__UserPaletteController_t qt_meta_stringdata_mu__palette__UserPaletteController = {
    {
QT_MOC_LITERAL(0, 0, 34) // "mu::palette::UserPaletteContr..."

    },
    "mu::palette::UserPaletteController"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__UserPaletteController[] = {

 // content:
       8,       // revision
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

void mu::palette::UserPaletteController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::UserPaletteController::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPaletteController::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__UserPaletteController.data,
    qt_meta_data_mu__palette__UserPaletteController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::UserPaletteController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::UserPaletteController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__UserPaletteController.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return AbstractPaletteController::qt_metacast(_clname);
}

int mu::palette::UserPaletteController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPaletteController::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_mu__palette__PaletteProvider_t {
    QByteArrayData data[33];
    char stringdata0[657];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__PaletteProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__PaletteProvider_t qt_meta_stringdata_mu__palette__PaletteProvider = {
    {
QT_MOC_LITERAL(0, 0, 28), // "mu::palette::PaletteProvider"
QT_MOC_LITERAL(1, 29, 18), // "userPaletteChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 18), // "mainPaletteChanged"
QT_MOC_LITERAL(4, 68, 22), // "isSinglePaletteChanged"
QT_MOC_LITERAL(5, 91, 33), // "isSingleClickToOpenPaletteCha..."
QT_MOC_LITERAL(6, 125, 29), // "notifyAboutUserPaletteChanged"
QT_MOC_LITERAL(7, 155, 16), // "poolPaletteIndex"
QT_MOC_LITERAL(8, 172, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 184, 5), // "index"
QT_MOC_LITERAL(10, 190, 36), // "mu::palette::FilterPaletteTre..."
QT_MOC_LITERAL(11, 227, 11), // "poolPalette"
QT_MOC_LITERAL(12, 239, 26), // "customElementsPaletteIndex"
QT_MOC_LITERAL(13, 266, 16), // "poolPaletteModel"
QT_MOC_LITERAL(14, 283, 21), // "poolPaletteController"
QT_MOC_LITERAL(15, 305, 39), // "mu::palette::AbstractPaletteC..."
QT_MOC_LITERAL(16, 345, 9), // "rootIndex"
QT_MOC_LITERAL(17, 355, 27), // "availableExtraPalettesModel"
QT_MOC_LITERAL(18, 383, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(19, 403, 10), // "addPalette"
QT_MOC_LITERAL(20, 414, 21), // "QPersistentModelIndex"
QT_MOC_LITERAL(21, 436, 19), // "removeCustomPalette"
QT_MOC_LITERAL(22, 456, 12), // "resetPalette"
QT_MOC_LITERAL(23, 469, 11), // "savePalette"
QT_MOC_LITERAL(24, 481, 11), // "loadPalette"
QT_MOC_LITERAL(25, 493, 12), // "setSearching"
QT_MOC_LITERAL(26, 506, 9), // "searching"
QT_MOC_LITERAL(27, 516, 16), // "mainPaletteModel"
QT_MOC_LITERAL(28, 533, 21), // "mainPaletteController"
QT_MOC_LITERAL(29, 555, 26), // "customElementsPaletteModel"
QT_MOC_LITERAL(30, 582, 31), // "customElementsPaletteController"
QT_MOC_LITERAL(31, 614, 15), // "isSinglePalette"
QT_MOC_LITERAL(32, 630, 26) // "isSingleClickToOpenPalette"

    },
    "mu::palette::PaletteProvider\0"
    "userPaletteChanged\0\0mainPaletteChanged\0"
    "isSinglePaletteChanged\0"
    "isSingleClickToOpenPaletteChanged\0"
    "notifyAboutUserPaletteChanged\0"
    "poolPaletteIndex\0QModelIndex\0index\0"
    "mu::palette::FilterPaletteTreeModel*\0"
    "poolPalette\0customElementsPaletteIndex\0"
    "poolPaletteModel\0poolPaletteController\0"
    "mu::palette::AbstractPaletteController*\0"
    "rootIndex\0availableExtraPalettesModel\0"
    "QAbstractItemModel*\0addPalette\0"
    "QPersistentModelIndex\0removeCustomPalette\0"
    "resetPalette\0savePalette\0loadPalette\0"
    "setSearching\0searching\0mainPaletteModel\0"
    "mainPaletteController\0customElementsPaletteModel\0"
    "customElementsPaletteController\0"
    "isSinglePalette\0isSingleClickToOpenPalette"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__PaletteProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       6,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   98,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   99,    2, 0x02 /* Public */,
      12,    1,  104,    2, 0x02 /* Public */,
      13,    1,  107,    2, 0x02 /* Public */,
      14,    2,  110,    2, 0x02 /* Public */,
      17,    0,  115,    2, 0x02 /* Public */,
      19,    1,  116,    2, 0x02 /* Public */,
      21,    1,  119,    2, 0x02 /* Public */,
      22,    1,  122,    2, 0x02 /* Public */,
      23,    1,  125,    2, 0x02 /* Public */,
      24,    1,  128,    2, 0x02 /* Public */,
      25,    1,  131,    2, 0x02 /* Public */,

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
      27, 0x80000000 | 18, 0x00495009,
      28, 0x80000000 | 15, 0x00495009,
      29, 0x80000000 | 10, 0x00095409,
      30, 0x80000000 | 15, 0x00095409,
      31, QMetaType::Bool, 0x00495001,
      32, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       1,
       0,
       0,
       2,
       3,

       0        // eod
};

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
        case 5: { QModelIndex _r = _t->poolPaletteIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< mu::palette::FilterPaletteTreeModel*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 6: { QModelIndex _r = _t->customElementsPaletteIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = std::move(_r); }  break;
        case 7: { mu::palette::FilterPaletteTreeModel* _r = _t->poolPaletteModel((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< mu::palette::FilterPaletteTreeModel**>(_a[0]) = std::move(_r); }  break;
        case 8: { mu::palette::AbstractPaletteController* _r = _t->poolPaletteController((*reinterpret_cast< mu::palette::FilterPaletteTreeModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< mu::palette::AbstractPaletteController**>(_a[0]) = std::move(_r); }  break;
        case 9: { QAbstractItemModel* _r = _t->availableExtraPalettesModel();
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->addPalette((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->removeCustomPalette((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->resetPalette((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->savePalette((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->loadPalette((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setSearching((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::palette::FilterPaletteTreeModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::palette::FilterPaletteTreeModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteProvider::userPaletteChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PaletteProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteProvider::mainPaletteChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PaletteProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteProvider::isSinglePaletteChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PaletteProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteProvider::isSingleClickToOpenPaletteChanged)) {
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
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::PaletteProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__PaletteProvider.data,
    qt_meta_data_mu__palette__PaletteProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::PaletteProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PaletteProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__PaletteProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IPaletteProvider"))
        return static_cast< IPaletteProvider*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
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
QT_END_MOC_NAMESPACE
