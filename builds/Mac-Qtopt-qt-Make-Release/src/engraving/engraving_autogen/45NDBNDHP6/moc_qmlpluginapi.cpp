/****************************************************************************
** Meta object code from reading C++ file 'qmlpluginapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/engraving/api/v1/qmlpluginapi.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlpluginapi.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPluginAPIENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPluginAPIENDCLASS = QtMocHelpers::stringData(
    "mu::engraving::apiv1::PluginAPI",
    "run",
    "",
    "closeRequested",
    "scoreStateChanged",
    "state",
    "newScore",
    "apiv1::Score*",
    "name",
    "part",
    "measures",
    "newElement",
    "apiv1::EngravingItem*",
    "removeElement",
    "wrapped",
    "cmd",
    "newQProcess",
    "apiv1::MsProcess*",
    "writeScore",
    "ext",
    "readScore",
    "noninteractive",
    "closeScore",
    "log",
    "logn",
    "log2",
    "openLog",
    "closeLog",
    "fraction",
    "apiv1::FractionWrapper*",
    "numerator",
    "denominator",
    "quit",
    "menuPath",
    "title",
    "version",
    "description",
    "pluginType",
    "dockArea",
    "requiresScore",
    "thumbnailName",
    "categoryCode",
    "division",
    "mscoreVersion",
    "mscoreMajorVersion",
    "mscoreMinorVersion",
    "mscoreUpdateVersion",
    "mscoreDPI",
    "curScore",
    "mu::engraving::apiv1::Score*",
    "scores",
    "QQmlListProperty<mu::engraving::apiv1::Score>",
    "Element",
    "mu::engraving::apiv1::Enum*",
    "Accidental",
    "Beam",
    "Placement",
    "Glissando",
    "LayoutBreak",
    "Lyrics",
    "Direction",
    "DirectionH",
    "OrnamentStyle",
    "GlissandoStyle",
    "Tid",
    "Align",
    "NoteType",
    "PlayEventType",
    "NoteHeadType",
    "NoteHeadScheme",
    "NoteHeadGroup",
    "NoteValueType",
    "Segment",
    "Spanner",
    "SymId",
    "HarmonyType"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPluginAPIENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      40,  189, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,   41 /* Public */,
       3,    0,  129,    2, 0x06,   42 /* Public */,
       4,    1,  130,    2, 0x06,   43 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    3,  133,    2, 0x02,   45 /* Public */,
      11,    1,  140,    2, 0x02,   49 /* Public */,
      13,    1,  143,    2, 0x02,   51 /* Public */,
      15,    1,  146,    2, 0x02,   53 /* Public */,
      16,    0,  149,    2, 0x02,   55 /* Public */,
      18,    3,  150,    2, 0x02,   56 /* Public */,
      20,    2,  157,    2, 0x02,   60 /* Public */,
      20,    1,  162,    2, 0x22,   63 /* Public | MethodCloned */,
      22,    1,  165,    2, 0x02,   65 /* Public */,
      23,    1,  168,    2, 0x02,   67 /* Public */,
      24,    1,  171,    2, 0x02,   69 /* Public */,
      25,    2,  174,    2, 0x02,   71 /* Public */,
      26,    1,  179,    2, 0x02,   74 /* Public */,
      27,    0,  182,    2, 0x02,   76 /* Public */,
      28,    2,  183,    2, 0x102,   77 /* Public | MethodIsConst  */,
      32,    0,  188,    2, 0x02,   80 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    5,

 // methods: parameters
    0x80000000 | 7, QMetaType::QString, QMetaType::QString, QMetaType::Int,    8,    9,   10,
    0x80000000 | 12, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 12,   14,
    QMetaType::Void, QMetaType::QString,    2,
    0x80000000 | 17,
    QMetaType::Bool, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,    2,    8,   19,
    0x80000000 | 7, QMetaType::QString, QMetaType::Bool,    8,   21,
    0x80000000 | 7, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    0x80000000 | 29, QMetaType::Int, QMetaType::Int,   30,   31,
    QMetaType::Void,

 // properties: name, type, flags
      33, QMetaType::QString, 0x00015103, uint(-1), 0,
      34, QMetaType::QString, 0x00015103, uint(-1), 0,
      35, QMetaType::QString, 0x00015103, uint(-1), 0,
      36, QMetaType::QString, 0x00015103, uint(-1), 0,
      37, QMetaType::QString, 0x00015103, uint(-1), 0,
      38, QMetaType::QString, 0x00015103, uint(-1), 0,
      39, QMetaType::Bool, 0x00015103, uint(-1), 0,
      40, QMetaType::QString, 0x00015103, uint(-1), 0,
      41, QMetaType::QString, 0x00015103, uint(-1), 0,
      42, QMetaType::Int, 0x00015401, uint(-1), 0,
      43, QMetaType::Int, 0x00015401, uint(-1), 0,
      44, QMetaType::Int, 0x00015401, uint(-1), 0,
      45, QMetaType::Int, 0x00015401, uint(-1), 0,
      46, QMetaType::Int, 0x00015401, uint(-1), 0,
      47, QMetaType::QReal, 0x00015401, uint(-1), 0,
      48, 0x80000000 | 49, 0x00015409, uint(-1), 0,
      50, 0x80000000 | 51, 0x00015009, uint(-1), 0,
      52, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      54, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      55, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      56, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      57, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      58, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      59, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      60, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      61, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      62, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      63, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      64, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      65, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      66, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      67, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      68, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      69, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      70, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      71, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      72, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      73, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      74, 0x80000000 | 53, 0x00015409, uint(-1), 0,
      75, 0x80000000 | 53, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::engraving::apiv1::PluginAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPluginAPIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPluginAPIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPluginAPIENDCLASS_t,
        // property 'menuPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'version'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'pluginType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'dockArea'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'requiresScore'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'thumbnailName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'categoryCode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'division'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mscoreVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mscoreMajorVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mscoreMinorVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mscoreUpdateVersion'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'mscoreDPI'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'curScore'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Score*, std::true_type>,
        // property 'scores'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<mu::engraving::apiv1::Score>, std::true_type>,
        // property 'Element'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Accidental'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Beam'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Placement'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Glissando'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'LayoutBreak'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Lyrics'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Direction'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'DirectionH'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'OrnamentStyle'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'GlissandoStyle'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Tid'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Align'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'NoteType'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'PlayEventType'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'NoteHeadType'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'NoteHeadScheme'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'NoteHeadGroup'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'NoteValueType'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Segment'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'Spanner'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'SymId'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // property 'HarmonyType'
        QtPrivate::TypeAndForceComplete<mu::engraving::apiv1::Enum*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PluginAPI, std::true_type>,
        // method 'run'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scoreStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QVariant> &, std::false_type>,
        // method 'newScore'
        QtPrivate::TypeAndForceComplete<apiv1::Score *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'newElement'
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeElement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::EngravingItem *, std::false_type>,
        // method 'cmd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'newQProcess'
        QtPrivate::TypeAndForceComplete<apiv1::MsProcess *, std::false_type>,
        // method 'writeScore'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::Score *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'readScore'
        QtPrivate::TypeAndForceComplete<apiv1::Score *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'readScore'
        QtPrivate::TypeAndForceComplete<apiv1::Score *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'closeScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<apiv1::Score *, std::false_type>,
        // method 'log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'logn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'log2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'closeLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fraction'
        QtPrivate::TypeAndForceComplete<apiv1::FractionWrapper *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::engraving::apiv1::PluginAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PluginAPI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->closeRequested(); break;
        case 2: _t->scoreStateChanged((*reinterpret_cast< std::add_pointer_t<QMap<QString,QVariant>>>(_a[1]))); break;
        case 3: { apiv1::Score* _r = _t->newScore((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< apiv1::Score**>(_a[0]) = std::move(_r); }  break;
        case 4: { apiv1::EngravingItem* _r = _t->newElement((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< apiv1::EngravingItem**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->removeElement((*reinterpret_cast< std::add_pointer_t<apiv1::EngravingItem*>>(_a[1]))); break;
        case 6: _t->cmd((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: { apiv1::MsProcess* _r = _t->newQProcess();
            if (_a[0]) *reinterpret_cast< apiv1::MsProcess**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->writeScore((*reinterpret_cast< std::add_pointer_t<apiv1::Score*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { apiv1::Score* _r = _t->readScore((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< apiv1::Score**>(_a[0]) = std::move(_r); }  break;
        case 10: { apiv1::Score* _r = _t->readScore((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< apiv1::Score**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->closeScore((*reinterpret_cast< std::add_pointer_t<apiv1::Score*>>(_a[1]))); break;
        case 12: _t->log((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->logn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->log2((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->openLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->closeLog(); break;
        case 17: { apiv1::FractionWrapper* _r = _t->fraction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< apiv1::FractionWrapper**>(_a[0]) = std::move(_r); }  break;
        case 18: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PluginAPI::*)();
            if (_t _q_method = &PluginAPI::run; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PluginAPI::*)();
            if (_t _q_method = &PluginAPI::closeRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PluginAPI::*)(const QMap<QString,QVariant> & );
            if (_t _q_method = &PluginAPI::scoreStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        case 33:
        case 32:
        case 31:
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
        case 18:
        case 17:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mu::engraving::apiv1::Enum* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PluginAPI *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->menuPath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->pluginType(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->dockArea(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->requiresScore(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->thumbnailName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->categoryCode(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->division(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->mscoreVersion(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->mscoreMajorVersion(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->mscoreMinorVersion(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->mscoreUpdateVersion(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->mscoreDPI(); break;
        case 15: *reinterpret_cast< mu::engraving::apiv1::Score**>(_v) = _t->curScore(); break;
        case 16: *reinterpret_cast< QQmlListProperty<mu::engraving::apiv1::Score>*>(_v) = _t->scores(); break;
        case 17: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_elementTypeEnum(); break;
        case 18: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_accidentalTypeEnum(); break;
        case 19: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_beamModeEnum(); break;
        case 20: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_placementEnum(); break;
        case 21: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_glissandoTypeEnum(); break;
        case 22: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_layoutBreakTypeEnum(); break;
        case 23: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_lyricsSyllabicEnum(); break;
        case 24: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_directionEnum(); break;
        case 25: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_directionHEnum(); break;
        case 26: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_ornamentStyleEnum(); break;
        case 27: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_glissandoStyleEnum(); break;
        case 28: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_tidEnum(); break;
        case 29: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_alignEnum(); break;
        case 30: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_noteTypeEnum(); break;
        case 31: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_playEventTypeEnum(); break;
        case 32: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_noteHeadTypeEnum(); break;
        case 33: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_noteHeadSchemeEnum(); break;
        case 34: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_noteHeadGroupEnum(); break;
        case 35: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_noteValueTypeEnum(); break;
        case 36: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_segmentTypeEnum(); break;
        case 37: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_spannerAnchorEnum(); break;
        case 38: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_symIdEnum(); break;
        case 39: *reinterpret_cast< mu::engraving::apiv1::Enum**>(_v) = _t->get_harmonyTypeEnum(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PluginAPI *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMenuPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVersion(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPluginType(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setDockArea(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setRequiresScore(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setThumbnailName(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setCategoryCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::engraving::apiv1::PluginAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::engraving::apiv1::PluginAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEengravingSCOPEapiv1SCOPEPluginAPIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::extensions::apiv1::IPluginApiV1"))
        return static_cast< muse::extensions::apiv1::IPluginApiV1*>(this);
    if (!strcmp(_clname, "muse::Injectable"))
        return static_cast< muse::Injectable*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int mu::engraving::apiv1::PluginAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void mu::engraving::apiv1::PluginAPI::run()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::engraving::apiv1::PluginAPI::closeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::engraving::apiv1::PluginAPI::scoreStateChanged(const QMap<QString,QVariant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
