/****************************************************************************
** Meta object code from reading C++ file 'addressbook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../addressbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_addressbook_t {
    QByteArrayData data[5];
    char stringdata[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addressbook_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addressbook_t qt_meta_stringdata_addressbook = {
    {
QT_MOC_LITERAL(0, 0, 11), // "addressbook"
QT_MOC_LITERAL(1, 12, 10), // "addContact"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "submitContact"
QT_MOC_LITERAL(4, 38, 6) // "cancel"

    },
    "addressbook\0addContact\0\0submitContact\0"
    "cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addressbook[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addressbook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addressbook *_t = static_cast<addressbook *>(_o);
        switch (_id) {
        case 0: _t->addContact(); break;
        case 1: _t->submitContact(); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject addressbook::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_addressbook.data,
      qt_meta_data_addressbook,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *addressbook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addressbook::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_addressbook.stringdata))
        return static_cast<void*>(const_cast< addressbook*>(this));
    return QWidget::qt_metacast(_clname);
}

int addressbook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
