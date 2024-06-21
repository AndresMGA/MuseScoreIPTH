/****************************************************************************
** Meta object code from reading C++ file 'menuview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/uicomponents/view/menuview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__uicomponents__MenuView_t {
    QByteArrayData data[11];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__uicomponents__MenuView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__uicomponents__MenuView_t qt_meta_stringdata_mu__uicomponents__MenuView = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mu::uicomponents::MenuView"
QT_MOC_LITERAL(1, 27, 19), // "cascadeAlignChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 17), // "Qt::AlignmentFlag"
QT_MOC_LITERAL(4, 66, 12), // "cascadeAlign"
QT_MOC_LITERAL(5, 79, 19), // "contentWidthChanged"
QT_MOC_LITERAL(6, 99, 20), // "contentHeightChanged"
QT_MOC_LITERAL(7, 120, 15), // "setCascadeAlign"
QT_MOC_LITERAL(8, 136, 18), // "viewVerticalMargin"
QT_MOC_LITERAL(9, 155, 12), // "contentWidth"
QT_MOC_LITERAL(10, 168, 13) // "contentHeight"

    },
    "mu::uicomponents::MenuView\0"
    "cascadeAlignChanged\0\0Qt::AlignmentFlag\0"
    "cascadeAlign\0contentWidthChanged\0"
    "contentHeightChanged\0setCascadeAlign\0"
    "viewVerticalMargin\0contentWidth\0"
    "contentHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__uicomponents__MenuView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Int,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       1,
       2,
       0,

       0        // eod
};

void mu::uicomponents::MenuView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cascadeAlignChanged((*reinterpret_cast< Qt::AlignmentFlag(*)>(_a[1]))); break;
        case 1: _t->contentWidthChanged(); break;
        case 2: _t->contentHeightChanged(); break;
        case 3: _t->setCascadeAlign((*reinterpret_cast< Qt::AlignmentFlag(*)>(_a[1]))); break;
        case 4: { int _r = _t->viewVerticalMargin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuView::*)(Qt::AlignmentFlag );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuView::cascadeAlignChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuView::contentWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuView::contentHeightChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::uicomponents::MenuView::staticMetaObject = { {
    QMetaObject::SuperData::link<PopupView::staticMetaObject>(),
    qt_meta_stringdata_mu__uicomponents__MenuView.data,
    qt_meta_data_mu__uicomponents__MenuView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::uicomponents::MenuView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::uicomponents::MenuView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__uicomponents__MenuView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return PopupView::qt_metacast(_clname);
}

int mu::uicomponents::MenuView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mu::uicomponents::MenuView::cascadeAlignChanged(Qt::AlignmentFlag _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::uicomponents::MenuView::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::uicomponents::MenuView::contentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
