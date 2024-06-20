/****************************************************************************
** Meta object code from reading C++ file 'masterpalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/palette/view/widgets/masterpalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masterpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__palette__MasterPalette_t {
    QByteArrayData data[14];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__palette__MasterPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__palette__MasterPalette_t qt_meta_stringdata_mu__palette__MasterPalette = {
    {
QT_MOC_LITERAL(0, 0, 26), // "mu::palette::MasterPalette"
QT_MOC_LITERAL(1, 27, 26), // "selectedPaletteNameChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 4), // "name"
QT_MOC_LITERAL(4, 60, 22), // "setSelectedPaletteName"
QT_MOC_LITERAL(5, 83, 14), // "currentChanged"
QT_MOC_LITERAL(6, 98, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 115, 7), // "clicked"
QT_MOC_LITERAL(8, 123, 11), // "changeEvent"
QT_MOC_LITERAL(9, 135, 7), // "QEvent*"
QT_MOC_LITERAL(10, 143, 5), // "event"
QT_MOC_LITERAL(11, 149, 10), // "closeEvent"
QT_MOC_LITERAL(12, 160, 12), // "QCloseEvent*"
QT_MOC_LITERAL(13, 173, 19) // "selectedPaletteName"

    },
    "mu::palette::MasterPalette\0"
    "selectedPaletteNameChanged\0\0name\0"
    "setSelectedPaletteName\0currentChanged\0"
    "QTreeWidgetItem*\0clicked\0changeEvent\0"
    "QEvent*\0event\0closeEvent\0QCloseEvent*\0"
    "selectedPaletteName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__palette__MasterPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       5,    2,   50,    2, 0x08 /* Private */,
       7,    2,   55,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   10,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void mu::palette::MasterPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MasterPalette *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedPaletteNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setSelectedPaletteName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->clicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MasterPalette::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MasterPalette::selectedPaletteNameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MasterPalette *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->selectedPaletteName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MasterPalette *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectedPaletteName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::palette::MasterPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::TopLevelDialog::staticMetaObject>(),
    qt_meta_stringdata_mu__palette__MasterPalette.data,
    qt_meta_data_mu__palette__MasterPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::palette::MasterPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::MasterPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__palette__MasterPalette.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MasterPalette"))
        return static_cast< Ui::MasterPalette*>(this);
    return uicomponents::TopLevelDialog::qt_metacast(_clname);
}

int mu::palette::MasterPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::TopLevelDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void mu::palette::MasterPalette::selectedPaletteNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
