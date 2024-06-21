/****************************************************************************
** Meta object code from reading C++ file 'util.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/plugins/api/util.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'util.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mu__plugins__api__FileIO_t {
    QByteArrayData data[14];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__FileIO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__FileIO_t qt_meta_stringdata_mu__plugins__api__FileIO = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mu::plugins::api::FileIO"
QT_MOC_LITERAL(1, 25, 5), // "error"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "msg"
QT_MOC_LITERAL(4, 36, 9), // "setSource"
QT_MOC_LITERAL(5, 46, 6), // "source"
QT_MOC_LITERAL(6, 53, 4), // "read"
QT_MOC_LITERAL(7, 58, 6), // "exists"
QT_MOC_LITERAL(8, 65, 5), // "write"
QT_MOC_LITERAL(9, 71, 4), // "data"
QT_MOC_LITERAL(10, 76, 6), // "remove"
QT_MOC_LITERAL(11, 83, 8), // "homePath"
QT_MOC_LITERAL(12, 92, 8), // "tempPath"
QT_MOC_LITERAL(13, 101, 12) // "modifiedTime"

    },
    "mu::plugins::api::FileIO\0error\0\0msg\0"
    "setSource\0source\0read\0exists\0write\0"
    "data\0remove\0homePath\0tempPath\0"
    "modifiedTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__FileIO[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   62,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   65,    2, 0x02 /* Public */,
       7,    0,   66,    2, 0x02 /* Public */,
       8,    1,   67,    2, 0x02 /* Public */,
      10,    0,   70,    2, 0x02 /* Public */,
      11,    0,   71,    2, 0x02 /* Public */,
      12,    0,   72,    2, 0x02 /* Public */,
      13,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,

       0        // eod
};

void mu::plugins::api::FileIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileIO *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSource((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QString _r = _t->read();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->exists();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->write((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->remove();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->homePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->tempPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->modifiedTime();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileIO::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileIO::error)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileIO *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->source(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileIO *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::FileIO::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__FileIO.data,
    qt_meta_data_mu__plugins__api__FileIO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::FileIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::FileIO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__FileIO.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mu::plugins::api::FileIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mu::plugins::api::FileIO::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mu__plugins__api__MsProcess_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__MsProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__MsProcess_t qt_meta_stringdata_mu__plugins__api__MsProcess = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::plugins::api::MsProcess"
QT_MOC_LITERAL(1, 28, 5), // "start"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "program"
QT_MOC_LITERAL(4, 43, 15), // "waitForFinished"
QT_MOC_LITERAL(5, 59, 5), // "msecs"
QT_MOC_LITERAL(6, 65, 21) // "readAllStandardOutput"

    },
    "mu::plugins::api::MsProcess\0start\0\0"
    "program\0waitForFinished\0msecs\0"
    "readAllStandardOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__MsProcess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       4,    0,   40,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::QByteArray,

       0        // eod
};

void mu::plugins::api::MsProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MsProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = _t->waitForFinished((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->waitForFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QByteArray _r = _t->readAllStandardOutput();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::MsProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QProcess::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__MsProcess.data,
    qt_meta_data_mu__plugins__api__MsProcess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::MsProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::MsProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__MsProcess.stringdata0))
        return static_cast<void*>(this);
    return QProcess::qt_metacast(_clname);
}

int mu::plugins::api::MsProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_mu__plugins__api__ScoreView_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mu__plugins__api__ScoreView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mu__plugins__api__ScoreView_t qt_meta_stringdata_mu__plugins__api__ScoreView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "mu::plugins::api::ScoreView"
QT_MOC_LITERAL(1, 28, 8), // "setScore"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "mu::plugins::api::Score*"
QT_MOC_LITERAL(4, 63, 14), // "setCurrentPage"
QT_MOC_LITERAL(5, 78, 1), // "n"
QT_MOC_LITERAL(6, 80, 8), // "nextPage"
QT_MOC_LITERAL(7, 89, 8), // "prevPage"
QT_MOC_LITERAL(8, 98, 5), // "color"
QT_MOC_LITERAL(9, 104, 5) // "scale"

    },
    "mu::plugins::api::ScoreView\0setScore\0"
    "\0mu::plugins::api::Score*\0setCurrentPage\0"
    "n\0nextPage\0prevPage\0color\0scale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mu__plugins__api__ScoreView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QReal, 0x00095103,

       0        // eod
};

void mu::plugins::api::ScoreView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScoreView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setScore((*reinterpret_cast< mu::plugins::api::Score*(*)>(_a[1]))); break;
        case 1: _t->setCurrentPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->nextPage(); break;
        case 3: _t->prevPage(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScoreView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->scale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScoreView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setScale(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mu::plugins::api::ScoreView::staticMetaObject = { {
    QMetaObject::SuperData::link<uicomponents::QuickPaintedView::staticMetaObject>(),
    qt_meta_stringdata_mu__plugins__api__ScoreView.data,
    qt_meta_data_mu__plugins__api__ScoreView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mu::plugins::api::ScoreView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mu::plugins::api::ScoreView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mu__plugins__api__ScoreView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "engraving::MuseScoreView"))
        return static_cast< engraving::MuseScoreView*>(this);
    return uicomponents::QuickPaintedView::qt_metacast(_clname);
}

int mu::plugins::api::ScoreView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uicomponents::QuickPaintedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
