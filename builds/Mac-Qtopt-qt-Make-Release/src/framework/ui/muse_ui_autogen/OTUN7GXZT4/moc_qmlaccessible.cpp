/****************************************************************************
** Meta object code from reading C++ file 'qmlaccessible.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/view/qmlaccessible.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlaccessible.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEMUAccessibleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEMUAccessibleENDCLASS = QtMocHelpers::stringData(
    "muse::ui::MUAccessible",
    "Role",
    "NoRole",
    "Application",
    "Dialog",
    "Panel",
    "StaticText",
    "EditableText",
    "Button",
    "CheckBox",
    "RadioButton",
    "ComboBox",
    "List",
    "ListItem",
    "MenuItem",
    "Range",
    "Information"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPEMUAccessibleENDCLASS[] = {

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
       1,    1, 0x0,   15,   19,

 // enum data: key, value
       2, uint(muse::ui::MUAccessible::NoRole),
       3, uint(muse::ui::MUAccessible::Application),
       4, uint(muse::ui::MUAccessible::Dialog),
       5, uint(muse::ui::MUAccessible::Panel),
       6, uint(muse::ui::MUAccessible::StaticText),
       7, uint(muse::ui::MUAccessible::EditableText),
       8, uint(muse::ui::MUAccessible::Button),
       9, uint(muse::ui::MUAccessible::CheckBox),
      10, uint(muse::ui::MUAccessible::RadioButton),
      11, uint(muse::ui::MUAccessible::ComboBox),
      12, uint(muse::ui::MUAccessible::List),
      13, uint(muse::ui::MUAccessible::ListItem),
      14, uint(muse::ui::MUAccessible::MenuItem),
      15, uint(muse::ui::MUAccessible::Range),
      16, uint(muse::ui::MUAccessible::Information),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::ui::MUAccessible::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEMUAccessibleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPEMUAccessibleENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEMUAccessibleENDCLASS_t,
        // enum 'Role'
        QtPrivate::TypeAndForceComplete<MUAccessible::Role, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MUAccessible, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS = QtMocHelpers::stringData(
    "muse::ui::AccessibleItem",
    "accessiblePrnChanged",
    "",
    "roleChanged",
    "MUAccessible::Role",
    "role",
    "nameChanged",
    "name",
    "descriptionChanged",
    "description",
    "valueChanged",
    "value",
    "maximumValueChanged",
    "maximumValue",
    "minimumValueChanged",
    "minimumValue",
    "stepSizeChanged",
    "stepSize",
    "textChanged",
    "selectedTextChanged",
    "selectionStartChanged",
    "selectionEndChanged",
    "cursorPositionChanged",
    "rowChanged",
    "ignoredChanged",
    "ignored",
    "visualItemChanged",
    "QQuickItem*",
    "item",
    "stateChanged",
    "windowChanged",
    "setAccessibleParent",
    "ui::AccessibleItem*",
    "p",
    "setRole",
    "setName",
    "setDescription",
    "setValue",
    "setMaximumValue",
    "setMinimumValue",
    "setStepSize",
    "setText",
    "text",
    "setSelectedText",
    "selectedText",
    "setSelectionStart",
    "selectionStart",
    "setSelectionEnd",
    "selectionEnd",
    "setCursorPosition",
    "cursorPosition",
    "setRow",
    "row",
    "setIgnored",
    "setVisualItem",
    "setWindow",
    "QWindow*",
    "window",
    "accessibleParent",
    "AccessibleItem*",
    "muse::ui::MUAccessible::Role",
    "visualItem",
    "enabled",
    "selected",
    "focused",
    "checked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
      21,  311, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  224,    2, 0x06,   22 /* Public */,
       3,    1,  225,    2, 0x06,   23 /* Public */,
       6,    1,  228,    2, 0x06,   25 /* Public */,
       8,    1,  231,    2, 0x06,   27 /* Public */,
      10,    1,  234,    2, 0x06,   29 /* Public */,
      12,    1,  237,    2, 0x06,   31 /* Public */,
      14,    1,  240,    2, 0x06,   33 /* Public */,
      16,    1,  243,    2, 0x06,   35 /* Public */,
      18,    0,  246,    2, 0x06,   37 /* Public */,
      19,    0,  247,    2, 0x06,   38 /* Public */,
      20,    0,  248,    2, 0x06,   39 /* Public */,
      21,    0,  249,    2, 0x06,   40 /* Public */,
      22,    0,  250,    2, 0x06,   41 /* Public */,
      23,    0,  251,    2, 0x06,   42 /* Public */,
      24,    1,  252,    2, 0x06,   43 /* Public */,
      26,    1,  255,    2, 0x06,   45 /* Public */,
      29,    0,  258,    2, 0x06,   47 /* Public */,
      30,    0,  259,    2, 0x06,   48 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      31,    1,  260,    2, 0x0a,   49 /* Public */,
      34,    1,  263,    2, 0x0a,   51 /* Public */,
      35,    1,  266,    2, 0x0a,   53 /* Public */,
      36,    1,  269,    2, 0x0a,   55 /* Public */,
      37,    1,  272,    2, 0x0a,   57 /* Public */,
      38,    1,  275,    2, 0x0a,   59 /* Public */,
      39,    1,  278,    2, 0x0a,   61 /* Public */,
      40,    1,  281,    2, 0x0a,   63 /* Public */,
      41,    1,  284,    2, 0x0a,   65 /* Public */,
      43,    1,  287,    2, 0x0a,   67 /* Public */,
      45,    1,  290,    2, 0x0a,   69 /* Public */,
      47,    1,  293,    2, 0x0a,   71 /* Public */,
      49,    1,  296,    2, 0x0a,   73 /* Public */,
      51,    1,  299,    2, 0x0a,   75 /* Public */,
      53,    1,  302,    2, 0x0a,   77 /* Public */,
      54,    1,  305,    2, 0x0a,   79 /* Public */,
      55,    1,  308,    2, 0x0a,   81 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QVariant,   11,
    QMetaType::Void, QMetaType::QVariant,   13,
    QMetaType::Void, QMetaType::QVariant,   15,
    QMetaType::Void, QMetaType::QVariant,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QVariant,   11,
    QMetaType::Void, QMetaType::QVariant,   13,
    QMetaType::Void, QMetaType::QVariant,   15,
    QMetaType::Void, QMetaType::QVariant,   17,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 56,   57,

 // properties: name, type, flags
      58, 0x80000000 | 59, 0x0001510b, uint(0), 0,
       5, 0x80000000 | 60, 0x0001510b, uint(1), 0,
       7, QMetaType::QString, 0x00015103, uint(2), 0,
       9, QMetaType::QString, 0x00015103, uint(3), 0,
      11, QMetaType::QVariant, 0x00015103, uint(4), 0,
      13, QMetaType::QVariant, 0x00015103, uint(5), 0,
      15, QMetaType::QVariant, 0x00015103, uint(6), 0,
      17, QMetaType::QVariant, 0x00015103, uint(7), 0,
      42, QMetaType::QString, 0x00015103, uint(8), 0,
      44, QMetaType::QString, 0x00015103, uint(9), 0,
      46, QMetaType::Int, 0x00015103, uint(10), 0,
      48, QMetaType::Int, 0x00015103, uint(11), 0,
      50, QMetaType::Int, 0x00015103, uint(12), 0,
      52, QMetaType::Int, 0x00015103, uint(13), 0,
      25, QMetaType::Bool, 0x00015103, uint(14), 0,
      61, 0x80000000 | 27, 0x0001510b, uint(15), 0,
      57, 0x80000000 | 56, 0x0001510b, uint(17), 0,
      62, QMetaType::Bool, 0x00015803, uint(16), 0,
      63, QMetaType::Bool, 0x00015803, uint(16), 0,
      64, QMetaType::Bool, 0x00015803, uint(16), 0,
      65, QMetaType::Bool, 0x00015803, uint(16), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS[] = {
    QMetaObject::SuperData::link<muse::ui::MUAccessible::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject muse::ui::AccessibleItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS_t,
        // property 'accessibleParent'
        QtPrivate::TypeAndForceComplete<AccessibleItem*, std::true_type>,
        // property 'role'
        QtPrivate::TypeAndForceComplete<muse::ui::MUAccessible::Role, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'value'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'maximumValue'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'minimumValue'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'stepSize'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'selectedText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'selectionStart'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'selectionEnd'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'cursorPosition'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'row'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'ignored'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'visualItem'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'window'
        QtPrivate::TypeAndForceComplete<QWindow*, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'focused'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccessibleItem, std::true_type>,
        // method 'accessiblePrnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'roleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MUAccessible::Role, std::false_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'descriptionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'maximumValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'minimumValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'stepSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionStartChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionEndChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ignoredChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'visualItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'windowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAccessibleParent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ui::AccessibleItem *, std::false_type>,
        // method 'setRole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MUAccessible::Role, std::false_type>,
        // method 'setName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setDescription'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'setMaximumValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'setMinimumValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'setStepSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSelectedText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSelectionStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSelectionEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCursorPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setIgnored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setVisualItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickItem *, std::false_type>,
        // method 'setWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>
    >,
    nullptr
} };

void muse::ui::AccessibleItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccessibleItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accessiblePrnChanged(); break;
        case 1: _t->roleChanged((*reinterpret_cast< std::add_pointer_t<MUAccessible::Role>>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->descriptionChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 5: _t->maximumValueChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 6: _t->minimumValueChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 7: _t->stepSizeChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 8: _t->textChanged(); break;
        case 9: _t->selectedTextChanged(); break;
        case 10: _t->selectionStartChanged(); break;
        case 11: _t->selectionEndChanged(); break;
        case 12: _t->cursorPositionChanged(); break;
        case 13: _t->rowChanged(); break;
        case 14: _t->ignoredChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->visualItemChanged((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 16: _t->stateChanged(); break;
        case 17: _t->windowChanged(); break;
        case 18: _t->setAccessibleParent((*reinterpret_cast< std::add_pointer_t<ui::AccessibleItem*>>(_a[1]))); break;
        case 19: _t->setRole((*reinterpret_cast< std::add_pointer_t<MUAccessible::Role>>(_a[1]))); break;
        case 20: _t->setName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->setDescription((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->setValue((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 23: _t->setMaximumValue((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 24: _t->setMinimumValue((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 25: _t->setStepSize((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 26: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->setSelectedText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->setSelectionStart((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->setSelectionEnd((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->setCursorPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->setRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->setIgnored((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->setVisualItem((*reinterpret_cast< std::add_pointer_t<QQuickItem*>>(_a[1]))); break;
        case 34: _t->setWindow((*reinterpret_cast< std::add_pointer_t<QWindow*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 33:
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
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::accessiblePrnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(MUAccessible::Role );
            if (_t _q_method = &AccessibleItem::roleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QString );
            if (_t _q_method = &AccessibleItem::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QString );
            if (_t _q_method = &AccessibleItem::descriptionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (_t _q_method = &AccessibleItem::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (_t _q_method = &AccessibleItem::maximumValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (_t _q_method = &AccessibleItem::minimumValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (_t _q_method = &AccessibleItem::stepSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::selectedTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::selectionStartChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::selectionEndChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::rowChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(bool );
            if (_t _q_method = &AccessibleItem::ignoredChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QQuickItem * );
            if (_t _q_method = &AccessibleItem::visualItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (_t _q_method = &AccessibleItem::windowChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccessibleItem* >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccessibleItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccessibleItem**>(_v) = _t->accessibleParent_property(); break;
        case 1: *reinterpret_cast< muse::ui::MUAccessible::Role*>(_v) = _t->role(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->maximumValue(); break;
        case 6: *reinterpret_cast< QVariant*>(_v) = _t->minimumValue(); break;
        case 7: *reinterpret_cast< QVariant*>(_v) = _t->stepSize(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->selectedText(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->selectionStart(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->selectionEnd(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->row(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->ignored(); break;
        case 15: *reinterpret_cast< QQuickItem**>(_v) = _t->visualItem(); break;
        case 16: *reinterpret_cast< QWindow**>(_v) = _t->window(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->focused(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccessibleItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccessibleParent(*reinterpret_cast< AccessibleItem**>(_v)); break;
        case 1: _t->setRole(*reinterpret_cast< muse::ui::MUAccessible::Role*>(_v)); break;
        case 2: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 5: _t->setMaximumValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 6: _t->setMinimumValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 7: _t->setStepSize(*reinterpret_cast< QVariant*>(_v)); break;
        case 8: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setSelectedText(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setSelectionStart(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setSelectionEnd(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setRow(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setIgnored(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setVisualItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 16: _t->setWindow(*reinterpret_cast< QWindow**>(_v)); break;
        case 17: _t->set_enabled(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->set_selected(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->set_focused(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->set_checked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::ui::AccessibleItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::ui::AccessibleItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEAccessibleItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "accessibility::IAccessible"))
        return static_cast< accessibility::IAccessible*>(this);
    if (!strcmp(_clname, "Injectable"))
        return static_cast< Injectable*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::ui::AccessibleItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void muse::ui::AccessibleItem::accessiblePrnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::ui::AccessibleItem::roleChanged(MUAccessible::Role _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void muse::ui::AccessibleItem::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void muse::ui::AccessibleItem::descriptionChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void muse::ui::AccessibleItem::valueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void muse::ui::AccessibleItem::maximumValueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void muse::ui::AccessibleItem::minimumValueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void muse::ui::AccessibleItem::stepSizeChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void muse::ui::AccessibleItem::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void muse::ui::AccessibleItem::selectedTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void muse::ui::AccessibleItem::selectionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void muse::ui::AccessibleItem::selectionEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void muse::ui::AccessibleItem::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void muse::ui::AccessibleItem::rowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void muse::ui::AccessibleItem::ignoredChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void muse::ui::AccessibleItem::visualItemChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void muse::ui::AccessibleItem::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void muse::ui::AccessibleItem::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
