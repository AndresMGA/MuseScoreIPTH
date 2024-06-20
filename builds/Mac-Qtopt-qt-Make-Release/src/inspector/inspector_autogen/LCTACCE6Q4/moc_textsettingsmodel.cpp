/****************************************************************************
** Meta object code from reading C++ file 'textsettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/text/textsettingsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textsettingsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETextSettingsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETextSettingsModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::TextSettingsModel",
    "textStylesChanged",
    "",
    "areStaffTextPropertiesAvailableChanged",
    "areStaffTextPropertiesAvailable",
    "isSpecialCharactersInsertionAvailableChanged",
    "isSpecialCharactersInsertionAvailable",
    "isDynamicSpecificSettingsChanged",
    "isDynamicSpecificSettings",
    "isHorizontalAlignmentAvailableChanged",
    "isHorizontalAlignmentAvailable",
    "setAreStaffTextPropertiesAvailable",
    "setIsSpecialCharactersInsertionAvailable",
    "setIsDynamicSpecificSettings",
    "isOnlyDynamics",
    "setIsHorizontalAlignmentAvailable",
    "insertSpecialCharacters",
    "showStaffTextProperties",
    "fontFamily",
    "PropertyItem*",
    "fontStyle",
    "fontSize",
    "textLineSpacing",
    "horizontalAlignment",
    "verticalAlignment",
    "isSizeSpatiumDependent",
    "frameType",
    "frameBorderColor",
    "frameFillColor",
    "frameThickness",
    "frameMargin",
    "frameCornerRadius",
    "textType",
    "textPlacement",
    "textScriptAlignment",
    "textStyles"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPETextSettingsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      21,  107, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,   22 /* Public */,
       3,    1,   81,    2, 0x06,   23 /* Public */,
       5,    1,   84,    2, 0x06,   25 /* Public */,
       7,    1,   87,    2, 0x06,   27 /* Public */,
       9,    1,   90,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   93,    2, 0x0a,   31 /* Public */,
      12,    1,   96,    2, 0x0a,   33 /* Public */,
      13,    1,   99,    2, 0x0a,   35 /* Public */,
      15,    1,  102,    2, 0x0a,   37 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,  105,    2, 0x02,   39 /* Public */,
      17,    0,  106,    2, 0x02,   40 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   10,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      20, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      21, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      22, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      23, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      24, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      25, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      26, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      27, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      28, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      29, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      30, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      31, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      32, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      33, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      34, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      35, QMetaType::QVariantList, 0x00015001, uint(0), 0,
       4, QMetaType::Bool, 0x00015001, uint(1), 0,
       6, QMetaType::Bool, 0x00015001, uint(2), 0,
       8, QMetaType::Bool, 0x00015001, uint(3), 0,
      10, QMetaType::Bool, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::TextSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETextSettingsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPETextSettingsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETextSettingsModelENDCLASS_t,
        // property 'fontFamily'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'fontStyle'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'fontSize'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'textLineSpacing'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'horizontalAlignment'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'verticalAlignment'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'isSizeSpatiumDependent'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'frameType'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'frameBorderColor'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'frameFillColor'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'frameThickness'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'frameMargin'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'frameCornerRadius'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'textType'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'textPlacement'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'textScriptAlignment'
        QtPrivate::TypeAndForceComplete<PropertyItem*, std::true_type>,
        // property 'textStyles'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'areStaffTextPropertiesAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isSpecialCharactersInsertionAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isDynamicSpecificSettings'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isHorizontalAlignmentAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TextSettingsModel, std::true_type>,
        // method 'textStylesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'areStaffTextPropertiesAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isSpecialCharactersInsertionAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isDynamicSpecificSettingsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isHorizontalAlignmentAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAreStaffTextPropertiesAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsSpecialCharactersInsertionAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsDynamicSpecificSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIsHorizontalAlignmentAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertSpecialCharacters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showStaffTextProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::TextSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textStylesChanged(); break;
        case 1: _t->areStaffTextPropertiesAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->isSpecialCharactersInsertionAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->isDynamicSpecificSettingsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->isHorizontalAlignmentAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setAreStaffTextPropertiesAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setIsSpecialCharactersInsertionAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setIsDynamicSpecificSettings((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setIsHorizontalAlignmentAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->insertSpecialCharacters(); break;
        case 10: _t->showStaffTextProperties(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextSettingsModel::*)();
            if (_t _q_method = &TextSettingsModel::textStylesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TextSettingsModel::*)(bool );
            if (_t _q_method = &TextSettingsModel::areStaffTextPropertiesAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TextSettingsModel::*)(bool );
            if (_t _q_method = &TextSettingsModel::isSpecialCharactersInsertionAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TextSettingsModel::*)(bool );
            if (_t _q_method = &TextSettingsModel::isDynamicSpecificSettingsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TextSettingsModel::*)(bool );
            if (_t _q_method = &TextSettingsModel::isHorizontalAlignmentAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
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
        auto *_t = static_cast<TextSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->fontFamily(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->fontStyle(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->fontSize(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->textLineSpacing(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->horizontalAlignment(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->verticalAlignment(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->isSizeSpatiumDependent(); break;
        case 7: *reinterpret_cast< PropertyItem**>(_v) = _t->frameType(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->frameBorderColor(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->frameFillColor(); break;
        case 10: *reinterpret_cast< PropertyItem**>(_v) = _t->frameThickness(); break;
        case 11: *reinterpret_cast< PropertyItem**>(_v) = _t->frameMargin(); break;
        case 12: *reinterpret_cast< PropertyItem**>(_v) = _t->frameCornerRadius(); break;
        case 13: *reinterpret_cast< PropertyItem**>(_v) = _t->textType(); break;
        case 14: *reinterpret_cast< PropertyItem**>(_v) = _t->textPlacement(); break;
        case 15: *reinterpret_cast< PropertyItem**>(_v) = _t->textScriptAlignment(); break;
        case 16: *reinterpret_cast< QVariantList*>(_v) = _t->textStyles(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->areStaffTextPropertiesAvailable(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->isSpecialCharactersInsertionAvailable(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->isDynamicSpecificSettings(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->isHorizontalAlignmentAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::TextSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::TextSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPETextSettingsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::TextSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::TextSettingsModel::textStylesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::TextSettingsModel::areStaffTextPropertiesAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::inspector::TextSettingsModel::isSpecialCharactersInsertionAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::inspector::TextSettingsModel::isDynamicSpecificSettingsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::inspector::TextSettingsModel::isHorizontalAlignmentAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
