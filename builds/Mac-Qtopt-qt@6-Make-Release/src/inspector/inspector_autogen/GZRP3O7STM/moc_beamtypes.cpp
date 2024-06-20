/****************************************************************************
** Meta object code from reading C++ file 'beamtypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/beamtypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beamtypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__BeamTypes_t {
    QByteArrayData data[14];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__BeamTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__BeamTypes_t qt_meta_stringdata_mu__inspector__BeamTypes = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::inspector::BeamTypes"
QT_MOC_LITERAL(1, 25, 4), // "Mode"
QT_MOC_LITERAL(2, 30, 12), // "MODE_INVALID"
QT_MOC_LITERAL(3, 43, 9), // "MODE_AUTO"
QT_MOC_LITERAL(4, 53, 9), // "MODE_NONE"
QT_MOC_LITERAL(5, 63, 10), // "MODE_BEGIN"
QT_MOC_LITERAL(6, 74, 12), // "MODE_BEGIN32"
QT_MOC_LITERAL(7, 87, 12), // "MODE_BEGIN64"
QT_MOC_LITERAL(8, 100, 8), // "MODE_MID"
QT_MOC_LITERAL(9, 109, 8), // "MODE_END"
QT_MOC_LITERAL(10, 118, 14), // "FeatheringMode"
QT_MOC_LITERAL(11, 133, 15), // "FEATHERING_NONE"
QT_MOC_LITERAL(12, 149, 20), // "FEATHERED_DECELERATE"
QT_MOC_LITERAL(13, 170, 20) // "FEATHERED_ACCELERATE"

    },
    "mu::inspector::BeamTypes\0Mode\0"
    "MODE_INVALID\0MODE_AUTO\0MODE_NONE\0"
    "MODE_BEGIN\0MODE_BEGIN32\0MODE_BEGIN64\0"
    "MODE_MID\0MODE_END\0FeatheringMode\0"
    "FEATHERING_NONE\0FEATHERED_DECELERATE\0"
    "FEATHERED_ACCELERATE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__BeamTypes[] = {

 // content:
       8,       // revision
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

QT_INIT_METAOBJECT const QMetaObject mu::inspector::BeamTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__BeamTypes.data,
    qt_meta_data_mu__inspector__BeamTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
