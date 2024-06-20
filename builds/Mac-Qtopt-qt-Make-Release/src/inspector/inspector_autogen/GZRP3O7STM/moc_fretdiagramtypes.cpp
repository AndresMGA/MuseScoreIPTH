/****************************************************************************
** Meta object code from reading C++ file 'fretdiagramtypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/fretdiagramtypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fretdiagramtypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFretDiagramTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFretDiagramTypesENDCLASS = QtMocHelpers::stringData(
    "FretDiagramTypes",
    "FretDot",
    "DOT_NONE",
    "DOT_NORMAL",
    "DOT_CROSS",
    "DOT_SQUARE",
    "DOT_TRIANGLE",
    "FretMarker",
    "MARKER_NONE",
    "MARKER_CIRCLE",
    "MARKER_CROSS",
    "Orientation",
    "ORIENTATION_VERTICAL",
    "ORIENTATION_HORIZONTAL"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFretDiagramTypesENDCLASS[] = {

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
       1,    1, 0x2,    5,   29,
       7,    7, 0x2,    3,   39,
      11,   11, 0x2,    2,   45,

 // enum data: key, value
       2, uint(FretDiagramTypes::FretDot::DOT_NONE),
       3, uint(FretDiagramTypes::FretDot::DOT_NORMAL),
       4, uint(FretDiagramTypes::FretDot::DOT_CROSS),
       5, uint(FretDiagramTypes::FretDot::DOT_SQUARE),
       6, uint(FretDiagramTypes::FretDot::DOT_TRIANGLE),
       8, uint(FretDiagramTypes::FretMarker::MARKER_NONE),
       9, uint(FretDiagramTypes::FretMarker::MARKER_CIRCLE),
      10, uint(FretDiagramTypes::FretMarker::MARKER_CROSS),
      12, uint(FretDiagramTypes::Orientation::ORIENTATION_VERTICAL),
      13, uint(FretDiagramTypes::Orientation::ORIENTATION_HORIZONTAL),

       0        // eod
};

Q_CONSTINIT const QMetaObject FretDiagramTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSFretDiagramTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFretDiagramTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFretDiagramTypesENDCLASS_t,
        // enum 'FretDot'
        QtPrivate::TypeAndForceComplete<FretDiagramTypes::FretDot, std::true_type>,
        // enum 'FretMarker'
        QtPrivate::TypeAndForceComplete<FretDiagramTypes::FretMarker, std::true_type>,
        // enum 'Orientation'
        QtPrivate::TypeAndForceComplete<FretDiagramTypes::Orientation, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FretDiagramTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
