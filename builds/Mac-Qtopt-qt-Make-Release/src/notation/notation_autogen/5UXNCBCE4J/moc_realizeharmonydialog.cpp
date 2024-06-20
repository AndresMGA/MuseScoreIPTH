/****************************************************************************
** Meta object code from reading C++ file 'realizeharmonydialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/widgets/realizeharmonydialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realizeharmonydialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPERealizeHarmonyDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPERealizeHarmonyDialogENDCLASS = QtMocHelpers::stringData(
    "mu::notation::RealizeHarmonyDialog",
    "interaction",
    "INotationInteractionPtr",
    "",
    "accept",
    "toggleChordTable",
    "setChordList",
    "QList<mu::engraving::Harmony*>",
    "hlist"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPERealizeHarmonyDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    3, 0x108,    1 /* Private | MethodIsConst  */,
       4,    0,   39,    3, 0x08,    2 /* Private */,
       5,    0,   40,    3, 0x08,    3 /* Private */,
       6,    1,   41,    3, 0x08,    4 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::RealizeHarmonyDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPERealizeHarmonyDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPERealizeHarmonyDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPERealizeHarmonyDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RealizeHarmonyDialog, std::true_type>,
        // method 'interaction'
        QtPrivate::TypeAndForceComplete<INotationInteractionPtr, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleChordTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setChordList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<mu::engraving::Harmony*> &, std::false_type>
    >,
    nullptr
} };

void mu::notation::RealizeHarmonyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RealizeHarmonyDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { INotationInteractionPtr _r = _t->interaction();
            if (_a[0]) *reinterpret_cast< INotationInteractionPtr*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->accept(); break;
        case 2: _t->toggleChordTable(); break;
        case 3: _t->setChordList((*reinterpret_cast< std::add_pointer_t<QList<mu::engraving::Harmony*>>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *mu::notation::RealizeHarmonyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::RealizeHarmonyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPERealizeHarmonyDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::RealizeHarmonyDialogBase"))
        return static_cast< Ui::RealizeHarmonyDialogBase*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return QDialog::qt_metacast(_clname);
}

int mu::notation::RealizeHarmonyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
