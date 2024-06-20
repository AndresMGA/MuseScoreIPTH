/****************************************************************************
** Meta object code from reading C++ file 'beamtypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/beamtypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beamtypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::BeamTypes",
    "Mode",
    "MODE_INVALID",
    "MODE_AUTO",
    "MODE_NONE",
    "MODE_BEGIN",
    "MODE_BEGIN32",
    "MODE_BEGIN64",
    "MODE_MID",
    "MODE_END",
    "FeatheringMode",
    "FEATHERING_NONE",
    "FEATHERED_DECELERATE",
    "FEATHERED_ACCELERATE"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEBeamTypesENDCLASS[] = {

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
       1,    1, 0x2,    8,   24,
      10,   10, 0x2,    3,   40,

 // enum data: key, value
       2, uint(mu::inspector::BeamTypes::Mode::MODE_INVALID),
       3, uint(mu::inspector::BeamTypes::Mode::MODE_AUTO),
       4, uint(mu::inspector::BeamTypes::Mode::MODE_NONE),
       5, uint(mu::inspector::BeamTypes::Mode::MODE_BEGIN),
       6, uint(mu::inspector::BeamTypes::Mode::MODE_BEGIN32),
       7, uint(mu::inspector::BeamTypes::Mode::MODE_BEGIN64),
       8, uint(mu::inspector::BeamTypes::Mode::MODE_MID),
       9, uint(mu::inspector::BeamTypes::Mode::MODE_END),
      11, uint(mu::inspector::BeamTypes::FeatheringMode::FEATHERING_NONE),
      12, uint(mu::inspector::BeamTypes::FeatheringMode::FEATHERED_DECELERATE),
      13, uint(mu::inspector::BeamTypes::FeatheringMode::FEATHERED_ACCELERATE),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::BeamTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEBeamTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEBeamTypesENDCLASS_t,
        // enum 'Mode'
        QtPrivate::TypeAndForceComplete<BeamTypes::Mode, std::true_type>,
        // enum 'FeatheringMode'
        QtPrivate::TypeAndForceComplete<BeamTypes::FeatheringMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BeamTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
