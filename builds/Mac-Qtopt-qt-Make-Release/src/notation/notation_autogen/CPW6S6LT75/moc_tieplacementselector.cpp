/****************************************************************************
** Meta object code from reading C++ file 'tieplacementselector.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/styledialog/tieplacementselector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tieplacementselector.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPETiePlacementSelectorModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPETiePlacementSelectorModelENDCLASS = QtMocHelpers::stringData(
    "mu::notation::TiePlacementSelectorModel",
    "placementSingleNotes",
    "StyleItem*",
    "placementChords"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPETiePlacementSelectorModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::TiePlacementSelectorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractStyleDialogModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPETiePlacementSelectorModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPETiePlacementSelectorModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPETiePlacementSelectorModelENDCLASS_t,
        // property 'placementSingleNotes'
        QtPrivate::TypeAndForceComplete<StyleItem*, std::true_type>,
        // property 'placementChords'
        QtPrivate::TypeAndForceComplete<StyleItem*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TiePlacementSelectorModel, std::true_type>
    >,
    nullptr
} };

void mu::notation::TiePlacementSelectorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StyleItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TiePlacementSelectorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< StyleItem**>(_v) = _t->placementSingleNotes(); break;
        case 1: *reinterpret_cast< StyleItem**>(_v) = _t->placementChords(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *mu::notation::TiePlacementSelectorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::TiePlacementSelectorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPETiePlacementSelectorModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractStyleDialogModel::qt_metacast(_clname);
}

int mu::notation::TiePlacementSelectorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractStyleDialogModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
