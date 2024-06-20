/****************************************************************************
** Meta object code from reading C++ file 'articulationsprofileeditormodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/mpe/view/articulationsprofileeditormodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'articulationsprofileeditormodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__mpe__ArticulationsProfileEditorModel_t {
    QByteArrayData data[21];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__mpe__ArticulationsProfileEditorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__mpe__ArticulationsProfileEditorModel_t qt_meta_stringdata_mu__mpe__ArticulationsProfileEditorModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "mu::mpe::ArticulationsProfile..."
QT_MOC_LITERAL(1, 41, 18), // "currentPathChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 19), // "selectedItemChanged"
QT_MOC_LITERAL(4, 81, 27), // "isArrangementVisibleChanged"
QT_MOC_LITERAL(5, 109, 21), // "isPitchVisibleChanged"
QT_MOC_LITERAL(6, 131, 26), // "isExpressionVisibleChanged"
QT_MOC_LITERAL(7, 158, 20), // "requestToOpenProfile"
QT_MOC_LITERAL(8, 179, 22), // "requestToCreateProfile"
QT_MOC_LITERAL(9, 202, 20), // "requestToSaveProfile"
QT_MOC_LITERAL(10, 223, 23), // "copyPatternDataFromItem"
QT_MOC_LITERAL(11, 247, 24), // "ArticulationPatternItem*"
QT_MOC_LITERAL(12, 272, 4), // "item"
QT_MOC_LITERAL(13, 277, 11), // "currentPath"
QT_MOC_LITERAL(14, 289, 12), // "selectedItem"
QT_MOC_LITERAL(15, 302, 20), // "isArrangementVisible"
QT_MOC_LITERAL(16, 323, 14), // "isPitchVisible"
QT_MOC_LITERAL(17, 338, 19), // "isExpressionVisible"
QT_MOC_LITERAL(18, 358, 15), // "singleNoteItems"
QT_MOC_LITERAL(19, 374, 31), // "QList<ArticulationPatternItem*>"
QT_MOC_LITERAL(20, 406, 14) // "multiNoteItems"

    },
    "mu::mpe::ArticulationsProfileEditorModel\0"
    "currentPathChanged\0\0selectedItemChanged\0"
    "isArrangementVisibleChanged\0"
    "isPitchVisibleChanged\0isExpressionVisibleChanged\0"
    "requestToOpenProfile\0requestToCreateProfile\0"
    "requestToSaveProfile\0copyPatternDataFromItem\0"
    "ArticulationPatternItem*\0item\0currentPath\0"
    "selectedItem\0isArrangementVisible\0"
    "isPitchVisible\0isExpressionVisible\0"
    "singleNoteItems\0QList<ArticulationPatternItem*>\0"
    "multiNoteItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__mpe__ArticulationsProfileEditorModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   64,    2, 0x02 /* Public */,
       8,    0,   65,    2, 0x02 /* Public */,
       9,    0,   66,    2, 0x02 /* Public */,
      10,    1,   67,    2, 0x02 /* Public */,

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
      13, QMetaType::QString, 0x00495103,
      14, 0x80000000 | 11, 0x0049510b,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,
      18, 0x80000000 | 19, 0x00095409,
      20, 0x80000000 | 19, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       0,
       0,

       0        // eod
};

void mu::mpe::ArticulationsProfileEditorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        case 8: _t->copyPatternDataFromItem((*reinterpret_cast< ArticulationPatternItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ArticulationPatternItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationsProfileEditorModel::currentPathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationsProfileEditorModel::selectedItemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationsProfileEditorModel::isArrangementVisibleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationsProfileEditorModel::isPitchVisibleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ArticulationsProfileEditorModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArticulationsProfileEditorModel::isExpressionVisibleChanged)) {
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
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
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
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::mpe::ArticulationsProfileEditorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__mpe__ArticulationsProfileEditorModel.data,
    qt_meta_data_mu__mpe__ArticulationsProfileEditorModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::mpe::ArticulationsProfileEditorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::mpe::ArticulationsProfileEditorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__mpe__ArticulationsProfileEditorModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::mpe::ArticulationsProfileEditorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::mpe::ArticulationsProfileEditorModel::currentPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mu::mpe::ArticulationsProfileEditorModel::selectedItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mu::mpe::ArticulationsProfileEditorModel::isArrangementVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mu::mpe::ArticulationsProfileEditorModel::isPitchVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mu::mpe::ArticulationsProfileEditorModel::isExpressionVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
