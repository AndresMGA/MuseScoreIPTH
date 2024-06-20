/****************************************************************************
** Meta object code from reading C++ file 'editstafftype.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/widgets/editstafftype.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editstafftype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__EditStaffType_t {
    QByteArrayData data[15];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__EditStaffType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__EditStaffType_t qt_meta_stringdata_mu__notation__EditStaffType = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::notation::EditStaffType"
QT_MOC_LITERAL(1, 28, 10), // "nameEdited"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "durFontNameChanged"
QT_MOC_LITERAL(4, 59, 3), // "idx"
QT_MOC_LITERAL(5, 63, 19), // "fretFontNameChanged"
QT_MOC_LITERAL(6, 83, 21), // "tabStemThroughToggled"
QT_MOC_LITERAL(7, 105, 7), // "checked"
QT_MOC_LITERAL(8, 113, 20), // "tabMinimShortToggled"
QT_MOC_LITERAL(9, 134, 15), // "tabStemsToggled"
QT_MOC_LITERAL(10, 150, 13), // "updatePreview"
QT_MOC_LITERAL(11, 164, 11), // "savePresets"
QT_MOC_LITERAL(12, 176, 11), // "loadPresets"
QT_MOC_LITERAL(13, 188, 22), // "resetToTemplateClicked"
QT_MOC_LITERAL(14, 211, 21) // "addToTemplatesClicked"

    },
    "mu::notation::EditStaffType\0nameEdited\0"
    "\0durFontNameChanged\0idx\0fretFontNameChanged\0"
    "tabStemThroughToggled\0checked\0"
    "tabMinimShortToggled\0tabStemsToggled\0"
    "updatePreview\0savePresets\0loadPresets\0"
    "resetToTemplateClicked\0addToTemplatesClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__EditStaffType[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       3,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
       9,    1,   84,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mu::notation::EditStaffType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditStaffType *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->durFontNameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fretFontNameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->tabStemThroughToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->tabMinimShortToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->tabStemsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updatePreview(); break;
        case 7: _t->savePresets(); break;
        case 8: _t->loadPresets(); break;
        case 9: _t->resetToTemplateClicked(); break;
        case 10: _t->addToTemplatesClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::EditStaffType::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__EditStaffType.data,
    qt_meta_data_mu__notation__EditStaffType,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::EditStaffType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::EditStaffType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__EditStaffType.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mu::notation::EditStaffType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
