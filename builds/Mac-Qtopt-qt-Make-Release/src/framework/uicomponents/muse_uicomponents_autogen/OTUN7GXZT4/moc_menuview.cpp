/****************************************************************************
** Meta object code from reading C++ file 'menuview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/menuview.h"
#include <QWindow>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuViewENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::MenuView",
    "cascadeAlignChanged",
    "",
    "Qt::AlignmentFlag",
    "cascadeAlign",
    "contentWidthChanged",
    "contentHeightChanged",
    "setCascadeAlign",
    "viewVerticalMargin",
    "contentWidth",
    "contentHeight"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEMenuViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   53, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    4 /* Public */,
       5,    0,   47,    2, 0x06,    6 /* Public */,
       6,    0,   48,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   49,    2, 0x0a,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   52,    2, 0x102,   10 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Int,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00015103, uint(1), 0,
      10, QMetaType::Int, 0x00015103, uint(2), 0,
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::MenuView::staticMetaObject = { {
    QMetaObject::SuperData::link<PopupView::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEMenuViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuViewENDCLASS_t,
        // property 'contentWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'contentHeight'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'cascadeAlign'
        QtPrivate::TypeAndForceComplete<Qt::AlignmentFlag, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MenuView, std::true_type>,
        // method 'cascadeAlignChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::AlignmentFlag, std::false_type>,
        // method 'contentWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentHeightChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCascadeAlign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::AlignmentFlag, std::false_type>,
        // method 'viewVerticalMargin'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::MenuView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cascadeAlignChanged((*reinterpret_cast< std::add_pointer_t<Qt::AlignmentFlag>>(_a[1]))); break;
        case 1: _t->contentWidthChanged(); break;
        case 2: _t->contentHeightChanged(); break;
        case 3: _t->setCascadeAlign((*reinterpret_cast< std::add_pointer_t<Qt::AlignmentFlag>>(_a[1]))); break;
        case 4: { int _r = _t->viewVerticalMargin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuView::*)(Qt::AlignmentFlag );
            if (_t _q_method = &MenuView::cascadeAlignChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuView::*)();
            if (_t _q_method = &MenuView::contentWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuView::*)();
            if (_t _q_method = &MenuView::contentHeightChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MenuView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->contentWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->contentHeight(); break;
        case 2: *reinterpret_cast< Qt::AlignmentFlag*>(_v) = _t->cascadeAlign(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MenuView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setContentHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCascadeAlign(*reinterpret_cast< Qt::AlignmentFlag*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::uicomponents::MenuView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::MenuView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEMenuViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return PopupView::qt_metacast(_clname);
}

int muse::uicomponents::MenuView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PopupView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void muse::uicomponents::MenuView::cascadeAlignChanged(Qt::AlignmentFlag _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::uicomponents::MenuView::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::uicomponents::MenuView::contentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
