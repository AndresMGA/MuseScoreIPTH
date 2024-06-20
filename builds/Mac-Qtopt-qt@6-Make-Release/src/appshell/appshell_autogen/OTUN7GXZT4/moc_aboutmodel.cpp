/****************************************************************************
** Meta object code from reading C++ file 'aboutmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/appshell/view/aboutmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aboutmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__appshell__AboutModel_t {
    QByteArrayData data[12];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__appshell__AboutModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__appshell__AboutModel_t qt_meta_stringdata_mu__appshell__AboutModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::appshell::AboutModel"
QT_MOC_LITERAL(1, 25, 16), // "museScoreVersion"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 17), // "museScoreRevision"
QT_MOC_LITERAL(4, 61, 12), // "museScoreUrl"
QT_MOC_LITERAL(5, 74, 17), // "museScoreForumUrl"
QT_MOC_LITERAL(6, 92, 24), // "museScoreContributionUrl"
QT_MOC_LITERAL(7, 117, 25), // "museScorePrivacyPolicyUrl"
QT_MOC_LITERAL(8, 143, 18), // "musicXMLLicenseUrl"
QT_MOC_LITERAL(9, 162, 22), // "musicXMLLicenseDeedUrl"
QT_MOC_LITERAL(10, 185, 23), // "copyRevisionToClipboard"
QT_MOC_LITERAL(11, 209, 13) // "toggleDevMode"

    },
    "mu::appshell::AboutModel\0museScoreVersion\0"
    "\0museScoreRevision\0museScoreUrl\0"
    "museScoreForumUrl\0museScoreContributionUrl\0"
    "museScorePrivacyPolicyUrl\0musicXMLLicenseUrl\0"
    "musicXMLLicenseDeedUrl\0copyRevisionToClipboard\0"
    "toggleDevMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__appshell__AboutModel[] = {

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
       1,    0,   64,    2, 0x02 /* Public */,
       3,    0,   65,    2, 0x02 /* Public */,
       4,    0,   66,    2, 0x02 /* Public */,
       5,    0,   67,    2, 0x02 /* Public */,
       6,    0,   68,    2, 0x02 /* Public */,
       7,    0,   69,    2, 0x02 /* Public */,
       8,    0,   70,    2, 0x02 /* Public */,
       9,    0,   71,    2, 0x02 /* Public */,
      10,    0,   72,    2, 0x02 /* Public */,
      11,    0,   73,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mu::appshell::AboutModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AboutModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->museScoreVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->museScoreRevision();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantMap _r = _t->museScoreUrl();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantMap _r = _t->museScoreForumUrl();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->museScoreContributionUrl();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantMap _r = _t->museScorePrivacyPolicyUrl();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVariantMap _r = _t->musicXMLLicenseUrl();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariantMap _r = _t->musicXMLLicenseDeedUrl();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->copyRevisionToClipboard(); break;
        case 9: _t->toggleDevMode(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::appshell::AboutModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__appshell__AboutModel.data,
    qt_meta_data_mu__appshell__AboutModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::appshell::AboutModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::AboutModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__appshell__AboutModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::appshell::AboutModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
