/****************************************************************************
** Meta object code from reading C++ file 'abstractnotationpaintview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/abstractnotationpaintview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractnotationpaintview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractNotationPaintViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractNotationPaintViewENDCLASS = QtMocHelpers::stringData(
    "mu::notation::AbstractNotationPaintView",
    "showContextMenuRequested",
    "",
    "elementType",
    "viewPos",
    "hideContextMenuRequested",
    "showElementPopupRequested",
    "mu::notation::PopupModelType",
    "modelType",
    "elementRect",
    "hideElementPopupRequested",
    "isPopupOpenChanged",
    "isPopupOpen",
    "horizontalScrollChanged",
    "verticalScrollChanged",
    "backgroundColorChanged",
    "color",
    "viewportChanged",
    "publishModeChanged",
    "activeFocusRequested",
    "isMainViewChanged",
    "isMainView",
    "onViewSizeChanged",
    "load",
    "scrollHorizontal",
    "position",
    "scrollVertical",
    "zoomIn",
    "zoomOut",
    "selectOnNavigationActive",
    "forceFocusIn",
    "onContextMenuIsOpenChanged",
    "open",
    "onElementPopupIsOpenChanged",
    "moveCanvas",
    "dx",
    "dy",
    "pinchToZoom",
    "scaleFactor",
    "pos",
    "startHorizontalScrollPosition",
    "horizontalScrollbarSize",
    "startVerticalScrollPosition",
    "verticalScrollbarSize",
    "viewport",
    "publishMode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEAbstractNotationPaintViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       7,  212, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  158,    2, 0x06,    8 /* Public */,
       5,    0,  163,    2, 0x06,   11 /* Public */,
       6,    2,  164,    2, 0x06,   12 /* Public */,
      10,    0,  169,    2, 0x06,   15 /* Public */,
      11,    1,  170,    2, 0x06,   16 /* Public */,
      13,    0,  173,    2, 0x06,   18 /* Public */,
      14,    0,  174,    2, 0x06,   19 /* Public */,
      15,    1,  175,    2, 0x06,   20 /* Public */,
      17,    0,  178,    2, 0x06,   22 /* Public */,
      18,    0,  179,    2, 0x06,   23 /* Public */,
      19,    0,  180,    2, 0x06,   24 /* Public */,
      20,    1,  181,    2, 0x06,   25 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    0,  184,    2, 0x09,   27 /* Protected */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      23,    0,  185,    2, 0x02,   28 /* Public */,
      24,    1,  186,    2, 0x02,   29 /* Public */,
      26,    1,  189,    2, 0x02,   31 /* Public */,
      27,    0,  192,    2, 0x02,   33 /* Public */,
      28,    0,  193,    2, 0x02,   34 /* Public */,
      29,    0,  194,    2, 0x02,   35 /* Public */,
      30,    0,  195,    2, 0x02,   36 /* Public */,
      31,    1,  196,    2, 0x02,   37 /* Public */,
      33,    1,  199,    2, 0x02,   39 /* Public */,
      34,    2,  202,    2, 0x02,   41 /* Public */,
      37,    2,  207,    2, 0x02,   44 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,    3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QRectF,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   25,
    QMetaType::Void, QMetaType::QReal,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Bool, QMetaType::QReal, QMetaType::QReal,   35,   36,
    QMetaType::Void, QMetaType::QReal, QMetaType::QPointF,   38,   39,

 // properties: name, type, flags
      40, QMetaType::QReal, 0x00015001, uint(5), 0,
      41, QMetaType::QReal, 0x00015001, uint(5), 0,
      42, QMetaType::QReal, 0x00015001, uint(6), 0,
      43, QMetaType::QReal, 0x00015001, uint(6), 0,
      44, QMetaType::QRectF, 0x00015001, uint(8), 0,
      45, QMetaType::Bool, 0x00015103, uint(9), 0,
      21, QMetaType::Bool, 0x00015103, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::AbstractNotationPaintView::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractNotationPaintViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEAbstractNotationPaintViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractNotationPaintViewENDCLASS_t,
        // property 'startHorizontalScrollPosition'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'horizontalScrollbarSize'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'startVerticalScrollPosition'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'verticalScrollbarSize'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'viewport'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'publishMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isMainView'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractNotationPaintView, std::true_type>,
        // method 'showContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'hideContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showElementPopupRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mu::notation::PopupModelType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'hideElementPopupRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isPopupOpenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'horizontalScrollChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'verticalScrollChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backgroundColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'viewportChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'publishModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activeFocusRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isMainViewChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onViewSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollHorizontal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'scrollVertical'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectOnNavigationActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forceFocusIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onContextMenuIsOpenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onElementPopupIsOpenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'moveCanvas'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'pinchToZoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>
    >,
    nullptr
} };

void mu::notation::AbstractNotationPaintView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractNotationPaintView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showContextMenuRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 1: _t->hideContextMenuRequested(); break;
        case 2: _t->showElementPopupRequested((*reinterpret_cast< std::add_pointer_t<mu::notation::PopupModelType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 3: _t->hideElementPopupRequested(); break;
        case 4: _t->isPopupOpenChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->horizontalScrollChanged(); break;
        case 6: _t->verticalScrollChanged(); break;
        case 7: _t->backgroundColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 8: _t->viewportChanged(); break;
        case 9: _t->publishModeChanged(); break;
        case 10: _t->activeFocusRequested(); break;
        case 11: _t->isMainViewChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->onViewSizeChanged(); break;
        case 13: _t->load(); break;
        case 14: _t->scrollHorizontal((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 15: _t->scrollVertical((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 16: _t->zoomIn(); break;
        case 17: _t->zoomOut(); break;
        case 18: _t->selectOnNavigationActive(); break;
        case 19: _t->forceFocusIn(); break;
        case 20: _t->onContextMenuIsOpenChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->onElementPopupIsOpenChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: { bool _r = _t->moveCanvas((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->pinchToZoom((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mu::notation::PopupModelType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractNotationPaintView::*)(int , const QPointF & );
            if (_t _q_method = &AbstractNotationPaintView::showContextMenuRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)();
            if (_t _q_method = &AbstractNotationPaintView::hideContextMenuRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)(mu::notation::PopupModelType , const QRectF & );
            if (_t _q_method = &AbstractNotationPaintView::showElementPopupRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)();
            if (_t _q_method = &AbstractNotationPaintView::hideElementPopupRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)(bool );
            if (_t _q_method = &AbstractNotationPaintView::isPopupOpenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)();
            if (_t _q_method = &AbstractNotationPaintView::horizontalScrollChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)();
            if (_t _q_method = &AbstractNotationPaintView::verticalScrollChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)(QColor );
            if (_t _q_method = &AbstractNotationPaintView::backgroundColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)();
            if (_t _q_method = &AbstractNotationPaintView::viewportChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)();
            if (_t _q_method = &AbstractNotationPaintView::publishModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)();
            if (_t _q_method = &AbstractNotationPaintView::activeFocusRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AbstractNotationPaintView::*)(bool );
            if (_t _q_method = &AbstractNotationPaintView::isMainViewChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractNotationPaintView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->startHorizontalScrollPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->horizontalScrollbarSize(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->startVerticalScrollPosition(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->verticalScrollbarSize(); break;
        case 4: *reinterpret_cast< QRectF*>(_v) = _t->viewport_property(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->publishMode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isMainView(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AbstractNotationPaintView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setPublishMode(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setIsMainView(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::notation::AbstractNotationPaintView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::AbstractNotationPaintView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAbstractNotationPaintViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IControlledView"))
        return static_cast< IControlledView*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    if (!strcmp(_clname, "muse::actions::Actionable"))
        return static_cast< muse::actions::Actionable*>(this);
    return muse::uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::notation::AbstractNotationPaintView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mu::notation::AbstractNotationPaintView::showContextMenuRequested(int _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::notation::AbstractNotationPaintView::hideContextMenuRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::notation::AbstractNotationPaintView::showElementPopupRequested(mu::notation::PopupModelType _t1, const QRectF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::notation::AbstractNotationPaintView::hideElementPopupRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::notation::AbstractNotationPaintView::isPopupOpenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::notation::AbstractNotationPaintView::horizontalScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::notation::AbstractNotationPaintView::verticalScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void mu::notation::AbstractNotationPaintView::backgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void mu::notation::AbstractNotationPaintView::viewportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void mu::notation::AbstractNotationPaintView::publishModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void mu::notation::AbstractNotationPaintView::activeFocusRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void mu::notation::AbstractNotationPaintView::isMainViewChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
