/****************************************************************************
** Meta object code from reading C++ file 'filesystemapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/autobot/internal/api/filesystemapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__api__FileSystemApi_t {
    QByteArrayData data[19];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__api__FileSystemApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__api__FileSystemApi_t qt_meta_stringdata_mu__api__FileSystemApi = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::api::FileSystemApi"
QT_MOC_LITERAL(1, 23, 8), // "fileName"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "path"
QT_MOC_LITERAL(4, 38, 8), // "baseName"
QT_MOC_LITERAL(5, 47, 6), // "remove"
QT_MOC_LITERAL(6, 54, 5), // "clear"
QT_MOC_LITERAL(7, 60, 4), // "copy"
QT_MOC_LITERAL(8, 65, 3), // "src"
QT_MOC_LITERAL(9, 69, 3), // "dst"
QT_MOC_LITERAL(10, 73, 7), // "replace"
QT_MOC_LITERAL(11, 81, 9), // "scanFiles"
QT_MOC_LITERAL(12, 91, 7), // "rootDir"
QT_MOC_LITERAL(13, 99, 7), // "filters"
QT_MOC_LITERAL(14, 107, 4), // "mode"
QT_MOC_LITERAL(15, 112, 13), // "writeTextFile"
QT_MOC_LITERAL(16, 126, 8), // "filePath"
QT_MOC_LITERAL(17, 135, 3), // "str"
QT_MOC_LITERAL(18, 139, 12) // "readTextFile"

    },
    "mu::api::FileSystemApi\0fileName\0\0path\0"
    "baseName\0remove\0clear\0copy\0src\0dst\0"
    "replace\0scanFiles\0rootDir\0filters\0"
    "mode\0writeTextFile\0filePath\0str\0"
    "readTextFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__api__FileSystemApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x02 /* Public */,
       4,    1,   67,    2, 0x02 /* Public */,
       5,    1,   70,    2, 0x02 /* Public */,
       6,    1,   73,    2, 0x02 /* Public */,
       7,    3,   76,    2, 0x02 /* Public */,
       7,    2,   83,    2, 0x22 /* Public | MethodCloned */,
      11,    3,   88,    2, 0x02 /* Public */,
      11,    2,   95,    2, 0x22 /* Public | MethodCloned */,
      15,    2,  100,    2, 0x02 /* Public */,
      18,    1,  105,    2, 0x02 /* Public */,

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

void mu::api::FileSystemApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSystemApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->fileName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->baseName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantMap _r = _t->remove((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantMap _r = _t->clear((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->copy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantMap _r = _t->copy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVariantMap _r = _t->scanFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariantMap _r = _t->scanFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariantMap _r = _t->writeTextFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariantMap _r = _t->readTextFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::api::FileSystemApi::staticMetaObject = { {
    QMetaObject::SuperData::link<ApiObject::staticMetaObject>(),
    qt_meta_stringdata_mu__api__FileSystemApi.data,
    qt_meta_data_mu__api__FileSystemApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::api::FileSystemApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::api::FileSystemApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__api__FileSystemApi.stringdata0))
        return static_cast<void*>(this);
    return ApiObject::qt_metacast(_clname);
}

int mu::api::FileSystemApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
