/****************************************************************************
** Meta object code from reading C++ file 'palettespanelcontextmenumodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/palette/view/palettespanelcontextmenumodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettespanelcontextmenumodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPalettesPanelContextMenuModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPalettesPanelContextMenuModelENDCLASS = QtMocHelpers::stringData(
    "mu::palette::PalettesPanelContextMenuModel",
    "expandCollapseAllRequested",
    "",
    "expand",
    "load"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuSCOPEpaletteSCOPEPalettesPanelContextMenuModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   29,    2, 0x02,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject mu::palette::PalettesPanelContextMenuModel::staticMetaObject = { {
    QMetaObject::SuperData::link<muse::uicomponents::AbstractMenuModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPalettesPanelContextMenuModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuSCOPEpaletteSCOPEPalettesPanelContextMenuModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPalettesPanelContextMenuModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PalettesPanelContextMenuModel, std::true_type>,
        // method 'expandCollapseAllRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mu::palette::PalettesPanelContextMenuModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PalettesPanelContextMenuModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->expandCollapseAllRequested((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PalettesPanelContextMenuModel::*)(bool );
            if (_t _q_method = &PalettesPanelContextMenuModel::expandCollapseAllRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *mu::palette::PalettesPanelContextMenuModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::palette::PalettesPanelContextMenuModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuSCOPEpaletteSCOPEPalettesPanelContextMenuModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "muse::actions::Actionable"))
        return static_cast< muse::actions::Actionable*>(this);
    return muse::uicomponents::AbstractMenuModel::qt_metacast(_clname);
}

int mu::palette::PalettesPanelContextMenuModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = muse::uicomponents::AbstractMenuModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mu::palette::PalettesPanelContextMenuModel::expandCollapseAllRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
