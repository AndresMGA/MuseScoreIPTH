/****************************************************************************
** Meta object code from reading C++ file 'popupview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/popupview.h"
#include <QWindow>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'popupview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEPopupViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEPopupViewENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::PopupView",
    "parentItemChanged",
    "",
    "contentItemChanged",
    "contentWidthChanged",
    "contentHeightChanged",
    "windowChanged",
    "xChanged",
    "x",
    "yChanged",
    "y",
    "openPoliciesChanged",
    "muse::uicomponents::PopupView::OpenPolicies",
    "openPolicies",
    "closePoliciesChanged",
    "muse::uicomponents::PopupView::ClosePolicies",
    "closePolicies",
    "navigationParentControlChanged",
    "ui::INavigationControl*",
    "navigationParentControl",
    "objectIdChanged",
    "objectId",
    "titleChanged",
    "title",
    "modalChanged",
    "modal",
    "framelessChanged",
    "frameless",
    "resizableChanged",
    "resizable",
    "alwaysOnTopChanged",
    "retChanged",
    "ret",
    "isOpenedChanged",
    "opened",
    "aboutToClose",
    "QQuickCloseEvent*",
    "closeEvent",
    "closed",
    "force",
    "opensUpwardChanged",
    "opensUpward",
    "arrowXChanged",
    "arrowX",
    "paddingChanged",
    "padding",
    "showArrowChanged",
    "showArrow",
    "anchorItemChanged",
    "QQuickItem*",
    "anchorItem",
    "activateParentOnCloseChanged",
    "activateParentOnClose",
    "isContentReadyChanged",
    "setParentItem",
    "parent",
    "setEngine",
    "QQmlEngine*",
    "engine",
    "setComponent",
    "QQmlComponent*",
    "component",
    "setContentItem",
    "content",
    "setContentWidth",
    "contentWidth",
    "setContentHeight",
    "contentHeight",
    "setLocalX",
    "setLocalY",
    "setOpenPolicies",
    "setClosePolicies",
    "setNavigationParentControl",
    "parentNavigationControl",
    "setObjectId",
    "setTitle",
    "setModal",
    "setFrameless",
    "setResizable",
    "setAlwaysOnTop",
    "alwaysOnTop",
    "setRet",
    "setOpensUpward",
    "setArrowX",
    "setPadding",
    "setShowArrow",
    "setAnchorItem",
    "setActivateParentOnClose",
    "forceActiveFocus",
    "open",
    "close",
    "toggleOpened",
    "setParentWindow",
    "QWindow*",
    "window",
    "anchorGeometry",
    "contentItem",
    "isOpened",
    "OpenPolicies",
    "isContentReady",
    "ClosePolicies",
    "OpenPolicy",
    "Default",
    "NoActivateFocus",
    "OpenOnContentReady",
    "ClosePolicy",
    "NoAutoClose",
    "CloseOnPressOutsideParent"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEPopupViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
      24,  517, // properties
       2,  637, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  368,    2, 0x06,   27 /* Public */,
       3,    0,  369,    2, 0x06,   28 /* Public */,
       4,    0,  370,    2, 0x06,   29 /* Public */,
       5,    0,  371,    2, 0x06,   30 /* Public */,
       6,    0,  372,    2, 0x06,   31 /* Public */,
       7,    1,  373,    2, 0x06,   32 /* Public */,
       9,    1,  376,    2, 0x06,   34 /* Public */,
      11,    1,  379,    2, 0x06,   36 /* Public */,
      14,    1,  382,    2, 0x06,   38 /* Public */,
      17,    1,  385,    2, 0x06,   40 /* Public */,
      20,    1,  388,    2, 0x06,   42 /* Public */,
      22,    1,  391,    2, 0x06,   44 /* Public */,
      24,    1,  394,    2, 0x06,   46 /* Public */,
      26,    1,  397,    2, 0x06,   48 /* Public */,
      28,    1,  400,    2, 0x06,   50 /* Public */,
      30,    0,  403,    2, 0x06,   52 /* Public */,
      31,    1,  404,    2, 0x06,   53 /* Public */,
      33,    0,  407,    2, 0x06,   55 /* Public */,
      34,    0,  408,    2, 0x06,   56 /* Public */,
      35,    1,  409,    2, 0x06,   57 /* Public */,
      38,    1,  412,    2, 0x06,   59 /* Public */,
      40,    1,  415,    2, 0x06,   61 /* Public */,
      42,    1,  418,    2, 0x06,   63 /* Public */,
      44,    1,  421,    2, 0x06,   65 /* Public */,
      46,    1,  424,    2, 0x06,   67 /* Public */,
      48,    1,  427,    2, 0x06,   69 /* Public */,
      51,    1,  430,    2, 0x06,   71 /* Public */,
      53,    0,  433,    2, 0x06,   73 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      54,    1,  434,    2, 0x0a,   74 /* Public */,
      56,    1,  437,    2, 0x0a,   76 /* Public */,
      59,    1,  440,    2, 0x0a,   78 /* Public */,
      62,    1,  443,    2, 0x0a,   80 /* Public */,
      64,    1,  446,    2, 0x0a,   82 /* Public */,
      66,    1,  449,    2, 0x0a,   84 /* Public */,
      68,    1,  452,    2, 0x0a,   86 /* Public */,
      69,    1,  455,    2, 0x0a,   88 /* Public */,
      70,    1,  458,    2, 0x0a,   90 /* Public */,
      71,    1,  461,    2, 0x0a,   92 /* Public */,
      72,    1,  464,    2, 0x0a,   94 /* Public */,
      74,    1,  467,    2, 0x0a,   96 /* Public */,
      75,    1,  470,    2, 0x0a,   98 /* Public */,
      76,    1,  473,    2, 0x0a,  100 /* Public */,
      77,    1,  476,    2, 0x0a,  102 /* Public */,
      78,    1,  479,    2, 0x0a,  104 /* Public */,
      79,    1,  482,    2, 0x0a,  106 /* Public */,
      81,    1,  485,    2, 0x0a,  108 /* Public */,
      82,    1,  488,    2, 0x0a,  110 /* Public */,
      83,    1,  491,    2, 0x0a,  112 /* Public */,
      84,    1,  494,    2, 0x0a,  114 /* Public */,
      85,    1,  497,    2, 0x0a,  116 /* Public */,
      86,    1,  500,    2, 0x0a,  118 /* Public */,
      87,    1,  503,    2, 0x0a,  120 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      88,    0,  506,    2, 0x02,  122 /* Public */,
      89,    0,  507,    2, 0x02,  123 /* Public */,
      90,    1,  508,    2, 0x02,  124 /* Public */,
      90,    0,  511,    2, 0x22,  126 /* Public | MethodCloned */,
      91,    0,  512,    2, 0x02,  127 /* Public */,
      92,    1,  513,    2, 0x02,  128 /* Public */,
      95,    0,  516,    2, 0x102,  130 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 49,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, 0x80000000 | 49,   63,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   73,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::QVariantMap,   32,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, QMetaType::Bool,   52,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::QRectF,

 // properties: name, type, flags
      55, 0x80000000 | 49, 0x0001500b, uint(0), 0,
      96, 0x80000000 | 49, 0x0001510b, uint(1), 0,
      65, QMetaType::Int, 0x00015103, uint(2), 0,
      67, QMetaType::Int, 0x00015103, uint(3), 0,
      94, 0x80000000 | 93, 0x00015009, uint(4), 0,
       8, QMetaType::QReal, 0x00015003, uint(5), 0,
      10, QMetaType::QReal, 0x00015003, uint(6), 0,
      47, QMetaType::Bool, 0x00015103, uint(24), 0,
      45, QMetaType::Int, 0x00015103, uint(23), 0,
      50, 0x80000000 | 49, 0x0001510b, uint(25), 0,
      41, QMetaType::Bool, 0x00015001, uint(21), 0,
      43, QMetaType::Int, 0x00015103, uint(22), 0,
      97, QMetaType::Bool, 0x00015001, uint(17), 0,
      13, 0x80000000 | 98, 0x0001510b, uint(7), 0,
      99, QMetaType::Bool, 0x00015103, uint(27), 0,
      16, 0x80000000 | 100, 0x0001510b, uint(8), 0,
      52, QMetaType::Bool, 0x00015103, uint(26), 0,
      23, QMetaType::QString, 0x00015103, uint(11), 0,
      21, QMetaType::QString, 0x00015103, uint(10), 0,
      25, QMetaType::Bool, 0x00015103, uint(12), 0,
      27, QMetaType::Bool, 0x00015103, uint(13), 0,
      29, QMetaType::Bool, 0x00015103, uint(14), 0,
      80, QMetaType::Bool, 0x00015103, uint(15), 0,
      32, QMetaType::QVariantMap, 0x00015103, uint(16), 0,

 // enums: name, alias, flags, count, data
      98,  101, 0x1,    3,  647,
     100,  105, 0x1,    2,  653,

 // enum data: key, value
     102, uint(muse::uicomponents::PopupView::Default),
     103, uint(muse::uicomponents::PopupView::NoActivateFocus),
     104, uint(muse::uicomponents::PopupView::OpenOnContentReady),
     106, uint(muse::uicomponents::PopupView::NoAutoClose),
     107, uint(muse::uicomponents::PopupView::CloseOnPressOutsideParent),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::PopupView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEPopupViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEPopupViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEPopupViewENDCLASS_t,
        // property 'parent'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'contentItem'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'contentWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'contentHeight'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'window'
        QtPrivate::TypeAndForceComplete<QWindow*, std::true_type>,
        // property 'x'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'showArrow'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'padding'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'anchorItem'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'opensUpward'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'arrowX'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isOpened'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'openPolicies'
        QtPrivate::TypeAndForceComplete<OpenPolicies, std::true_type>,
        // property 'isContentReady'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'closePolicies'
        QtPrivate::TypeAndForceComplete<ClosePolicies, std::true_type>,
        // property 'activateParentOnClose'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'objectId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'modal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'frameless'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'resizable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'alwaysOnTop'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'ret'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // enum 'OpenPolicies'
        QtPrivate::TypeAndForceComplete<PopupView::OpenPolicies, std::true_type>,
        // enum 'ClosePolicies'
        QtPrivate::TypeAndForceComplete<PopupView::ClosePolicies, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PopupView, std::true_type>,
        // method 'parentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentHeightChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'yChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'openPoliciesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::uicomponents::PopupView::OpenPolicies, std::false_type>,
        // method 'closePoliciesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::uicomponents::PopupView::ClosePolicies, std::false_type>,
        // method 'navigationParentControlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ui::INavigationControl *, std::false_type>,
        // method 'objectIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'modalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'framelessChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'resizableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'alwaysOnTopChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'retChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'isOpenedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'opened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutToClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickCloseEvent *, std::false_type>,
        // method 'closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'opensUpwardChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'arrowXChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'paddingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showArrowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'anchorItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'activateParentOnCloseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isContentReadyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setParentItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'setEngine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQmlEngine *, std::false_type>,
        // method 'setComponent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQmlComponent *, std::false_type>,
        // method 'setContentItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'setContentWidth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setContentHeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setLocalX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setLocalY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setOpenPolicies'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::uicomponents::PopupView::OpenPolicies, std::false_type>,
        // method 'setClosePolicies'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::uicomponents::PopupView::ClosePolicies, std::false_type>,
        // method 'setNavigationParentControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ui::INavigationControl *, std::false_type>,
        // method 'setObjectId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setModal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFrameless'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setResizable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAlwaysOnTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setRet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'setOpensUpward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setArrowX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setPadding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setShowArrow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAnchorItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'setActivateParentOnClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'forceActiveFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleOpened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setParentWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>,
        // method 'anchorGeometry'
        QtPrivate::TypeAndForceComplete<QRectF, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::PopupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PopupView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->parentItemChanged(); break;
        case 1: _t->contentItemChanged(); break;
        case 2: _t->contentWidthChanged(); break;
        case 3: _t->contentHeightChanged(); break;
        case 4: _t->windowChanged(); break;
        case 5: _t->xChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->yChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: _t->openPoliciesChanged((*reinterpret_cast< std::add_pointer_t<muse::uicomponents::PopupView::OpenPolicies>>(_a[1]))); break;
        case 8: _t->closePoliciesChanged((*reinterpret_cast< std::add_pointer_t<muse::uicomponents::PopupView::ClosePolicies>>(_a[1]))); break;
        case 9: _t->navigationParentControlChanged((*reinterpret_cast< std::add_pointer_t<ui::INavigationControl*>>(_a[1]))); break;
        case 10: _t->objectIdChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->modalChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->framelessChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->resizableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->alwaysOnTopChanged(); break;
        case 16: _t->retChanged((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 17: _t->isOpenedChanged(); break;
        case 18: _t->opened(); break;
        case 19: _t->aboutToClose((*reinterpret_cast< std::add_pointer_t<QQuickCloseEvent*>>(_a[1]))); break;
        case 20: _t->closed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->opensUpwardChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->arrowXChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->paddingChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->showArrowChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->anchorItemChanged((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 26: _t->activateParentOnCloseChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->isContentReadyChanged(); break;
        case 28: _t->setParentItem((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 29: _t->setEngine((*reinterpret_cast< std::add_pointer_t<QQmlEngine*>>(_a[1]))); break;
        case 30: _t->setComponent((*reinterpret_cast< std::add_pointer_t<QQmlComponent*>>(_a[1]))); break;
        case 31: _t->setContentItem((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 32: _t->setContentWidth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->setContentHeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->setLocalX((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 35: _t->setLocalY((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 36: _t->setOpenPolicies((*reinterpret_cast< std::add_pointer_t<muse::uicomponents::PopupView::OpenPolicies>>(_a[1]))); break;
        case 37: _t->setClosePolicies((*reinterpret_cast< std::add_pointer_t<muse::uicomponents::PopupView::ClosePolicies>>(_a[1]))); break;
        case 38: _t->setNavigationParentControl((*reinterpret_cast< std::add_pointer_t<ui::INavigationControl*>>(_a[1]))); break;
        case 39: _t->setObjectId((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->setModal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 42: _t->setFrameless((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 43: _t->setResizable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 44: _t->setAlwaysOnTop((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 45: _t->setRet((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 46: _t->setOpensUpward((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->setArrowX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 48: _t->setPadding((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 49: _t->setShowArrow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 50: _t->setAnchorItem((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 51: _t->setActivateParentOnClose((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 52: _t->forceActiveFocus(); break;
        case 53: _t->open(); break;
        case 54: _t->close((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->close(); break;
        case 56: _t->toggleOpened(); break;
        case 57: _t->setParentWindow((*reinterpret_cast< std::add_pointer_t<QWindow*>>(_a[1]))); break;
        case 58: { QRectF _r = _t->anchorGeometry();
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQmlEngine* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQmlComponent* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::parentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::contentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::contentWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::contentHeightChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::windowChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(qreal );
            if (_t _q_method = &PopupView::xChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(qreal );
            if (_t _q_method = &PopupView::yChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(muse::uicomponents::PopupView::OpenPolicies );
            if (_t _q_method = &PopupView::openPoliciesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(muse::uicomponents::PopupView::ClosePolicies );
            if (_t _q_method = &PopupView::closePoliciesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(ui::INavigationControl * );
            if (_t _q_method = &PopupView::navigationParentControlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(QString );
            if (_t _q_method = &PopupView::objectIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(QString );
            if (_t _q_method = &PopupView::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(bool );
            if (_t _q_method = &PopupView::modalChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(bool );
            if (_t _q_method = &PopupView::framelessChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(bool );
            if (_t _q_method = &PopupView::resizableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::alwaysOnTopChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(QVariantMap );
            if (_t _q_method = &PopupView::retChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::isOpenedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::opened; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(QQuickCloseEvent * );
            if (_t _q_method = &PopupView::aboutToClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(bool );
            if (_t _q_method = &PopupView::closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(bool );
            if (_t _q_method = &PopupView::opensUpwardChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(int );
            if (_t _q_method = &PopupView::arrowXChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(int );
            if (_t _q_method = &PopupView::paddingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(bool );
            if (_t _q_method = &PopupView::showArrowChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(QQuickItem * );
            if (_t _q_method = &PopupView::anchorItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (PopupView::*)(bool );
            if (_t _q_method = &PopupView::activateParentOnCloseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (PopupView::*)();
            if (_t _q_method = &PopupView::isContentReadyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PopupView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->parentItem(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->contentWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->contentHeight(); break;
        case 4: *reinterpret_cast< QWindow**>(_v) = _t->window(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->localX(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->localY(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->showArrow(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->padding(); break;
        case 9: *reinterpret_cast< QQuickItem**>(_v) = _t->anchorItem(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->opensUpward(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->arrowX(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isOpened(); break;
        case 13: *reinterpret_cast<int*>(_v) = QFlag(_t->openPolicies()); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isContentReady(); break;
        case 15: *reinterpret_cast<int*>(_v) = QFlag(_t->closePolicies()); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->activateParentOnClose(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->objectId(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->modal(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->frameless(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->resizable(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->alwaysOnTop(); break;
        case 23: *reinterpret_cast< QVariantMap*>(_v) = _t->ret(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PopupView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setParentItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setContentItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setContentWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setContentHeight(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setLocalX(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setLocalY(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setShowArrow(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setPadding(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setAnchorItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 11: _t->setArrowX(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setOpenPolicies(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 14: _t->setIsContentReady(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setClosePolicies(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 16: _t->setActivateParentOnClose(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 18: _t->setObjectId(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setModal(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setFrameless(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setResizable(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setAlwaysOnTop(*reinterpret_cast< bool*>(_v)); break;
        case 23: _t->setRet(*reinterpret_cast< QVariantMap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::uicomponents::PopupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::PopupView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEPopupViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "Injectable"))
        return static_cast< Injectable*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::uicomponents::PopupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void muse::uicomponents::PopupView::parentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::uicomponents::PopupView::contentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::uicomponents::PopupView::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::uicomponents::PopupView::contentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::uicomponents::PopupView::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void muse::uicomponents::PopupView::xChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void muse::uicomponents::PopupView::yChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void muse::uicomponents::PopupView::openPoliciesChanged(muse::uicomponents::PopupView::OpenPolicies _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void muse::uicomponents::PopupView::closePoliciesChanged(muse::uicomponents::PopupView::ClosePolicies _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void muse::uicomponents::PopupView::navigationParentControlChanged(ui::INavigationControl * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void muse::uicomponents::PopupView::objectIdChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void muse::uicomponents::PopupView::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void muse::uicomponents::PopupView::modalChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void muse::uicomponents::PopupView::framelessChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void muse::uicomponents::PopupView::resizableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void muse::uicomponents::PopupView::alwaysOnTopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void muse::uicomponents::PopupView::retChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void muse::uicomponents::PopupView::isOpenedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void muse::uicomponents::PopupView::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void muse::uicomponents::PopupView::aboutToClose(QQuickCloseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void muse::uicomponents::PopupView::closed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void muse::uicomponents::PopupView::opensUpwardChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void muse::uicomponents::PopupView::arrowXChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void muse::uicomponents::PopupView::paddingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void muse::uicomponents::PopupView::showArrowChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void muse::uicomponents::PopupView::anchorItemChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void muse::uicomponents::PopupView::activateParentOnCloseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void muse::uicomponents::PopupView::isContentReadyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}
QT_WARNING_POP
