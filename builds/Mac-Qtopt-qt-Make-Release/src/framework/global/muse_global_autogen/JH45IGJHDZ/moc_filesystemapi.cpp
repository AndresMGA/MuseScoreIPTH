/****************************************************************************
** Meta object code from reading C++ file 'filesystemapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/global/api/filesystemapi.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemapi.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEapiSCOPEFileSystemApiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEapiSCOPEFileSystemApiENDCLASS = QtMocHelpers::stringData(
    "muse::api::FileSystemApi",
    "fileName",
    "",
    "path",
    "baseName",
    "remove",
    "clear",
    "copy",
    "src",
    "dst",
    "replace",
    "scanFiles",
    "rootDir",
    "filters",
    "mode",
    "writeTextFile",
    "filePath",
    "str",
    "readTextFile"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEapiSCOPEFileSystemApiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x102,    1 /* Public | MethodIsConst  */,
       4,    1,   77,    2, 0x102,    3 /* Public | MethodIsConst  */,
       5,    1,   80,    2, 0x02,    5 /* Public */,
       6,    1,   83,    2, 0x02,    7 /* Public */,
       7,    3,   86,    2, 0x02,    9 /* Public */,
       7,    2,   93,    2, 0x22,   13 /* Public | MethodCloned */,
      11,    3,   98,    2, 0x102,   16 /* Public | MethodIsConst  */,
      11,    2,  105,    2, 0x122,   20 /* Public | MethodCloned | MethodIsConst  */,
      15,    2,  110,    2, 0x102,   23 /* Public | MethodIsConst  */,
      18,    1,  115,    2, 0x102,   26 /* Public | MethodIsConst  */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QVariantMap, QMetaType::QString,    3,
    QMetaType::QVariantMap, QMetaType::QString,    3,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,   12,   13,   14,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QStringList,   12,   13,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::QVariantMap, QMetaType::QString,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::api::FileSystemApi::staticMetaObject = { {
    QMetaObject::SuperData::link<ApiObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEapiSCOPEFileSystemApiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEapiSCOPEFileSystemApiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEapiSCOPEFileSystemApiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileSystemApi, std::true_type>,
        // method 'fileName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'baseName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'remove'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'scanFiles'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'scanFiles'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'writeTextFile'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'readTextFile'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void muse::api::FileSystemApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSystemApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->fileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->baseName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantMap _r = _t->remove((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantMap _r = _t->clear((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->copy((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantMap _r = _t->copy((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVariantMap _r = _t->scanFiles((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariantMap _r = _t->scanFiles((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariantMap _r = _t->writeTextFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariantMap _r = _t->readTextFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *muse::api::FileSystemApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::api::FileSystemApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEapiSCOPEFileSystemApiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ApiObject::qt_metacast(_clname);
}

int muse::api::FileSystemApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApiObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
