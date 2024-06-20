/****************************************************************************
** Meta object code from reading C++ file 'selection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/engraving/api/v1/selection.h"
#include "engraving/api/v1/part.h"
#include "engraving/api/v1/tie.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESelectionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESelectionENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Selection",
    "select",
    "",
    "apiv1::EngravingItem*",
    "e",
    "add",
    "selectRange",
    "startTick",
    "endTick",
    "startStaff",
    "endStaff",
    "deselect",
    "clear",
    "elements",
    "QQmlListProperty<apiv1::EngravingItem>",
    "isRange",
    "startSegment",
    "apiv1::Segment*",
    "endSegment"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPESelectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   65, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x02,    7 /* Public */,
       1,    1,   49,    2, 0x22,   10 /* Public | MethodCloned */,
       6,    4,   52,    2, 0x02,   12 /* Public */,
      11,    1,   61,    2, 0x02,   17 /* Public */,
      12,    0,   64,    2, 0x02,   19 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,   10,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x00015009, uint(-1), 0,
      15, QMetaType::Bool, 0x00015001, uint(-1), 0,
      16, 0x80000000 | 17, 0x00015009, uint(-1), 0,
      18, 0x80000000 | 17, 0x00015009, uint(-1), 0,
       9, QMetaType::Int, 0x00015001, uint(-1), 0,
      10, QMetaType::Int, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Selection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESelectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPESelectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESelectionENDCLASS_t,
        // property 'elements'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::EngravingItem>, std::true_type>,
        // property 'isRange'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'startSegment'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'endSegment'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'startStaff'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'endStaff'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Selection, std::true_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        // method 'selectRange'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deselect'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Selection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Selection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->select((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->select((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->selectRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->deselect((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->clear();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Selection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<apiv1::EngravingItem>*>(_v) = _t->elements(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isRange(); break;
        case 2: *reinterpret_cast< apiv1::Segment**>(_v) = _t->startSegment(); break;
        case 3: *reinterpret_cast< apiv1::Segment**>(_v) = _t->endSegment(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->startStaff(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->endStaff(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::Selection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Selection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPESelectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::engraving::apiv1::Selection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
