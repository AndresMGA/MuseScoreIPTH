/****************************************************************************
** Meta object code from reading C++ file 'interactivetestsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/dev/interactivetestsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactivetestsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__InteractiveTestsModel_t {
    QByteArrayData data[17];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__InteractiveTestsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__InteractiveTestsModel_t qt_meta_stringdata_mu__ui__InteractiveTestsModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::ui::InteractiveTestsModel"
QT_MOC_LITERAL(1, 30, 17), // "currentUriChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 10), // "currentUri"
QT_MOC_LITERAL(4, 60, 16), // "openSampleDialog"
QT_MOC_LITERAL(5, 77, 21), // "openSampleDialogAsync"
QT_MOC_LITERAL(6, 99, 17), // "closeSampleDialog"
QT_MOC_LITERAL(7, 117, 16), // "openWidgetDialog"
QT_MOC_LITERAL(8, 134, 21), // "openWidgetDialogAsync"
QT_MOC_LITERAL(9, 156, 17), // "closeWidgetDialog"
QT_MOC_LITERAL(10, 174, 8), // "question"
QT_MOC_LITERAL(11, 183, 14), // "customQuestion"
QT_MOC_LITERAL(12, 198, 11), // "information"
QT_MOC_LITERAL(13, 210, 7), // "warning"
QT_MOC_LITERAL(14, 218, 8), // "critical"
QT_MOC_LITERAL(15, 227, 24), // "criticalWithDetailedText"
QT_MOC_LITERAL(16, 252, 7) // "require"

    },
    "mu::ui::InteractiveTestsModel\0"
    "currentUriChanged\0\0currentUri\0"
    "openSampleDialog\0openSampleDialogAsync\0"
    "closeSampleDialog\0openWidgetDialog\0"
    "openWidgetDialogAsync\0closeWidgetDialog\0"
    "question\0customQuestion\0information\0"
    "warning\0critical\0criticalWithDetailedText\0"
    "require"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__InteractiveTestsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       1,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x02 /* Public */,
       5,    0,   88,    2, 0x02 /* Public */,
       6,    0,   89,    2, 0x02 /* Public */,
       7,    0,   90,    2, 0x02 /* Public */,
       8,    0,   91,    2, 0x02 /* Public */,
       9,    0,   92,    2, 0x02 /* Public */,
      10,    0,   93,    2, 0x02 /* Public */,
      11,    0,   94,    2, 0x02 /* Public */,
      12,    0,   95,    2, 0x02 /* Public */,
      13,    0,   96,    2, 0x02 /* Public */,
      14,    0,   97,    2, 0x02 /* Public */,
      15,    0,   98,    2, 0x02 /* Public */,
      16,    0,   99,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::ui::InteractiveTestsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveTestsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentUriChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->openSampleDialog(); break;
        case 2: _t->openSampleDialogAsync(); break;
        case 3: _t->closeSampleDialog(); break;
        case 4: _t->openWidgetDialog(); break;
        case 5: _t->openWidgetDialogAsync(); break;
        case 6: _t->closeWidgetDialog(); break;
        case 7: _t->question(); break;
        case 8: _t->customQuestion(); break;
        case 9: _t->information(); break;
        case 10: _t->warning(); break;
        case 11: _t->critical(); break;
        case 12: _t->criticalWithDetailedText(); break;
        case 13: _t->require(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InteractiveTestsModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveTestsModel::currentUriChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InteractiveTestsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentUri(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::ui::InteractiveTestsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__InteractiveTestsModel.data,
    qt_meta_data_mu__ui__InteractiveTestsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::ui::InteractiveTestsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::InteractiveTestsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__InteractiveTestsModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::InteractiveTestsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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

// SIGNAL 0
void mu::ui::InteractiveTestsModel::currentUriChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
