/****************************************************************************
** Meta object code from reading C++ file 'transposedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/widgets/transposedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transposedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__TransposeDialog_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__TransposeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__TransposeDialog_t qt_meta_stringdata_mu__notation__TransposeDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::notation::TransposeDialog"
QT_MOC_LITERAL(1, 30, 21), // "transposeByKeyToggled"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 26), // "transposeByIntervalToggled"
QT_MOC_LITERAL(4, 80, 19), // "chromaticBoxToggled"
QT_MOC_LITERAL(5, 100, 3), // "val"
QT_MOC_LITERAL(6, 104, 18), // "diatonicBoxToggled"
QT_MOC_LITERAL(7, 123, 5) // "apply"

    },
    "mu::notation::TransposeDialog\0"
    "transposeByKeyToggled\0\0"
    "transposeByIntervalToggled\0"
    "chromaticBoxToggled\0val\0diatonicBoxToggled\0"
    "apply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__TransposeDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       3,    1,   42,    2, 0x08 /* Private */,
       4,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void mu::notation::TransposeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransposeDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->transposeByKeyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->transposeByIntervalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->chromaticBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->diatonicBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->apply(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::TransposeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__TransposeDialog.data,
    qt_meta_data_mu__notation__TransposeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::TransposeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::TransposeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__TransposeDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::TransposeDialogBase"))
        return static_cast< Ui::TransposeDialogBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int mu::notation::TransposeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
