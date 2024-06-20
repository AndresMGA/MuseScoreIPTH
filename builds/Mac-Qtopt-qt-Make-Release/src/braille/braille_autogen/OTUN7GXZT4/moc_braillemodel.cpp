/****************************************************************************
** Meta object code from reading C++ file 'braillemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/braille/view/braillemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'braillemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEBrailleModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEBrailleModelENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::BrailleModel",
    "brailleInfoChanged",
    "",
    "cursorPositionChanged",
    "currentItemChanged",
    "keysFired",
    "braillePanelEnabledChanged",
    "brailleModeChanged",
    "cursorColorChanged",
    "load",
    "brailleInfo",
    "cursorPosition",
    "currentItemPositionStart",
    "currentItemPositionEnd",
    "keys",
    "enabled",
    "mode",
    "cursorColor"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEBrailleModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    9 /* Public */,
       3,    0,   63,    2, 0x06,   10 /* Public */,
       4,    0,   64,    2, 0x06,   11 /* Public */,
       5,    0,   65,    2, 0x06,   12 /* Public */,
       6,    0,   66,    2, 0x06,   13 /* Public */,
       7,    0,   67,    2, 0x06,   14 /* Public */,
       8,    0,   68,    2, 0x06,   15 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   69,    2, 0x02,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015001, uint(0), 0,
      11, QMetaType::Int, 0x00015103, uint(1), 0,
      12, QMetaType::Int, 0x00015001, uint(2), 0,
      13, QMetaType::Int, 0x00015001, uint(2), 0,
      14, QMetaType::QString, 0x00015103, uint(3), 0,
      15, QMetaType::Bool, 0x00015103, uint(4), 0,
      16, QMetaType::Int, 0x00015103, uint(5), 0,
      17, QMetaType::QString, 0x00015001, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::BrailleModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEBrailleModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEBrailleModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEBrailleModelENDCLASS_t,
        // property 'brailleInfo'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cursorPosition'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentItemPositionStart'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentItemPositionEnd'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'keys'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'mode'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'cursorColor'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrailleModel, std::true_type>,
        // method 'brailleInfoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keysFired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'braillePanelEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brailleModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::engraving::BrailleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrailleModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->brailleInfoChanged(); break;
        case 1: _t->cursorPositionChanged(); break;
        case 2: _t->currentItemChanged(); break;
        case 3: _t->keysFired(); break;
        case 4: _t->braillePanelEnabledChanged(); break;
        case 5: _t->brailleModeChanged(); break;
        case 6: _t->cursorColorChanged(); break;
        case 7: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrailleModel::*)();
            if (_t _q_method = &BrailleModel::brailleInfoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (_t _q_method = &BrailleModel::cursorPositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (_t _q_method = &BrailleModel::currentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (_t _q_method = &BrailleModel::keysFired; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (_t _q_method = &BrailleModel::braillePanelEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (_t _q_method = &BrailleModel::brailleModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BrailleModel::*)();
            if (_t _q_method = &BrailleModel::cursorColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BrailleModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->brailleInfo(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentItemPositionStart(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentItemPositionEnd(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->keys(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->mode(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->cursorColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BrailleModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setKeys(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setMode(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *mu::engraving::BrailleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::BrailleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEBrailleModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    if (!strcmp(_clname, "muse::actions::Actionable"))
        return static_cast< muse::actions::Actionable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::engraving::BrailleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mu::engraving::BrailleModel::brailleInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::engraving::BrailleModel::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::engraving::BrailleModel::currentItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::engraving::BrailleModel::keysFired()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::engraving::BrailleModel::braillePanelEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void mu::engraving::BrailleModel::brailleModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void mu::engraving::BrailleModel::cursorColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
