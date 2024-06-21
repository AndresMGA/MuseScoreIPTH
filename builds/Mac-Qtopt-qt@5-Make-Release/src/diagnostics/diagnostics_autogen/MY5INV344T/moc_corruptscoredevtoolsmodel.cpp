/****************************************************************************
** Meta object code from reading C++ file 'corruptscoredevtoolsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/diagnostics/devtools/corruptscoredevtoolsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'corruptscoredevtoolsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__diagnostics__CorruptScoreDevToolsModel_t {
    QByteArrayData data[3];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__diagnostics__CorruptScoreDevToolsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__diagnostics__CorruptScoreDevToolsModel_t qt_meta_stringdata_mu__diagnostics__CorruptScoreDevToolsModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "mu::diagnostics::CorruptScore..."
QT_MOC_LITERAL(1, 43, 16), // "corruptOpenScore"
QT_MOC_LITERAL(2, 60, 0) // ""

    },
    "mu::diagnostics::CorruptScoreDevToolsModel\0"
    "corruptOpenScore\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__diagnostics__CorruptScoreDevToolsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void mu::diagnostics::CorruptScoreDevToolsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CorruptScoreDevToolsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->corruptOpenScore(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::diagnostics::CorruptScoreDevToolsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__diagnostics__CorruptScoreDevToolsModel.data,
    qt_meta_data_mu__diagnostics__CorruptScoreDevToolsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::diagnostics::CorruptScoreDevToolsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::diagnostics::CorruptScoreDevToolsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__diagnostics__CorruptScoreDevToolsModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::diagnostics::CorruptScoreDevToolsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
