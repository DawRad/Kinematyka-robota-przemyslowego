/****************************************************************************
** Meta object code from reading C++ file 'userguide.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../userguide.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userguide.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserGuide_t {
    QByteArrayData data[11];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserGuide_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserGuide_t qt_meta_stringdata_UserGuide = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UserGuide"
QT_MOC_LITERAL(1, 10, 18), // "on_pbRysuj_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "on_pbWczytaj_clicked"
QT_MOC_LITERAL(4, 51, 22), // "on_pbUkryjOsie_clicked"
QT_MOC_LITERAL(5, 74, 22), // "on_pbPokazOsie_clicked"
QT_MOC_LITERAL(6, 97, 25), // "on_sbNrKroku_valueChanged"
QT_MOC_LITERAL(7, 123, 4), // "arg1"
QT_MOC_LITERAL(8, 128, 25), // "on_leLbKrokow_textChanged"
QT_MOC_LITERAL(9, 154, 11), // "rysujKropke"
QT_MOC_LITERAL(10, 166, 8) // "animacja"

    },
    "UserGuide\0on_pbRysuj_clicked\0\0"
    "on_pbWczytaj_clicked\0on_pbUkryjOsie_clicked\0"
    "on_pbPokazOsie_clicked\0on_sbNrKroku_valueChanged\0"
    "arg1\0on_leLbKrokow_textChanged\0"
    "rysujKropke\0animacja"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserGuide[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserGuide::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserGuide *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbRysuj_clicked(); break;
        case 1: _t->on_pbWczytaj_clicked(); break;
        case 2: _t->on_pbUkryjOsie_clicked(); break;
        case 3: _t->on_pbPokazOsie_clicked(); break;
        case 4: _t->on_sbNrKroku_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_leLbKrokow_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;        
        case 7: _t->animacja(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserGuide::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_UserGuide.data,
    qt_meta_data_UserGuide,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserGuide::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserGuide::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserGuide.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserGuide::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
