/****************************************************************************
** Meta object code from reading C++ file 'accidentaltypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/accidentaltypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accidentaltypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAccidentalTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAccidentalTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::AccidentalTypes",
    "BracketType",
    "BRACKET_TYPE_NONE",
    "BRACKET_TYPE_PARENTHESIS",
    "BRACKET_TYPE_SQUARE"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEAccidentalTypesENDCLASS[] = {

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
       2, uint(mu::inspector::AccidentalTypes::BracketType::BRACKET_TYPE_NONE),
       3, uint(mu::inspector::AccidentalTypes::BracketType::BRACKET_TYPE_PARENTHESIS),
       4, uint(mu::inspector::AccidentalTypes::BracketType::BRACKET_TYPE_SQUARE),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::AccidentalTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAccidentalTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEAccidentalTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAccidentalTypesENDCLASS_t,
        // enum 'BracketType'
        QtPrivate::TypeAndForceComplete<AccidentalTypes::BracketType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccidentalTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
