/****************************************************************************
** Meta object code from reading C++ file 'textinputfieldmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/uicomponents/view/textinputfieldmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textinputfieldmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPETextInputFieldModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPETextInputFieldModelENDCLASS = QtMocHelpers::stringData(
    "muse::uicomponents::TextInputFieldModel",
    "init",
    "",
    "isShortcutAllowedOverride",
    "Qt::Key",
    "key",
    "Qt::KeyboardModifiers",
    "modifiers",
    "handleShortcut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPETextInputFieldModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x02,    1 /* Public */,
       3,    2,   33,    2, 0x102,    2 /* Public | MethodIsConst  */,
       8,    2,   38,    2, 0x02,    5 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::uicomponents::TextInputFieldModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPETextInputFieldModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuicomponentsSCOPETextInputFieldModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPETextInputFieldModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TextInputFieldModel, std::true_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isShortcutAllowedOverride'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Key, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>,
        // method 'handleShortcut'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Key, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::false_type>
    >,
    nullptr
} };

void muse::uicomponents::TextInputFieldModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextInputFieldModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->init(); break;
        case 1: { bool _r = _t->isShortcutAllowedOverride((*reinterpret_cast< std::add_pointer_t<Qt::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->handleShortcut((*reinterpret_cast< std::add_pointer_t<Qt::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *muse::uicomponents::TextInputFieldModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::uicomponents::TextInputFieldModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuicomponentsSCOPETextInputFieldModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::uicomponents::TextInputFieldModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
