/****************************************************************************
** Meta object code from reading C++ file 'templatesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/project/view/templatesmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEprojectSCOPETemplatesModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEprojectSCOPETemplatesModelENDCLASS = QtMocHelpers::stringData(
    "mu::project::TemplatesModel",
    "categoriesChanged",
    "",
    "templatesChanged",
    "currentCategoryChanged",
    "currentTemplateChanged",
    "setCurrentCategoryIndex",
    "index",
    "setCurrentTemplateIndex",
    "load",
    "saveCurrentCategory",
    "setSearchText",
    "text",
    "categoriesTitles",
    "templatesTitles",
    "currentCategoryIndex",
    "currentTemplateIndex",
    "currentTemplatePath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEprojectSCOPETemplatesModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   83, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    6 /* Public */,
       3,    0,   69,    2, 0x06,    7 /* Public */,
       4,    0,   70,    2, 0x06,    8 /* Public */,
       5,    0,   71,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   72,    2, 0x0a,   10 /* Public */,
       8,    1,   75,    2, 0x0a,   12 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   78,    2, 0x02,   14 /* Public */,
      10,    0,   79,    2, 0x02,   15 /* Public */,
      11,    1,   80,    2, 0x02,   16 /* Public */,

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
      13, QMetaType::QStringList, 0x00015001, uint(0), 0,
      14, QMetaType::QStringList, 0x00015001, uint(1), 0,
      15, QMetaType::Int, 0x00015103, uint(2), 0,
      16, QMetaType::Int, 0x00015103, uint(3), 0,
      17, QMetaType::QString, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::project::TemplatesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEprojectSCOPETemplatesModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEprojectSCOPETemplatesModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEprojectSCOPETemplatesModelENDCLASS_t,
        // property 'categoriesTitles'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'templatesTitles'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'currentCategoryIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentTemplateIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentTemplatePath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TemplatesModel, std::true_type>,
        // method 'categoriesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'templatesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentCategoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTemplateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentCategoryIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentTemplateIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveCurrentCategory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSearchText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

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
        case 4: _t->setCurrentCategoryIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setCurrentTemplateIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->load(); break;
        case 7: _t->saveCurrentCategory(); break;
        case 8: _t->setSearchText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TemplatesModel::*)();
            if (_t _q_method = &TemplatesModel::categoriesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TemplatesModel::*)();
            if (_t _q_method = &TemplatesModel::templatesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TemplatesModel::*)();
            if (_t _q_method = &TemplatesModel::currentCategoryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TemplatesModel::*)();
            if (_t _q_method = &TemplatesModel::currentTemplateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
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
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::project::TemplatesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::TemplatesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEprojectSCOPETemplatesModelENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
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
