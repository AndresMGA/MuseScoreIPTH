/****************************************************************************
** Meta object code from reading C++ file 'Frame_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../thirdparty/KDDockWidgets/src/private/Frame_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Frame_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDDockWidgets__Frame_t {
    QByteArrayData data[21];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDDockWidgets__Frame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDDockWidgets__Frame_t qt_meta_stringdata_KDDockWidgets__Frame = {
    {
QT_MOC_LITERAL(0, 0, 20), // "KDDockWidgets::Frame"
QT_MOC_LITERAL(1, 21, 24), // "currentDockWidgetChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 30), // "KDDockWidgets::DockWidgetBase*"
QT_MOC_LITERAL(4, 78, 21), // "numDockWidgetsChanged"
QT_MOC_LITERAL(5, 100, 21), // "hasTabsVisibleChanged"
QT_MOC_LITERAL(6, 122, 17), // "layoutInvalidated"
QT_MOC_LITERAL(7, 140, 21), // "isInMainWindowChanged"
QT_MOC_LITERAL(8, 162, 16), // "isFocusedChanged"
QT_MOC_LITERAL(9, 179, 20), // "focusedWidgetChanged"
QT_MOC_LITERAL(10, 200, 12), // "isMDIChanged"
QT_MOC_LITERAL(11, 213, 21), // "actualTitleBarChanged"
QT_MOC_LITERAL(12, 235, 24), // "onDockWidgetCountChanged"
QT_MOC_LITERAL(13, 260, 19), // "onCurrentTabChanged"
QT_MOC_LITERAL(14, 280, 5), // "index"
QT_MOC_LITERAL(15, 286, 8), // "titleBar"
QT_MOC_LITERAL(16, 295, 24), // "KDDockWidgets::TitleBar*"
QT_MOC_LITERAL(17, 320, 14), // "actualTitleBar"
QT_MOC_LITERAL(18, 335, 12), // "currentIndex"
QT_MOC_LITERAL(19, 348, 8), // "userType"
QT_MOC_LITERAL(20, 357, 5) // "isMDI"

    },
    "KDDockWidgets::Frame\0currentDockWidgetChanged\0"
    "\0KDDockWidgets::DockWidgetBase*\0"
    "numDockWidgetsChanged\0hasTabsVisibleChanged\0"
    "layoutInvalidated\0isInMainWindowChanged\0"
    "isFocusedChanged\0focusedWidgetChanged\0"
    "isMDIChanged\0actualTitleBarChanged\0"
    "onDockWidgetCountChanged\0onCurrentTabChanged\0"
    "index\0titleBar\0KDDockWidgets::TitleBar*\0"
    "actualTitleBar\0currentIndex\0userType\0"
    "isMDI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDDockWidgets__Frame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,
       7,    0,   75,    2, 0x06 /* Public */,
       8,    0,   76,    2, 0x06 /* Public */,
       9,    0,   77,    2, 0x06 /* Public */,
      10,    0,   78,    2, 0x06 /* Public */,
      11,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   80,    2, 0x09 /* Protected */,
      13,    1,   81,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00095409,
      17, 0x80000000 | 16, 0x00495009,
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::Int, 0x00095401,
      20, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       8,
       0,
       0,
       7,

       0        // eod
};

void KDDockWidgets::Frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Frame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentDockWidgetChanged((*reinterpret_cast< KDDockWidgets::DockWidgetBase*(*)>(_a[1]))); break;
        case 1: _t->numDockWidgetsChanged(); break;
        case 2: _t->hasTabsVisibleChanged(); break;
        case 3: _t->layoutInvalidated(); break;
        case 4: _t->isInMainWindowChanged(); break;
        case 5: _t->isFocusedChanged(); break;
        case 6: _t->focusedWidgetChanged(); break;
        case 7: _t->isMDIChanged(); break;
        case 8: _t->actualTitleBarChanged(); break;
        case 9: _t->onDockWidgetCountChanged(); break;
        case 10: _t->onCurrentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDDockWidgets::DockWidgetBase* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Frame::*)(KDDockWidgets::DockWidgetBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::currentDockWidgetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::numDockWidgetsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::hasTabsVisibleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::layoutInvalidated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::isInMainWindowChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::isFocusedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::focusedWidgetChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::isMDIChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Frame::actualTitleBarChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Frame *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< KDDockWidgets::TitleBar**>(_v) = _t->titleBar(); break;
        case 1: *reinterpret_cast< KDDockWidgets::TitleBar**>(_v) = _t->actualTitleBar(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->userType(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isMDI(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDDockWidgets::Frame::staticMetaObject = { {
    QMetaObject::SuperData::link<LayoutGuestWidget::staticMetaObject>(),
    qt_meta_stringdata_KDDockWidgets__Frame.data,
    qt_meta_data_KDDockWidgets__Frame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDDockWidgets::Frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDDockWidgets::Frame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDDockWidgets__Frame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FocusScope"))
        return static_cast< FocusScope*>(this);
    return LayoutGuestWidget::qt_metacast(_clname);
}

int KDDockWidgets::Frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LayoutGuestWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDDockWidgets::Frame::currentDockWidgetChanged(KDDockWidgets::DockWidgetBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDDockWidgets::Frame::numDockWidgetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KDDockWidgets::Frame::hasTabsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KDDockWidgets::Frame::layoutInvalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KDDockWidgets::Frame::isInMainWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KDDockWidgets::Frame::isFocusedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KDDockWidgets::Frame::focusedWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void KDDockWidgets::Frame::isMDIChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void KDDockWidgets::Frame::actualTitleBarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
