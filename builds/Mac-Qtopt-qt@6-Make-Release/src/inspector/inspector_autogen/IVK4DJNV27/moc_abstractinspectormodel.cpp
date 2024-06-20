/****************************************************************************
** Meta object code from reading C++ file 'abstractinspectormodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/abstractinspectormodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractinspectormodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__AbstractInspectorModel_t {
    QByteArrayData data[96];
    char stringdata0[1421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__AbstractInspectorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__AbstractInspectorModel_t qt_meta_stringdata_mu__inspector__AbstractInspectorModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::inspector::AbstractInspec..."
QT_MOC_LITERAL(1, 38, 12), // "titleChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "modelReseted"
QT_MOC_LITERAL(4, 65, 14), // "isEmptyChanged"
QT_MOC_LITERAL(5, 80, 26), // "requestReloadPropertyItems"
QT_MOC_LITERAL(6, 107, 8), // "setTitle"
QT_MOC_LITERAL(7, 116, 5), // "title"
QT_MOC_LITERAL(8, 122, 7), // "setIcon"
QT_MOC_LITERAL(9, 130, 18), // "ui::IconCode::Code"
QT_MOC_LITERAL(10, 149, 4), // "icon"
QT_MOC_LITERAL(11, 154, 14), // "setSectionType"
QT_MOC_LITERAL(12, 169, 20), // "InspectorSectionType"
QT_MOC_LITERAL(13, 190, 11), // "sectionType"
QT_MOC_LITERAL(14, 202, 12), // "setModelType"
QT_MOC_LITERAL(15, 215, 18), // "InspectorModelType"
QT_MOC_LITERAL(16, 234, 9), // "modelType"
QT_MOC_LITERAL(17, 244, 22), // "onPropertyValueChanged"
QT_MOC_LITERAL(18, 267, 18), // "mu::engraving::Pid"
QT_MOC_LITERAL(19, 286, 3), // "pid"
QT_MOC_LITERAL(20, 290, 8), // "newValue"
QT_MOC_LITERAL(21, 299, 16), // "setPropertyValue"
QT_MOC_LITERAL(22, 316, 36), // "QList<mu::engraving::Engravin..."
QT_MOC_LITERAL(23, 353, 5), // "items"
QT_MOC_LITERAL(24, 359, 16), // "updateProperties"
QT_MOC_LITERAL(25, 376, 22), // "requestResetToDefaults"
QT_MOC_LITERAL(26, 399, 7), // "isEmpty"
QT_MOC_LITERAL(27, 407, 17), // "SECTION_UNDEFINED"
QT_MOC_LITERAL(28, 425, 15), // "SECTION_GENERAL"
QT_MOC_LITERAL(29, 441, 16), // "SECTION_MEASURES"
QT_MOC_LITERAL(30, 458, 16), // "SECTION_NOTATION"
QT_MOC_LITERAL(31, 475, 12), // "SECTION_TEXT"
QT_MOC_LITERAL(32, 488, 21), // "SECTION_SCORE_DISPLAY"
QT_MOC_LITERAL(33, 510, 24), // "SECTION_SCORE_APPEARANCE"
QT_MOC_LITERAL(34, 535, 13), // "SECTION_PARTS"
QT_MOC_LITERAL(35, 549, 14), // "TYPE_UNDEFINED"
QT_MOC_LITERAL(36, 564, 9), // "TYPE_NOTE"
QT_MOC_LITERAL(37, 574, 10), // "TYPE_CHORD"
QT_MOC_LITERAL(38, 585, 9), // "TYPE_BEAM"
QT_MOC_LITERAL(39, 595, 13), // "TYPE_NOTEHEAD"
QT_MOC_LITERAL(40, 609, 9), // "TYPE_STEM"
QT_MOC_LITERAL(41, 619, 9), // "TYPE_HOOK"
QT_MOC_LITERAL(42, 629, 12), // "TYPE_FERMATA"
QT_MOC_LITERAL(43, 642, 10), // "TYPE_TEMPO"
QT_MOC_LITERAL(44, 653, 12), // "TYPE_A_TEMPO"
QT_MOC_LITERAL(45, 666, 16), // "TYPE_TEMPO_PRIMO"
QT_MOC_LITERAL(46, 683, 14), // "TYPE_GLISSANDO"
QT_MOC_LITERAL(47, 698, 12), // "TYPE_BARLINE"
QT_MOC_LITERAL(48, 711, 11), // "TYPE_BREATH"
QT_MOC_LITERAL(49, 723, 10), // "TYPE_STAFF"
QT_MOC_LITERAL(50, 734, 11), // "TYPE_MARKER"
QT_MOC_LITERAL(51, 746, 17), // "TYPE_SECTIONBREAK"
QT_MOC_LITERAL(52, 764, 9), // "TYPE_JUMP"
QT_MOC_LITERAL(53, 774, 17), // "TYPE_KEYSIGNATURE"
QT_MOC_LITERAL(54, 792, 15), // "TYPE_ACCIDENTAL"
QT_MOC_LITERAL(55, 808, 13), // "TYPE_ARPEGGIO"
QT_MOC_LITERAL(56, 822, 17), // "TYPE_FRET_DIAGRAM"
QT_MOC_LITERAL(57, 840, 10), // "TYPE_PEDAL"
QT_MOC_LITERAL(58, 851, 11), // "TYPE_SPACER"
QT_MOC_LITERAL(59, 863, 9), // "TYPE_CLEF"
QT_MOC_LITERAL(60, 873, 12), // "TYPE_HAIRPIN"
QT_MOC_LITERAL(61, 886, 11), // "TYPE_OTTAVA"
QT_MOC_LITERAL(62, 898, 14), // "TYPE_PALM_MUTE"
QT_MOC_LITERAL(63, 913, 13), // "TYPE_LET_RING"
QT_MOC_LITERAL(64, 927, 10), // "TYPE_VOLTA"
QT_MOC_LITERAL(65, 938, 12), // "TYPE_VIBRATO"
QT_MOC_LITERAL(66, 951, 9), // "TYPE_SLUR"
QT_MOC_LITERAL(67, 961, 8), // "TYPE_TIE"
QT_MOC_LITERAL(68, 970, 14), // "TYPE_CRESCENDO"
QT_MOC_LITERAL(69, 985, 15), // "TYPE_DIMINUENDO"
QT_MOC_LITERAL(70, 1001, 23), // "TYPE_STAFF_TYPE_CHANGES"
QT_MOC_LITERAL(71, 1025, 15), // "TYPE_TEXT_FRAME"
QT_MOC_LITERAL(72, 1041, 19), // "TYPE_VERTICAL_FRAME"
QT_MOC_LITERAL(73, 1061, 21), // "TYPE_HORIZONTAL_FRAME"
QT_MOC_LITERAL(74, 1083, 17), // "TYPE_ARTICULATION"
QT_MOC_LITERAL(75, 1101, 13), // "TYPE_ORNAMENT"
QT_MOC_LITERAL(76, 1115, 12), // "TYPE_AMBITUS"
QT_MOC_LITERAL(77, 1128, 10), // "TYPE_IMAGE"
QT_MOC_LITERAL(78, 1139, 17), // "TYPE_CHORD_SYMBOL"
QT_MOC_LITERAL(79, 1157, 12), // "TYPE_BRACKET"
QT_MOC_LITERAL(80, 1170, 19), // "TYPE_TIME_SIGNATURE"
QT_MOC_LITERAL(81, 1190, 11), // "TYPE_MMREST"
QT_MOC_LITERAL(82, 1202, 9), // "TYPE_BEND"
QT_MOC_LITERAL(83, 1212, 15), // "TYPE_TREMOLOBAR"
QT_MOC_LITERAL(84, 1228, 12), // "TYPE_TREMOLO"
QT_MOC_LITERAL(85, 1241, 19), // "TYPE_MEASURE_REPEAT"
QT_MOC_LITERAL(86, 1261, 12), // "TYPE_DYNAMIC"
QT_MOC_LITERAL(87, 1274, 15), // "TYPE_EXPRESSION"
QT_MOC_LITERAL(88, 1290, 11), // "TYPE_TUPLET"
QT_MOC_LITERAL(89, 1302, 14), // "TYPE_TEXT_LINE"
QT_MOC_LITERAL(90, 1317, 25), // "TYPE_GRADUAL_TEMPO_CHANGE"
QT_MOC_LITERAL(91, 1343, 20), // "TYPE_INSTRUMENT_NAME"
QT_MOC_LITERAL(92, 1364, 11), // "TYPE_LYRICS"
QT_MOC_LITERAL(93, 1376, 9), // "TYPE_REST"
QT_MOC_LITERAL(94, 1386, 14), // "TYPE_REST_BEAM"
QT_MOC_LITERAL(95, 1401, 19) // "TYPE_STRING_TUNINGS"

    },
    "mu::inspector::AbstractInspectorModel\0"
    "titleChanged\0\0modelReseted\0isEmptyChanged\0"
    "requestReloadPropertyItems\0setTitle\0"
    "title\0setIcon\0ui::IconCode::Code\0icon\0"
    "setSectionType\0InspectorSectionType\0"
    "sectionType\0setModelType\0InspectorModelType\0"
    "modelType\0onPropertyValueChanged\0"
    "mu::engraving::Pid\0pid\0newValue\0"
    "setPropertyValue\0QList<mu::engraving::EngravingItem*>\0"
    "items\0updateProperties\0requestResetToDefaults\0"
    "isEmpty\0SECTION_UNDEFINED\0SECTION_GENERAL\0"
    "SECTION_MEASURES\0SECTION_NOTATION\0"
    "SECTION_TEXT\0SECTION_SCORE_DISPLAY\0"
    "SECTION_SCORE_APPEARANCE\0SECTION_PARTS\0"
    "TYPE_UNDEFINED\0TYPE_NOTE\0TYPE_CHORD\0"
    "TYPE_BEAM\0TYPE_NOTEHEAD\0TYPE_STEM\0"
    "TYPE_HOOK\0TYPE_FERMATA\0TYPE_TEMPO\0"
    "TYPE_A_TEMPO\0TYPE_TEMPO_PRIMO\0"
    "TYPE_GLISSANDO\0TYPE_BARLINE\0TYPE_BREATH\0"
    "TYPE_STAFF\0TYPE_MARKER\0TYPE_SECTIONBREAK\0"
    "TYPE_JUMP\0TYPE_KEYSIGNATURE\0TYPE_ACCIDENTAL\0"
    "TYPE_ARPEGGIO\0TYPE_FRET_DIAGRAM\0"
    "TYPE_PEDAL\0TYPE_SPACER\0TYPE_CLEF\0"
    "TYPE_HAIRPIN\0TYPE_OTTAVA\0TYPE_PALM_MUTE\0"
    "TYPE_LET_RING\0TYPE_VOLTA\0TYPE_VIBRATO\0"
    "TYPE_SLUR\0TYPE_TIE\0TYPE_CRESCENDO\0"
    "TYPE_DIMINUENDO\0TYPE_STAFF_TYPE_CHANGES\0"
    "TYPE_TEXT_FRAME\0TYPE_VERTICAL_FRAME\0"
    "TYPE_HORIZONTAL_FRAME\0TYPE_ARTICULATION\0"
    "TYPE_ORNAMENT\0TYPE_AMBITUS\0TYPE_IMAGE\0"
    "TYPE_CHORD_SYMBOL\0TYPE_BRACKET\0"
    "TYPE_TIME_SIGNATURE\0TYPE_MMREST\0"
    "TYPE_BEND\0TYPE_TREMOLOBAR\0TYPE_TREMOLO\0"
    "TYPE_MEASURE_REPEAT\0TYPE_DYNAMIC\0"
    "TYPE_EXPRESSION\0TYPE_TUPLET\0TYPE_TEXT_LINE\0"
    "TYPE_GRADUAL_TEMPO_CHANGE\0"
    "TYPE_INSTRUMENT_NAME\0TYPE_LYRICS\0"
    "TYPE_REST\0TYPE_REST_BEAM\0TYPE_STRING_TUNINGS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__AbstractInspectorModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  104, // properties
       2,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   78,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
      11,    1,   84,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,
      17,    2,   90,    2, 0x09 /* Protected */,
      21,    3,   95,    2, 0x09 /* Protected */,
      24,    0,  102,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      25,    0,  103,    2, 0x02 /* Public */,

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
       7, QMetaType::QString, 0x00495001,
      10, QMetaType::Int, 0x00095401,
      13, 0x80000000 | 12, 0x00095409,
      16, 0x80000000 | 15, 0x00095409,
      26, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       2,

 // enums: name, alias, flags, count, data
      12,   12, 0x2,    8,  134,
      15,   15, 0x2,   61,  150,

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

       0        // eod
};

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
        case 4: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setIcon((*reinterpret_cast< ui::IconCode::Code(*)>(_a[1]))); break;
        case 6: _t->setSectionType((*reinterpret_cast< InspectorSectionType(*)>(_a[1]))); break;
        case 7: _t->setModelType((*reinterpret_cast< InspectorModelType(*)>(_a[1]))); break;
        case 8: _t->onPropertyValueChanged((*reinterpret_cast< const mu::engraving::Pid(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 9: _t->setPropertyValue((*reinterpret_cast< const QList<mu::engraving::EngravingItem*>(*)>(_a[1])),(*reinterpret_cast< const mu::engraving::Pid(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 10: _t->updateProperties(); break;
        case 11: _t->requestResetToDefaults(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractInspectorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractInspectorModel::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractInspectorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractInspectorModel::modelReseted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractInspectorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractInspectorModel::isEmptyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractInspectorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractInspectorModel::requestReloadPropertyItems)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::AbstractInspectorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__AbstractInspectorModel.data,
    qt_meta_data_mu__inspector__AbstractInspectorModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::AbstractInspectorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::AbstractInspectorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__AbstractInspectorModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
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
QT_END_MOC_NAMESPACE
