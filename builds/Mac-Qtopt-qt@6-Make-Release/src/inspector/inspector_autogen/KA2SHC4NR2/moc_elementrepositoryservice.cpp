/****************************************************************************
** Meta object code from reading C++ file 'elementrepositoryservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/internal/services/elementrepositoryservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementrepositoryservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__ElementRepositoryService_t {
    QByteArrayData data[5];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__ElementRepositoryService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__ElementRepositoryService_t qt_meta_stringdata_mu__inspector__ElementRepositoryService = {
    {
QT_MOC_LITERAL(0, 0, 39), // "mu::inspector::ElementReposit..."
QT_MOC_LITERAL(1, 40, 15), // "elementsUpdated"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 36), // "QList<mu::engraving::Engravin..."
QT_MOC_LITERAL(4, 94, 17) // "newRawElementList"

    },
    "mu::inspector::ElementRepositoryService\0"
    "elementsUpdated\0\0QList<mu::engraving::EngravingItem*>\0"
    "newRawElementList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__ElementRepositoryService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void mu::inspector::ElementRepositoryService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElementRepositoryService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->elementsUpdated((*reinterpret_cast< const QList<mu::engraving::EngravingItem*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElementRepositoryService::*)(const QList<mu::engraving::EngravingItem*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElementRepositoryService::elementsUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::ElementRepositoryService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__ElementRepositoryService.data,
    qt_meta_data_mu__inspector__ElementRepositoryService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::ElementRepositoryService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::ElementRepositoryService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__ElementRepositoryService.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IElementRepositoryService"))
        return static_cast< IElementRepositoryService*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::inspector::ElementRepositoryService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void mu::inspector::ElementRepositoryService::elementsUpdated(const QList<mu::engraving::EngravingItem*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
