/****************************************************************************
** Meta object code from reading C++ file 'directiontypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/directiontypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directiontypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEDirectionTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEDirectionTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::DirectionTypes",
    "VerticalDirection",
    "VERTICAL_AUTO",
    "VERTICAL_UP",
    "VERTICAL_DOWN",
    "HorizontalDirection",
    "HORIZONTAL_AUTO",
    "HORIZONTAL_LEFT",
    "HORIZONTAL_RIGHT",
    "CenterBetweenStaves",
    "CENTER_STAVES_AUTO",
    "CENTER_STAVES_ON",
    "CENTER_STAVES_OFF"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEDirectionTypesENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   29,
       5,    5, 0x0,    3,   35,
       9,    9, 0x0,    3,   41,

 // enum data: key, value
       2, uint(mu::inspector::DirectionTypes::VERTICAL_AUTO),
       3, uint(mu::inspector::DirectionTypes::VERTICAL_UP),
       4, uint(mu::inspector::DirectionTypes::VERTICAL_DOWN),
       6, uint(mu::inspector::DirectionTypes::HORIZONTAL_AUTO),
       7, uint(mu::inspector::DirectionTypes::HORIZONTAL_LEFT),
       8, uint(mu::inspector::DirectionTypes::HORIZONTAL_RIGHT),
      10, uint(mu::inspector::DirectionTypes::CENTER_STAVES_AUTO),
      11, uint(mu::inspector::DirectionTypes::CENTER_STAVES_ON),
      12, uint(mu::inspector::DirectionTypes::CENTER_STAVES_OFF),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::DirectionTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEDirectionTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEDirectionTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEDirectionTypesENDCLASS_t,
        // enum 'VerticalDirection'
        QtPrivate::TypeAndForceComplete<DirectionTypes::VerticalDirection, std::true_type>,
        // enum 'HorizontalDirection'
        QtPrivate::TypeAndForceComplete<DirectionTypes::HorizontalDirection, std::true_type>,
        // enum 'CenterBetweenStaves'
        QtPrivate::TypeAndForceComplete<DirectionTypes::CenterBetweenStaves, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DirectionTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
