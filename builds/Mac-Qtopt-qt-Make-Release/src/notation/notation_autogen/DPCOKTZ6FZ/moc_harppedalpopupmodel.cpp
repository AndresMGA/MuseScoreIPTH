/****************************************************************************
** Meta object code from reading C++ file 'harppedalpopupmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/notation/view/internal/harppedalpopupmodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'harppedalpopupmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEHarpPedalPopupModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEHarpPedalPopupModelENDCLASS = QtMocHelpers::stringData(
    "mu::notation::HarpPedalPopupModel",
    "isDiagramChanged",
    "",
    "isDiagram",
    "pedalStateChanged",
    "QList<mu::notation::HarpPedalPopupModel::Position>",
    "pedalState",
    "setIsDiagram",
    "setDiagramPedalState",
    "init",
    "staffPos",
    "Position",
    "FLAT",
    "NATURAL",
    "SHARP",
    "UNSET"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEnotationSCOPEHarpPedalPopupModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   57, // properties
       1,   72, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    5 /* Public */,
       4,    1,   47,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   50,    2, 0x0a,    9 /* Public */,
       8,    1,   53,    2, 0x0a,   11 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   56,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
       6, 0x80000000 | 5, 0x0001500b, uint(1), 0,
      10, QMetaType::QRectF, 0x00015401, uint(-1), 0,

 // enums: name, alias, flags, count, data
      11,   11, 0x2,    4,   77,

 // enum data: key, value
      12, uint(mu::notation::HarpPedalPopupModel::Position::FLAT),
      13, uint(mu::notation::HarpPedalPopupModel::Position::NATURAL),
      14, uint(mu::notation::HarpPedalPopupModel::Position::SHARP),
      15, uint(mu::notation::HarpPedalPopupModel::Position::UNSET),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::notation::HarpPedalPopupModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractElementPopupModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEHarpPedalPopupModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEnotationSCOPEHarpPedalPopupModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEHarpPedalPopupModelENDCLASS_t,
        // property 'isDiagram'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pedalState'
        QtPrivate::TypeAndForceComplete<QList<mu::notation::HarpPedalPopupModel::Position>, std::true_type>,
        // property 'staffPos'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // enum 'Position'
        QtPrivate::TypeAndForceComplete<HarpPedalPopupModel::Position, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HarpPedalPopupModel, std::true_type>,
        // method 'isDiagramChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pedalStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<mu::notation::HarpPedalPopupModel::Position>, std::false_type>,
        // method 'setIsDiagram'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDiagramPedalState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<mu::notation::HarpPedalPopupModel::Position>, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::notation::HarpPedalPopupModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HarpPedalPopupModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isDiagramChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->pedalStateChanged((*reinterpret_cast< std::add_pointer_t<QList<mu::notation::HarpPedalPopupModel::Position>>>(_a[1]))); break;
        case 2: _t->setIsDiagram((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setDiagramPedalState((*reinterpret_cast< std::add_pointer_t<QList<mu::notation::HarpPedalPopupModel::Position>>>(_a[1]))); break;
        case 4: _t->init(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<mu::notation::HarpPedalPopupModel::Position> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<mu::notation::HarpPedalPopupModel::Position> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HarpPedalPopupModel::*)(bool );
            if (_t _q_method = &HarpPedalPopupModel::isDiagramChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HarpPedalPopupModel::*)(QVector<mu::notation::HarpPedalPopupModel::Position> );
            if (_t _q_method = &HarpPedalPopupModel::pedalStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<mu::notation::HarpPedalPopupModel::Position> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HarpPedalPopupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isDiagram(); break;
        case 1: *reinterpret_cast< QList<mu::notation::HarpPedalPopupModel::Position>*>(_v) = _t->pedalState(); break;
        case 2: *reinterpret_cast< QRectF*>(_v) = _t->staffPos(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HarpPedalPopupModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsDiagram(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDiagramPedalState(*reinterpret_cast< QList<mu::notation::HarpPedalPopupModel::Position>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::notation::HarpPedalPopupModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::notation::HarpPedalPopupModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEnotationSCOPEHarpPedalPopupModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractElementPopupModel::qt_metacast(_clname);
}

int mu::notation::HarpPedalPopupModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractElementPopupModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void mu::notation::HarpPedalPopupModel::isDiagramChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mu::notation::HarpPedalPopupModel::pedalStateChanged(QVector<mu::notation::HarpPedalPopupModel::Position> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
