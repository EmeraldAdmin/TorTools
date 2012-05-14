/****************************************************************************
** Meta object code from reading C++ file 'tortools.h'
**
** Created: Sun May 13 17:13:14 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tortools.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tortools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TorTools[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      20,    9,    9,    9, 0x08,
      41,    9,    9,    9, 0x08,
      68,    9,    9,    9, 0x08,
      95,   91,    9,    9, 0x08,
     115,    9,    9,    9, 0x08,
     139,    9,    9,    9, 0x08,
     167,  162,    9,    9, 0x08,
     200,   91,    9,    9, 0x08,
     229,    9,    9,    9, 0x08,
     263,    9,    9,    9, 0x08,
     292,    9,    9,    9, 0x08,
     328,    9,    9,    9, 0x08,
     355,    9,    9,    9, 0x08,
     398,    9,    9,    9, 0x08,
     420,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TorTools[] = {
    "TorTools\0\0closing()\0on_browseB_clicked()\0"
    "on_actionClose_triggered()\0"
    "on_ToggleLog_clicked()\0arg\0"
    "onNewDebug(QString)\0on_cAutoStart_clicked()\0"
    "on_groupBool_clicked()\0arg1\0"
    "on_fileCounter_valueChanged(int)\0"
    "on_directory_change(QString)\0"
    "on_actionVersion_Info_triggered()\0"
    "on_actionWebsite_triggered()\0"
    "on_actionLaunch_Overlay_triggered()\0"
    "on_updateOverlay_clicked()\0"
    "on_actionSave_Overlay_Position_triggered()\0"
    "on_overlayB_clicked()\0"
    "on_actionDocumentation_triggered()\0"
};

void TorTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TorTools *_t = static_cast<TorTools *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_browseB_clicked(); break;
        case 2: _t->on_actionClose_triggered(); break;
        case 3: _t->on_ToggleLog_clicked(); break;
        case 4: _t->onNewDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_cAutoStart_clicked(); break;
        case 6: _t->on_groupBool_clicked(); break;
        case 7: _t->on_fileCounter_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_directory_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_actionVersion_Info_triggered(); break;
        case 10: _t->on_actionWebsite_triggered(); break;
        case 11: _t->on_actionLaunch_Overlay_triggered(); break;
        case 12: _t->on_updateOverlay_clicked(); break;
        case 13: _t->on_actionSave_Overlay_Position_triggered(); break;
        case 14: _t->on_overlayB_clicked(); break;
        case 15: _t->on_actionDocumentation_triggered(); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void TorTools::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_FileMon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,    9,    8,    8, 0x05,
      34,    8,    8,    8, 0x05,
      43,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   63,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileMon[] = {
    "FileMon\0\0buffer\0newDebug(QString)\0"
    "change()\0sendNotify(QString)\0arg\0"
    "change_notify(QString)\0"
};

void FileMon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileMon *_t = static_cast<FileMon *>(_o);
        switch (_id) {
        case 0: _t->newDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->change(); break;
        case 2: _t->sendNotify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->change_notify((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void FileMon::change()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FileMon::sendNotify(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
