/****************************************************************************
** Meta object code from reading C++ file 'exportdialogmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/project/view/exportdialogmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exportdialogmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEExportDialogModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEExportDialogModelENDCLASS = QtMocHelpers::stringData(
    "mu::project::ExportDialogModel",
    "selectionChanged",
    "",
    "selectedExportTypeChanged",
    "newExportType",
    "selectedUnitTypeChanged",
    "project::INotationWriter::UnitType",
    "newUnitType",
    "pdfResolutionChanged",
    "resolution",
    "pngResolutionChanged",
    "pngTransparentBackgroundChanged",
    "transparent",
    "svgTransparentBackgroundChanged",
    "availableSampleRatesChanged",
    "sampleRateChanged",
    "sampleRate",
    "availableBitRatesChanged",
    "bitRateChanged",
    "bitRate",
    "midiExpandRepeatsChanged",
    "expandRepeats",
    "midiExportRpnsChanged",
    "exportRpns",
    "musicXmlLayoutTypeChanged",
    "MusicXmlLayoutType",
    "layoutType",
    "meiExportLayoutChanged",
    "exportLayout",
    "shouldDestinationFolderBeOpenedOnExportChanged",
    "shouldDestinationFolderBeOpenedOnExport",
    "load",
    "setSelected",
    "scoreIndex",
    "selected",
    "setAllSelected",
    "selectCurrentNotation",
    "exportTypeList",
    "selectExportTypeById",
    "id",
    "exportScores",
    "availableSampleRates",
    "QList<int>",
    "availableBitRates",
    "musicXmlLayoutTypes",
    "updateExportInfo",
    "selectionLength",
    "selectedExportType",
    "availableUnitTypes",
    "selectedUnitType",
    "pdfResolution",
    "pngResolution",
    "pngTransparentBackground",
    "svgTransparentBackground",
    "midiExpandRepeats",
    "midiExportRpns",
    "musicXmlLayoutType",
    "meiExportLayout",
    "AllLayout",
    "AllBreaks",
    "ManualBreaks",
    "None"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEprojectSCOPEExportDialogModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
      15,  246, // properties
       1,  321, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x06,   17 /* Public */,
       3,    1,  183,    2, 0x06,   18 /* Public */,
       5,    1,  186,    2, 0x06,   20 /* Public */,
       8,    1,  189,    2, 0x06,   22 /* Public */,
      10,    1,  192,    2, 0x06,   24 /* Public */,
      11,    1,  195,    2, 0x06,   26 /* Public */,
      13,    1,  198,    2, 0x06,   28 /* Public */,
      14,    0,  201,    2, 0x06,   30 /* Public */,
      15,    1,  202,    2, 0x06,   31 /* Public */,
      17,    0,  205,    2, 0x06,   33 /* Public */,
      18,    1,  206,    2, 0x06,   34 /* Public */,
      20,    1,  209,    2, 0x06,   36 /* Public */,
      22,    1,  212,    2, 0x06,   38 /* Public */,
      24,    1,  215,    2, 0x06,   40 /* Public */,
      27,    1,  218,    2, 0x06,   42 /* Public */,
      29,    1,  221,    2, 0x06,   44 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      31,    0,  224,    2, 0x02,   46 /* Public */,
      32,    2,  225,    2, 0x02,   47 /* Public */,
      32,    1,  230,    2, 0x22,   50 /* Public | MethodCloned */,
      35,    1,  233,    2, 0x02,   52 /* Public */,
      36,    0,  236,    2, 0x02,   54 /* Public */,
      37,    0,  237,    2, 0x102,   55 /* Public | MethodIsConst  */,
      38,    1,  238,    2, 0x02,   56 /* Public */,
      40,    0,  241,    2, 0x02,   58 /* Public */,
      41,    0,  242,    2, 0x102,   59 /* Public | MethodIsConst  */,
      43,    0,  243,    2, 0x102,   60 /* Public | MethodIsConst  */,
      44,    0,  244,    2, 0x102,   61 /* Public | MethodIsConst  */,
      45,    0,  245,    2, 0x02,   62 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   30,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   33,   34,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::QVariantList,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Bool,
    0x80000000 | 42,
    0x80000000 | 42,
    QMetaType::QVariantList,
    QMetaType::Void,

 // properties: name, type, flags
      46, QMetaType::Int, 0x00015001, uint(0), 0,
      47, QMetaType::QVariantMap, 0x00015001, uint(1), 0,
      48, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      49, QMetaType::Int, 0x00015003, uint(2), 0,
      50, QMetaType::Int, 0x00015103, uint(3), 0,
      51, QMetaType::Int, 0x00015103, uint(4), 0,
      52, QMetaType::Bool, 0x00015103, uint(5), 0,
      53, QMetaType::Bool, 0x00015103, uint(6), 0,
      16, QMetaType::Int, 0x00015103, uint(8), 0,
      19, QMetaType::Int, 0x00015103, uint(10), 0,
      54, QMetaType::Bool, 0x00015103, uint(11), 0,
      55, QMetaType::Bool, 0x00015103, uint(12), 0,
      56, 0x80000000 | 25, 0x0001510b, uint(13), 0,
      57, QMetaType::Int, 0x00015103, uint(14), 0,
      30, QMetaType::Bool, 0x00015103, uint(15), 0,

 // enums: name, alias, flags, count, data
      25,   25, 0x2,    4,  326,

 // enum data: key, value
      58, uint(mu::project::ExportDialogModel::MusicXmlLayoutType::AllLayout),
      59, uint(mu::project::ExportDialogModel::MusicXmlLayoutType::AllBreaks),
      60, uint(mu::project::ExportDialogModel::MusicXmlLayoutType::ManualBreaks),
      61, uint(mu::project::ExportDialogModel::MusicXmlLayoutType::None),

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::project::ExportDialogModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEExportDialogModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEprojectSCOPEExportDialogModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEExportDialogModelENDCLASS_t,
        // property 'selectionLength'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'selectedExportType'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'availableUnitTypes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'selectedUnitType'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pdfResolution'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pngResolution'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pngTransparentBackground'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'svgTransparentBackground'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sampleRate'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'bitRate'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'midiExpandRepeats'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'midiExportRpns'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'musicXmlLayoutType'
        QtPrivate::TypeAndForceComplete<MusicXmlLayoutType, std::true_type>,
        // property 'meiExportLayout'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'shouldDestinationFolderBeOpenedOnExport'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'MusicXmlLayoutType'
        QtPrivate::TypeAndForceComplete<ExportDialogModel::MusicXmlLayoutType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ExportDialogModel, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedExportTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'selectedUnitTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<project::INotationWriter::UnitType, std::false_type>,
        // method 'pdfResolutionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pngResolutionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pngTransparentBackgroundChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'svgTransparentBackgroundChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'availableSampleRatesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sampleRateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'availableBitRatesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bitRateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'midiExpandRepeatsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'midiExportRpnsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'musicXmlLayoutTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MusicXmlLayoutType, std::false_type>,
        // method 'meiExportLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'shouldDestinationFolderBeOpenedOnExportChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setAllSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectCurrentNotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportTypeList'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'selectExportTypeById'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'exportScores'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'availableSampleRates'
        QtPrivate::TypeAndForceComplete<QList<int>, std::false_type>,
        // method 'availableBitRates'
        QtPrivate::TypeAndForceComplete<QList<int>, std::false_type>,
        // method 'musicXmlLayoutTypes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'updateExportInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::project::ExportDialogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExportDialogModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->selectedExportTypeChanged((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 2: _t->selectedUnitTypeChanged((*reinterpret_cast< std::add_pointer_t<project::INotationWriter::UnitType>>(_a[1]))); break;
        case 3: _t->pdfResolutionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->pngResolutionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->pngTransparentBackgroundChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->svgTransparentBackgroundChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->availableSampleRatesChanged(); break;
        case 8: _t->sampleRateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->availableBitRatesChanged(); break;
        case 10: _t->bitRateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->midiExpandRepeatsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->midiExportRpnsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->musicXmlLayoutTypeChanged((*reinterpret_cast< std::add_pointer_t<MusicXmlLayoutType>>(_a[1]))); break;
        case 14: _t->meiExportLayoutChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->shouldDestinationFolderBeOpenedOnExportChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->load(); break;
        case 17: _t->setSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 18: _t->setSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->setAllSelected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->selectCurrentNotation(); break;
        case 21: { QVariantList _r = _t->exportTypeList();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->selectExportTypeById((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: { bool _r = _t->exportScores();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { QList<int> _r = _t->availableSampleRates();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 25: { QList<int> _r = _t->availableBitRates();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 26: { QVariantList _r = _t->musicXmlLayoutTypes();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->updateExportInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExportDialogModel::*)();
            if (_t _q_method = &ExportDialogModel::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(QVariantMap );
            if (_t _q_method = &ExportDialogModel::selectedExportTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(project::INotationWriter::UnitType );
            if (_t _q_method = &ExportDialogModel::selectedUnitTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(int );
            if (_t _q_method = &ExportDialogModel::pdfResolutionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(int );
            if (_t _q_method = &ExportDialogModel::pngResolutionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(bool );
            if (_t _q_method = &ExportDialogModel::pngTransparentBackgroundChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(bool );
            if (_t _q_method = &ExportDialogModel::svgTransparentBackgroundChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)();
            if (_t _q_method = &ExportDialogModel::availableSampleRatesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(int );
            if (_t _q_method = &ExportDialogModel::sampleRateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)();
            if (_t _q_method = &ExportDialogModel::availableBitRatesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(int );
            if (_t _q_method = &ExportDialogModel::bitRateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(bool );
            if (_t _q_method = &ExportDialogModel::midiExpandRepeatsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(bool );
            if (_t _q_method = &ExportDialogModel::midiExportRpnsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(MusicXmlLayoutType );
            if (_t _q_method = &ExportDialogModel::musicXmlLayoutTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(bool );
            if (_t _q_method = &ExportDialogModel::meiExportLayoutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ExportDialogModel::*)(bool );
            if (_t _q_method = &ExportDialogModel::shouldDestinationFolderBeOpenedOnExportChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ExportDialogModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->selectionLength(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = _t->selectedExportType(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->availableUnitTypes(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->selectedUnitType(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->pdfResolution(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->pngResolution(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->pngTransparentBackground(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->svgTransparentBackground(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->sampleRate(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->bitRate(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->midiExpandRepeats(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->midiExportRpns(); break;
        case 12: *reinterpret_cast< MusicXmlLayoutType*>(_v) = _t->musicXmlLayoutType(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->meiExportLayout(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->shouldDestinationFolderBeOpenedOnExport(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ExportDialogModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setUnitType(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setPdfResolution(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPngResolution(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setPngTransparentBackground(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setSvgTransparentBackground(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setSampleRate(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setBitRate(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setMidiExpandRepeats(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setMidiExportRpns(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setMusicXmlLayoutType(*reinterpret_cast< MusicXmlLayoutType*>(_v)); break;
        case 13: _t->setMeiExportLayout(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setShouldDestinationFolderBeOpenedOnExport(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *mu::project::ExportDialogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::project::ExportDialogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEprojectSCOPEExportDialogModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::async::Asyncable"))
        return static_cast< muse::async::Asyncable*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int mu::project::ExportDialogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void mu::project::ExportDialogModel::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::project::ExportDialogModel::selectedExportTypeChanged(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mu::project::ExportDialogModel::selectedUnitTypeChanged(project::INotationWriter::UnitType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mu::project::ExportDialogModel::pdfResolutionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mu::project::ExportDialogModel::pngResolutionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mu::project::ExportDialogModel::pngTransparentBackgroundChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mu::project::ExportDialogModel::svgTransparentBackgroundChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void mu::project::ExportDialogModel::availableSampleRatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void mu::project::ExportDialogModel::sampleRateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void mu::project::ExportDialogModel::availableBitRatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void mu::project::ExportDialogModel::bitRateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void mu::project::ExportDialogModel::midiExpandRepeatsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void mu::project::ExportDialogModel::midiExportRpnsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void mu::project::ExportDialogModel::musicXmlLayoutTypeChanged(MusicXmlLayoutType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void mu::project::ExportDialogModel::meiExportLayoutChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void mu::project::ExportDialogModel::shouldDestinationFolderBeOpenedOnExportChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
