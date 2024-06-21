/****************************************************************************
** Meta object code from reading C++ file 'qmlaccessible.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/ui/view/qmlaccessible.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlaccessible.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__ui__MUAccessible_t {
    QByteArrayData data[17];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__MUAccessible_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__MUAccessible_t qt_meta_stringdata_mu__ui__MUAccessible = {
    {
QT_MOC_LITERAL(0, 0, 20), // "mu::ui::MUAccessible"
QT_MOC_LITERAL(1, 21, 4), // "Role"
QT_MOC_LITERAL(2, 26, 6), // "NoRole"
QT_MOC_LITERAL(3, 33, 11), // "Application"
QT_MOC_LITERAL(4, 45, 6), // "Dialog"
QT_MOC_LITERAL(5, 52, 5), // "Panel"
QT_MOC_LITERAL(6, 58, 10), // "StaticText"
QT_MOC_LITERAL(7, 69, 12), // "EditableText"
QT_MOC_LITERAL(8, 82, 6), // "Button"
QT_MOC_LITERAL(9, 89, 8), // "CheckBox"
QT_MOC_LITERAL(10, 98, 11), // "RadioButton"
QT_MOC_LITERAL(11, 110, 8), // "ComboBox"
QT_MOC_LITERAL(12, 119, 4), // "List"
QT_MOC_LITERAL(13, 124, 8), // "ListItem"
QT_MOC_LITERAL(14, 133, 8), // "MenuItem"
QT_MOC_LITERAL(15, 142, 5), // "Range"
QT_MOC_LITERAL(16, 148, 11) // "Information"

    },
    "mu::ui::MUAccessible\0Role\0NoRole\0"
    "Application\0Dialog\0Panel\0StaticText\0"
    "EditableText\0Button\0CheckBox\0RadioButton\0"
    "ComboBox\0List\0ListItem\0MenuItem\0Range\0"
    "Information"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__MUAccessible[] = {

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
       1,    1, 0x0,   15,   19,

 // enum data: key, value
       2, uint(mu::ui::MUAccessible::NoRole),
       3, uint(mu::ui::MUAccessible::Application),
       4, uint(mu::ui::MUAccessible::Dialog),
       5, uint(mu::ui::MUAccessible::Panel),
       6, uint(mu::ui::MUAccessible::StaticText),
       7, uint(mu::ui::MUAccessible::EditableText),
       8, uint(mu::ui::MUAccessible::Button),
       9, uint(mu::ui::MUAccessible::CheckBox),
      10, uint(mu::ui::MUAccessible::RadioButton),
      11, uint(mu::ui::MUAccessible::ComboBox),
      12, uint(mu::ui::MUAccessible::List),
      13, uint(mu::ui::MUAccessible::ListItem),
      14, uint(mu::ui::MUAccessible::MenuItem),
      15, uint(mu::ui::MUAccessible::Range),
      16, uint(mu::ui::MUAccessible::Information),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject mu::ui::MUAccessible::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_mu__ui__MUAccessible.data,
    qt_meta_data_mu__ui__MUAccessible,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_mu__ui__AccessibleItem_t {
    QByteArrayData data[66];
    char stringdata0[864];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__ui__AccessibleItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__ui__AccessibleItem_t qt_meta_stringdata_mu__ui__AccessibleItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mu::ui::AccessibleItem"
QT_MOC_LITERAL(1, 23, 20), // "accessiblePrnChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "roleChanged"
QT_MOC_LITERAL(4, 57, 18), // "MUAccessible::Role"
QT_MOC_LITERAL(5, 76, 4), // "role"
QT_MOC_LITERAL(6, 81, 11), // "nameChanged"
QT_MOC_LITERAL(7, 93, 4), // "name"
QT_MOC_LITERAL(8, 98, 18), // "descriptionChanged"
QT_MOC_LITERAL(9, 117, 11), // "description"
QT_MOC_LITERAL(10, 129, 12), // "valueChanged"
QT_MOC_LITERAL(11, 142, 5), // "value"
QT_MOC_LITERAL(12, 148, 19), // "maximumValueChanged"
QT_MOC_LITERAL(13, 168, 12), // "maximumValue"
QT_MOC_LITERAL(14, 181, 19), // "minimumValueChanged"
QT_MOC_LITERAL(15, 201, 12), // "minimumValue"
QT_MOC_LITERAL(16, 214, 15), // "stepSizeChanged"
QT_MOC_LITERAL(17, 230, 8), // "stepSize"
QT_MOC_LITERAL(18, 239, 11), // "textChanged"
QT_MOC_LITERAL(19, 251, 19), // "selectedTextChanged"
QT_MOC_LITERAL(20, 271, 21), // "selectionStartChanged"
QT_MOC_LITERAL(21, 293, 19), // "selectionEndChanged"
QT_MOC_LITERAL(22, 313, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(23, 335, 10), // "rowChanged"
QT_MOC_LITERAL(24, 346, 14), // "ignoredChanged"
QT_MOC_LITERAL(25, 361, 7), // "ignored"
QT_MOC_LITERAL(26, 369, 17), // "visualItemChanged"
QT_MOC_LITERAL(27, 387, 11), // "QQuickItem*"
QT_MOC_LITERAL(28, 399, 4), // "item"
QT_MOC_LITERAL(29, 404, 12), // "stateChanged"
QT_MOC_LITERAL(30, 417, 13), // "windowChanged"
QT_MOC_LITERAL(31, 431, 19), // "setAccessibleParent"
QT_MOC_LITERAL(32, 451, 23), // "mu::ui::AccessibleItem*"
QT_MOC_LITERAL(33, 475, 1), // "p"
QT_MOC_LITERAL(34, 477, 7), // "setRole"
QT_MOC_LITERAL(35, 485, 7), // "setName"
QT_MOC_LITERAL(36, 493, 14), // "setDescription"
QT_MOC_LITERAL(37, 508, 8), // "setValue"
QT_MOC_LITERAL(38, 517, 15), // "setMaximumValue"
QT_MOC_LITERAL(39, 533, 15), // "setMinimumValue"
QT_MOC_LITERAL(40, 549, 11), // "setStepSize"
QT_MOC_LITERAL(41, 561, 7), // "setText"
QT_MOC_LITERAL(42, 569, 4), // "text"
QT_MOC_LITERAL(43, 574, 15), // "setSelectedText"
QT_MOC_LITERAL(44, 590, 12), // "selectedText"
QT_MOC_LITERAL(45, 603, 17), // "setSelectionStart"
QT_MOC_LITERAL(46, 621, 14), // "selectionStart"
QT_MOC_LITERAL(47, 636, 15), // "setSelectionEnd"
QT_MOC_LITERAL(48, 652, 12), // "selectionEnd"
QT_MOC_LITERAL(49, 665, 17), // "setCursorPosition"
QT_MOC_LITERAL(50, 683, 14), // "cursorPosition"
QT_MOC_LITERAL(51, 698, 6), // "setRow"
QT_MOC_LITERAL(52, 705, 3), // "row"
QT_MOC_LITERAL(53, 709, 10), // "setIgnored"
QT_MOC_LITERAL(54, 720, 13), // "setVisualItem"
QT_MOC_LITERAL(55, 734, 9), // "setWindow"
QT_MOC_LITERAL(56, 744, 8), // "QWindow*"
QT_MOC_LITERAL(57, 753, 6), // "window"
QT_MOC_LITERAL(58, 760, 16), // "accessibleParent"
QT_MOC_LITERAL(59, 777, 15), // "AccessibleItem*"
QT_MOC_LITERAL(60, 793, 26), // "mu::ui::MUAccessible::Role"
QT_MOC_LITERAL(61, 820, 10), // "visualItem"
QT_MOC_LITERAL(62, 831, 7), // "enabled"
QT_MOC_LITERAL(63, 839, 8), // "selected"
QT_MOC_LITERAL(64, 848, 7), // "focused"
QT_MOC_LITERAL(65, 856, 7) // "checked"

    },
    "mu::ui::AccessibleItem\0accessiblePrnChanged\0"
    "\0roleChanged\0MUAccessible::Role\0role\0"
    "nameChanged\0name\0descriptionChanged\0"
    "description\0valueChanged\0value\0"
    "maximumValueChanged\0maximumValue\0"
    "minimumValueChanged\0minimumValue\0"
    "stepSizeChanged\0stepSize\0textChanged\0"
    "selectedTextChanged\0selectionStartChanged\0"
    "selectionEndChanged\0cursorPositionChanged\0"
    "rowChanged\0ignoredChanged\0ignored\0"
    "visualItemChanged\0QQuickItem*\0item\0"
    "stateChanged\0windowChanged\0"
    "setAccessibleParent\0mu::ui::AccessibleItem*\0"
    "p\0setRole\0setName\0setDescription\0"
    "setValue\0setMaximumValue\0setMinimumValue\0"
    "setStepSize\0setText\0text\0setSelectedText\0"
    "selectedText\0setSelectionStart\0"
    "selectionStart\0setSelectionEnd\0"
    "selectionEnd\0setCursorPosition\0"
    "cursorPosition\0setRow\0row\0setIgnored\0"
    "setVisualItem\0setWindow\0QWindow*\0"
    "window\0accessibleParent\0AccessibleItem*\0"
    "mu::ui::MUAccessible::Role\0visualItem\0"
    "enabled\0selected\0focused\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__ui__AccessibleItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
      21,  276, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x06 /* Public */,
       3,    1,  190,    2, 0x06 /* Public */,
       6,    1,  193,    2, 0x06 /* Public */,
       8,    1,  196,    2, 0x06 /* Public */,
      10,    1,  199,    2, 0x06 /* Public */,
      12,    1,  202,    2, 0x06 /* Public */,
      14,    1,  205,    2, 0x06 /* Public */,
      16,    1,  208,    2, 0x06 /* Public */,
      18,    0,  211,    2, 0x06 /* Public */,
      19,    0,  212,    2, 0x06 /* Public */,
      20,    0,  213,    2, 0x06 /* Public */,
      21,    0,  214,    2, 0x06 /* Public */,
      22,    0,  215,    2, 0x06 /* Public */,
      23,    0,  216,    2, 0x06 /* Public */,
      24,    1,  217,    2, 0x06 /* Public */,
      26,    1,  220,    2, 0x06 /* Public */,
      29,    0,  223,    2, 0x06 /* Public */,
      30,    0,  224,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  225,    2, 0x0a /* Public */,
      34,    1,  228,    2, 0x0a /* Public */,
      35,    1,  231,    2, 0x0a /* Public */,
      36,    1,  234,    2, 0x0a /* Public */,
      37,    1,  237,    2, 0x0a /* Public */,
      38,    1,  240,    2, 0x0a /* Public */,
      39,    1,  243,    2, 0x0a /* Public */,
      40,    1,  246,    2, 0x0a /* Public */,
      41,    1,  249,    2, 0x0a /* Public */,
      43,    1,  252,    2, 0x0a /* Public */,
      45,    1,  255,    2, 0x0a /* Public */,
      47,    1,  258,    2, 0x0a /* Public */,
      49,    1,  261,    2, 0x0a /* Public */,
      51,    1,  264,    2, 0x0a /* Public */,
      53,    1,  267,    2, 0x0a /* Public */,
      54,    1,  270,    2, 0x0a /* Public */,
      55,    1,  273,    2, 0x0a /* Public */,

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
      58, 0x80000000 | 59, 0x0049510b,
       5, 0x80000000 | 60, 0x0049510b,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      11, QMetaType::QVariant, 0x00495103,
      13, QMetaType::QVariant, 0x00495103,
      15, QMetaType::QVariant, 0x00495103,
      17, QMetaType::QVariant, 0x00495103,
      42, QMetaType::QString, 0x00495103,
      44, QMetaType::QString, 0x00495103,
      46, QMetaType::Int, 0x00495103,
      48, QMetaType::Int, 0x00495103,
      50, QMetaType::Int, 0x00495103,
      52, QMetaType::Int, 0x00495103,
      25, QMetaType::Bool, 0x00495103,
      61, 0x80000000 | 27, 0x0049510b,
      57, 0x80000000 | 56, 0x0049510b,
      62, QMetaType::Bool, 0x00495803,
      63, QMetaType::Bool, 0x00495803,
      64, QMetaType::Bool, 0x00495803,
      65, QMetaType::Bool, 0x00495803,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      17,
      16,
      16,
      16,
      16,

       0        // eod
};

void mu::ui::AccessibleItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccessibleItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accessiblePrnChanged(); break;
        case 1: _t->roleChanged((*reinterpret_cast< MUAccessible::Role(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->descriptionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->valueChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->maximumValueChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->minimumValueChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 7: _t->stepSizeChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 8: _t->textChanged(); break;
        case 9: _t->selectedTextChanged(); break;
        case 10: _t->selectionStartChanged(); break;
        case 11: _t->selectionEndChanged(); break;
        case 12: _t->cursorPositionChanged(); break;
        case 13: _t->rowChanged(); break;
        case 14: _t->ignoredChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->visualItemChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 16: _t->stateChanged(); break;
        case 17: _t->windowChanged(); break;
        case 18: _t->setAccessibleParent((*reinterpret_cast< mu::ui::AccessibleItem*(*)>(_a[1]))); break;
        case 19: _t->setRole((*reinterpret_cast< MUAccessible::Role(*)>(_a[1]))); break;
        case 20: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->setDescription((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->setValue((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 23: _t->setMaximumValue((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 24: _t->setMinimumValue((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 25: _t->setStepSize((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 26: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->setSelectedText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setSelectionStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setSelectionEnd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setCursorPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setIgnored((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->setVisualItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 34: _t->setWindow((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::ui::AccessibleItem* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::accessiblePrnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(MUAccessible::Role );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::roleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::descriptionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::valueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::maximumValueChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::minimumValueChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::stepSizeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::textChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::selectedTextChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::selectionStartChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::selectionEndChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::cursorPositionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::rowChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::ignoredChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::visualItemChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::stateChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AccessibleItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccessibleItem::windowChanged)) {
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
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccessibleItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccessibleItem**>(_v) = _t->accessibleParent_property(); break;
        case 1: *reinterpret_cast< mu::ui::MUAccessible::Role*>(_v) = _t->role(); break;
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
        case 1: _t->setRole(*reinterpret_cast< mu::ui::MUAccessible::Role*>(_v)); break;
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
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_mu__ui__AccessibleItem[] = {
    QMetaObject::SuperData::link<mu::ui::MUAccessible::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject mu::ui::AccessibleItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__ui__AccessibleItem.data,
    qt_meta_data_mu__ui__AccessibleItem,
    qt_static_metacall,
    qt_meta_extradata_mu__ui__AccessibleItem,
    nullptr
} };


const QMetaObject *mu::ui::AccessibleItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::ui::AccessibleItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__ui__AccessibleItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "accessibility::IAccessible"))
        return static_cast< accessibility::IAccessible*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::ui::AccessibleItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::ui::AccessibleItem::accessiblePrnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::ui::AccessibleItem::roleChanged(MUAccessible::Role _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::ui::AccessibleItem::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::ui::AccessibleItem::descriptionChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::ui::AccessibleItem::valueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::ui::AccessibleItem::maximumValueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::ui::AccessibleItem::minimumValueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void mu::ui::AccessibleItem::stepSizeChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void mu::ui::AccessibleItem::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void mu::ui::AccessibleItem::selectedTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void mu::ui::AccessibleItem::selectionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void mu::ui::AccessibleItem::selectionEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void mu::ui::AccessibleItem::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void mu::ui::AccessibleItem::rowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void mu::ui::AccessibleItem::ignoredChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void mu::ui::AccessibleItem::visualItemChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void mu::ui::AccessibleItem::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void mu::ui::AccessibleItem::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
