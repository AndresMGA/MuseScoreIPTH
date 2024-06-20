/****************************************************************************
** Meta object code from reading C++ file 'hairpintypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/hairpintypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hairpintypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEHairpinTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEHairpinTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::HairpinTypes",
    "VelocityEasing",
    "VELOCITY_EASING_LINEAR",
    "VELOCITY_EASING_EXPONENTIAL",
    "VELOCITY_EASING_IN",
    "VELOCITY_EASING_OUT",
    "VELOCITY_EASING_IN_OUT"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEHairpinTypesENDCLASS[] = {

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
       1,    1, 0x2,    5,   19,

 // enum data: key, value
       2, uint(mu::inspector::HairpinTypes::VelocityEasing::VELOCITY_EASING_LINEAR),
       3, uint(mu::inspector::HairpinTypes::VelocityEasing::VELOCITY_EASING_EXPONENTIAL),
       4, uint(mu::inspector::HairpinTypes::VelocityEasing::VELOCITY_EASING_IN),
       5, uint(mu::inspector::HairpinTypes::VelocityEasing::VELOCITY_EASING_OUT),
       6, uint(mu::inspector::HairpinTypes::VelocityEasing::VELOCITY_EASING_IN_OUT),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::HairpinTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEHairpinTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEHairpinTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEHairpinTypesENDCLASS_t,
        // enum 'VelocityEasing'
        QtPrivate::TypeAndForceComplete<HairpinTypes::VelocityEasing, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HairpinTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
