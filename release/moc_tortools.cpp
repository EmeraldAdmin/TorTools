/****************************************************************************
** Meta object code from reading C++ file 'tortools.h'
**
** Created: Fri May 18 17:01:51 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tortools.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tortools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TorTools[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      24,   20,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,    9,    9,    9, 0x08,
      69,    9,    9,    9, 0x08,
      96,    9,    9,    9, 0x08,
     119,   20,    9,    9, 0x08,
     139,    9,    9,    9, 0x08,
     163,    9,    9,    9, 0x08,
     191,  186,    9,    9, 0x08,
     224,   20,    9,    9, 0x08,
     253,    9,    9,    9, 0x08,
     287,    9,    9,    9, 0x08,
     316,    9,    9,    9, 0x08,
     352,    9,    9,    9, 0x08,
     379,    9,    9,    9, 0x08,
     422,    9,    9,    9, 0x08,
     444,    9,    9,    9, 0x08,
     479,  186,    9,    9, 0x08,
     520,  511,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TorTools[] = {
    "TorTools\0\0closing()\0arg\0updateInfoLine(QString)\0"
    "on_browseB_clicked()\0on_actionClose_triggered()\0"
    "on_ToggleLog_clicked()\0onNewDebug(QString)\0"
    "on_cAutoStart_clicked()\0on_groupBool_clicked()\0"
    "arg1\0on_fileCounter_valueChanged(int)\0"
    "on_directory_change(QString)\0"
    "on_actionVersion_Info_triggered()\0"
    "on_actionWebsite_triggered()\0"
    "on_actionLaunch_Overlay_triggered()\0"
    "on_updateOverlay_clicked()\0"
    "on_actionSave_Overlay_Position_triggered()\0"
    "on_overlayB_clicked()\0"
    "on_actionDocumentation_triggered()\0"
    "on_username_textEdited(QString)\0"
    "topLevel\0on_dockWidget_topLevelChanged(bool)\0"
};

void TorTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TorTools *_t = static_cast<TorTools *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->updateInfoLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_browseB_clicked(); break;
        case 3: _t->on_actionClose_triggered(); break;
        case 4: _t->on_ToggleLog_clicked(); break;
        case 5: _t->onNewDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_cAutoStart_clicked(); break;
        case 7: _t->on_groupBool_clicked(); break;
        case 8: _t->on_fileCounter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_directory_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_actionVersion_Info_triggered(); break;
        case 11: _t->on_actionWebsite_triggered(); break;
        case 12: _t->on_actionLaunch_Overlay_triggered(); break;
        case 13: _t->on_updateOverlay_clicked(); break;
        case 14: _t->on_actionSave_Overlay_Position_triggered(); break;
        case 15: _t->on_overlayB_clicked(); break;
        case 16: _t->on_actionDocumentation_triggered(); break;
        case 17: _t->on_username_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->on_dockWidget_topLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TorTools::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TorTools::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TorTools,
      qt_meta_data_TorTools, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TorTools::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TorTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TorTools::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TorTools))
        return static_cast<void*>(const_cast< TorTools*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TorTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void TorTools::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TorTools::updateInfoLine(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_FileMon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,    9,    8,    8, 0x05,
      34,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   54,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileMon[] = {
    "FileMon\0\0buffer\0newDebug(QString)\0"
    "sendNotify(QString)\0arg\0change_notify(QString)\0"
};

void FileMon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileMon *_t = static_cast<FileMon *>(_o);
        switch (_id) {
        case 0: _t->newDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendNotify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->change_notify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileMon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileMon::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FileMon,
      qt_meta_data_FileMon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileMon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileMon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileMon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileMon))
        return static_cast<void*>(const_cast< FileMon*>(this));
    return QThread::qt_metacast(_clname);
}

int FileMon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FileMon::newDebug(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileMon::sendNotify(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_BufferFlushTimed[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_BufferFlushTimed[] = {
    "BufferFlushTimed\0"
};

void BufferFlushTimed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BufferFlushTimed::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BufferFlushTimed::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_BufferFlushTimed,
      qt_meta_data_BufferFlushTimed, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BufferFlushTimed::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BufferFlushTimed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BufferFlushTimed::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BufferFlushTimed))
        return static_cast<void*>(const_cast< BufferFlushTimed*>(this));
    return QThread::qt_metacast(_clname);
}

int BufferFlushTimed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
