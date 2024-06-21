/****************************************************************************
** Meta object code from reading C++ file 'noteGroups.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/widgets/noteGroups.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteGroups.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__NoteGroups_t {
    QByteArrayData data[8];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__NoteGroups_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__NoteGroups_t qt_meta_stringdata_mu__palette__NoteGroups = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::palette::NoteGroups"
QT_MOC_LITERAL(1, 24, 12), // "resetClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "noteClicked"
QT_MOC_LITERAL(4, 50, 16), // "engraving::Note*"
QT_MOC_LITERAL(5, 67, 19), // "beamPropertyDropped"
QT_MOC_LITERAL(6, 87, 17), // "engraving::Chord*"
QT_MOC_LITERAL(7, 105, 22) // "engraving::ActionIcon*"

    },
    "mu::palette::NoteGroups\0resetClicked\0"
    "\0noteClicked\0engraving::Note*\0"
    "beamPropertyDropped\0engraving::Chord*\0"
    "engraving::ActionIcon*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__NoteGroups[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    2,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,

       0        // eod
};

void mu::palette::NoteGroups::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteGroups *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetClicked(); break;
        case 1: _t->noteClicked((*reinterpret_cast< engraving::Note*(*)>(_a[1]))); break;
        case 2: _t->beamPropertyDropped((*reinterpret_cast< engraving::Chord*(*)>(_a[1])),(*reinterpret_cast< engraving::ActionIcon*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::NoteGroups::staticMetaObject = { {
    QMetaObject::SuperData::link<QGroupBox::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__NoteGroups.data,
    qt_meta_data_mu__palette__NoteGroups,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::NoteGroups::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::NoteGroups::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__NoteGroups.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::NoteGroups"))
        return static_cast< Ui::NoteGroups*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int mu::palette::NoteGroups::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
