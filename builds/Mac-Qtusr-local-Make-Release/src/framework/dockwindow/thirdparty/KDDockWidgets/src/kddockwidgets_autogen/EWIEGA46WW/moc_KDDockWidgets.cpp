/****************************************************************************
** Meta object code from reading C++ file 'KDDockWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../../src/framework/dockwindow/thirdparty/KDDockWidgets/src/KDDockWidgets.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KDDockWidgets.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKDDockWidgetsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSKDDockWidgetsENDCLASS = QtMocHelpers::stringData(
    "KDDockWidgets",
    "Location",
    "Location_None",
    "Location_OnLeft",
    "Location_OnTop",
    "Location_OnRight",
    "Location_OnBottom",
    "MainWindowOptions",
    "MainWindowOption",
    "MainWindowOption_None",
    "MainWindowOption_HasCentralFrame",
    "MainWindowOption_MDI",
    "MainWindowOption_HasCentralWidget",
    "DefaultSizeMode",
    "ItemSize",
    "Fair",
    "FairButFloor",
    "NoDefaultSizeMode",
    "AddingOption",
    "AddingOption_None",
    "AddingOption_StartHidden",
    "InitialVisibilityOption",
    "StartVisible",
    "StartHidden",
    "RestoreOptions",
    "RestoreOption",
    "RestoreOption_None",
    "RestoreOption_RelativeToMainWindow",
    "DropIndicatorType",
    "Classic",
    "Segmented",
    "None",
    "SuggestedGeometryHint",
    "SuggestedGeometryHint_None",
    "SuggestedGeometryHint_PreserveCenter",
    "SuggestedGeometryHint_GeometryIsFromDocked",
    "TitleBarButtonType",
    "Close",
    "Float",
    "Minimize",
    "Maximize",
    "Normal",
    "AutoHide",
    "UnautoHide",
    "CursorPosition",
    "CursorPosition_Undefined",
    "CursorPosition_Left",
    "CursorPosition_Right",
    "CursorPosition_Top",
    "CursorPosition_Bottom",
    "CursorPosition_TopLeft",
    "CursorPosition_TopRight",
    "CursorPosition_BottomRight",
    "CursorPosition_BottomLeft",
    "CursorPosition_Horizontal",
    "CursorPosition_Vertical",
    "CursorPosition_All",
    "FrameOptions",
    "FrameOption",
    "FrameOption_None",
    "FrameOption_AlwaysShowsTabs",
    "FrameOption_IsCentralFrame",
    "FrameOption_IsOverlayed",
    "FrameOption_NonDockable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKDDockWidgetsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
      11,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   69,
       7,    8, 0x0,    4,   79,
      13,   13, 0x2,    4,   87,
      18,   18, 0x0,    2,   95,
      21,   21, 0x2,    2,   99,
      24,   25, 0x0,    2,  103,
      28,   28, 0x2,    3,  107,
      32,   32, 0x0,    3,  113,
      36,   36, 0x2,    7,  119,
      44,   44, 0x0,   12,  133,
      57,   58, 0x0,    5,  157,

 // enum data: key, value
       2, uint(KDDockWidgets::Location_None),
       3, uint(KDDockWidgets::Location_OnLeft),
       4, uint(KDDockWidgets::Location_OnTop),
       5, uint(KDDockWidgets::Location_OnRight),
       6, uint(KDDockWidgets::Location_OnBottom),
       9, uint(KDDockWidgets::MainWindowOption_None),
      10, uint(KDDockWidgets::MainWindowOption_HasCentralFrame),
      11, uint(KDDockWidgets::MainWindowOption_MDI),
      12, uint(KDDockWidgets::MainWindowOption_HasCentralWidget),
      14, uint(KDDockWidgets::DefaultSizeMode::ItemSize),
      15, uint(KDDockWidgets::DefaultSizeMode::Fair),
      16, uint(KDDockWidgets::DefaultSizeMode::FairButFloor),
      17, uint(KDDockWidgets::DefaultSizeMode::NoDefaultSizeMode),
      19, uint(KDDockWidgets::AddingOption_None),
      20, uint(KDDockWidgets::AddingOption_StartHidden),
      22, uint(KDDockWidgets::InitialVisibilityOption::StartVisible),
      23, uint(KDDockWidgets::InitialVisibilityOption::StartHidden),
      26, uint(KDDockWidgets::RestoreOption_None),
      27, uint(KDDockWidgets::RestoreOption_RelativeToMainWindow),
      29, uint(KDDockWidgets::DropIndicatorType::Classic),
      30, uint(KDDockWidgets::DropIndicatorType::Segmented),
      31, uint(KDDockWidgets::DropIndicatorType::None),
      33, uint(KDDockWidgets::SuggestedGeometryHint_None),
      34, uint(KDDockWidgets::SuggestedGeometryHint_PreserveCenter),
      35, uint(KDDockWidgets::SuggestedGeometryHint_GeometryIsFromDocked),
      37, uint(KDDockWidgets::TitleBarButtonType::Close),
      38, uint(KDDockWidgets::TitleBarButtonType::Float),
      39, uint(KDDockWidgets::TitleBarButtonType::Minimize),
      40, uint(KDDockWidgets::TitleBarButtonType::Maximize),
      41, uint(KDDockWidgets::TitleBarButtonType::Normal),
      42, uint(KDDockWidgets::TitleBarButtonType::AutoHide),
      43, uint(KDDockWidgets::TitleBarButtonType::UnautoHide),
      45, uint(KDDockWidgets::CursorPosition_Undefined),
      46, uint(KDDockWidgets::CursorPosition_Left),
      47, uint(KDDockWidgets::CursorPosition_Right),
      48, uint(KDDockWidgets::CursorPosition_Top),
      49, uint(KDDockWidgets::CursorPosition_Bottom),
      50, uint(KDDockWidgets::CursorPosition_TopLeft),
      51, uint(KDDockWidgets::CursorPosition_TopRight),
      52, uint(KDDockWidgets::CursorPosition_BottomRight),
      53, uint(KDDockWidgets::CursorPosition_BottomLeft),
      54, uint(KDDockWidgets::CursorPosition_Horizontal),
      55, uint(KDDockWidgets::CursorPosition_Vertical),
      56, uint(KDDockWidgets::CursorPosition_All),
      59, uint(KDDockWidgets::FrameOption_None),
      60, uint(KDDockWidgets::FrameOption_AlwaysShowsTabs),
      61, uint(KDDockWidgets::FrameOption_IsCentralFrame),
      62, uint(KDDockWidgets::FrameOption_IsOverlayed),
      63, uint(KDDockWidgets::FrameOption_NonDockable),

       0        // eod
};

Q_CONSTINIT const QMetaObject KDDockWidgets::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSKDDockWidgetsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKDDockWidgetsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKDDockWidgetsENDCLASS_t,
        // enum 'Location'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::Location, std::true_type>,
        // enum 'MainWindowOptions'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::MainWindowOptions, std::true_type>,
        // enum 'DefaultSizeMode'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::DefaultSizeMode, std::true_type>,
        // enum 'AddingOption'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::AddingOption, std::true_type>,
        // enum 'InitialVisibilityOption'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::InitialVisibilityOption, std::true_type>,
        // enum 'RestoreOptions'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::RestoreOptions, std::true_type>,
        // enum 'DropIndicatorType'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::DropIndicatorType, std::true_type>,
        // enum 'SuggestedGeometryHint'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::SuggestedGeometryHint, std::true_type>,
        // enum 'TitleBarButtonType'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::TitleBarButtonType, std::true_type>,
        // enum 'CursorPosition'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::CursorPosition, std::true_type>,
        // enum 'FrameOptions'
        QtPrivate::TypeAndForceComplete<KDDockWidgets::FrameOptions, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
