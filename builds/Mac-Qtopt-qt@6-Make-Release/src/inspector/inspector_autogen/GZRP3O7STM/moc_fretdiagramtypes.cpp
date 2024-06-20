/****************************************************************************
** Meta object code from reading C++ file 'fretdiagramtypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/fretdiagramtypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fretdiagramtypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FretDiagramTypes_t {
    QByteArrayData data[14];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FretDiagramTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FretDiagramTypes_t qt_meta_stringdata_FretDiagramTypes = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FretDiagramTypes"
QT_MOC_LITERAL(1, 17, 7), // "FretDot"
QT_MOC_LITERAL(2, 25, 8), // "DOT_NONE"
QT_MOC_LITERAL(3, 34, 10), // "DOT_NORMAL"
QT_MOC_LITERAL(4, 45, 9), // "DOT_CROSS"
QT_MOC_LITERAL(5, 55, 10), // "DOT_SQUARE"
QT_MOC_LITERAL(6, 66, 12), // "DOT_TRIANGLE"
QT_MOC_LITERAL(7, 79, 10), // "FretMarker"
QT_MOC_LITERAL(8, 90, 11), // "MARKER_NONE"
QT_MOC_LITERAL(9, 102, 13), // "MARKER_CIRCLE"
QT_MOC_LITERAL(10, 116, 12), // "MARKER_CROSS"
QT_MOC_LITERAL(11, 129, 11), // "Orientation"
QT_MOC_LITERAL(12, 141, 20), // "ORIENTATION_VERTICAL"
QT_MOC_LITERAL(13, 162, 22) // "ORIENTATION_HORIZONTAL"

    },
    "FretDiagramTypes\0FretDot\0DOT_NONE\0"
    "DOT_NORMAL\0DOT_CROSS\0DOT_SQUARE\0"
    "DOT_TRIANGLE\0FretMarker\0MARKER_NONE\0"
    "MARKER_CIRCLE\0MARKER_CROSS\0Orientation\0"
    "ORIENTATION_VERTICAL\0ORIENTATION_HORIZONTAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FretDiagramTypes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    5,   29,
       7,    7, 0x2,    3,   39,
      11,   11, 0x2,    2,   45,

 // enum data: key, value
       2, uint(FretDiagramTypes::FretDot::DOT_NONE),
       3, uint(FretDiagramTypes::FretDot::DOT_NORMAL),
       4, uint(FretDiagramTypes::FretDot::DOT_CROSS),
       5, uint(FretDiagramTypes::FretDot::DOT_SQUARE),
       6, uint(FretDiagramTypes::FretDot::DOT_TRIANGLE),
       8, uint(FretDiagramTypes::FretMarker::MARKER_NONE),
       9, uint(FretDiagramTypes::FretMarker::MARKER_CIRCLE),
      10, uint(FretDiagramTypes::FretMarker::MARKER_CROSS),
      12, uint(FretDiagramTypes::Orientation::ORIENTATION_VERTICAL),
      13, uint(FretDiagramTypes::Orientation::ORIENTATION_HORIZONTAL),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject FretDiagramTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_FretDiagramTypes.data,
    qt_meta_data_FretDiagramTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
