/****************************************************************************
** Meta object code from reading C++ file 'buttonboxmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/buttonboxmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonboxmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEButtonBoxModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEButtonBoxModelENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::ButtonBoxModel",
    "buttonLayoutChanged",
    "",
    "buttonsItemsChanged",
    "addButton",
    "text",
    "buttonType",
    "ButtonRole",
    "buttonRole",
    "isAccent",
    "isLeftSide",
    "reloadRequested",
    "load",
    "QList<int>",
    "setButtons",
    "buttons",
    "buttonLayout",
    "ButtonLayout",
    "buttonsItems",
    "QQmlListProperty<QQuickItem>",
    "ButtonType",
    "NoButton",
    "Ok",
    "Continue",
    "RestoreDefaults",
    "Reset",
    "Apply",
    "Help",
    "Discard",
    "Cancel",
    "Close",
    "Ignore",
    "Retry",
    "Abort",
    "NoToAll",
    "No",
    "YesToAll",
    "Yes",
    "Open",
    "DontSave",
    "SaveAll",
    "Save",
    "Next",
    "Back",
    "Select",
    "Clear",
    "Done",
    "CustomButton",
    "FirstButton",
    "LastButton",
    "AcceptRole",
    "RejectRole",
    "DestructiveRole",
    "ResetRole",
    "ApplyRole",
    "RetryRole",
    "HelpRole",
    "ContinueRole",
    "BackRole",
    "CustomRole",
    "UnknownLayout",
    "WinLayout",
    "MacLayout",
    "LinuxLayout"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEButtonBoxModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   68, // properties
       3,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    6 /* Public */,
       3,    0,   51,    2, 0x06,    7 /* Public */,
       4,    5,   52,    2, 0x06,    8 /* Public */,
      11,    0,   63,    2, 0x06,   14 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,   64,    2, 0x02,   15 /* Public */,
      14,    1,   65,    2, 0x02,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 7, QMetaType::Bool, QMetaType::Bool,    5,    6,    8,    9,   10,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 13,
    QMetaType::Void, QMetaType::QVariantList,   15,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x0001510b, uint(0), 0,
      18, 0x80000000 | 19, 0x00015009, uint(1), 0,

 // enums: name, alias, flags, count, data
      20,   20, 0x0,   29,   93,
       7,    7, 0x0,   10,  151,
      17,   17, 0x0,    4,  171,

 // enum data: key, value
      21, uint(muse::uicomponents::ButtonBoxModel::NoButton),
      22, uint(muse::uicomponents::ButtonBoxModel::Ok),
      23, uint(muse::uicomponents::ButtonBoxModel::Continue),
      24, uint(muse::uicomponents::ButtonBoxModel::RestoreDefaults),
      25, uint(muse::uicomponents::ButtonBoxModel::Reset),
      26, uint(muse::uicomponents::ButtonBoxModel::Apply),
      27, uint(muse::uicomponents::ButtonBoxModel::Help),
      28, uint(muse::uicomponents::ButtonBoxModel::Discard),
      29, uint(muse::uicomponents::ButtonBoxModel::Cancel),
      30, uint(muse::uicomponents::ButtonBoxModel::Close),
      31, uint(muse::uicomponents::ButtonBoxModel::Ignore),
      32, uint(muse::uicomponents::ButtonBoxModel::Retry),
      33, uint(muse::uicomponents::ButtonBoxModel::Abort),
      34, uint(muse::uicomponents::ButtonBoxModel::NoToAll),
      35, uint(muse::uicomponents::ButtonBoxModel::No),
      36, uint(muse::uicomponents::ButtonBoxModel::YesToAll),
      37, uint(muse::uicomponents::ButtonBoxModel::Yes),
      38, uint(muse::uicomponents::ButtonBoxModel::Open),
      39, uint(muse::uicomponents::ButtonBoxModel::DontSave),
      40, uint(muse::uicomponents::ButtonBoxModel::SaveAll),
      41, uint(muse::uicomponents::ButtonBoxModel::Save),
      42, uint(muse::uicomponents::ButtonBoxModel::Next),
      43, uint(muse::uicomponents::ButtonBoxModel::Back),
      44, uint(muse::uicomponents::ButtonBoxModel::Select),
      45, uint(muse::uicomponents::ButtonBoxModel::Clear),
      46, uint(muse::uicomponents::ButtonBoxModel::Done),
      47, uint(muse::uicomponents::ButtonBoxModel::CustomButton),
      48, uint(muse::uicomponents::ButtonBoxModel::FirstButton),
      49, uint(muse::uicomponents::ButtonBoxModel::LastButton),
      50, uint(muse::uicomponents::ButtonBoxModel::AcceptRole),
      51, uint(muse::uicomponents::ButtonBoxModel::RejectRole),
      52, uint(muse::uicomponents::ButtonBoxModel::DestructiveRole),
      53, uint(muse::uicomponents::ButtonBoxModel::ResetRole),
      54, uint(muse::uicomponents::ButtonBoxModel::ApplyRole),
      55, uint(muse::uicomponents::ButtonBoxModel::RetryRole),
      56, uint(muse::uicomponents::ButtonBoxModel::HelpRole),
      57, uint(muse::uicomponents::ButtonBoxModel::ContinueRole),
      58, uint(muse::uicomponents::ButtonBoxModel::BackRole),
      59, uint(muse::uicomponents::ButtonBoxModel::CustomRole),
      60, uint(muse::uicomponents::ButtonBoxModel::UnknownLayout),
      61, uint(muse::uicomponents::ButtonBoxModel::WinLayout),
      62, uint(muse::uicomponents::ButtonBoxModel::MacLayout),
      63, uint(muse::uicomponents::ButtonBoxModel::LinuxLayout),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::ButtonBoxModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEButtonBoxModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPEButtonBoxModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEButtonBoxModelENDCLASS_t,
        // property 'buttonLayout'
        QtPrivate::TypeAndForceComplete<ButtonLayout, std::true_type>,
        // property 'buttonsItems'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<QQuickItem>, std::true_type>,
        // enum 'ButtonType'
        QtPrivate::TypeAndForceComplete<ButtonBoxModel::ButtonType, std::true_type>,
        // enum 'ButtonRole'
        QtPrivate::TypeAndForceComplete<ButtonBoxModel::ButtonRole, std::true_type>,
        // enum 'ButtonLayout'
        QtPrivate::TypeAndForceComplete<ButtonBoxModel::ButtonLayout, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ButtonBoxModel, std::true_type>,
        // method 'buttonLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonsItemsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<ButtonRole, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'reloadRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<QList<int>, std::false_type>,
        // method 'setButtons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::ButtonBoxModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ButtonBoxModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonLayoutChanged(); break;
        case 1: _t->buttonsItemsChanged(); break;
        case 2: _t->addButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ButtonRole>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 3: _t->reloadRequested(); break;
        case 4: { QList<int> _r = _t->load();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setButtons((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ButtonBoxModel::*)();
            if (_t _q_method = &ButtonBoxModel::buttonLayoutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ButtonBoxModel::*)();
            if (_t _q_method = &ButtonBoxModel::buttonsItemsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ButtonBoxModel::*)(QString , int , ButtonRole , bool , bool );
            if (_t _q_method = &ButtonBoxModel::addButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ButtonBoxModel::*)();
            if (_t _q_method = &ButtonBoxModel::reloadRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ButtonBoxModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ButtonLayout*>(_v) = _t->buttonLayout(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->buttonsItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ButtonBoxModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setButtonLayout(*reinterpret_cast< ButtonLayout*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::uicomponents::ButtonBoxModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::ButtonBoxModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPEButtonBoxModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::uicomponents::ButtonBoxModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void muse::uicomponents::ButtonBoxModel::buttonLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::uicomponents::ButtonBoxModel::buttonsItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::uicomponents::ButtonBoxModel::addButton(QString _t1, int _t2, ButtonRole _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void muse::uicomponents::ButtonBoxModel::reloadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
