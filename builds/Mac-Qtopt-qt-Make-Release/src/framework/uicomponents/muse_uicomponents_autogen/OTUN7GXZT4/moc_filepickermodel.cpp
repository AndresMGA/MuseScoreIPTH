/****************************************************************************
** Meta object code from reading C++ file 'filepickermodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/filepickermodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filepickermodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEFilePickerModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEFilePickerModelENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::FilePickerModel",
    "titleChanged",
    "",
    "title",
    "dirChanged",
    "dir",
    "filterChanged",
    "filter",
    "setTitle",
    "setDir",
    "setFilter",
    "selectFile",
    "selectDirectory",
    "selectMultipleDirectories",
    "selectedDirectoriesStr"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEFilePickerModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   91, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    4 /* Public */,
       4,    1,   71,    2, 0x06,    6 /* Public */,
       6,    1,   74,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   77,    2, 0x0a,   10 /* Public */,
       9,    1,   80,    2, 0x0a,   12 /* Public */,
      10,    1,   83,    2, 0x0a,   14 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   86,    2, 0x02,   16 /* Public */,
      12,    0,   87,    2, 0x02,   17 /* Public */,
      13,    1,   88,    2, 0x02,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QStringList,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QStringList,    7,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   14,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015103, uint(0), 0,
       5, QMetaType::QString, 0x00015103, uint(1), 0,
       7, QMetaType::QStringList, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::FilePickerModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEFilePickerModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEFilePickerModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEFilePickerModelENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'dir'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'filter'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FilePickerModel, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'dirChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'filterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'selectFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'selectDirectory'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'selectMultipleDirectories'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::FilePickerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilePickerModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->dirChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->filterChanged((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 3: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setDir((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setFilter((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 6: { QString _r = _t->selectFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->selectDirectory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->selectMultipleDirectories((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilePickerModel::*)(const QString & );
            if (_t _q_method = &FilePickerModel::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilePickerModel::*)(const QString & );
            if (_t _q_method = &FilePickerModel::dirChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FilePickerModel::*)(const QStringList & );
            if (_t _q_method = &FilePickerModel::filterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FilePickerModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->dir(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->filter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FilePickerModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDir(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFilter(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::uicomponents::FilePickerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::FilePickerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEFilePickerModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::uicomponents::FilePickerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void muse::uicomponents::FilePickerModel::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void muse::uicomponents::FilePickerModel::dirChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::uicomponents::FilePickerModel::filterChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
