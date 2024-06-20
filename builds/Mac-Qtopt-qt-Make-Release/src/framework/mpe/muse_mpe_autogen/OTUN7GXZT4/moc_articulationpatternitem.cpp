/****************************************************************************
** Meta object code from reading C++ file 'articulationpatternitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/mpe/view/articulationpatternitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articulationpatternitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternItemENDCLASS = QtMocHelpers::stringData(
    "muse::mpe::ArticulationPatternItem",
    "titleChanged",
    "",
    "currentPatternSegmentChanged",
    "requestedToBeRemoved",
    "isActiveChanged",
    "isSelectedChanged",
    "appendNewSegment",
    "removeCurrentSegment",
    "isAbleToRemoveCurrentSegment",
    "title",
    "isActive",
    "isSelected",
    "isSingleNoteType",
    "currentPatternSegment",
    "ArticulationPatternSegmentItem*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEmpeSCOPEArticulationPatternItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    6 /* Public */,
       3,    0,   63,    2, 0x06,    7 /* Public */,
       4,    0,   64,    2, 0x06,    8 /* Public */,
       5,    0,   65,    2, 0x06,    9 /* Public */,
       6,    0,   66,    2, 0x06,   10 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   67,    2, 0x02,   11 /* Public */,
       8,    0,   68,    2, 0x02,   12 /* Public */,
       9,    0,   69,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015001, uint(0), 0,
      11, QMetaType::Bool, 0x00015103, uint(3), 0,
      12, QMetaType::Bool, 0x00015103, uint(4), 0,
      13, QMetaType::Bool, 0x00015401, uint(-1), 0,
      14, 0x80000000 | 15, 0x0001510b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::mpe::ArticulationPatternItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEmpeSCOPEArticulationPatternItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternItemENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSelected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSingleNoteType'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'currentPatternSegment'
        QtPrivate::TypeAndForceComplete<ArticulationPatternSegmentItem*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ArticulationPatternItem, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentPatternSegmentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestedToBeRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'appendNewSegment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeCurrentSegment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isAbleToRemoveCurrentSegment'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void muse::mpe::ArticulationPatternItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArticulationPatternItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->currentPatternSegmentChanged(); break;
        case 2: _t->requestedToBeRemoved(); break;
        case 3: _t->isActiveChanged(); break;
        case 4: _t->isSelectedChanged(); break;
        case 5: _t->appendNewSegment(); break;
        case 6: _t->removeCurrentSegment(); break;
        case 7: { bool _r = _t->isAbleToRemoveCurrentSegment();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArticulationPatternItem::*)();
            if (_t _q_method = &ArticulationPatternItem::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (_t _q_method = &ArticulationPatternItem::currentPatternSegmentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (_t _q_method = &ArticulationPatternItem::requestedToBeRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (_t _q_method = &ArticulationPatternItem::isActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ArticulationPatternItem::*)();
            if (_t _q_method = &ArticulationPatternItem::isSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ArticulationPatternSegmentItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ArticulationPatternItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSelected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isSingleNoteType(); break;
        case 4: *reinterpret_cast< ArticulationPatternSegmentItem**>(_v) = _t->currentPatternSegment(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ArticulationPatternItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setIsActive(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsSelected(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setCurrentPatternSegment(*reinterpret_cast< ArticulationPatternSegmentItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::mpe::ArticulationPatternItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::mpe::ArticulationPatternItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationPatternItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int muse::mpe::ArticulationPatternItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void muse::mpe::ArticulationPatternItem::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::mpe::ArticulationPatternItem::currentPatternSegmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::mpe::ArticulationPatternItem::requestedToBeRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::mpe::ArticulationPatternItem::isActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::mpe::ArticulationPatternItem::isSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
