/****************************************************************************
** Meta object code from reading C++ file 'textframesettingsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/inspector/models/notation/frames/textframesettingsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textframesettingsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__inspector__TextFrameSettingsModel_t {
    QByteArrayData data[8];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__inspector__TextFrameSettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__inspector__TextFrameSettingsModel_t qt_meta_stringdata_mu__inspector__TextFrameSettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "mu::inspector::TextFrameSetti..."
QT_MOC_LITERAL(1, 38, 8), // "gapAbove"
QT_MOC_LITERAL(2, 47, 13), // "PropertyItem*"
QT_MOC_LITERAL(3, 61, 8), // "gapBelow"
QT_MOC_LITERAL(4, 70, 15), // "frameLeftMargin"
QT_MOC_LITERAL(5, 86, 16), // "frameRightMargin"
QT_MOC_LITERAL(6, 103, 14), // "frameTopMargin"
QT_MOC_LITERAL(7, 118, 17) // "frameBottomMargin"

    },
    "mu::inspector::TextFrameSettingsModel\0"
    "gapAbove\0PropertyItem*\0gapBelow\0"
    "frameLeftMargin\0frameRightMargin\0"
    "frameTopMargin\0frameBottomMargin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__inspector__TextFrameSettingsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
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

       0        // eod
};

void mu::inspector::TextFrameSettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        auto *_t = static_cast<TextFrameSettingsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PropertyItem**>(_v) = _t->gapAbove(); break;
        case 1: *reinterpret_cast< PropertyItem**>(_v) = _t->gapBelow(); break;
        case 2: *reinterpret_cast< PropertyItem**>(_v) = _t->frameLeftMargin(); break;
        case 3: *reinterpret_cast< PropertyItem**>(_v) = _t->frameRightMargin(); break;
        case 4: *reinterpret_cast< PropertyItem**>(_v) = _t->frameTopMargin(); break;
        case 5: *reinterpret_cast< PropertyItem**>(_v) = _t->frameBottomMargin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
}

QT_INIT_METAOBJECT const QMetaObject mu::inspector::TextFrameSettingsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractInspectorModel::staticMetaObject>(),
    qt_meta_stringdata_mu__inspector__TextFrameSettingsModel.data,
    qt_meta_data_mu__inspector__TextFrameSettingsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::inspector::TextFrameSettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::inspector::TextFrameSettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__inspector__TextFrameSettingsModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractInspectorModel::qt_metacast(_clname);
}

int mu::inspector::TextFrameSettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractInspectorModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE