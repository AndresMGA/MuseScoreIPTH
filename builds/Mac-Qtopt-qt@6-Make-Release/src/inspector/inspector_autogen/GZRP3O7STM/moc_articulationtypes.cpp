/****************************************************************************
** Meta object code from reading C++ file 'articulationtypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/types/articulationtypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articulationtypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__ArticulationTypes_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__ArticulationTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__ArticulationTypes_t qt_meta_stringdata_mu__inspector__ArticulationTypes = {
    {
QT_MOC_LITERAL(0, 0, 32), // "mu::inspector::ArticulationTypes"
QT_MOC_LITERAL(1, 33, 9), // "Placement"
QT_MOC_LITERAL(2, 43, 8), // "TYPE_TOP"
QT_MOC_LITERAL(3, 52, 11), // "TYPE_BOTTOM"
QT_MOC_LITERAL(4, 64, 9), // "TYPE_AUTO"
QT_MOC_LITERAL(5, 74, 5), // "Style"
QT_MOC_LITERAL(6, 80, 14), // "STYLE_STANDART"
QT_MOC_LITERAL(7, 95, 13) // "STYLE_BAROQUE"

    },
    "mu::inspector::ArticulationTypes\0"
    "Placement\0TYPE_TOP\0TYPE_BOTTOM\0TYPE_AUTO\0"
    "Style\0STYLE_STANDART\0STYLE_BAROQUE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__ArticulationTypes[] = {

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

QT_INIT_METAOBJECT const QMetaObject mu::inspector::ArticulationTypes::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__inspector__ArticulationTypes.data,
    qt_meta_data_mu__inspector__ArticulationTypes,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
