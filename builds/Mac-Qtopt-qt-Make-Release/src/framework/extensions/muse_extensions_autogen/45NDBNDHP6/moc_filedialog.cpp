/****************************************************************************
** Meta object code from reading C++ file 'filedialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/extensions/api/v1/filedialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEFileDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEFileDialogENDCLASS = QtMocHelpers::stringData(
    "muse::extensions::apiv1::FileDialog",
    "accepted",
    "",
    "rejected",
    "typeChanged",
    "titleChanged",
    "visibleChanged",
    "folderChanged",
    "filePathChanged",
    "type",
    "Type",
    "title",
    "visible",
    "folder",
    "filePath",
    "Load",
    "Save"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEFileDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   63, // properties
       1,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    7 /* Public */,
       3,    0,   57,    2, 0x06,    8 /* Public */,
       4,    0,   58,    2, 0x06,    9 /* Public */,
       5,    0,   59,    2, 0x06,   10 /* Public */,
       6,    0,   60,    2, 0x06,   11 /* Public */,
       7,    0,   61,    2, 0x06,   12 /* Public */,
       8,    0,   62,    2, 0x06,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0001590b, uint(2), 0,
      11, QMetaType::QString, 0x00015903, uint(3), 0,
      12, QMetaType::Bool, 0x00015903, uint(4), 0,
      13, QMetaType::QString, 0x00015903, uint(5), 0,
      14, QMetaType::QString, 0x00015903, uint(6), 0,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    2,   93,

 // enum data: key, value
      15, uint(muse::extensions::apiv1::FileDialog::Load),
      16, uint(muse::extensions::apiv1::FileDialog::Save),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::extensions::apiv1::FileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEFileDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEFileDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEFileDialogENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Type, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'folder'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'filePath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<FileDialog::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileDialog, std::true_type>,
        // method 'accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'folderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filePathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::extensions::apiv1::FileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        case 2: _t->typeChanged(); break;
        case 3: _t->titleChanged(); break;
        case 4: _t->visibleChanged(); break;
        case 5: _t->folderChanged(); break;
        case 6: _t->filePathChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileDialog::*)();
            if (_t _q_method = &FileDialog::accepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDialog::*)();
            if (_t _q_method = &FileDialog::rejected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDialog::*)();
            if (_t _q_method = &FileDialog::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileDialog::*)();
            if (_t _q_method = &FileDialog::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileDialog::*)();
            if (_t _q_method = &FileDialog::visibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileDialog::*)();
            if (_t _q_method = &FileDialog::folderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileDialog::*)();
            if (_t _q_method = &FileDialog::filePathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->folder(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< Type*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFolder(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setFilePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *muse::extensions::apiv1::FileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::extensions::apiv1::FileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEFileDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::extensions::apiv1::FileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void muse::extensions::apiv1::FileDialog::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::extensions::apiv1::FileDialog::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::extensions::apiv1::FileDialog::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::extensions::apiv1::FileDialog::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::extensions::apiv1::FileDialog::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void muse::extensions::apiv1::FileDialog::folderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void muse::extensions::apiv1::FileDialog::filePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
