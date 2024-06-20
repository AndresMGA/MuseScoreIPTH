/****************************************************************************
** Meta object code from reading C++ file 'glissandotypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/glissandotypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glissandotypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGlissandoTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGlissandoTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::GlissandoTypes",
    "Style",
    "STYLE_CHROMATIC",
    "STYLE_WHITE_KEYS",
    "STYLE_BLACK_KEYS",
    "STYLE_DIATONIC",
    "STYLE_PORTAMENTO"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEGlissandoTypesENDCLASS[] = {

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
       2, uint(mu::inspector::GlissandoTypes::Style::STYLE_CHROMATIC),
       3, uint(mu::inspector::GlissandoTypes::Style::STYLE_WHITE_KEYS),
       4, uint(mu::inspector::GlissandoTypes::Style::STYLE_BLACK_KEYS),
       5, uint(mu::inspector::GlissandoTypes::Style::STYLE_DIATONIC),
       6, uint(mu::inspector::GlissandoTypes::Style::STYLE_PORTAMENTO),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::GlissandoTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGlissandoTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEGlissandoTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEGlissandoTypesENDCLASS_t,
        // enum 'Style'
        QtPrivate::TypeAndForceComplete<GlissandoTypes::Style, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GlissandoTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
