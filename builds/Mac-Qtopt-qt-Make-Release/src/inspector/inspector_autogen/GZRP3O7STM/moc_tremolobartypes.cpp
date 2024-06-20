/****************************************************************************
** Meta object code from reading C++ file 'tremolobartypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/types/tremolobartypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tremolobartypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETremoloBarTypesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETremoloBarTypesENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::TremoloBarTypes",
    "TremoloBarType",
    "TYPE_DIP",
    "TYPE_DIVE",
    "TYPE_RELEASE_UP",
    "TYPE_INVERTED_DIP",
    "TYPE_RETURN",
    "TYPE_RELEASE_DOWN",
    "TYPE_CUSTOM"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPETremoloBarTypesENDCLASS[] = {

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
       1,    1, 0x2,    7,   19,

 // enum data: key, value
       2, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_DIP),
       3, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_DIVE),
       4, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_RELEASE_UP),
       5, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_INVERTED_DIP),
       6, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_RETURN),
       7, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_RELEASE_DOWN),
       8, uint(mu::inspector::TremoloBarTypes::TremoloBarType::TYPE_CUSTOM),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::TremoloBarTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETremoloBarTypesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPETremoloBarTypesENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETremoloBarTypesENDCLASS_t,
        // enum 'TremoloBarType'
        QtPrivate::TypeAndForceComplete<TremoloBarTypes::TremoloBarType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TremoloBarTypes, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
