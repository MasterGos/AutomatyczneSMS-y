/****************************************************************************
** Meta object code from reading C++ file 'viewloader.h'
**
** Created: Thu 22. Mar 16:12:27 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../viewloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewLoader[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,
      46,   37,   11,   11, 0x0a,
      67,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ViewLoader[] = {
    "ViewLoader\0\0ok\0on_loadFinished(bool)\0"
    "progress\0on_loadProgress(int)\0"
    "on_loadStarted()\0"
};

const QMetaObject ViewLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ViewLoader,
      qt_meta_data_ViewLoader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewLoader))
        return static_cast<void*>(const_cast< ViewLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int ViewLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_loadStarted(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
