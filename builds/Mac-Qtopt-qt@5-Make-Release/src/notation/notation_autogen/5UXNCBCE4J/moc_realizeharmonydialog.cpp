/****************************************************************************
** Meta object code from reading C++ file 'realizeharmonydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/widgets/realizeharmonydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realizeharmonydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__RealizeHarmonyDialog_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__RealizeHarmonyDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__RealizeHarmonyDialog_t qt_meta_stringdata_mu__notation__RealizeHarmonyDialog = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mu::notation::RealizeHarmonyD..."
QT_MOC_LITERAL(1, 35, 11), // "interaction"
QT_MOC_LITERAL(2, 47, 23), // "INotationInteractionPtr"
QT_MOC_LITERAL(3, 71, 0), // ""
QT_MOC_LITERAL(4, 72, 6), // "accept"
QT_MOC_LITERAL(5, 79, 16), // "toggleChordTable"
QT_MOC_LITERAL(6, 96, 12), // "setChordList"
QT_MOC_LITERAL(7, 109, 30), // "QList<mu::engraving::Harmony*>"
QT_MOC_LITERAL(8, 140, 5) // "hlist"

    },
    "mu::notation::RealizeHarmonyDialog\0"
    "interaction\0INotationInteractionPtr\0"
    "\0accept\0toggleChordTable\0setChordList\0"
    "QList<mu::engraving::Harmony*>\0hlist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__RealizeHarmonyDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    3, 0x08 /* Private */,
       4,    0,   35,    3, 0x08 /* Private */,
       5,    0,   36,    3, 0x08 /* Private */,
       6,    1,   37,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void mu::notation::RealizeHarmonyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RealizeHarmonyDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { INotationInteractionPtr _r = _t->interaction();
            if (_a[0]) *reinterpret_cast< INotationInteractionPtr*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->accept(); break;
        case 2: _t->toggleChordTable(); break;
        case 3: _t->setChordList((*reinterpret_cast< const QList<mu::engraving::Harmony*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::RealizeHarmonyDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__RealizeHarmonyDialog.data,
    qt_meta_data_mu__notation__RealizeHarmonyDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::RealizeHarmonyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::RealizeHarmonyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__RealizeHarmonyDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::RealizeHarmonyDialogBase"))
        return static_cast< Ui::RealizeHarmonyDialogBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int mu::notation::RealizeHarmonyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
