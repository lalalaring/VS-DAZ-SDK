/****************************************************************************
** Meta object code from reading C++ file 'afirstpluginaction.h'
**
** Created: Sun Aug 26 13:09:47 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../afirstpluginaction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'afirstpluginaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DzAFirstPluginAction[] = {

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

static const char qt_meta_stringdata_DzAFirstPluginAction[] = {
    "DzAFirstPluginAction\0"
};

void DzAFirstPluginAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DzAFirstPluginAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DzAFirstPluginAction::staticMetaObject = {
    { &DzEditAction::staticMetaObject, qt_meta_stringdata_DzAFirstPluginAction,
      qt_meta_data_DzAFirstPluginAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DzAFirstPluginAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DzAFirstPluginAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DzAFirstPluginAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DzAFirstPluginAction))
        return static_cast<void*>(const_cast< DzAFirstPluginAction*>(this));
    return DzEditAction::qt_metacast(_clname);
}

int DzAFirstPluginAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DzEditAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE