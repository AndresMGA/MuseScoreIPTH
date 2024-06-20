/****************************************************************************
** Meta object code from reading C++ file 'noteheadsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/notation/notes/noteheads/noteheadsettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteheadsettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPENoteheadSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPENoteheadSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::NoteheadSettingsModel",
    "isTrillCueNoteChanged",
    "",
    "isTrillCueNote",
    "setIsTrillCueNote",
    "v",
    "possibleHeadSystemTypes",
    "isHeadHidden",
    "PropertyItem*",
    "isHeadSmall",
    "hasHeadParentheses",
    "headDirection",
    "headGroup",
    "headType",
    "headSystem",
    "dotPosition",
    "offset"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPENoteheadSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      10,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   35,    2, 0x0a,   13 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   38,    2, 0x102,   15 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,

 // methods: parameters
    QMetaType::QVariantList,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      15, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      16, 0x80000000 | 8, 0x00015409, uint(-1), 0,
       3, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::NoteheadSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPENoteheadSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPENoteheadSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPENoteheadSettingsModelENDCLASS_t,
        // property 'isHeadHidden'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isHeadSmall'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'hasHeadParentheses'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'headDirection'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'headGroup'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'headType'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'headSystem'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'dotPosition'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'offset'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isTrillCueNote'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NoteheadSettingsModel, std::true_type>,
        // method 'isTrillCueNoteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsTrillCueNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'possibleHeadSystemTypes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>
    >,
    nullptr
} };

void mu::inspector::NoteheadSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteheadSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isTrillCueNoteChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setIsTrillCueNote((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: { QVariantList _r = _t->possibleHeadSystemTypes();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteheadSettingsModel::*)(bool );
            if (_t _q_method = &NoteheadSettingsModel::isTrillCueNoteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NoteheadSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->isHeadHidden(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->isHeadSmall(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->hasHeadParentheses(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->headDirection(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->headGroup(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->headType(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->headSystem(); break;
        case 7: *reinterpret_cast< PropertyItem**>(_v) = _t->dotPosition(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->offset(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isTrillCueNote(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::NoteheadSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::NoteheadSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPENoteheadSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::NoteheadSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::NoteheadSettingsModel::isTrillCueNoteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
