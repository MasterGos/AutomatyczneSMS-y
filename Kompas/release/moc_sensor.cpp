/****************************************************************************
** Meta object code from reading C++ file 'sensor.h'
**
** Created: Thu 22. Mar 16:12:27 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sensor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Sensor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   28,    7,    7, 0x0a,
      47,    7,    7,    7, 0x08,
      69,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Sensor[] = {
    "Sensor\0\0value\0update(qreal)\0txt\0"
    "debug(QString)\0addToJavaScriptSlot()\0"
    "compassUpdate()\0"
};

const QMetaObject Sensor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Sensor,
      qt_meta_data_Sensor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Sensor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Sensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Sensor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Sensor))
        return static_cast<void*>(const_cast< Sensor*>(this));
    return QObject::qt_metacast(_clname);
}

int Sensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: debug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: addToJavaScriptSlot(); break;
        case 3: compassUpdate(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Sensor::update(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
