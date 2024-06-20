/****************************************************************************
** Meta object code from reading C++ file 'keynavdevsection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/diagnostics/view/keynav/keynavdevsection.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keynavdevsection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEdiagnosticsSCOPEKeyNavDevSectionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEdiagnosticsSCOPEKeyNavDevSectionENDCLASS = QtMocHelpers::stringData(
    "muse::diagnostics::KeyNavDevSection",
    "subsectionsChanged",
    "",
    "panelsCountChanged",
    "controlsCountChanged",
    "setSubsections",
    "subsections",
    "panelsCount",
    "controlsCount"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEdiagnosticsSCOPEKeyNavDevSectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    4 /* Public */,
       3,    0,   39,    2, 0x06,    5 /* Public */,
       4,    0,   40,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   41,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    6,

 // properties: name, type, flags
       6, QMetaType::QVariantList, 0x00015001, uint(0), 0,
       7, QMetaType::Int, 0x00015001, uint(1), 0,
       8, QMetaType::Int, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::diagnostics::KeyNavDevSection::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractKeyNavDevItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEdiagnosticsSCOPEKeyNavDevSectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEdiagnosticsSCOPEKeyNavDevSectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEdiagnosticsSCOPEKeyNavDevSectionENDCLASS_t,
        // property 'subsections'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'panelsCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'controlsCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KeyNavDevSection, std::true_type>,
        // method 'subsectionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'panelsCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'controlsCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSubsections'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>
    >,
    nullptr
} };

void muse::diagnostics::KeyNavDevSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyNavDevSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->subsectionsChanged(); break;
        case 1: _t->panelsCountChanged(); break;
        case 2: _t->controlsCountChanged(); break;
        case 3: _t->setSubsections((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyNavDevSection::*)();
            if (_t _q_method = &KeyNavDevSection::subsectionsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyNavDevSection::*)();
            if (_t _q_method = &KeyNavDevSection::panelsCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyNavDevSection::*)();
            if (_t _q_method = &KeyNavDevSection::controlsCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KeyNavDevSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->subsections(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->panelsCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->controlsCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::diagnostics::KeyNavDevSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::diagnostics::KeyNavDevSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEdiagnosticsSCOPEKeyNavDevSectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractKeyNavDevItem::qt_metacast(_clname);
}

int muse::diagnostics::KeyNavDevSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractKeyNavDevItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void muse::diagnostics::KeyNavDevSection::subsectionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::diagnostics::KeyNavDevSection::panelsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::diagnostics::KeyNavDevSection::controlsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
