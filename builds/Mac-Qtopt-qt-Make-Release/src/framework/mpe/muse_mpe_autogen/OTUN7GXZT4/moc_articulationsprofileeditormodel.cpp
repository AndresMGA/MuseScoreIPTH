/****************************************************************************
** Meta object code from reading C++ file 'articulationsprofileeditormodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/framework/mpe/view/articulationsprofileeditormodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articulationsprofileeditormodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationsProfileEditorModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationsProfileEditorModelENDCLASS = QtMocHelpers::stringData(
    "muse::mpe::ArticulationsProfileEditorModel",
    "currentPathChanged",
    "",
    "selectedItemChanged",
    "isArrangementVisibleChanged",
    "isPitchVisibleChanged",
    "isExpressionVisibleChanged",
    "requestToOpenProfile",
    "requestToCreateProfile",
    "requestToSaveProfile",
    "copyPatternDataFromItem",
    "ArticulationPatternItem*",
    "item",
    "currentPath",
    "selectedItem",
    "isArrangementVisible",
    "isPitchVisible",
    "isExpressionVisible",
    "singleNoteItems",
    "QList<ArticulationPatternItem*>",
    "multiNoteItems"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmuseSCOPEmpeSCOPEArticulationsProfileEditorModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   79, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    8 /* Public */,
       3,    0,   69,    2, 0x06,    9 /* Public */,
       4,    0,   70,    2, 0x06,   10 /* Public */,
       5,    0,   71,    2, 0x06,   11 /* Public */,
       6,    0,   72,    2, 0x06,   12 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   73,    2, 0x02,   13 /* Public */,
       8,    0,   74,    2, 0x02,   14 /* Public */,
       9,    0,   75,    2, 0x02,   15 /* Public */,
      10,    1,   76,    2, 0x02,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00015103, uint(0), 0,
      14, 0x80000000 | 11, 0x0001510b, uint(1), 0,
      15, QMetaType::Bool, 0x00015103, uint(2), 0,
      16, QMetaType::Bool, 0x00015103, uint(3), 0,
      17, QMetaType::Bool, 0x00015103, uint(4), 0,
      18, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      20, 0x80000000 | 19, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject muse::mpe::ArticulationsProfileEditorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationsProfileEditorModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmuseSCOPEmpeSCOPEArticulationsProfileEditorModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationsProfileEditorModelENDCLASS_t,
        // property 'currentPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'selectedItem'
        QtPrivate::TypeAndForceComplete<ArticulationPatternItem*, std::true_type>,
        // property 'isArrangementVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isPitchVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isExpressionVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'singleNoteItems'
        QtPrivate::TypeAndForceComplete<QList<ArticulationPatternItem*>, std::true_type>,
        // property 'multiNoteItems'
        QtPrivate::TypeAndForceComplete<QList<ArticulationPatternItem*>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ArticulationsProfileEditorModel, std::true_type>,
        // method 'currentPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isArrangementVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isPitchVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isExpressionVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestToOpenProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestToCreateProfile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'requestToSaveProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyPatternDataFromItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ArticulationPatternItem *, std::false_type>
    >,
    nullptr
} };

void muse::mpe::ArticulationsProfileEditorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArticulationsProfileEditorModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentPathChanged(); break;
        case 1: _t->selectedItemChanged(); break;
        case 2: _t->isArrangementVisibleChanged(); break;
        case 3: _t->isPitchVisibleChanged(); break;
        case 4: _t->isExpressionVisibleChanged(); break;
        case 5: _t->requestToOpenProfile(); break;
        case 6: { bool _r = _t->requestToCreateProfile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->requestToSaveProfile(); break;
        case 8: _t->copyPatternDataFromItem((*reinterpret_cast< std::add_pointer_t<ArticulationPatternItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ArticulationPatternItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (_t _q_method = &ArticulationsProfileEditorModel::currentPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (_t _q_method = &ArticulationsProfileEditorModel::selectedItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (_t _q_method = &ArticulationsProfileEditorModel::isArrangementVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (_t _q_method = &ArticulationsProfileEditorModel::isPitchVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (_t _q_method = &ArticulationsProfileEditorModel::isExpressionVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ArticulationPatternItem* >(); break;
        case 6:
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ArticulationPatternItem*> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ArticulationsProfileEditorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentPath(); break;
        case 1: *reinterpret_cast< ArticulationPatternItem**>(_v) = _t->selectedItem(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isArrangementVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isPitchVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isExpressionVisible(); break;
        case 5: *reinterpret_cast< QList<ArticulationPatternItem*>*>(_v) = _t->singleNoteItems(); break;
        case 6: *reinterpret_cast< QList<ArticulationPatternItem*>*>(_v) = _t->multiNoteItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ArticulationsProfileEditorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSelectedItem(*reinterpret_cast< ArticulationPatternItem**>(_v)); break;
        case 2: _t->setIsArrangementVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsPitchVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setIsExpressionVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *muse::mpe::ArticulationsProfileEditorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *muse::mpe::ArticulationsProfileEditorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmuseSCOPEmpeSCOPEArticulationsProfileEditorModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int muse::mpe::ArticulationsProfileEditorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void muse::mpe::ArticulationsProfileEditorModel::currentPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void muse::mpe::ArticulationsProfileEditorModel::selectedItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void muse::mpe::ArticulationsProfileEditorModel::isArrangementVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void muse::mpe::ArticulationsProfileEditorModel::isPitchVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void muse::mpe::ArticulationsProfileEditorModel::isExpressionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
