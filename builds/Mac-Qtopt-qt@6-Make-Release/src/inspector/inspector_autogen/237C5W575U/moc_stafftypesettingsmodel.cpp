/****************************************************************************
** Meta object code from reading C++ file 'stafftypesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/stafftype/stafftypesettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stafftypesettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__StaffTypeSettingsModel_t {
    QByteArrayData data[17];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__StaffTypeSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__StaffTypeSettingsModel_t qt_meta_stringdata_mu__inspector__StaffTypeSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::inspector::StaffTypeSetti..."
QT_MOC_LITERAL(1, 38, 7), // "isSmall"
QT_MOC_LITERAL(2, 46, 13), // "PropertyItem*"
QT_MOC_LITERAL(3, 60, 14), // "verticalOffset"
QT_MOC_LITERAL(4, 75, 5), // "scale"
QT_MOC_LITERAL(5, 81, 9), // "lineCount"
QT_MOC_LITERAL(6, 91, 12), // "lineDistance"
QT_MOC_LITERAL(7, 104, 10), // "stepOffset"
QT_MOC_LITERAL(8, 115, 11), // "isInvisible"
QT_MOC_LITERAL(9, 127, 5), // "color"
QT_MOC_LITERAL(10, 133, 18), // "noteheadSchemeType"
QT_MOC_LITERAL(11, 152, 10), // "isStemless"
QT_MOC_LITERAL(12, 163, 18), // "shouldShowBarlines"
QT_MOC_LITERAL(13, 182, 21), // "shouldShowLedgerLines"
QT_MOC_LITERAL(14, 204, 19), // "shouldGenerateClefs"
QT_MOC_LITERAL(15, 224, 28), // "shouldGenerateTimeSignatures"
QT_MOC_LITERAL(16, 253, 27) // "shouldGenerateKeySignatures"

    },
    "mu::inspector::StaffTypeSettingsModel\0"
    "isSmall\0PropertyItem*\0verticalOffset\0"
    "scale\0lineCount\0lineDistance\0stepOffset\0"
    "isInvisible\0color\0noteheadSchemeType\0"
    "isStemless\0shouldShowBarlines\0"
    "shouldShowLedgerLines\0shouldGenerateClefs\0"
    "shouldGenerateTimeSignatures\0"
    "shouldGenerateKeySignatures"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__StaffTypeSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      15,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,
       6, 0x80000000 | 2, 0x00095409,
       7, 0x80000000 | 2, 0x00095409,
       8, 0x80000000 | 2, 0x00095409,
       9, 0x80000000 | 2, 0x00095409,
      10, 0x80000000 | 2, 0x00095409,
      11, 0x80000000 | 2, 0x00095409,
      12, 0x80000000 | 2, 0x00095409,
      13, 0x80000000 | 2, 0x00095409,
      14, 0x80000000 | 2, 0x00095409,
      15, 0x80000000 | 2, 0x00095409,
      16, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void mu::inspector::StaffTypeSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        auto *_t = static_cast<StaffTypeSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->isSmall(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->verticalOffset(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->scale(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->lineCount(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->lineDistance(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->stepOffset(); break;
        case 6: *reinterpret_cast< PropertyItem**>(_v) = _t->isInvisible(); break;
        case 7: *reinterpret_cast< PropertyItem**>(_v) = _t->color(); break;
        case 8: *reinterpret_cast< PropertyItem**>(_v) = _t->noteheadSchemeType(); break;
        case 9: *reinterpret_cast< PropertyItem**>(_v) = _t->isStemless(); break;
        case 10: *reinterpret_cast< PropertyItem**>(_v) = _t->shouldShowBarlines(); break;
        case 11: *reinterpret_cast< PropertyItem**>(_v) = _t->shouldShowLedgerLines(); break;
        case 12: *reinterpret_cast< PropertyItem**>(_v) = _t->shouldGenerateClefs(); break;
        case 13: *reinterpret_cast< PropertyItem**>(_v) = _t->shouldGenerateTimeSignatures(); break;
        case 14: *reinterpret_cast< PropertyItem**>(_v) = _t->shouldGenerateKeySignatures(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::StaffTypeSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__StaffTypeSettingsModel.data,
    qt_meta_data_mu__inspector__StaffTypeSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::StaffTypeSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::StaffTypeSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__StaffTypeSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::StaffTypeSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
