/****************************************************************************
** Meta object code from reading C++ file 'articulationpatternsegmentitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/mpe/view/articulationpatternsegmentitem.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articulationpatternsegmentitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternSegmentItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternSegmentItemENDCLASS = QtMocHelpers::stringData(
    "muse::mpe::ArticulationPatternSegmentItem",
    "durationFactorChanged",
    "",
    "timestampShiftFactorChanged",
    "pitchOffsetsChanged",
    "dynamicOffsetsChanged",
    "positionFromChanged",
    "positionToChanged",
    "selectedDynamicOffsetIndexChanged",
    "selectedPitchOffsetIndexChanged",
    "pitchOffsetValueAt",
    "index",
    "updatePitchOffsetValue",
    "value",
    "dynamicOffsetValueAt",
    "updateDynamicOffsetValue",
    "singlePercentValue",
    "positionFrom",
    "positionTo",
    "durationFactor",
    "timestampShiftFactor",
    "pitchOffsets",
    "QList<QPoint>",
    "selectedPitchOffsetIndex",
    "dynamicOffsets",
    "selectedDynamicOffsetIndex"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEmpeSCOPEArticulationPatternSegmentItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,   10 /* Public */,
       3,    0,   87,    2, 0x06,   11 /* Public */,
       4,    0,   88,    2, 0x06,   12 /* Public */,
       5,    0,   89,    2, 0x06,   13 /* Public */,
       6,    0,   90,    2, 0x06,   14 /* Public */,
       7,    0,   91,    2, 0x06,   15 /* Public */,
       8,    0,   92,    2, 0x06,   16 /* Public */,
       9,    0,   93,    2, 0x06,   17 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   94,    2, 0x02,   18 /* Public */,
      12,    2,   97,    2, 0x02,   20 /* Public */,
      14,    1,  102,    2, 0x02,   23 /* Public */,
      15,    2,  105,    2, 0x02,   25 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   13,
    QMetaType::Int, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   13,

 // properties: name, type, flags
      16, QMetaType::Int, 0x00015401, uint(-1), 0,
      17, QMetaType::Int, 0x00015103, uint(4), 0,
      18, QMetaType::Int, 0x00015103, uint(5), 0,
      19, QMetaType::Int, 0x00015103, uint(0), 0,
      20, QMetaType::Int, 0x00015103, uint(1), 0,
      21, 0x80000000 | 22, 0x00015009, uint(2), 0,
      23, QMetaType::Int, 0x00015103, uint(7), 0,
      24, 0x80000000 | 22, 0x00015009, uint(3), 0,
      25, QMetaType::Int, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::mpe::ArticulationPatternSegmentItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternSegmentItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEmpeSCOPEArticulationPatternSegmentItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternSegmentItemENDCLASS_t,
        // property 'singlePercentValue'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'positionFrom'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'positionTo'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'durationFactor'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'timestampShiftFactor'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pitchOffsets'
        QtPrivate::TypeAndForceComplete<QList<QPoint>, std::true_type>,
        // property 'selectedPitchOffsetIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'dynamicOffsets'
        QtPrivate::TypeAndForceComplete<QList<QPoint>, std::true_type>,
        // property 'selectedDynamicOffsetIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ArticulationPatternSegmentItem, std::true_type>,
        // method 'durationFactorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timestampShiftFactorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pitchOffsetsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dynamicOffsetsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'positionFromChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'positionToChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedDynamicOffsetIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedPitchOffsetIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pitchOffsetValueAt'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'updatePitchOffsetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'dynamicOffsetValueAt'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'updateDynamicOffsetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void muse::mpe::ArticulationPatternSegmentItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArticulationPatternSegmentItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->durationFactorChanged(); break;
        case 1: _t->timestampShiftFactorChanged(); break;
        case 2: _t->pitchOffsetsChanged(); break;
        case 3: _t->dynamicOffsetsChanged(); break;
        case 4: _t->positionFromChanged(); break;
        case 5: _t->positionToChanged(); break;
        case 6: _t->selectedDynamicOffsetIndexChanged(); break;
        case 7: _t->selectedPitchOffsetIndexChanged(); break;
        case 8: { int _r = _t->pitchOffsetValueAt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->updatePitchOffsetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: { int _r = _t->dynamicOffsetValueAt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->updateDynamicOffsetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::durationFactorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::timestampShiftFactorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::pitchOffsetsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::dynamicOffsetsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::positionFromChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::positionToChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::selectedDynamicOffsetIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternSegmentItem::*)();
            if (_t _q_method = &ArticulationPatternSegmentItem::selectedPitchOffsetIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPoint> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ArticulationPatternSegmentItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->singlePercentValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->positionFrom(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->positionTo(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->durationFactor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->timestampShiftFactor(); break;
        case 5: *reinterpret_cast< QList<QPoint>*>(_v) = _t->pitchOffsets(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->selectedPitchOffsetIndex(); break;
        case 7: *reinterpret_cast< QList<QPoint>*>(_v) = _t->dynamicOffsets(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->selectedDynamicOffsetIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ArticulationPatternSegmentItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPositionFrom(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setPositionTo(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDurationFactor(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setTimestampShiftFactor(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setSelectedPitchOffsetIndex(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setSelectedDynamicOffsetIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::mpe::ArticulationPatternSegmentItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::mpe::ArticulationPatternSegmentItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternSegmentItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::mpe::ArticulationPatternSegmentItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void muse::mpe::ArticulationPatternSegmentItem::durationFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::mpe::ArticulationPatternSegmentItem::timestampShiftFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::mpe::ArticulationPatternSegmentItem::pitchOffsetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::mpe::ArticulationPatternSegmentItem::dynamicOffsetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::mpe::ArticulationPatternSegmentItem::positionFromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void muse::mpe::ArticulationPatternSegmentItem::positionToChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void muse::mpe::ArticulationPatternSegmentItem::selectedDynamicOffsetIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void muse::mpe::ArticulationPatternSegmentItem::selectedPitchOffsetIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
