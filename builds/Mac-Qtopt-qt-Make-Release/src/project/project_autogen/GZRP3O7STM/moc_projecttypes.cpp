/****************************************************************************
** Meta object code from reading C++ file 'projecttypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/project/types/projecttypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projecttypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEGenerateAudioTimePeriodENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEGenerateAudioTimePeriodENDCLASS = QtMocHelpers::stringData(
    "mu::project::GenerateAudioTimePeriod",
    "Type",
    "Never",
    "Always",
    "AfterCertainNumberOfSaves"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEprojectSCOPEGenerateAudioTimePeriodENDCLASS[] = {

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
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(mu::project::GenerateAudioTimePeriod::Type::Never),
       3, uint(mu::project::GenerateAudioTimePeriod::Type::Always),
       4, uint(mu::project::GenerateAudioTimePeriod::Type::AfterCertainNumberOfSaves),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::project::GenerateAudioTimePeriod::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEGenerateAudioTimePeriodENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEprojectSCOPEGenerateAudioTimePeriodENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEGenerateAudioTimePeriodENDCLASS_t,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<GenerateAudioTimePeriod::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GenerateAudioTimePeriod, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEMigrationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEMigrationENDCLASS = QtMocHelpers::stringData(
    "mu::project::Migration",
    "Type",
    "Unknown",
    "Pre_3_6",
    "Ver_3_6"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEprojectSCOPEMigrationENDCLASS[] = {

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
       1,    1, 0x2,    3,   19,

 // enum data: key, value
       2, uint(mu::project::Migration::Type::Unknown),
       3, uint(mu::project::Migration::Type::Pre_3_6),
       4, uint(mu::project::Migration::Type::Ver_3_6),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::project::Migration::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEMigrationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEprojectSCOPEMigrationENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEMigrationENDCLASS_t,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<Migration::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Migration, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
