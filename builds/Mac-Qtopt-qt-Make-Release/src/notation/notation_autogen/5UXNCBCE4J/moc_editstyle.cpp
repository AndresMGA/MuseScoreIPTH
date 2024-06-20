/****************************************************************************
** Meta object code from reading C++ file 'editstyle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/widgets/editstyle.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editstyle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEEditStyleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEEditStyleENDCLASS = QtMocHelpers::stringData(
    "mu::notation::EditStyle",
    "currentPageChanged",
    "",
    "currentSubPageChanged",
    "accept",
    "reject",
    "setCurrentPageCode",
    "code",
    "setCurrentSubPageCode",
    "selectChordDescriptionFile",
    "setChordStyle",
    "enableStyleWidget",
    "StyleId",
    "idx",
    "enable",
    "enableVerticalSpreadClicked",
    "disableVerticalSpreadClicked",
    "toggleHeaderOddEven",
    "toggleFooterOddEven",
    "buttonClicked",
    "QAbstractButton*",
    "setSwingParams",
    "concertPitchToggled",
    "lyricsDashMinLengthValueChanged",
    "lyricsDashMaxLengthValueChanged",
    "systemMinDistanceValueChanged",
    "systemMaxDistanceValueChanged",
    "resetStyleValue",
    "valueChanged",
    "textStyleChanged",
    "resetTextStyle",
    "engraving::TextStylePropertyType",
    "type",
    "textStyleValueChanged",
    "on_comboFBFont_currentIndexChanged",
    "index",
    "on_buttonTogglePagelist_clicked",
    "on_resetStylesButton_clicked",
    "on_pageRowSelectionChanged",
    "editUserStyleName",
    "endEditUserStyleName",
    "resetUserStyleName",
    "updateParenthesisIndicatingTiesGroupState",
    "clefVisibilityChanged",
    "currentPageCode",
    "currentSubPageCode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEEditStyleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       2,  300, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  218,    2, 0x06,    3 /* Public */,
       3,    0,  219,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  220,    2, 0x0a,    5 /* Public */,
       5,    0,  221,    2, 0x0a,    6 /* Public */,
       6,    1,  222,    2, 0x0a,    7 /* Public */,
       8,    1,  225,    2, 0x0a,    9 /* Public */,
       9,    0,  228,    2, 0x08,   11 /* Private */,
      10,    1,  229,    2, 0x08,   12 /* Private */,
      11,    2,  232,    2, 0x08,   14 /* Private */,
      15,    1,  237,    2, 0x08,   17 /* Private */,
      16,    1,  240,    2, 0x08,   19 /* Private */,
      17,    1,  243,    2, 0x08,   21 /* Private */,
      18,    1,  246,    2, 0x08,   23 /* Private */,
      19,    1,  249,    2, 0x08,   25 /* Private */,
      21,    1,  252,    2, 0x08,   27 /* Private */,
      22,    1,  255,    2, 0x08,   29 /* Private */,
      23,    1,  258,    2, 0x08,   31 /* Private */,
      24,    1,  261,    2, 0x08,   33 /* Private */,
      25,    1,  264,    2, 0x08,   35 /* Private */,
      26,    1,  267,    2, 0x08,   37 /* Private */,
      27,    1,  270,    2, 0x08,   39 /* Private */,
      28,    1,  273,    2, 0x08,   41 /* Private */,
      29,    1,  276,    2, 0x08,   43 /* Private */,
      30,    1,  279,    2, 0x08,   45 /* Private */,
      33,    2,  282,    2, 0x08,   47 /* Private */,
      34,    1,  287,    2, 0x08,   50 /* Private */,
      36,    0,  290,    2, 0x08,   52 /* Private */,
      37,    0,  291,    2, 0x08,   53 /* Private */,
      38,    0,  292,    2, 0x08,   54 /* Private */,
      39,    0,  293,    2, 0x08,   55 /* Private */,
      40,    0,  294,    2, 0x08,   56 /* Private */,
      41,    0,  295,    2, 0x08,   57 /* Private */,
      42,    0,  296,    2, 0x08,   58 /* Private */,
      43,    1,  297,    2, 0x08,   59 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,   13,   14,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 31, QMetaType::QVariant,   32,    2,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      44, QMetaType::QString, 0x00015103, uint(0), 0,
      45, QMetaType::QString, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::EditStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEEditStyleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEEditStyleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEEditStyleENDCLASS_t,
        // property 'currentPageCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentSubPageCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditStyle, std::true_type>,
        // method 'currentPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentSubPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentPageCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurrentSubPageCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'selectChordDescriptionFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setChordStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'enableStyleWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const StyleId, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'enableVerticalSpreadClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'disableVerticalSpreadClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggleHeaderOddEven'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggleFooterOddEven'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'buttonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'setSwingParams'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'concertPitchToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'lyricsDashMinLengthValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'lyricsDashMaxLengthValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'systemMinDistanceValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'systemMaxDistanceValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'resetStyleValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'textStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resetTextStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<engraving::TextStylePropertyType, std::false_type>,
        // method 'textStyleValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<engraving::TextStylePropertyType, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'on_comboFBFont_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_buttonTogglePagelist_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetStylesButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pageRowSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editUserStyleName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endEditUserStyleName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetUserStyleName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateParenthesisIndicatingTiesGroupState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clefVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::notation::EditStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditStyle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentPageChanged(); break;
        case 1: _t->currentSubPageChanged(); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->setCurrentPageCode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setCurrentSubPageCode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->selectChordDescriptionFile(); break;
        case 7: _t->setChordStyle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->enableStyleWidget((*reinterpret_cast< std::add_pointer_t<StyleId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->enableVerticalSpreadClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->disableVerticalSpreadClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->toggleHeaderOddEven((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->toggleFooterOddEven((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->buttonClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 14: _t->setSwingParams((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->concertPitchToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->lyricsDashMinLengthValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->lyricsDashMaxLengthValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 18: _t->systemMinDistanceValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->systemMaxDistanceValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 20: _t->resetStyleValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->textStyleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->resetTextStyle((*reinterpret_cast< std::add_pointer_t<engraving::TextStylePropertyType>>(_a[1]))); break;
        case 24: _t->textStyleValueChanged((*reinterpret_cast< std::add_pointer_t<engraving::TextStylePropertyType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 25: _t->on_comboFBFont_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_buttonTogglePagelist_clicked(); break;
        case 27: _t->on_resetStylesButton_clicked(); break;
        case 28: _t->on_pageRowSelectionChanged(); break;
        case 29: _t->editUserStyleName(); break;
        case 30: _t->endEditUserStyleName(); break;
        case 31: _t->resetUserStyleName(); break;
        case 32: _t->updateParenthesisIndicatingTiesGroupState(); break;
        case 33: _t->clefVisibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditStyle::*)();
            if (_t _q_method = &EditStyle::currentPageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditStyle::*)();
            if (_t _q_method = &EditStyle::currentSubPageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EditStyle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentPageCode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentSubPageCode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EditStyle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentPageCode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCurrentSubPageCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::notation::EditStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::EditStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEEditStyleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return QDialog::qt_metacast(_clname);
}

int mu::notation::EditStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 34;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mu::notation::EditStyle::currentPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::notation::EditStyle::currentSubPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
