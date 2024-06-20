/****************************************************************************
** Meta object code from reading C++ file 'abstractinspectormodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/inspector/models/abstractinspectormodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractinspectormodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAbstractInspectorModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAbstractInspectorModelENDCLASS = QtMocHelpers::stringData(
    "mu::inspector::AbstractInspectorModel",
    "titleChanged",
    "",
    "modelReseted",
    "isEmptyChanged",
    "requestReloadPropertyItems",
    "setTitle",
    "title",
    "setIcon",
    "muse::ui::IconCode::Code",
    "icon",
    "setSectionType",
    "InspectorSectionType",
    "sectionType",
    "setModelType",
    "InspectorModelType",
    "modelType",
    "onPropertyValueChanged",
    "mu::engraving::Pid",
    "pid",
    "newValue",
    "setPropertyValue",
    "QList<mu::engraving::EngravingItem*>",
    "items",
    "updateProperties",
    "requestResetToDefaults",
    "isEmpty",
    "SECTION_UNDEFINED",
    "SECTION_GENERAL",
    "SECTION_MEASURES",
    "SECTION_NOTATION",
    "SECTION_TEXT",
    "SECTION_SCORE_DISPLAY",
    "SECTION_SCORE_APPEARANCE",
    "SECTION_PARTS",
    "TYPE_UNDEFINED",
    "TYPE_NOTE",
    "TYPE_CHORD",
    "TYPE_BEAM",
    "TYPE_NOTEHEAD",
    "TYPE_STEM",
    "TYPE_HOOK",
    "TYPE_FERMATA",
    "TYPE_TEMPO",
    "TYPE_A_TEMPO",
    "TYPE_TEMPO_PRIMO",
    "TYPE_GLISSANDO",
    "TYPE_BARLINE",
    "TYPE_BREATH",
    "TYPE_STAFF",
    "TYPE_MARKER",
    "TYPE_SECTIONBREAK",
    "TYPE_JUMP",
    "TYPE_KEYSIGNATURE",
    "TYPE_ACCIDENTAL",
    "TYPE_ARPEGGIO",
    "TYPE_FRET_DIAGRAM",
    "TYPE_PEDAL",
    "TYPE_SPACER",
    "TYPE_CLEF",
    "TYPE_HAIRPIN",
    "TYPE_OTTAVA",
    "TYPE_PALM_MUTE",
    "TYPE_LET_RING",
    "TYPE_VOLTA",
    "TYPE_VIBRATO",
    "TYPE_SLUR",
    "TYPE_TIE",
    "TYPE_CRESCENDO",
    "TYPE_DIMINUENDO",
    "TYPE_STAFF_TYPE_CHANGES",
    "TYPE_TEXT_FRAME",
    "TYPE_VERTICAL_FRAME",
    "TYPE_HORIZONTAL_FRAME",
    "TYPE_ARTICULATION",
    "TYPE_ORNAMENT",
    "TYPE_AMBITUS",
    "TYPE_IMAGE",
    "TYPE_CHORD_SYMBOL",
    "TYPE_BRACKET",
    "TYPE_TIME_SIGNATURE",
    "TYPE_MMREST",
    "TYPE_BEND",
    "TYPE_TREMOLOBAR",
    "TYPE_TREMOLO",
    "TYPE_MEASURE_REPEAT",
    "TYPE_DYNAMIC",
    "TYPE_EXPRESSION",
    "TYPE_TUPLET",
    "TYPE_TEXT_LINE",
    "TYPE_GRADUAL_TEMPO_CHANGE",
    "TYPE_INSTRUMENT_NAME",
    "TYPE_LYRICS",
    "TYPE_REST",
    "TYPE_REST_BEAM",
    "TYPE_STRING_TUNINGS",
    "TYPE_SYMBOL"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEinspectorSCOPEAbstractInspectorModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  116, // properties
       2,  141, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    8 /* Public */,
       3,    0,   87,    2, 0x06,    9 /* Public */,
       4,    0,   88,    2, 0x06,   10 /* Public */,
       5,    0,   89,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   90,    2, 0x0a,   12 /* Public */,
       8,    1,   93,    2, 0x0a,   14 /* Public */,
      11,    1,   96,    2, 0x0a,   16 /* Public */,
      14,    1,   99,    2, 0x0a,   18 /* Public */,
      17,    2,  102,    2, 0x09,   20 /* Protected */,
      21,    3,  107,    2, 0x09,   23 /* Protected */,
      24,    0,  114,    2, 0x09,   27 /* Protected */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      25,    0,  115,    2, 0x02,   28 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QVariant,   19,   20,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 18, QMetaType::QVariant,   23,   19,   20,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015001, uint(0), 0,
      10, QMetaType::Int, 0x00015401, uint(-1), 0,
      13, 0x80000000 | 12, 0x00015409, uint(-1), 0,
      16, 0x80000000 | 15, 0x00015409, uint(-1), 0,
      26, QMetaType::Bool, 0x00015001, uint(2), 0,

 // enums: name, alias, flags, count, data
      12,   12, 0x2,    8,  151,
      15,   15, 0x2,   62,  167,

 // enum data: key, value
      27, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_UNDEFINED),
      28, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_GENERAL),
      29, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_MEASURES),
      30, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_NOTATION),
      31, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_TEXT),
      32, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_SCORE_DISPLAY),
      33, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_SCORE_APPEARANCE),
      34, uint(mu::inspector::AbstractInspectorModel::InspectorSectionType::SECTION_PARTS),
      35, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_UNDEFINED),
      36, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_NOTE),
      37, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_CHORD),
      38, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_BEAM),
      39, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_NOTEHEAD),
      40, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_STEM),
      41, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_HOOK),
      42, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_FERMATA),
      43, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TEMPO),
      44, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_A_TEMPO),
      45, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TEMPO_PRIMO),
      46, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_GLISSANDO),
      47, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_BARLINE),
      48, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_BREATH),
      49, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_STAFF),
      50, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_MARKER),
      51, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_SECTIONBREAK),
      52, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_JUMP),
      53, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_KEYSIGNATURE),
      54, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_ACCIDENTAL),
      55, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_ARPEGGIO),
      56, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_FRET_DIAGRAM),
      57, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_PEDAL),
      58, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_SPACER),
      59, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_CLEF),
      60, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_HAIRPIN),
      61, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_OTTAVA),
      62, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_PALM_MUTE),
      63, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_LET_RING),
      64, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_VOLTA),
      65, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_VIBRATO),
      66, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_SLUR),
      67, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TIE),
      68, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_CRESCENDO),
      69, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_DIMINUENDO),
      70, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_STAFF_TYPE_CHANGES),
      71, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TEXT_FRAME),
      72, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_VERTICAL_FRAME),
      73, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_HORIZONTAL_FRAME),
      74, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_ARTICULATION),
      75, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_ORNAMENT),
      76, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_AMBITUS),
      77, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_IMAGE),
      78, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_CHORD_SYMBOL),
      79, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_BRACKET),
      80, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TIME_SIGNATURE),
      81, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_MMREST),
      82, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_BEND),
      83, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TREMOLOBAR),
      84, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TREMOLO),
      85, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_MEASURE_REPEAT),
      86, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_DYNAMIC),
      87, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_EXPRESSION),
      88, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TUPLET),
      89, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_TEXT_LINE),
      90, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_GRADUAL_TEMPO_CHANGE),
      91, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_INSTRUMENT_NAME),
      92, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_LYRICS),
      93, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_REST),
      94, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_REST_BEAM),
      95, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_STRING_TUNINGS),
      96, uint(mu::inspector::AbstractInspectorModel::InspectorModelType::TYPE_SYMBOL),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::inspector::AbstractInspectorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAbstractInspectorModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEinspectorSCOPEAbstractInspectorModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAbstractInspectorModelENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sectionType'
        QtPrivate::TypeAndForceComplete<InspectorSectionType, std::true_type>,
        // property 'modelType'
        QtPrivate::TypeAndForceComplete<InspectorModelType, std::true_type>,
        // property 'isEmpty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'InspectorSectionType'
        QtPrivate::TypeAndForceComplete<AbstractInspectorModel::InspectorSectionType, std::true_type>,
        // enum 'InspectorModelType'
        QtPrivate::TypeAndForceComplete<AbstractInspectorModel::InspectorModelType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractInspectorModel, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modelReseted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isEmptyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestReloadPropertyItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<muse::ui::IconCode::Code, std::false_type>,
        // method 'setSectionType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<InspectorSectionType, std::false_type>,
        // method 'setModelType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<InspectorModelType, std::false_type>,
        // method 'onPropertyValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mu::engraving::Pid, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setPropertyValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<mu::engraving::EngravingItem*> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const mu::engraving::Pid, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'updateProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestResetToDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::inspector::AbstractInspectorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractInspectorModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->modelReseted(); break;
        case 2: _t->isEmptyChanged(); break;
        case 3: _t->requestReloadPropertyItems(); break;
        case 4: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setIcon((*reinterpret_cast< std::add_pointer_t<muse::ui::IconCode::Code>>(_a[1]))); break;
        case 6: _t->setSectionType((*reinterpret_cast< std::add_pointer_t<InspectorSectionType>>(_a[1]))); break;
        case 7: _t->setModelType((*reinterpret_cast< std::add_pointer_t<InspectorModelType>>(_a[1]))); break;
        case 8: _t->onPropertyValueChanged((*reinterpret_cast< std::add_pointer_t<mu::engraving::Pid>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 9: _t->setPropertyValue((*reinterpret_cast< std::add_pointer_t<QList<mu::engraving::EngravingItem*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<mu::engraving::Pid>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[3]))); break;
        case 10: _t->updateProperties(); break;
        case 11: _t->requestResetToDefaults(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractInspectorModel::*)();
            if (_t _q_method = &AbstractInspectorModel::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractInspectorModel::*)();
            if (_t _q_method = &AbstractInspectorModel::modelReseted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractInspectorModel::*)();
            if (_t _q_method = &AbstractInspectorModel::isEmptyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractInspectorModel::*)();
            if (_t _q_method = &AbstractInspectorModel::requestReloadPropertyItems; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractInspectorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast< InspectorSectionType*>(_v) = _t->sectionType(); break;
        case 3: *reinterpret_cast< InspectorModelType*>(_v) = _t->modelType(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::inspector::AbstractInspectorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::AbstractInspectorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEinspectorSCOPEAbstractInspectorModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::inspector::AbstractInspectorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void mu::inspector::AbstractInspectorModel::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::inspector::AbstractInspectorModel::modelReseted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::inspector::AbstractInspectorModel::isEmptyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::inspector::AbstractInspectorModel::requestReloadPropertyItems()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
