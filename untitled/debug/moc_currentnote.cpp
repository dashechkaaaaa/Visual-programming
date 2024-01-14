/****************************************************************************
** Meta object code from reading C++ file 'currentnote.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../currentnote.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentnote.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurrentNote_t {
    QByteArrayData data[12];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurrentNote_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurrentNote_t qt_meta_stringdata_CurrentNote = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CurrentNote"
QT_MOC_LITERAL(1, 12, 16), // "getIdCurrentNote"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "newIdCurrentNote"
QT_MOC_LITERAL(4, 47, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 69, 20), // "on_complited_clicked"
QT_MOC_LITERAL(6, 90, 26), // "on_tableWidget_itemClicked"
QT_MOC_LITERAL(7, 117, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(8, 135, 4), // "item"
QT_MOC_LITERAL(9, 140, 17), // "on_remove_clicked"
QT_MOC_LITERAL(10, 158, 17), // "on_change_clicked"
QT_MOC_LITERAL(11, 176, 26) // "on_tableWidget_itemChanged"

    },
    "CurrentNote\0getIdCurrentNote\0\0"
    "newIdCurrentNote\0on_pushButton_clicked\0"
    "on_complited_clicked\0on_tableWidget_itemClicked\0"
    "QTableWidgetItem*\0item\0on_remove_clicked\0"
    "on_change_clicked\0on_tableWidget_itemChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurrentNote[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,
      11,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void CurrentNote::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurrentNote *_t = static_cast<CurrentNote *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getIdCurrentNote((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_complited_clicked(); break;
        case 3: _t->on_tableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_remove_clicked(); break;
        case 5: _t->on_change_clicked(); break;
        case 6: _t->on_tableWidget_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CurrentNote::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CurrentNote.data,
      qt_meta_data_CurrentNote,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CurrentNote::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurrentNote::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentNote.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CurrentNote::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
