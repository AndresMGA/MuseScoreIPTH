/****************************************************************************
** Meta object code from reading C++ file 'accidentalgrouppagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/styledialog/accidentalgrouppagemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accidentalgrouppagemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAccidentalGroupPageModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAccidentalGroupPageModelENDCLASS = QtMocHelpers::stringData(
    "mu::notation::AccidentalGroupPageModel",
    "accidFollowNoteOffset",
    "StyleItem*",
    "alignAccidentalOctavesAcrossSubChords",
    "keepAccidentalSecondsTogether",
    "alignOffsetOctaveAccidentals"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEAccidentalGroupPageModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::AccidentalGroupPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractStyleDialogModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAccidentalGroupPageModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEAccidentalGroupPageModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAccidentalGroupPageModelENDCLASS_t,
        // property 'accidFollowNoteOffset'
        QtPrivate::TypeAndForceComplete<StyleItem*, std::true_type>,
        // property 'alignAccidentalOctavesAcrossSubChords'
        QtPrivate::TypeAndForceComplete<StyleItem*, std::true_type>,
        // property 'keepAccidentalSecondsTogether'
        QtPrivate::TypeAndForceComplete<StyleItem*, std::true_type>,
        // property 'alignOffsetOctaveAccidentals'
        QtPrivate::TypeAndForceComplete<StyleItem*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccidentalGroupPageModel, std::true_type>
    >,
    nullptr
} };

void mu::notation::AccidentalGroupPageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StyleItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccidentalGroupPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< StyleItem**>(_v) = _t->accidFollowNoteOffset(); break;
        case 1: *reinterpret_cast< StyleItem**>(_v) = _t->alignAccidentalOctavesAcrossSubChords(); break;
        case 2: *reinterpret_cast< StyleItem**>(_v) = _t->keepAccidentalSecondsTogether(); break;
        case 3: *reinterpret_cast< StyleItem**>(_v) = _t->alignOffsetOctaveAccidentals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *mu::notation::AccidentalGroupPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::AccidentalGroupPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEAccidentalGroupPageModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractStyleDialogModel::qt_metacast(_clname);
}

int mu::notation::AccidentalGroupPageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractStyleDialogModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
