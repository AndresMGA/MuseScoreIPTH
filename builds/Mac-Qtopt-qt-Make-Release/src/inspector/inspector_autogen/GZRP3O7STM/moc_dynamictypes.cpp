/****************************************************************************
** Meta object code from reading C++ file 'dynamictypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/dynamictypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamictypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDynamicTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDynamicTypesENDCLASS = QtMocHelpers::stringData(
    "DynamicTypes",
    "Scope",
    "SCOPE_STAFF",
    "SCOPE_SINGLE_INSTRUMENT",
    "SCOPE_ALL_INSTRUMENTS",
    "VelocityChangeSpeed",
    "VELOCITY_CHANGE_SPEED_SLOW",
    "VELOCITY_CHANGE_SPEED_NORMAL",
    "VELOCITY_CHANGE_SPEED_FAST"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDynamicTypesENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    3,   24,
       5,    5, 0x2,    3,   30,

 // enum data: key, value
       2, uint(DynamicTypes::Scope::SCOPE_STAFF),
       3, uint(DynamicTypes::Scope::SCOPE_SINGLE_INSTRUMENT),
       4, uint(DynamicTypes::Scope::SCOPE_ALL_INSTRUMENTS),
       6, uint(DynamicTypes::VelocityChangeSpeed::VELOCITY_CHANGE_SPEED_SLOW),
       7, uint(DynamicTypes::VelocityChangeSpeed::VELOCITY_CHANGE_SPEED_NORMAL),
       8, uint(DynamicTypes::VelocityChangeSpeed::VELOCITY_CHANGE_SPEED_FAST),

       0        // eod
};

Q_CONSTINIT const QMetaObject DynamicTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSDynamicTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDynamicTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDynamicTypesENDCLASS_t,
        // enum 'Scope'
        QtPrivate::TypeAndForceComplete<DynamicTypes::Scope, std::true_type>,
        // enum 'VelocityChangeSpeed'
        QtPrivate::TypeAndForceComplete<DynamicTypes::VelocityChangeSpeed, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DynamicTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
