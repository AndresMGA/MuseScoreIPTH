/****************************************************************************
** Meta object code from reading C++ file 'qquickselectionmode_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/treeview/qquickselectionmode_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickselectionmode_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQQuickSelectionMode1ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQQuickSelectionMode1ENDCLASS = QtMocHelpers::stringData(
    "QQuickSelectionMode1",
    "SelectionMode",
    "NoSelection",
    "SingleSelection",
    "ExtendedSelection",
    "MultiSelection",
    "ContiguousSelection"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQQuickSelectionMode1ENDCLASS[] = {

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
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(QQuickSelectionMode1::NoSelection),
       3, uint(QQuickSelectionMode1::SingleSelection),
       4, uint(QQuickSelectionMode1::ExtendedSelection),
       5, uint(QQuickSelectionMode1::MultiSelection),
       6, uint(QQuickSelectionMode1::ContiguousSelection),

       0        // eod
};

Q_CONSTINIT const QMetaObject QQuickSelectionMode1::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQQuickSelectionMode1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQQuickSelectionMode1ENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQQuickSelectionMode1ENDCLASS_t,
        // enum 'SelectionMode'
        QtPrivate::TypeAndForceComplete<QQuickSelectionMode1::SelectionMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QQuickSelectionMode1, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
