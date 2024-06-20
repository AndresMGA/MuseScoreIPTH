/****************************************************************************
** Meta object code from reading C++ file 'aboutmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/appshell/view/aboutmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aboutmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEAboutModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEAboutModelENDCLASS = QtMocHelpers::stringData(
    "mu::appshell::AboutModel",
    "museScoreVersion",
    "",
    "museScoreRevision",
    "museScoreUrl",
    "museScoreForumUrl",
    "museScoreContributionUrl",
    "museScorePrivacyPolicyUrl",
    "musicXMLLicenseUrl",
    "musicXMLLicenseDeedUrl",
    "copyRevisionToClipboard",
    "toggleDevMode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEappshellSCOPEAboutModelENDCLASS[] = {

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
       1,    0,   74,    2, 0x102,    1 /* Public | MethodIsConst  */,
       3,    0,   75,    2, 0x102,    2 /* Public | MethodIsConst  */,
       4,    0,   76,    2, 0x102,    3 /* Public | MethodIsConst  */,
       5,    0,   77,    2, 0x102,    4 /* Public | MethodIsConst  */,
       6,    0,   78,    2, 0x102,    5 /* Public | MethodIsConst  */,
       7,    0,   79,    2, 0x102,    6 /* Public | MethodIsConst  */,
       8,    0,   80,    2, 0x102,    7 /* Public | MethodIsConst  */,
       9,    0,   81,    2, 0x102,    8 /* Public | MethodIsConst  */,
      10,    0,   82,    2, 0x102,    9 /* Public | MethodIsConst  */,
      11,    0,   83,    2, 0x02,   10 /* Public */,

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

Q_CONSTINIT const QMetaObject mu::appshell::AboutModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEAboutModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEappshellSCOPEAboutModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEAboutModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AboutModel, std::true_type>,
        // method 'museScoreVersion'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'museScoreRevision'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'museScoreUrl'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'museScoreForumUrl'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'museScoreContributionUrl'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'museScorePrivacyPolicyUrl'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'musicXMLLicenseUrl'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'musicXMLLicenseDeedUrl'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'copyRevisionToClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleDevMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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

const QMetaObject *mu::appshell::AboutModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::appshell::AboutModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEappshellSCOPEAboutModelENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
