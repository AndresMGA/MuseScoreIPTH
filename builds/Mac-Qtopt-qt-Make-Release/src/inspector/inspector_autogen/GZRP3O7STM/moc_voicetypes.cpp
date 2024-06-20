/****************************************************************************
** Meta object code from reading C++ file 'voicetypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/voicetypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voicetypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVoiceTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVoiceTypesENDCLASS = QtMocHelpers::stringData(
    "VoiceTypes",
    "VoiceApplication",
    "VOICE_ALL_IN_INSTRUMENT",
    "VOICE_ALL_IN_STAFF",
    "VOICE_CURRENT_ONLY"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVoiceTypesENDCLASS[] = {

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
       2, uint(VoiceTypes::VoiceApplication::VOICE_ALL_IN_INSTRUMENT),
       3, uint(VoiceTypes::VoiceApplication::VOICE_ALL_IN_STAFF),
       4, uint(VoiceTypes::VoiceApplication::VOICE_CURRENT_ONLY),

       0        // eod
};

Q_CONSTINIT const QMetaObject VoiceTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSVoiceTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVoiceTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVoiceTypesENDCLASS_t,
        // enum 'VoiceApplication'
        QtPrivate::TypeAndForceComplete<VoiceTypes::VoiceApplication, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VoiceTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
