/****************************************************************************
** Meta object code from reading C++ file 'profilewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../profilewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profilewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProfileWindow_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProfileWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProfileWindow_t qt_meta_stringdata_ProfileWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProfileWindow"
QT_MOC_LITERAL(1, 14, 17), // "sendIdToHumanData"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "sendIdCurrentNote"
QT_MOC_LITERAL(4, 51, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(5, 77, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 94, 4), // "item"
QT_MOC_LITERAL(7, 99, 21), // "getIdFromSecondWindow"
QT_MOC_LITERAL(8, 121, 5) // "newId"

    },
    "ProfileWindow\0sendIdToHumanData\0\0"
    "sendIdCurrentNote\0on_listWidget_itemClicked\0"
    "QListWidgetItem*\0item\0getIdFromSecondWindow\0"
    "newId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProfileWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   40,    2, 0x08 /* Private */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void ProfileWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProfileWindow *_t = static_cast<ProfileWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendIdToHumanData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendIdCurrentNote((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->getIdFromSecondWindow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ProfileWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileWindow::sendIdToHumanData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProfileWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileWindow::sendIdCurrentNote)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ProfileWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProfileWindow.data,
      qt_meta_data_ProfileWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProfileWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProfileWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ProfileWindow::sendIdToHumanData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProfileWindow::sendIdCurrentNote(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE