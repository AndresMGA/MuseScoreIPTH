/****************************************************************************
** Meta object code from reading C++ file 'opensaveprojectscenario.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/project/internal/opensaveprojectscenario.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opensaveprojectscenario.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEQMLSaveLocationTypeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEQMLSaveLocationTypeENDCLASS = QtMocHelpers::stringData(
    "mu::project::QMLSaveLocationType",
    "SaveLocationType",
    "Undefined",
    "Local",
    "Cloud"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEprojectSCOPEQMLSaveLocationTypeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   19,

 // enum data: key, value
       2, uint(mu::project::QMLSaveLocationType::Undefined),
       3, uint(mu::project::QMLSaveLocationType::Local),
       4, uint(mu::project::QMLSaveLocationType::Cloud),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::project::QMLSaveLocationType::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEQMLSaveLocationTypeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEprojectSCOPEQMLSaveLocationTypeENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEQMLSaveLocationTypeENDCLASS_t,
        // enum 'SaveLocationType'
        QtPrivate::TypeAndForceComplete<QMLSaveLocationType::SaveLocationType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMLSaveLocationType, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
