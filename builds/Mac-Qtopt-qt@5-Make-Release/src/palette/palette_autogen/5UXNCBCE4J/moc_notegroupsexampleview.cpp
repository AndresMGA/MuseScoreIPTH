/****************************************************************************
** Meta object code from reading C++ file 'notegroupsexampleview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/widgets/notegroupsexampleview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notegroupsexampleview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__NoteGroupsExampleView_t {
    QByteArrayData data[7];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__NoteGroupsExampleView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__NoteGroupsExampleView_t qt_meta_stringdata_mu__palette__NoteGroupsExampleView = {
    {
QT_MOC_LITERAL(0, 0, 34), // "mu::palette::NoteGroupsExampl..."
QT_MOC_LITERAL(1, 35, 11), // "noteClicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "engraving::Note*"
QT_MOC_LITERAL(4, 65, 19), // "beamPropertyDropped"
QT_MOC_LITERAL(5, 85, 17), // "engraving::Chord*"
QT_MOC_LITERAL(6, 103, 22) // "engraving::ActionIcon*"

    },
    "mu::palette::NoteGroupsExampleView\0"
    "noteClicked\0\0engraving::Note*\0"
    "beamPropertyDropped\0engraving::Chord*\0"
    "engraving::ActionIcon*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__NoteGroupsExampleView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,

       0        // eod
};

void mu::palette::NoteGroupsExampleView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteGroupsExampleView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->noteClicked((*reinterpret_cast< engraving::Note*(*)>(_a[1]))); break;
        case 1: _t->beamPropertyDropped((*reinterpret_cast< engraving::Chord*(*)>(_a[1])),(*reinterpret_cast< engraving::ActionIcon*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteGroupsExampleView::*)(engraving::Note * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteGroupsExampleView::noteClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NoteGroupsExampleView::*)(engraving::Chord * , engraving::ActionIcon * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteGroupsExampleView::beamPropertyDropped)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::NoteGroupsExampleView::staticMetaObject = { {
    QMetaObject::SuperData::link<notation::ExampleView::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__NoteGroupsExampleView.data,
    qt_meta_data_mu__palette__NoteGroupsExampleView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::NoteGroupsExampleView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::NoteGroupsExampleView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__NoteGroupsExampleView.stringdata0))
        return static_cast<void*>(this);
    return notation::ExampleView::qt_metacast(_clname);
}

int mu::palette::NoteGroupsExampleView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = notation::ExampleView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mu::palette::NoteGroupsExampleView::noteClicked(engraving::Note * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::palette::NoteGroupsExampleView::beamPropertyDropped(engraving::Chord * _t1, engraving::ActionIcon * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
