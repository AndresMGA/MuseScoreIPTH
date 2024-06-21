/****************************************************************************
** Meta object code from reading C++ file 'score.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/plugins/api/score.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'score.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__plugins__api__Score_t {
    QByteArrayData data[57];
    char stringdata0[776];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__Score_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__Score_t qt_meta_stringdata_mu__plugins__api__Score = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mu::plugins::api::Score"
QT_MOC_LITERAL(1, 24, 7), // "metaTag"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "tag"
QT_MOC_LITERAL(4, 37, 10), // "setMetaTag"
QT_MOC_LITERAL(5, 48, 3), // "val"
QT_MOC_LITERAL(6, 52, 10), // "appendPart"
QT_MOC_LITERAL(7, 63, 12), // "instrumentId"
QT_MOC_LITERAL(8, 76, 22), // "appendPartByMusicXmlId"
QT_MOC_LITERAL(9, 99, 20), // "instrumentMusicXmlId"
QT_MOC_LITERAL(10, 120, 14), // "appendMeasures"
QT_MOC_LITERAL(11, 135, 1), // "n"
QT_MOC_LITERAL(12, 137, 7), // "addText"
QT_MOC_LITERAL(13, 145, 4), // "type"
QT_MOC_LITERAL(14, 150, 4), // "text"
QT_MOC_LITERAL(15, 155, 9), // "newCursor"
QT_MOC_LITERAL(16, 165, 25), // "mu::plugins::api::Cursor*"
QT_MOC_LITERAL(17, 191, 12), // "firstSegment"
QT_MOC_LITERAL(18, 204, 26), // "mu::plugins::api::Segment*"
QT_MOC_LITERAL(19, 231, 13), // "extractLyrics"
QT_MOC_LITERAL(20, 245, 8), // "startCmd"
QT_MOC_LITERAL(21, 254, 6), // "endCmd"
QT_MOC_LITERAL(22, 261, 8), // "rollback"
QT_MOC_LITERAL(23, 270, 16), // "createPlayEvents"
QT_MOC_LITERAL(24, 287, 8), // "composer"
QT_MOC_LITERAL(25, 296, 8), // "duration"
QT_MOC_LITERAL(26, 305, 8), // "excerpts"
QT_MOC_LITERAL(27, 314, 43), // "QQmlListProperty<mu::plugins:..."
QT_MOC_LITERAL(28, 358, 12), // "firstMeasure"
QT_MOC_LITERAL(29, 371, 26), // "mu::plugins::api::Measure*"
QT_MOC_LITERAL(30, 398, 14), // "firstMeasureMM"
QT_MOC_LITERAL(31, 413, 12), // "harmonyCount"
QT_MOC_LITERAL(32, 426, 12), // "hasHarmonies"
QT_MOC_LITERAL(33, 439, 9), // "hasLyrics"
QT_MOC_LITERAL(34, 449, 6), // "keysig"
QT_MOC_LITERAL(35, 456, 11), // "lastMeasure"
QT_MOC_LITERAL(36, 468, 13), // "lastMeasureMM"
QT_MOC_LITERAL(37, 482, 11), // "lastSegment"
QT_MOC_LITERAL(38, 494, 10), // "lyricCount"
QT_MOC_LITERAL(39, 505, 9), // "scoreName"
QT_MOC_LITERAL(40, 515, 9), // "nmeasures"
QT_MOC_LITERAL(41, 525, 6), // "npages"
QT_MOC_LITERAL(42, 532, 7), // "nstaves"
QT_MOC_LITERAL(43, 540, 7), // "ntracks"
QT_MOC_LITERAL(44, 548, 5), // "parts"
QT_MOC_LITERAL(45, 554, 40), // "QQmlListProperty<mu::plugins:..."
QT_MOC_LITERAL(46, 595, 8), // "lyricist"
QT_MOC_LITERAL(47, 604, 5), // "title"
QT_MOC_LITERAL(48, 610, 13), // "mscoreVersion"
QT_MOC_LITERAL(49, 624, 14), // "mscoreRevision"
QT_MOC_LITERAL(50, 639, 9), // "selection"
QT_MOC_LITERAL(51, 649, 28), // "mu::plugins::api::Selection*"
QT_MOC_LITERAL(52, 678, 5), // "style"
QT_MOC_LITERAL(53, 684, 25), // "mu::plugins::api::MStyle*"
QT_MOC_LITERAL(54, 710, 16), // "pageNumberOffset"
QT_MOC_LITERAL(55, 727, 6), // "staves"
QT_MOC_LITERAL(56, 734, 41) // "QQmlListProperty<mu::plugins:..."

    },
    "mu::plugins::api::Score\0metaTag\0\0tag\0"
    "setMetaTag\0val\0appendPart\0instrumentId\0"
    "appendPartByMusicXmlId\0instrumentMusicXmlId\0"
    "appendMeasures\0n\0addText\0type\0text\0"
    "newCursor\0mu::plugins::api::Cursor*\0"
    "firstSegment\0mu::plugins::api::Segment*\0"
    "extractLyrics\0startCmd\0endCmd\0rollback\0"
    "createPlayEvents\0composer\0duration\0"
    "excerpts\0QQmlListProperty<mu::plugins::api::Excerpt>\0"
    "firstMeasure\0mu::plugins::api::Measure*\0"
    "firstMeasureMM\0harmonyCount\0hasHarmonies\0"
    "hasLyrics\0keysig\0lastMeasure\0lastMeasureMM\0"
    "lastSegment\0lyricCount\0scoreName\0"
    "nmeasures\0npages\0nstaves\0ntracks\0parts\0"
    "QQmlListProperty<mu::plugins::api::Part>\0"
    "lyricist\0title\0mscoreVersion\0"
    "mscoreRevision\0selection\0"
    "mu::plugins::api::Selection*\0style\0"
    "mu::plugins::api::MStyle*\0pageNumberOffset\0"
    "staves\0QQmlListProperty<mu::plugins::api::Staff>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__Score[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
      27,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x02 /* Public */,
       4,    2,   82,    2, 0x02 /* Public */,
       6,    1,   87,    2, 0x02 /* Public */,
       8,    1,   90,    2, 0x02 /* Public */,
      10,    1,   93,    2, 0x02 /* Public */,
      12,    2,   96,    2, 0x02 /* Public */,
      15,    0,  101,    2, 0x02 /* Public */,
      17,    0,  102,    2, 0x02 /* Public */,
      19,    0,  103,    2, 0x02 /* Public */,
      20,    0,  104,    2, 0x02 /* Public */,
      21,    1,  105,    2, 0x02 /* Public */,
      21,    0,  108,    2, 0x22 /* Public | MethodCloned */,
      23,    0,  109,    2, 0x02 /* Public */,

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
      24, QMetaType::QString, 0x00095001,
      25, QMetaType::Int, 0x00095001,
      26, 0x80000000 | 27, 0x00095009,
      28, 0x80000000 | 29, 0x00095009,
      30, 0x80000000 | 29, 0x00095009,
      31, QMetaType::Int, 0x00095001,
      32, QMetaType::Bool, 0x00095001,
      33, QMetaType::Bool, 0x00095001,
      34, QMetaType::Int, 0x00095001,
      35, 0x80000000 | 29, 0x00095009,
      36, 0x80000000 | 29, 0x00095009,
      37, 0x80000000 | 18, 0x00095009,
      38, QMetaType::Int, 0x00095001,
      39, QMetaType::QString, 0x00095003,
      40, QMetaType::Int, 0x00095001,
      41, QMetaType::Int, 0x00095001,
      42, QMetaType::Int, 0x00095001,
      43, QMetaType::Int, 0x00095001,
      44, 0x80000000 | 45, 0x00095009,
      46, QMetaType::QString, 0x00095001,
      47, QMetaType::QString, 0x00095001,
      48, QMetaType::QString, 0x00095001,
      49, QMetaType::QString, 0x00095001,
      50, 0x80000000 | 51, 0x00095009,
      52, 0x80000000 | 53, 0x00095009,
      54, QMetaType::Int, 0x00095103,
      55, 0x80000000 | 56, 0x00095009,

       0        // eod
};

void mu::plugins::api::Score::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Score *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->metaTag((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setMetaTag((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->appendPart((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->appendPartByMusicXmlId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->appendMeasures((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: { mu::plugins::api::Cursor* _r = _t->newCursor();
            if (_a[0]) *reinterpret_cast< mu::plugins::api::Cursor**>(_a[0]) = std::move(_r); }  break;
        case 7: { mu::plugins::api::Segment* _r = _t->firstSegment();
            if (_a[0]) *reinterpret_cast< mu::plugins::api::Segment**>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->extractLyrics();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->startCmd(); break;
        case 10: _t->endCmd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->endCmd(); break;
        case 12: _t->createPlayEvents(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::plugins::api::MStyle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Score *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->composer(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 2: *reinterpret_cast< QQmlListProperty<mu::plugins::api::Excerpt>*>(_v) = _t->excerpts(); break;
        case 3: *reinterpret_cast< mu::plugins::api::Measure**>(_v) = _t->firstMeasure(); break;
        case 4: *reinterpret_cast< mu::plugins::api::Measure**>(_v) = _t->firstMeasureMM(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->harmonyCount(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasHarmonies(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hasLyrics(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->keysig(); break;
        case 9: *reinterpret_cast< mu::plugins::api::Measure**>(_v) = _t->lastMeasure(); break;
        case 10: *reinterpret_cast< mu::plugins::api::Measure**>(_v) = _t->lastMeasureMM(); break;
        case 11: *reinterpret_cast< mu::plugins::api::Segment**>(_v) = _t->lastSegment(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->lyricCount(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->nmeasures(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->npages(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->nstaves(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->ntracks(); break;
        case 18: *reinterpret_cast< QQmlListProperty<mu::plugins::api::Part>*>(_v) = _t->parts(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->lyricist(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->mscoreVersion(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->mscoreRevision(); break;
        case 23: *reinterpret_cast< mu::plugins::api::Selection**>(_v) = _t->selection(); break;
        case 24: *reinterpret_cast< mu::plugins::api::MStyle**>(_v) = _t->style(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->pageNumberOffset(); break;
        case 26: *reinterpret_cast< QQmlListProperty<mu::plugins::api::Staff>*>(_v) = _t->staves(); break;
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::Score::staticMetaObject = { {
    QMetaObject::SuperData::link<mu::plugins::api::ScoreElement::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__Score.data,
    qt_meta_data_mu__plugins__api__Score,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::Score::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::Score::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__Score.stringdata0))
        return static_cast<void*>(this);
    return mu::plugins::api::ScoreElement::qt_metacast(_clname);
}

int mu::plugins::api::Score::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mu::plugins::api::ScoreElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 27;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
