/****************************************************************************
** Meta object code from reading C++ file 'macospopupviewclosecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/framework/uicomponents/view/internal/platform/macos/macospopupviewclosecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'macospopupviewclosecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__uicomponents__MacOSPopupViewCloseController_t {
    QByteArrayData data[1];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__uicomponents__MacOSPopupViewCloseController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__uicomponents__MacOSPopupViewCloseController_t qt_meta_stringdata_mu__uicomponents__MacOSPopupViewCloseController = {
    {
QT_MOC_LITERAL(0, 0, 47) // "mu::uicomponents::MacOSPopupV..."

    },
    "mu::uicomponents::MacOSPopupViewCloseController"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__uicomponents__MacOSPopupViewCloseController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void mu::uicomponents::MacOSPopupViewCloseController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mu::uicomponents::MacOSPopupViewCloseController::staticMetaObject = { {
    QMetaObject::SuperData::link<PopupViewCloseController::staticMetaObject>(),
    qt_meta_stringdata_mu__uicomponents__MacOSPopupViewCloseController.data,
    qt_meta_data_mu__uicomponents__MacOSPopupViewCloseController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::uicomponents::MacOSPopupViewCloseController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::uicomponents::MacOSPopupViewCloseController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__uicomponents__MacOSPopupViewCloseController.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractNativeEventFilter"))
        return static_cast< QAbstractNativeEventFilter*>(this);
    return PopupViewCloseController::qt_metacast(_clname);
}

int mu::uicomponents::MacOSPopupViewCloseController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PopupViewCloseController::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
