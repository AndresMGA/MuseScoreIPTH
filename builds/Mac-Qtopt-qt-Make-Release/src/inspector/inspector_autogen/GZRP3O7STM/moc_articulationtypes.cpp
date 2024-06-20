/****************************************************************************
** Meta object code from reading C++ file 'articulationtypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/articulationtypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articulationtypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEArticulationTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEArticulationTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::ArticulationTypes",
    "Placement",
    "TYPE_TOP",
    "TYPE_BOTTOM",
    "TYPE_AUTO",
    "Style",
    "STYLE_STANDART",
    "STYLE_BAROQUE"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEArticulationTypesENDCLASS[] = {

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
       5,    5, 0x2,    2,   30,

 // enum data: key, value
       2, uint(mu::inspector::ArticulationTypes::Placement::TYPE_TOP),
       3, uint(mu::inspector::ArticulationTypes::Placement::TYPE_BOTTOM),
       4, uint(mu::inspector::ArticulationTypes::Placement::TYPE_AUTO),
       6, uint(mu::inspector::ArticulationTypes::Style::STYLE_STANDART),
       7, uint(mu::inspector::ArticulationTypes::Style::STYLE_BAROQUE),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::ArticulationTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEArticulationTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEArticulationTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEArticulationTypesENDCLASS_t,
        // enum 'Placement'
        QtPrivate::TypeAndForceComplete<ArticulationTypes::Placement, std::true_type>,
        // enum 'Style'
        QtPrivate::TypeAndForceComplete<ArticulationTypes::Style, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ArticulationTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
