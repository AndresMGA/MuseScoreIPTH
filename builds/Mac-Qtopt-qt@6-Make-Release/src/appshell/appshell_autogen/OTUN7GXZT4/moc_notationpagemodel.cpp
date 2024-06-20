/****************************************************************************
** Meta object code from reading C++ file 'notationpagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/notationpagemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notationpagemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__NotationPageModel_t {
    QByteArrayData data[20];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__NotationPageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__NotationPageModel_t qt_meta_stringdata_mu__appshell__NotationPageModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "mu::appshell::NotationPageModel"
QT_MOC_LITERAL(1, 32, 25), // "isNavigatorVisibleChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 28), // "isBraillePanelVisibleChanged"
QT_MOC_LITERAL(4, 88, 4), // "init"
QT_MOC_LITERAL(5, 93, 19), // "notationToolBarName"
QT_MOC_LITERAL(6, 113, 19), // "playbackToolBarName"
QT_MOC_LITERAL(7, 133, 19), // "undoRedoToolBarName"
QT_MOC_LITERAL(8, 153, 16), // "noteInputBarName"
QT_MOC_LITERAL(9, 170, 17), // "palettesPanelName"
QT_MOC_LITERAL(10, 188, 20), // "instrumentsPanelName"
QT_MOC_LITERAL(11, 209, 18), // "inspectorPanelName"
QT_MOC_LITERAL(12, 228, 25), // "selectionFiltersPanelName"
QT_MOC_LITERAL(13, 254, 14), // "mixerPanelName"
QT_MOC_LITERAL(14, 269, 22), // "pianoKeyboardPanelName"
QT_MOC_LITERAL(15, 292, 17), // "timelinePanelName"
QT_MOC_LITERAL(16, 310, 16), // "drumsetPanelName"
QT_MOC_LITERAL(17, 327, 13), // "statusBarName"
QT_MOC_LITERAL(18, 341, 18), // "isNavigatorVisible"
QT_MOC_LITERAL(19, 360, 21) // "isBraillePanelVisible"

    },
    "mu::appshell::NotationPageModel\0"
    "isNavigatorVisibleChanged\0\0"
    "isBraillePanelVisibleChanged\0init\0"
    "notationToolBarName\0playbackToolBarName\0"
    "undoRedoToolBarName\0noteInputBarName\0"
    "palettesPanelName\0instrumentsPanelName\0"
    "inspectorPanelName\0selectionFiltersPanelName\0"
    "mixerPanelName\0pianoKeyboardPanelName\0"
    "timelinePanelName\0drumsetPanelName\0"
    "statusBarName\0isNavigatorVisible\0"
    "isBraillePanelVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__NotationPageModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       2,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   96,    2, 0x02 /* Public */,
       5,    0,   97,    2, 0x02 /* Public */,
       6,    0,   98,    2, 0x02 /* Public */,
       7,    0,   99,    2, 0x02 /* Public */,
       8,    0,  100,    2, 0x02 /* Public */,
       9,    0,  101,    2, 0x02 /* Public */,
      10,    0,  102,    2, 0x02 /* Public */,
      11,    0,  103,    2, 0x02 /* Public */,
      12,    0,  104,    2, 0x02 /* Public */,
      13,    0,  105,    2, 0x02 /* Public */,
      14,    0,  106,    2, 0x02 /* Public */,
      15,    0,  107,    2, 0x02 /* Public */,
      16,    0,  108,    2, 0x02 /* Public */,
      17,    0,  109,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void mu::appshell::NotationPageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotationPageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isNavigatorVisibleChanged(); break;
        case 1: _t->isBraillePanelVisibleChanged(); break;
        case 2: _t->init(); break;
        case 3: { QString _r = _t->notationToolBarName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->playbackToolBarName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->undoRedoToolBarName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->noteInputBarName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->palettesPanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->instrumentsPanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->inspectorPanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->selectionFiltersPanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->mixerPanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->pianoKeyboardPanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->timelinePanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->drumsetPanelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->statusBarName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotationPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotationPageModel::isNavigatorVisibleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotationPageModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotationPageModel::isBraillePanelVisibleChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NotationPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isNavigatorVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isBraillePanelVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::NotationPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__NotationPageModel.data,
    qt_meta_data_mu__appshell__NotationPageModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::NotationPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::NotationPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__NotationPageModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    if (!strcmp(_clname, "actions::Actionable"))
        return static_cast< actions::Actionable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::NotationPageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
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

// SIGNAL 0
void mu::appshell::NotationPageModel::isNavigatorVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::appshell::NotationPageModel::isBraillePanelVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
