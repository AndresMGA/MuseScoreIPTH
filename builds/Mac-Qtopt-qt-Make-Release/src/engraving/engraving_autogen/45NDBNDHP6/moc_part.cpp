/****************************************************************************
** Meta object code from reading C++ file 'part.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/engraving/api/v1/part.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'part.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPartENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPartENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Part",
    "instrumentAtTick",
    "apiv1::Instrument*",
    "",
    "tick",
    "startTrack",
    "endTrack",
    "instrumentId",
    "harmonyCount",
    "hasDrumStaff",
    "hasPitchedStaff",
    "hasTabStaff",
    "lyricCount",
    "midiChannel",
    "midiProgram",
    "longName",
    "shortName",
    "partName",
    "show",
    "instruments",
    "QQmlListProperty<apiv1::Instrument>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPartENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      15,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    3, 0x02,   16 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int,    4,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00015001, uint(-1), 0,
       6, QMetaType::Int, 0x00015001, uint(-1), 0,
       7, QMetaType::QString, 0x00015001, uint(-1), 0,
       8, QMetaType::Int, 0x00015001, uint(-1), 0,
       9, QMetaType::Bool, 0x00015001, uint(-1), 0,
      10, QMetaType::Bool, 0x00015001, uint(-1), 0,
      11, QMetaType::Bool, 0x00015001, uint(-1), 0,
      12, QMetaType::Int, 0x00015001, uint(-1), 0,
      13, QMetaType::Int, 0x00015001, uint(-1), 0,
      14, QMetaType::Int, 0x00015001, uint(-1), 0,
      15, QMetaType::QString, 0x00015001, uint(-1), 0,
      16, QMetaType::QString, 0x00015001, uint(-1), 0,
      17, QMetaType::QString, 0x00015001, uint(-1), 0,
      18, QMetaType::Bool, 0x00015103, uint(-1), 0,
      19, 0x80000000 | 20, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Part::staticMetaObject = { {
    QMetaObject::SuperData::link<ScoreElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPartENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPartENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPartENDCLASS_t,
        // property 'startTrack'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'endTrack'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'instrumentId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'harmonyCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'hasDrumStaff'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasPitchedStaff'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasTabStaff'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'lyricCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'midiChannel'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'midiProgram'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'longName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'shortName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'partName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'show'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'instruments'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::Instrument>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Part, std::true_type>,
        // method 'instrumentAtTick'
        QtPrivate::TypeAndForceComplete<apiv1::Instrument *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Part::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Part *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { apiv1::Instrument* _r = _t->instrumentAtTick((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< apiv1::Instrument**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Part *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->startTrack(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->endTrack(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->instrumentId(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->harmonyCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasDrumStaff(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasPitchedStaff(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasTabStaff(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->lyricCount(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->midiChannel(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->midiProgram(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->longName(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->shortName(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->partName(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->show(); break;
        case 14: *reinterpret_cast< QQmlListProperty<apiv1::Instrument>*>(_v) = _t->instruments(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Part *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 13: _t->setShow(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::Part::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Part::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPartENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ScoreElement::qt_metacast(_clname);
}

int mu::engraving::apiv1::Part::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScoreElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
