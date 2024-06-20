/****************************************************************************
** Meta object code from reading C++ file 'learnpagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/learn/view/learnpagemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'learnpagemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPElearnSCOPELearnPageModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPElearnSCOPELearnPageModelENDCLASS = QtMocHelpers::stringData(
    "muse::learn::LearnPageModel",
    "startedPlaylistChanged",
    "",
    "advancedPlaylistChanged",
    "setStartedPlaylist",
    "Playlist",
    "startedPlaylist",
    "setAdvancedPlaylist",
    "advancedPlaylist",
    "load",
    "setSearchText",
    "text",
    "classesAuthor",
    "classesEnabled"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPElearnSCOPELearnPageModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    3 /* Public */,
       3,    0,   63,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   64,    2, 0x08,    5 /* Private */,
       7,    1,   67,    2, 0x08,    7 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   70,    2, 0x02,    9 /* Public */,
      10,    1,   71,    2, 0x02,   10 /* Public */,
      12,    0,   74,    2, 0x102,   12 /* Public | MethodIsConst  */,
      13,    0,   75,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::QVariantMap,
    QMetaType::Bool,

 // properties: name, type, flags
       6, QMetaType::QVariantList, 0x00015001, uint(0), 0,
       8, QMetaType::QVariantList, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::learn::LearnPageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPElearnSCOPELearnPageModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPElearnSCOPELearnPageModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPElearnSCOPELearnPageModelENDCLASS_t,
        // property 'startedPlaylist'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'advancedPlaylist'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LearnPageModel, std::true_type>,
        // method 'startedPlaylistChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'advancedPlaylistChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setStartedPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Playlist, std::false_type>,
        // method 'setAdvancedPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Playlist, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSearchText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'classesAuthor'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'classesEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void muse::learn::LearnPageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LearnPageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startedPlaylistChanged(); break;
        case 1: _t->advancedPlaylistChanged(); break;
        case 2: _t->setStartedPlaylist((*reinterpret_cast< std::add_pointer_t<Playlist>>(_a[1]))); break;
        case 3: _t->setAdvancedPlaylist((*reinterpret_cast< std::add_pointer_t<Playlist>>(_a[1]))); break;
        case 4: _t->load(); break;
        case 5: _t->setSearchText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: { QVariantMap _r = _t->classesAuthor();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->classesEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LearnPageModel::*)();
            if (_t _q_method = &LearnPageModel::startedPlaylistChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LearnPageModel::*)();
            if (_t _q_method = &LearnPageModel::advancedPlaylistChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LearnPageModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->startedPlaylist(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->advancedPlaylist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::learn::LearnPageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::learn::LearnPageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPElearnSCOPELearnPageModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::learn::LearnPageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void muse::learn::LearnPageModel::startedPlaylistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::learn::LearnPageModel::advancedPlaylistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
