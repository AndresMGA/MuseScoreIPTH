/****************************************************************************
** Meta object code from reading C++ file 'additionalinfomodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/project/view/additionalinfomodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'additionalinfomodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEAdditionalInfoModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEAdditionalInfoModelENDCLASS = QtMocHelpers::stringData(
    "mu::project::AdditionalInfoModel",
    "keySignatureChanged",
    "",
    "keySignature",
    "timeSignatureChanged",
    "pickupTimeSignatureChanged",
    "tempoChanged",
    "tempo",
    "withTempoChanged",
    "withTempo",
    "withPickupMeasureChanged",
    "withPickupMeasure",
    "measureCountChanged",
    "measureCount",
    "setKeySignature",
    "setTimeSignatureType",
    "timeSignatureType",
    "setTempo",
    "setWithTempo",
    "setWithPickupMeasure",
    "setMeasureCount",
    "init",
    "keySignatureList",
    "timeSignatureAccessibleName",
    "numerator",
    "denominator",
    "setTimeSignatureNumerator",
    "setTimeSignatureDenominator",
    "musicSymbolCodes",
    "number",
    "timeSignatureDenominators",
    "tempoValueRange",
    "tempoNotes",
    "tempoAccessibleName",
    "noteIcon",
    "withDot",
    "setPickupTimeSignatureNumerator",
    "setPickupTimeSignatureDenominator",
    "measureCountRange",
    "timeSignature",
    "currentTempoNoteIndex",
    "pickupTimeSignature",
    "TimeSignatureType",
    "Fraction",
    "Common",
    "Cut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEprojectSCOPEAdditionalInfoModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       9,  258, // properties
       1,  303, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  182,    2, 0x06,   11 /* Public */,
       4,    0,  185,    2, 0x06,   13 /* Public */,
       5,    0,  186,    2, 0x06,   14 /* Public */,
       6,    1,  187,    2, 0x06,   15 /* Public */,
       8,    1,  190,    2, 0x06,   17 /* Public */,
      10,    1,  193,    2, 0x06,   19 /* Public */,
      12,    1,  196,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,  199,    2, 0x0a,   23 /* Public */,
      15,    1,  202,    2, 0x0a,   25 /* Public */,
      17,    1,  205,    2, 0x0a,   27 /* Public */,
      18,    1,  208,    2, 0x0a,   29 /* Public */,
      19,    1,  211,    2, 0x0a,   31 /* Public */,
      20,    1,  214,    2, 0x0a,   33 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      21,    0,  217,    2, 0x02,   35 /* Public */,
      22,    0,  218,    2, 0x102,   36 /* Public | MethodIsConst  */,
      23,    3,  219,    2, 0x102,   37 /* Public | MethodIsConst  */,
      23,    2,  226,    2, 0x122,   41 /* Public | MethodCloned | MethodIsConst  */,
      23,    1,  231,    2, 0x122,   44 /* Public | MethodCloned | MethodIsConst  */,
      26,    1,  234,    2, 0x02,   46 /* Public */,
      27,    1,  237,    2, 0x02,   48 /* Public */,
      28,    1,  240,    2, 0x102,   50 /* Public | MethodIsConst  */,
      30,    0,  243,    2, 0x102,   52 /* Public | MethodIsConst  */,
      31,    0,  244,    2, 0x102,   53 /* Public | MethodIsConst  */,
      32,    0,  245,    2, 0x102,   54 /* Public | MethodIsConst  */,
      33,    2,  246,    2, 0x102,   55 /* Public | MethodIsConst  */,
      36,    1,  251,    2, 0x02,   58 /* Public */,
      37,    1,  254,    2, 0x02,   60 /* Public */,
      38,    0,  257,    2, 0x102,   62 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QVariantMap,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QVariantList,
    QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   16,   24,   25,
    QMetaType::QString, QMetaType::Int, QMetaType::Int,   16,   24,
    QMetaType::QString, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::QVariantList, QMetaType::Int,   29,
    QMetaType::QVariantList,
    QMetaType::QVariantMap,
    QMetaType::QVariantList,
    QMetaType::QString, QMetaType::Int, QMetaType::Bool,   34,   35,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::QVariantMap,

 // properties: name, type, flags
       3, QMetaType::QVariantMap, 0x00015103, uint(0), 0,
      39, QMetaType::QVariantMap, 0x00015001, uint(1), 0,
      16, QMetaType::Int, 0x00015103, uint(1), 0,
       9, QMetaType::Bool, 0x00015103, uint(4), 0,
       7, QMetaType::QVariantMap, 0x00015103, uint(3), 0,
      40, QMetaType::Int, 0x00015001, uint(3), 0,
      41, QMetaType::QVariantMap, 0x00015001, uint(2), 0,
      11, QMetaType::Bool, 0x00015103, uint(5), 0,
      13, QMetaType::Int, 0x00015103, uint(6), 0,

 // enums: name, alias, flags, count, data
      42,   42, 0x0,    3,  308,

 // enum data: key, value
      43, uint(mu::project::AdditionalInfoModel::Fraction),
      44, uint(mu::project::AdditionalInfoModel::Common),
      45, uint(mu::project::AdditionalInfoModel::Cut),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::project::AdditionalInfoModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEAdditionalInfoModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEprojectSCOPEAdditionalInfoModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEAdditionalInfoModelENDCLASS_t,
        // property 'keySignature'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'timeSignature'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'timeSignatureType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'withTempo'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tempo'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'currentTempoNoteIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pickupTimeSignature'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'withPickupMeasure'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'measureCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'TimeSignatureType'
        QtPrivate::TypeAndForceComplete<AdditionalInfoModel::TimeSignatureType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdditionalInfoModel, std::true_type>,
        // method 'keySignatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'timeSignatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pickupTimeSignatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tempoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'withTempoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'withPickupMeasureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'measureCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setKeySignature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'setTimeSignatureType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTempo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'setWithTempo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setWithPickupMeasure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMeasureCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keySignatureList'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'timeSignatureAccessibleName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'timeSignatureAccessibleName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'timeSignatureAccessibleName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTimeSignatureNumerator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTimeSignatureDenominator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'musicSymbolCodes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'timeSignatureDenominators'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'tempoValueRange'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'tempoNotes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'tempoAccessibleName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPickupTimeSignatureNumerator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setPickupTimeSignatureDenominator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'measureCountRange'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>
    >,
    nullptr
} };

void mu::project::AdditionalInfoModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdditionalInfoModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->keySignatureChanged((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 1: _t->timeSignatureChanged(); break;
        case 2: _t->pickupTimeSignatureChanged(); break;
        case 3: _t->tempoChanged((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 4: _t->withTempoChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->withPickupMeasureChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->measureCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setKeySignature((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 8: _t->setTimeSignatureType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setTempo((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 10: _t->setWithTempo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setWithPickupMeasure((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setMeasureCount((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->init(); break;
        case 14: { QVariantList _r = _t->keySignatureList();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->timeSignatureAccessibleName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->timeSignatureAccessibleName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->timeSignatureAccessibleName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setTimeSignatureNumerator((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->setTimeSignatureDenominator((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: { QVariantList _r = _t->musicSymbolCodes((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 21: { QVariantList _r = _t->timeSignatureDenominators();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 22: { QVariantMap _r = _t->tempoValueRange();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 23: { QVariantList _r = _t->tempoNotes();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->tempoAccessibleName((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->setPickupTimeSignatureNumerator((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->setPickupTimeSignatureDenominator((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: { QVariantMap _r = _t->measureCountRange();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdditionalInfoModel::*)(QVariantMap );
            if (_t _q_method = &AdditionalInfoModel::keySignatureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AdditionalInfoModel::*)();
            if (_t _q_method = &AdditionalInfoModel::timeSignatureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AdditionalInfoModel::*)();
            if (_t _q_method = &AdditionalInfoModel::pickupTimeSignatureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AdditionalInfoModel::*)(QVariantMap );
            if (_t _q_method = &AdditionalInfoModel::tempoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AdditionalInfoModel::*)(bool );
            if (_t _q_method = &AdditionalInfoModel::withTempoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AdditionalInfoModel::*)(bool );
            if (_t _q_method = &AdditionalInfoModel::withPickupMeasureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AdditionalInfoModel::*)(int );
            if (_t _q_method = &AdditionalInfoModel::measureCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AdditionalInfoModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->keySignature(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = _t->timeSignature(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->timeSignatureType(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->withTempo(); break;
        case 4: *reinterpret_cast< QVariantMap*>(_v) = _t->tempo(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->currentTempoNoteIndex(); break;
        case 6: *reinterpret_cast< QVariantMap*>(_v) = _t->pickupTimeSignature(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->withPickupMeasure(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->measureCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AdditionalInfoModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeySignature(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 2: _t->setTimeSignatureType(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setWithTempo(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setTempo(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 7: _t->setWithPickupMeasure(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setMeasureCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::project::AdditionalInfoModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::AdditionalInfoModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEAdditionalInfoModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::project::AdditionalInfoModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void mu::project::AdditionalInfoModel::keySignatureChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::project::AdditionalInfoModel::timeSignatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::project::AdditionalInfoModel::pickupTimeSignatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::project::AdditionalInfoModel::tempoChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::project::AdditionalInfoModel::withTempoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::project::AdditionalInfoModel::withPickupMeasureChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::project::AdditionalInfoModel::measureCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
