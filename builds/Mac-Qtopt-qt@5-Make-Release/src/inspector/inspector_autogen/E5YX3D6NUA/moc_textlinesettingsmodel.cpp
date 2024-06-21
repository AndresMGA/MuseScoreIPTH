/****************************************************************************
** Meta object code from reading C++ file 'textlinesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/lines/textlinesettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textlinesettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__TextLineSettingsModel_t {
    QByteArrayData data[23];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__TextLineSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__TextLineSettingsModel_t qt_meta_stringdata_mu__inspector__TextLineSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "mu::inspector::TextLineSettin..."
QT_MOC_LITERAL(1, 37, 22), // "possibleStartHookTypes"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 20), // "possibleEndHookTypes"
QT_MOC_LITERAL(4, 82, 13), // "isLineVisible"
QT_MOC_LITERAL(5, 96, 13), // "PropertyItem*"
QT_MOC_LITERAL(6, 110, 13), // "allowDiagonal"
QT_MOC_LITERAL(7, 124, 9), // "lineStyle"
QT_MOC_LITERAL(8, 134, 9), // "thickness"
QT_MOC_LITERAL(9, 144, 14), // "dashLineLength"
QT_MOC_LITERAL(10, 159, 13), // "dashGapLength"
QT_MOC_LITERAL(11, 173, 13), // "startHookType"
QT_MOC_LITERAL(12, 187, 11), // "endHookType"
QT_MOC_LITERAL(13, 199, 15), // "startHookHeight"
QT_MOC_LITERAL(14, 215, 13), // "endHookHeight"
QT_MOC_LITERAL(15, 229, 21), // "gapBetweenTextAndLine"
QT_MOC_LITERAL(16, 251, 9), // "placement"
QT_MOC_LITERAL(17, 261, 13), // "beginningText"
QT_MOC_LITERAL(18, 275, 19), // "beginningTextOffset"
QT_MOC_LITERAL(19, 295, 14), // "continuousText"
QT_MOC_LITERAL(20, 310, 20), // "continuousTextOffset"
QT_MOC_LITERAL(21, 331, 7), // "endText"
QT_MOC_LITERAL(22, 339, 13) // "endTextOffset"

    },
    "mu::inspector::TextLineSettingsModel\0"
    "possibleStartHookTypes\0\0possibleEndHookTypes\0"
    "isLineVisible\0PropertyItem*\0allowDiagonal\0"
    "lineStyle\0thickness\0dashLineLength\0"
    "dashGapLength\0startHookType\0endHookType\0"
    "startHookHeight\0endHookHeight\0"
    "gapBetweenTextAndLine\0placement\0"
    "beginningText\0beginningTextOffset\0"
    "continuousText\0continuousTextOffset\0"
    "endText\0endTextOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__TextLineSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      18,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    0,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariantList,
    QMetaType::QVariantList,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095409,
       6, 0x80000000 | 5, 0x00095409,
       7, 0x80000000 | 5, 0x00095409,
       8, 0x80000000 | 5, 0x00095409,
       9, 0x80000000 | 5, 0x00095409,
      10, 0x80000000 | 5, 0x00095409,
      11, 0x80000000 | 5, 0x00095409,
      12, 0x80000000 | 5, 0x00095409,
      13, 0x80000000 | 5, 0x00095409,
      14, 0x80000000 | 5, 0x00095409,
      15, 0x80000000 | 5, 0x00095409,
      16, 0x80000000 | 5, 0x00095409,
      17, 0x80000000 | 5, 0x00095409,
      18, 0x80000000 | 5, 0x00095409,
      19, 0x80000000 | 5, 0x00095409,
      20, 0x80000000 | 5, 0x00095409,
      21, 0x80000000 | 5, 0x00095409,
      22, 0x80000000 | 5, 0x00095409,

       0        // eod
};

void mu::inspector::TextLineSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextLineSettingsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QVariantList _r = _t->possibleStartHookTypes();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantList _r = _t->possibleEndHookTypes();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PropertyItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TextLineSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->isLineVisible(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->allowDiagonal(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->lineStyle(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->thickness(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->dashLineLength(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->dashGapLength(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->startHookType(); break;
        case 7: *reinterpret_cast< PropertyItem**>(_v) = _t->endHookType(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->startHookHeight(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->endHookHeight(); break;
        case 10: *reinterpret_cast< PropertyItem**>(_v) = _t->gapBetweenTextAndLine(); break;
        case 11: *reinterpret_cast< PropertyItem**>(_v) = _t->placement(); break;
        case 12: *reinterpret_cast< PropertyItem**>(_v) = _t->beginningText(); break;
        case 13: *reinterpret_cast< PropertyItem**>(_v) = _t->beginningTextOffset(); break;
        case 14: *reinterpret_cast< PropertyItem**>(_v) = _t->continuousText(); break;
        case 15: *reinterpret_cast< PropertyItem**>(_v) = _t->continuousTextOffset(); break;
        case 16: *reinterpret_cast< PropertyItem**>(_v) = _t->endText(); break;
        case 17: *reinterpret_cast< PropertyItem**>(_v) = _t->endTextOffset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::TextLineSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__TextLineSettingsModel.data,
    qt_meta_data_mu__inspector__TextLineSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::TextLineSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::TextLineSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__TextLineSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::TextLineSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
