/****************************************************************************
** Meta object code from reading C++ file 'editdrumsetdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/widgets/editdrumsetdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editdrumsetdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__EditDrumsetDialog_t {
    QByteArrayData data[16];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__EditDrumsetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__EditDrumsetDialog_t qt_meta_stringdata_mu__palette__EditDrumsetDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "mu::palette::EditDrumsetDialog"
QT_MOC_LITERAL(1, 31, 11), // "bboxClicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 61, 6), // "button"
QT_MOC_LITERAL(5, 68, 11), // "itemChanged"
QT_MOC_LITERAL(6, 80, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 97, 7), // "current"
QT_MOC_LITERAL(8, 105, 8), // "previous"
QT_MOC_LITERAL(9, 114, 11), // "nameChanged"
QT_MOC_LITERAL(10, 126, 15), // "shortcutChanged"
QT_MOC_LITERAL(11, 142, 12), // "valueChanged"
QT_MOC_LITERAL(12, 155, 4), // "load"
QT_MOC_LITERAL(13, 160, 4), // "save"
QT_MOC_LITERAL(14, 165, 17), // "customGboxToggled"
QT_MOC_LITERAL(15, 183, 20) // "customQuarterChanged"

    },
    "mu::palette::EditDrumsetDialog\0"
    "bboxClicked\0\0QAbstractButton*\0button\0"
    "itemChanged\0QTreeWidgetItem*\0current\0"
    "previous\0nameChanged\0shortcutChanged\0"
    "valueChanged\0load\0save\0customGboxToggled\0"
    "customQuarterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__EditDrumsetDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       5,    2,   62,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,
      14,    1,   74,    2, 0x08 /* Private */,
      15,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void mu::palette::EditDrumsetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditDrumsetDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bboxClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->shortcutChanged(); break;
        case 4: _t->valueChanged(); break;
        case 5: _t->load(); break;
        case 6: _t->save(); break;
        case 7: _t->customGboxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->customQuarterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::EditDrumsetDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__EditDrumsetDialog.data,
    qt_meta_data_mu__palette__EditDrumsetDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::EditDrumsetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::EditDrumsetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__EditDrumsetDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mu::palette::EditDrumsetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
