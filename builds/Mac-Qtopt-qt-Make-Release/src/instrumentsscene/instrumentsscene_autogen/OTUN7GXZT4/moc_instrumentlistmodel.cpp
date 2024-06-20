/****************************************************************************
** Meta object code from reading C++ file 'instrumentlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/instrumentsscene/view/instrumentlistmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instrumentlistmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentListModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentListModelENDCLASS = QtMocHelpers::stringData(
    "mu::instrumentsscene::InstrumentListModel",
    "genresChanged",
    "",
    "groupsChanged",
    "currentGenreIndexChanged",
    "currentGroupIndexChanged",
    "selectionChanged",
    "focusRequested",
    "groupIndex",
    "instrumentIndex",
    "setCurrentGenreIndex",
    "index",
    "setCurrentGroupIndex",
    "load",
    "canSelectMultipleInstruments",
    "currentInstrumentId",
    "saveCurrentGroup",
    "setSearchText",
    "text",
    "selectInstrument",
    "selectedInstrumentIdList",
    "genres",
    "groups",
    "currentGenreIndex",
    "currentGroupIndex",
    "hasSelection",
    "selectedInstrument"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentListModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       6,  121, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    7 /* Public */,
       3,    0,   93,    2, 0x06,    8 /* Public */,
       4,    0,   94,    2, 0x06,    9 /* Public */,
       5,    0,   95,    2, 0x06,   10 /* Public */,
       6,    0,   96,    2, 0x06,   11 /* Public */,
       7,    2,   97,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  102,    2, 0x0a,   15 /* Public */,
      12,    1,  105,    2, 0x0a,   17 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      13,    2,  108,    2, 0x02,   19 /* Public */,
      16,    0,  113,    2, 0x02,   22 /* Public */,
      17,    1,  114,    2, 0x02,   23 /* Public */,
      19,    1,  117,    2, 0x02,   25 /* Public */,
      20,    0,  120,    2, 0x102,   27 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::QStringList,

 // properties: name, type, flags
      21, QMetaType::QStringList, 0x00015001, uint(0), 0,
      22, QMetaType::QStringList, 0x00015001, uint(1), 0,
      23, QMetaType::Int, 0x00015103, uint(2), 0,
      24, QMetaType::Int, 0x00015103, uint(3), 0,
      25, QMetaType::Bool, 0x00015001, uint(4), 0,
      26, QMetaType::QVariant, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::instrumentsscene::InstrumentListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentListModelENDCLASS_t,
        // property 'genres'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'groups'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'currentGenreIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentGroupIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'hasSelection'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectedInstrument'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstrumentListModel, std::true_type>,
        // method 'genresChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'groupsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentGenreIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentGroupIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentGenreIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentGroupIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveCurrentGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSearchText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'selectInstrument'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectedInstrumentIdList'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>
    >,
    nullptr
} };

void mu::instrumentsscene::InstrumentListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->genresChanged(); break;
        case 1: _t->groupsChanged(); break;
        case 2: _t->currentGenreIndexChanged(); break;
        case 3: _t->currentGroupIndexChanged(); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->focusRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->setCurrentGenreIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setCurrentGroupIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->load((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->saveCurrentGroup(); break;
        case 10: _t->setSearchText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->selectInstrument((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: { QStringList _r = _t->selectedInstrumentIdList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstrumentListModel::*)();
            if (_t _q_method = &InstrumentListModel::genresChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (_t _q_method = &InstrumentListModel::groupsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (_t _q_method = &InstrumentListModel::currentGenreIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (_t _q_method = &InstrumentListModel::currentGroupIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)();
            if (_t _q_method = &InstrumentListModel::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InstrumentListModel::*)(int , int );
            if (_t _q_method = &InstrumentListModel::focusRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InstrumentListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->genres(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->groups(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentGenreIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentGroupIndex(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasSelection(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->selectedInstrument(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<InstrumentListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCurrentGenreIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCurrentGroupIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::instrumentsscene::InstrumentListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::instrumentsscene::InstrumentListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinstrumentssceneSCOPEInstrumentListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::instrumentsscene::InstrumentListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mu::instrumentsscene::InstrumentListModel::genresChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::instrumentsscene::InstrumentListModel::groupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::instrumentsscene::InstrumentListModel::currentGenreIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::instrumentsscene::InstrumentListModel::currentGroupIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::instrumentsscene::InstrumentListModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::instrumentsscene::InstrumentListModel::focusRequested(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
