/****************************************************************************
** Meta object code from reading C++ file 'instrumentsscenetypes.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/instrumentsscene/instrumentsscenetypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrumentsscenetypes.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsTreeItemTypeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsTreeItemTypeENDCLASS = QtMocHelpers::stringData(
    "mu::instrumentsscene::InstrumentsTreeItemType",
    "ItemType",
    "UNDEFINED",
    "ROOT",
    "PART",
    "INSTRUMENT",
    "STAFF",
    "CONTROL_ADD_STAFF",
    "CONTROL_ADD_DOUBLE_INSTRUMENT"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsTreeItemTypeENDCLASS[] = {

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
       2, uint(mu::instrumentsscene::InstrumentsTreeItemType::ItemType::UNDEFINED),
       3, uint(mu::instrumentsscene::InstrumentsTreeItemType::ItemType::ROOT),
       4, uint(mu::instrumentsscene::InstrumentsTreeItemType::ItemType::PART),
       5, uint(mu::instrumentsscene::InstrumentsTreeItemType::ItemType::INSTRUMENT),
       6, uint(mu::instrumentsscene::InstrumentsTreeItemType::ItemType::STAFF),
       7, uint(mu::instrumentsscene::InstrumentsTreeItemType::ItemType::CONTROL_ADD_STAFF),
       8, uint(mu::instrumentsscene::InstrumentsTreeItemType::ItemType::CONTROL_ADD_DOUBLE_INSTRUMENT),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::instrumentsscene::InstrumentsTreeItemType::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsTreeItemTypeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsTreeItemTypeENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentsTreeItemTypeENDCLASS_t,
        // enum 'ItemType'
        QtPrivate::TypeAndForceComplete<InstrumentsTreeItemType::ItemType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstrumentsTreeItemType, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
