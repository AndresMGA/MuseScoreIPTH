/****************************************************************************
** Meta object code from reading C++ file 'interactivetestsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/ui/dev/interactivetestsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactivetestsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEInteractiveTestsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEInteractiveTestsModelENDCLASS = QtMocHelpers::stringData(
    "muse::ui::InteractiveTestsModel",
    "currentUriChanged",
    "",
    "currentUri",
    "openSampleDialog",
    "openSampleDialogAsync",
    "closeSampleDialog",
    "openWidgetDialog",
    "openWidgetDialogAsync",
    "closeWidgetDialog",
    "question",
    "customQuestion",
    "information",
    "warning",
    "critical",
    "criticalWithDetailedText",
    "require"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEuiSCOPEInteractiveTestsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       1,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  101,    2, 0x02,    4 /* Public */,
       5,    0,  102,    2, 0x02,    5 /* Public */,
       6,    0,  103,    2, 0x02,    6 /* Public */,
       7,    0,  104,    2, 0x02,    7 /* Public */,
       8,    0,  105,    2, 0x02,    8 /* Public */,
       9,    0,  106,    2, 0x02,    9 /* Public */,
      10,    0,  107,    2, 0x02,   10 /* Public */,
      11,    0,  108,    2, 0x02,   11 /* Public */,
      12,    0,  109,    2, 0x02,   12 /* Public */,
      13,    0,  110,    2, 0x02,   13 /* Public */,
      14,    0,  111,    2, 0x02,   14 /* Public */,
      15,    0,  112,    2, 0x02,   15 /* Public */,
      16,    0,  113,    2, 0x02,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::ui::InteractiveTestsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEInteractiveTestsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEuiSCOPEInteractiveTestsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEInteractiveTestsModelENDCLASS_t,
        // property 'currentUri'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InteractiveTestsModel, std::true_type>,
        // method 'currentUriChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'openSampleDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openSampleDialogAsync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeSampleDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openWidgetDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openWidgetDialogAsync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeWidgetDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'question'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customQuestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'information'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'warning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'critical'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'criticalWithDetailedText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'require'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void muse::ui::InteractiveTestsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveTestsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentUriChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->openSampleDialog(); break;
        case 2: _t->openSampleDialogAsync(); break;
        case 3: _t->closeSampleDialog(); break;
        case 4: _t->openWidgetDialog(); break;
        case 5: _t->openWidgetDialogAsync(); break;
        case 6: _t->closeWidgetDialog(); break;
        case 7: _t->question(); break;
        case 8: _t->customQuestion(); break;
        case 9: _t->information(); break;
        case 10: _t->warning(); break;
        case 11: _t->critical(); break;
        case 12: _t->criticalWithDetailedText(); break;
        case 13: _t->require(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InteractiveTestsModel::*)(QString );
            if (_t _q_method = &InteractiveTestsModel::currentUriChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InteractiveTestsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentUri(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::ui::InteractiveTestsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::ui::InteractiveTestsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEuiSCOPEInteractiveTestsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Injectable"))
        return static_cast< Injectable*>(this);
    if (!strcmp(_clname, "async::Asyncable"))
        return static_cast< async::Asyncable*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::ui::InteractiveTestsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void muse::ui::InteractiveTestsModel::currentUriChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
