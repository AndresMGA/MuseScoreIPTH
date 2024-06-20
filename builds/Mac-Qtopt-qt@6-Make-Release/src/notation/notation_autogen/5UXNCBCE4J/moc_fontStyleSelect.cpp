/****************************************************************************
** Meta object code from reading C++ file 'fontStyleSelect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/notation/view/widgets/fontStyleSelect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontStyleSelect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__notation__FontStyleSelect_t {
    QByteArrayData data[5];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__notation__FontStyleSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__notation__FontStyleSelect_t qt_meta_stringdata_mu__notation__FontStyleSelect = {
    {
QT_MOC_LITERAL(0, 0, 29), // "mu::notation::FontStyleSelect"
QT_MOC_LITERAL(1, 30, 16), // "fontStyleChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 24), // "mu::engraving::FontStyle"
QT_MOC_LITERAL(4, 73, 17) // "_fontStyleChanged"

    },
    "mu::notation::FontStyleSelect\0"
    "fontStyleChanged\0\0mu::engraving::FontStyle\0"
    "_fontStyleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__notation__FontStyleSelect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void mu::notation::FontStyleSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FontStyleSelect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fontStyleChanged((*reinterpret_cast< mu::engraving::FontStyle(*)>(_a[1]))); break;
        case 1: _t->_fontStyleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FontStyleSelect::*)(mu::engraving::FontStyle );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FontStyleSelect::fontStyleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::notation::FontStyleSelect::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_mu__notation__FontStyleSelect.data,
    qt_meta_data_mu__notation__FontStyleSelect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::notation::FontStyleSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::FontStyleSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__notation__FontStyleSelect.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::FontStyleSelect"))
        return static_cast< Ui::FontStyleSelect*>(this);
    return QWidget::qt_metacast(_clname);
}

int mu::notation::FontStyleSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void mu::notation::FontStyleSelect::fontStyleChanged(mu::engraving::FontStyle _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
