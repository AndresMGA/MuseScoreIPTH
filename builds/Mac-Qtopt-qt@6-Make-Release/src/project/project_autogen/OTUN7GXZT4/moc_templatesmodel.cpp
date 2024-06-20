/****************************************************************************
** Meta object code from reading C++ file 'templatesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/project/view/templatesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__project__TemplatesModel_t {
    QByteArrayData data[18];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__project__TemplatesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__project__TemplatesModel_t qt_meta_stringdata_mu__project__TemplatesModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::project::TemplatesModel"
QT_MOC_LITERAL(1, 28, 17), // "categoriesChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 16), // "templatesChanged"
QT_MOC_LITERAL(4, 64, 22), // "currentCategoryChanged"
QT_MOC_LITERAL(5, 87, 22), // "currentTemplateChanged"
QT_MOC_LITERAL(6, 110, 23), // "setCurrentCategoryIndex"
QT_MOC_LITERAL(7, 134, 5), // "index"
QT_MOC_LITERAL(8, 140, 23), // "setCurrentTemplateIndex"
QT_MOC_LITERAL(9, 164, 4), // "load"
QT_MOC_LITERAL(10, 169, 19), // "saveCurrentCategory"
QT_MOC_LITERAL(11, 189, 13), // "setSearchText"
QT_MOC_LITERAL(12, 203, 4), // "text"
QT_MOC_LITERAL(13, 208, 16), // "categoriesTitles"
QT_MOC_LITERAL(14, 225, 15), // "templatesTitles"
QT_MOC_LITERAL(15, 241, 20), // "currentCategoryIndex"
QT_MOC_LITERAL(16, 262, 20), // "currentTemplateIndex"
QT_MOC_LITERAL(17, 283, 19) // "currentTemplatePath"

    },
    "mu::project::TemplatesModel\0"
    "categoriesChanged\0\0templatesChanged\0"
    "currentCategoryChanged\0currentTemplateChanged\0"
    "setCurrentCategoryIndex\0index\0"
    "setCurrentTemplateIndex\0load\0"
    "saveCurrentCategory\0setSearchText\0"
    "text\0categoriesTitles\0templatesTitles\0"
    "currentCategoryIndex\0currentTemplateIndex\0"
    "currentTemplatePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__project__TemplatesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   69,    2, 0x02 /* Public */,
      10,    0,   70,    2, 0x02 /* Public */,
      11,    1,   71,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

 // properties: name, type, flags
      13, QMetaType::QStringList, 0x00495001,
      14, QMetaType::QStringList, 0x00495001,
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       3,

       0        // eod
};

void mu::project::TemplatesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TemplatesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->categoriesChanged(); break;
        case 1: _t->templatesChanged(); break;
        case 2: _t->currentCategoryChanged(); break;
        case 3: _t->currentTemplateChanged(); break;
        case 4: _t->setCurrentCategoryIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setCurrentTemplateIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->load(); break;
        case 7: _t->saveCurrentCategory(); break;
        case 8: _t->setSearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TemplatesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemplatesModel::categoriesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TemplatesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemplatesModel::templatesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TemplatesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemplatesModel::currentCategoryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TemplatesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemplatesModel::currentTemplateChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TemplatesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->categoriesTitles(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->templatesTitles(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentCategoryIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentTemplateIndex(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->currentTemplatePath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TemplatesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCurrentCategoryIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCurrentTemplateIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::project::TemplatesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__project__TemplatesModel.data,
    qt_meta_data_mu__project__TemplatesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::project::TemplatesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::TemplatesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__project__TemplatesModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::project::TemplatesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::project::TemplatesModel::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::project::TemplatesModel::templatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::project::TemplatesModel::currentCategoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::project::TemplatesModel::currentTemplateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
