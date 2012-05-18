/****************************************************************************
** Meta object code from reading C++ file 'overlay.h'
**
** Created: Fri May 18 14:13:17 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../overlay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Overlay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,    9,    8,    8, 0x08,
      40,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Overlay[] = {
    "Overlay\0\0arg\0updateOverlayInfo(QString)\0"
    "restoreOverlayInfo()\0"
};

void Overlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Overlay *_t = static_cast<Overlay *>(_o);
        switch (_id) {
        case 0: _t->updateOverlayInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->restoreOverlayInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Overlay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Overlay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Overlay,
      qt_meta_data_Overlay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Overlay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Overlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Overlay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Overlay))
        return static_cast<void*>(const_cast< Overlay*>(this));
    return QWidget::qt_metacast(_clname);
}

int Overlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
