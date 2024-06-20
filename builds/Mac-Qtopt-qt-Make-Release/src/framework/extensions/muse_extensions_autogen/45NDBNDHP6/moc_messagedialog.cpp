/****************************************************************************
** Meta object code from reading C++ file 'messagedialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/extensions/api/v1/messagedialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagedialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEStandardButtonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEStandardButtonENDCLASS = QtMocHelpers::stringData(
    "muse::extensions::apiv1::StandardButton",
    "Button",
    "Ok",
    "Cancel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEStandardButtonENDCLASS[] = {

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
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(muse::extensions::apiv1::StandardButton::Ok),
       3, uint(muse::extensions::apiv1::StandardButton::Cancel),

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::extensions::apiv1::StandardButton::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEStandardButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEStandardButtonENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEStandardButtonENDCLASS_t,
        // enum 'Button'
        QtPrivate::TypeAndForceComplete<StandardButton::Button, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StandardButton, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEMessageDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEMessageDialogENDCLASS = QtMocHelpers::stringData(
    "muse::extensions::apiv1::MessageDialog",
    "textChanged",
    "",
    "visibleChanged",
    "titleChanged",
    "detailedTextChanged",
    "standardButtonsChanged",
    "accepted",
    "rejected",
    "open",
    "close",
    "title",
    "text",
    "detailedText",
    "standardButtons",
    "visible"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEMessageDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   77, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    6 /* Public */,
       3,    0,   69,    2, 0x06,    7 /* Public */,
       4,    0,   70,    2, 0x06,    8 /* Public */,
       5,    0,   71,    2, 0x06,    9 /* Public */,
       6,    0,   72,    2, 0x06,   10 /* Public */,
       7,    0,   73,    2, 0x06,   11 /* Public */,
       8,    0,   74,    2, 0x06,   12 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   75,    2, 0x02,   13 /* Public */,
      10,    0,   76,    2, 0x02,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00015903, uint(2), 0,
      12, QMetaType::QString, 0x00015903, uint(0), 0,
      13, QMetaType::QString, 0x00015903, uint(3), 0,
      14, QMetaType::QVariantList, 0x00015903, uint(4), 0,
      15, QMetaType::Bool, 0x00015903, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::extensions::apiv1::MessageDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEMessageDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEMessageDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEMessageDialogENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'detailedText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'standardButtons'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MessageDialog, std::true_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'detailedTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'standardButtonsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::extensions::apiv1::MessageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessageDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->visibleChanged(); break;
        case 2: _t->titleChanged(); break;
        case 3: _t->detailedTextChanged(); break;
        case 4: _t->standardButtonsChanged(); break;
        case 5: _t->accepted(); break;
        case 6: _t->rejected(); break;
        case 7: _t->open(); break;
        case 8: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MessageDialog::*)();
            if (_t _q_method = &MessageDialog::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessageDialog::*)();
            if (_t _q_method = &MessageDialog::visibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MessageDialog::*)();
            if (_t _q_method = &MessageDialog::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MessageDialog::*)();
            if (_t _q_method = &MessageDialog::detailedTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MessageDialog::*)();
            if (_t _q_method = &MessageDialog::standardButtonsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MessageDialog::*)();
            if (_t _q_method = &MessageDialog::accepted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MessageDialog::*)();
            if (_t _q_method = &MessageDialog::rejected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MessageDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->detailedText(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->standardButtons(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MessageDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDetailedText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setStandardButtons(*reinterpret_cast< QVariantList*>(_v)); break;
        case 4: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *muse::extensions::apiv1::MessageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::extensions::apiv1::MessageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEextensionsSCOPEapiv1SCOPEMessageDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::extensions::apiv1::MessageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void muse::extensions::apiv1::MessageDialog::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::extensions::apiv1::MessageDialog::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::extensions::apiv1::MessageDialog::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::extensions::apiv1::MessageDialog::detailedTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::extensions::apiv1::MessageDialog::standardButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void muse::extensions::apiv1::MessageDialog::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void muse::extensions::apiv1::MessageDialog::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
