/****************************************************************************
** Meta object code from reading C++ file 'gridcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/view/widgets/gridcanvas.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gridcanvas.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGridCanvasENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGridCanvasENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::GridCanvas",
    "canvasChanged",
    "",
    "pointListChanged",
    "pointList",
    "rowCountChanged",
    "rowCount",
    "columnCountChanged",
    "columnCount",
    "rowSpacingChanged",
    "rowSpacing",
    "columnSpacingChanged",
    "columnSpacing",
    "shouldShowNegativeRowsChanged",
    "shouldShowNegativeRows",
    "setPointList",
    "setRowCount",
    "setColumnCount",
    "setRowSpacing",
    "setColumnSpacing",
    "setShouldShowNegativeRows"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEGridCanvasENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  129, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    7 /* Public */,
       3,    1,   93,    2, 0x06,    8 /* Public */,
       5,    1,   96,    2, 0x06,   10 /* Public */,
       7,    1,   99,    2, 0x06,   12 /* Public */,
       9,    1,  102,    2, 0x06,   14 /* Public */,
      11,    1,  105,    2, 0x06,   16 /* Public */,
      13,    1,  108,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  111,    2, 0x0a,   20 /* Public */,
      16,    1,  114,    2, 0x0a,   22 /* Public */,
      17,    1,  117,    2, 0x0a,   24 /* Public */,
      18,    1,  120,    2, 0x0a,   26 /* Public */,
      19,    1,  123,    2, 0x0a,   28 /* Public */,
      20,    1,  126,    2, 0x0a,   30 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
       4, QMetaType::QVariant, 0x00015103, uint(1), 0,
       6, QMetaType::Int, 0x00015103, uint(2), 0,
       8, QMetaType::Int, 0x00015103, uint(3), 0,
      10, QMetaType::Int, 0x00015103, uint(4), 0,
      12, QMetaType::Int, 0x00015103, uint(5), 0,
      14, QMetaType::Bool, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::GridCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGridCanvasENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEGridCanvasENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGridCanvasENDCLASS_t,
        // property 'pointList'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'rowCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'columnCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rowSpacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'columnSpacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'shouldShowNegativeRows'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GridCanvas, std::true_type>,
        // method 'canvasChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pointListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'rowCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowSpacingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnSpacingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'shouldShowNegativeRowsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPointList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'setRowCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setColumnCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setRowSpacing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setColumnSpacing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setShouldShowNegativeRows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::inspector::GridCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GridCanvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canvasChanged(); break;
        case 1: _t->pointListChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 2: _t->rowCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->columnCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->rowSpacingChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->columnSpacingChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->shouldShowNegativeRowsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setPointList((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 8: _t->setRowCount((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setColumnCount((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setRowSpacing((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->setColumnSpacing((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->setShouldShowNegativeRows((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GridCanvas::*)();
            if (_t _q_method = &GridCanvas::canvasChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(QVariant );
            if (_t _q_method = &GridCanvas::pointListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (_t _q_method = &GridCanvas::rowCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (_t _q_method = &GridCanvas::columnCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (_t _q_method = &GridCanvas::rowSpacingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(int );
            if (_t _q_method = &GridCanvas::columnSpacingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GridCanvas::*)(bool );
            if (_t _q_method = &GridCanvas::shouldShowNegativeRowsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GridCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->pointList(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->rowSpacing(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->columnSpacing(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->shouldShowNegativeRows(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GridCanvas *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPointList(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setRowCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRowSpacing(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setColumnSpacing(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setShouldShowNegativeRows(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::GridCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::GridCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGridCanvasENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return muse::uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::inspector::GridCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::GridCanvas::canvasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::GridCanvas::pointListChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::GridCanvas::rowCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::GridCanvas::columnCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::inspector::GridCanvas::rowSpacingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::inspector::GridCanvas::columnSpacingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::inspector::GridCanvas::shouldShowNegativeRowsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
