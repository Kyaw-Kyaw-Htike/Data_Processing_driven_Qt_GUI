#include <memory>
#include "VideoProcessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoProcessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoProcessor_t {
    QByteArrayData data[20];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoProcessor_t qt_meta_stringdata_VideoProcessor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "VideoProcessor"
QT_MOC_LITERAL(1, 15, 16), // "update_videoInfo"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "width_frame"
QT_MOC_LITERAL(4, 45, 12), // "height_frame"
QT_MOC_LITERAL(5, 58, 6), // "size_t"
QT_MOC_LITERAL(6, 65, 13), // "nframesApprox"
QT_MOC_LITERAL(7, 79, 9), // "fpath_vid"
QT_MOC_LITERAL(8, 89, 18), // "update_frameNumber"
QT_MOC_LITERAL(9, 108, 3), // "num"
QT_MOC_LITERAL(10, 112, 13), // "update_imgVis"
QT_MOC_LITERAL(11, 126, 14), // "unsigned char*"
QT_MOC_LITERAL(12, 141, 11), // "ptr_imgData"
QT_MOC_LITERAL(13, 153, 5), // "width"
QT_MOC_LITERAL(14, 159, 6), // "height"
QT_MOC_LITERAL(15, 166, 6), // "printg"
QT_MOC_LITERAL(16, 173, 3), // "str"
QT_MOC_LITERAL(17, 177, 7), // "process"
QT_MOC_LITERAL(18, 185, 11), // "pause_video"
QT_MOC_LITERAL(19, 197, 12) // "resume_video"

    },
    "VideoProcessor\0update_videoInfo\0\0"
    "width_frame\0height_frame\0size_t\0"
    "nframesApprox\0fpath_vid\0update_frameNumber\0"
    "num\0update_imgVis\0unsigned char*\0"
    "ptr_imgData\0width\0height\0printg\0str\0"
    "process\0pause_video\0resume_video"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoProcessor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
      10,    3,   61,    2, 0x06 /* Public */,
      15,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   71,    2, 0x0a /* Public */,
      18,    0,   74,    2, 0x0a /* Public */,
      19,    0,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5, QMetaType::QString,    3,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_videoInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->update_frameNumber((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 2: _t->update_imgVis((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->printg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->process((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->pause_video(); break;
        case 6: _t->resume_video(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoProcessor::*)(int , int , size_t , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoProcessor::update_videoInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VideoProcessor::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoProcessor::update_frameNumber)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VideoProcessor::*)(unsigned char * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoProcessor::update_imgVis)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VideoProcessor::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoProcessor::printg)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VideoProcessor.data,
    qt_meta_data_VideoProcessor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoProcessor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VideoProcessor::update_videoInfo(int _t1, int _t2, size_t _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoProcessor::update_frameNumber(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoProcessor::update_imgVis(unsigned char * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoProcessor::printg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_VideoProcessorNone_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoProcessorNone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoProcessorNone_t qt_meta_stringdata_VideoProcessorNone = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VideoProcessorNone"
QT_MOC_LITERAL(1, 19, 7), // "process"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9) // "fpath_vid"

    },
    "VideoProcessorNone\0process\0\0fpath_vid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoProcessorNone[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void VideoProcessorNone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoProcessorNone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->process((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoProcessorNone::staticMetaObject = { {
    QMetaObject::SuperData::link<VideoProcessor::staticMetaObject>(),
    qt_meta_stringdata_VideoProcessorNone.data,
    qt_meta_data_VideoProcessorNone,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoProcessorNone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoProcessorNone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoProcessorNone.stringdata0))
        return static_cast<void*>(this);
    return VideoProcessor::qt_metacast(_clname);
}

int VideoProcessorNone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VideoProcessor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_VideoProcessor_threadController_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoProcessor_threadController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoProcessor_threadController_t qt_meta_stringdata_VideoProcessor_threadController = {
    {
QT_MOC_LITERAL(0, 0, 31), // "VideoProcessor_threadController"
QT_MOC_LITERAL(1, 32, 7), // "operate"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9) // "fpath_vid"

    },
    "VideoProcessor_threadController\0operate\0"
    "\0fpath_vid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoProcessor_threadController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void VideoProcessor_threadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoProcessor_threadController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->operate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VideoProcessor_threadController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoProcessor_threadController::operate)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoProcessor_threadController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VideoProcessor_threadController.data,
    qt_meta_data_VideoProcessor_threadController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoProcessor_threadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoProcessor_threadController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoProcessor_threadController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoProcessor_threadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void VideoProcessor_threadController::operate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
