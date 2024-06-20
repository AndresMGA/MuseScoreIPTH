/****************************************************************************
** Meta object code from reading C++ file 'score.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/engraving/api/v1/score.h"
#include "engraving/api/v1/selection.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'score.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEScoreENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEScoreENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::Score",
    "metaTag",
    "",
    "tag",
    "setMetaTag",
    "val",
    "appendPart",
    "instrumentId",
    "appendPartByMusicXmlId",
    "instrumentMusicXmlId",
    "appendMeasures",
    "n",
    "addText",
    "type",
    "text",
    "newCursor",
    "apiv1::Cursor*",
    "firstSegment",
    "apiv1::Segment*",
    "extractLyrics",
    "startCmd",
    "endCmd",
    "rollback",
    "createPlayEvents",
    "composer",
    "duration",
    "excerpts",
    "QQmlListProperty<apiv1::Excerpt>",
    "firstMeasure",
    "apiv1::Measure*",
    "firstMeasureMM",
    "harmonyCount",
    "hasHarmonies",
    "hasLyrics",
    "keysig",
    "lastMeasure",
    "lastMeasureMM",
    "lastSegment",
    "lyricCount",
    "scoreName",
    "nmeasures",
    "npages",
    "nstaves",
    "ntracks",
    "parts",
    "QQmlListProperty<apiv1::Part>",
    "lyricist",
    "title",
    "mscoreVersion",
    "mscoreRevision",
    "selection",
    "apiv1::Selection*",
    "style",
    "apiv1::MStyle*",
    "pageNumberOffset",
    "staves",
    "QQmlListProperty<apiv1::Staff>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEScoreENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      27,  123, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x102,   28 /* Public | MethodIsConst  */,
       4,    2,   95,    2, 0x02,   30 /* Public */,
       6,    1,  100,    2, 0x02,   33 /* Public */,
       8,    1,  103,    2, 0x02,   35 /* Public */,
      10,    1,  106,    2, 0x02,   37 /* Public */,
      12,    2,  109,    2, 0x02,   39 /* Public */,
      15,    0,  114,    2, 0x02,   42 /* Public */,
      17,    0,  115,    2, 0x02,   43 /* Public */,
      19,    0,  116,    2, 0x02,   44 /* Public */,
      20,    0,  117,    2, 0x02,   45 /* Public */,
      21,    1,  118,    2, 0x02,   46 /* Public */,
      21,    0,  121,    2, 0x22,   48 /* Public | MethodCloned */,
      23,    0,  122,    2, 0x02,   49 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    0x80000000 | 16,
    0x80000000 | 18,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      24, QMetaType::QString, 0x00015001, uint(-1), 0,
      25, QMetaType::Int, 0x00015001, uint(-1), 0,
      26, 0x80000000 | 27, 0x00015009, uint(-1), 0,
      28, 0x80000000 | 29, 0x00015009, uint(-1), 0,
      30, 0x80000000 | 29, 0x00015009, uint(-1), 0,
      31, QMetaType::Int, 0x00015001, uint(-1), 0,
      32, QMetaType::Bool, 0x00015001, uint(-1), 0,
      33, QMetaType::Bool, 0x00015001, uint(-1), 0,
      34, QMetaType::Int, 0x00015001, uint(-1), 0,
      35, 0x80000000 | 29, 0x00015009, uint(-1), 0,
      36, 0x80000000 | 29, 0x00015009, uint(-1), 0,
      37, 0x80000000 | 18, 0x00015009, uint(-1), 0,
      38, QMetaType::Int, 0x00015001, uint(-1), 0,
      39, QMetaType::QString, 0x00015003, uint(-1), 0,
      40, QMetaType::Int, 0x00015001, uint(-1), 0,
      41, QMetaType::Int, 0x00015001, uint(-1), 0,
      42, QMetaType::Int, 0x00015001, uint(-1), 0,
      43, QMetaType::Int, 0x00015001, uint(-1), 0,
      44, 0x80000000 | 45, 0x00015009, uint(-1), 0,
      46, QMetaType::QString, 0x00015001, uint(-1), 0,
      47, QMetaType::QString, 0x00015001, uint(-1), 0,
      48, QMetaType::QString, 0x00015001, uint(-1), 0,
      49, QMetaType::QString, 0x00015001, uint(-1), 0,
      50, 0x80000000 | 51, 0x00015009, uint(-1), 0,
      52, 0x80000000 | 53, 0x00015009, uint(-1), 0,
      54, QMetaType::Int, 0x00015103, uint(-1), 0,
      55, 0x80000000 | 56, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::Score::staticMetaObject = { {
    QMetaObject::SuperData::link<apiv1::ScoreElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEScoreENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEScoreENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEScoreENDCLASS_t,
        // property 'composer'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'duration'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'excerpts'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::Excerpt>, std::true_type>,
        // property 'firstMeasure'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'firstMeasureMM'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'harmonyCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'hasHarmonies'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasLyrics'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'keysig'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'lastMeasure'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'lastMeasureMM'
        QtPrivate::TypeAndForceComplete<apiv1::Measure*, std::true_type>,
        // property 'lastSegment'
        QtPrivate::TypeAndForceComplete<apiv1::Segment*, std::true_type>,
        // property 'lyricCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'scoreName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'nmeasures'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'npages'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'nstaves'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'ntracks'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'parts'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::Part>, std::true_type>,
        // property 'lyricist'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'mscoreVersion'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'mscoreRevision'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'selection'
        QtPrivate::TypeAndForceComplete<apiv1::Selection*, std::true_type>,
        // property 'style'
        QtPrivate::TypeAndForceComplete<apiv1::MStyle*, std::true_type>,
        // property 'pageNumberOffset'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'staves'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<apiv1::Staff>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Score, std::true_type>,
        // method 'metaTag'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setMetaTag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appendPart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appendPartByMusicXmlId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appendMeasures'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'newCursor'
        QtPrivate::TypeAndForceComplete<apiv1::Cursor *, std::false_type>,
        // method 'firstSegment'
        QtPrivate::TypeAndForceComplete<apiv1::Segment *, std::false_type>,
        // method 'extractLyrics'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'startCmd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endCmd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'endCmd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createPlayEvents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::Score::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Score *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->metaTag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setMetaTag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->appendPart((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->appendPartByMusicXmlId((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->appendMeasures((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->addText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: { apiv1::Cursor* _r = _t->newCursor();
            if (_a[0]) *reinterpret_cast< apiv1::Cursor**>(_a[0]) = std::move(_r); }  break;
        case 7: { apiv1::Segment* _r = _t->firstSegment();
            if (_a[0]) *reinterpret_cast< apiv1::Segment**>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->extractLyrics();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->startCmd(); break;
        case 10: _t->endCmd((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->endCmd(); break;
        case 12: _t->createPlayEvents(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Score *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->composer(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 2: *reinterpret_cast< QQmlListProperty<apiv1::Excerpt>*>(_v) = _t->excerpts(); break;
        case 3: *reinterpret_cast< apiv1::Measure**>(_v) = _t->firstMeasure(); break;
        case 4: *reinterpret_cast< apiv1::Measure**>(_v) = _t->firstMeasureMM(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->harmonyCount(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasHarmonies(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hasLyrics(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->keysig(); break;
        case 9: *reinterpret_cast< apiv1::Measure**>(_v) = _t->lastMeasure(); break;
        case 10: *reinterpret_cast< apiv1::Measure**>(_v) = _t->lastMeasureMM(); break;
        case 11: *reinterpret_cast< apiv1::Segment**>(_v) = _t->lastSegment(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->lyricCount(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->nmeasures(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->npages(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->nstaves(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->ntracks(); break;
        case 18: *reinterpret_cast< QQmlListProperty<apiv1::Part>*>(_v) = _t->parts(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->lyricist(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->mscoreVersion(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->mscoreRevision(); break;
        case 23: *reinterpret_cast< apiv1::Selection**>(_v) = _t->selection(); break;
        case 24: *reinterpret_cast< apiv1::MStyle**>(_v) = _t->style(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->pageNumberOffset(); break;
        case 26: *reinterpret_cast< QQmlListProperty<apiv1::Staff>*>(_v) = _t->staves(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Score *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 13: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 25: _t->setPageNumberOffset(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::Score::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::Score::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEScoreENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return apiv1::ScoreElement::qt_metacast(_clname);
}

int mu::engraving::apiv1::Score::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = apiv1::ScoreElement::qt_metacall(_c, _id, _a);
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
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
