/****************************************************************************
** Meta object code from reading C++ file 'keysignaturetypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/keysignaturetypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keysignaturetypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__KeySignatureTypes_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__KeySignatureTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__KeySignatureTypes_t qt_meta_stringdata_mu__inspector__KeySignatureTypes = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::inspector::KeySignatureTypes"
QT_MOC_LITERAL(1, 33, 4), // "Mode"
QT_MOC_LITERAL(2, 38, 12), // "MODE_UNKNOWN"
QT_MOC_LITERAL(3, 51, 9), // "MODE_NONE"
QT_MOC_LITERAL(4, 61, 10), // "MODE_MAJOR"
QT_MOC_LITERAL(5, 72, 10), // "MODE_MINOR"
QT_MOC_LITERAL(6, 83, 11), // "MODE_DORIAN"
QT_MOC_LITERAL(7, 95, 13), // "MODE_PHRYGIAN"
QT_MOC_LITERAL(8, 109, 11), // "MODE_LYDIAN"
QT_MOC_LITERAL(9, 121, 15), // "MODE_MIXOLYDIAN"
QT_MOC_LITERAL(10, 137, 12), // "MODE_AEOLIAN"
QT_MOC_LITERAL(11, 150, 11), // "MODE_IONIAN"
QT_MOC_LITERAL(12, 162, 12) // "MODE_LOCRIAN"

    },
    "mu::inspector::KeySignatureTypes\0Mode\0"
    "MODE_UNKNOWN\0MODE_NONE\0MODE_MAJOR\0"
    "MODE_MINOR\0MODE_DORIAN\0MODE_PHRYGIAN\0"
    "MODE_LYDIAN\0MODE_MIXOLYDIAN\0MODE_AEOLIAN\0"
    "MODE_IONIAN\0MODE_LOCRIAN"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__KeySignatureTypes[] = {

 // content:
       8,       // revision
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

QT_INIT_METAOBJECT const QMetaObject mu::inspector::KeySignatureTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__KeySignatureTypes.data,
    qt_meta_data_mu__inspector__KeySignatureTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
