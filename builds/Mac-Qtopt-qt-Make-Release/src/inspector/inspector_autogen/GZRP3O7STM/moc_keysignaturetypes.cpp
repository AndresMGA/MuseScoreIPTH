/****************************************************************************
** Meta object code from reading C++ file 'keysignaturetypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/keysignaturetypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keysignaturetypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEKeySignatureTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEKeySignatureTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::KeySignatureTypes",
    "Mode",
    "MODE_UNKNOWN",
    "MODE_NONE",
    "MODE_MAJOR",
    "MODE_MINOR",
    "MODE_DORIAN",
    "MODE_PHRYGIAN",
    "MODE_LYDIAN",
    "MODE_MIXOLYDIAN",
    "MODE_AEOLIAN",
    "MODE_IONIAN",
    "MODE_LOCRIAN"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEKeySignatureTypesENDCLASS[] = {

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
       1,    1, 0x2,   11,   19,

 // enum data: key, value
       2, uint(mu::inspector::KeySignatureTypes::Mode::MODE_UNKNOWN),
       3, uint(mu::inspector::KeySignatureTypes::Mode::MODE_NONE),
       4, uint(mu::inspector::KeySignatureTypes::Mode::MODE_MAJOR),
       5, uint(mu::inspector::KeySignatureTypes::Mode::MODE_MINOR),
       6, uint(mu::inspector::KeySignatureTypes::Mode::MODE_DORIAN),
       7, uint(mu::inspector::KeySignatureTypes::Mode::MODE_PHRYGIAN),
       8, uint(mu::inspector::KeySignatureTypes::Mode::MODE_LYDIAN),
       9, uint(mu::inspector::KeySignatureTypes::Mode::MODE_MIXOLYDIAN),
      10, uint(mu::inspector::KeySignatureTypes::Mode::MODE_AEOLIAN),
      11, uint(mu::inspector::KeySignatureTypes::Mode::MODE_IONIAN),
      12, uint(mu::inspector::KeySignatureTypes::Mode::MODE_LOCRIAN),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::KeySignatureTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEKeySignatureTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEKeySignatureTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEKeySignatureTypesENDCLASS_t,
        // enum 'Mode'
        QtPrivate::TypeAndForceComplete<KeySignatureTypes::Mode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KeySignatureTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
