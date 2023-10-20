/****************************************************************************
** Meta object code from reading C++ file 'TaskView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TaskView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTaskViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTaskViewENDCLASS = QtMocHelpers::stringData(
    "TaskView",
    "createTaskRequested",
    "",
    "header",
    "description",
    "priority",
    "token",
    "deleteTaskRequested",
    "taskId",
    "updateTaskRequested",
    "getTasksRequested",
    "showTaskCreated",
    "task",
    "showTaskDeleted",
    "showTaskUpdated",
    "showTasks",
    "tasks"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTaskViewENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[9];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[12];
    char stringdata5[9];
    char stringdata6[6];
    char stringdata7[20];
    char stringdata8[7];
    char stringdata9[20];
    char stringdata10[18];
    char stringdata11[16];
    char stringdata12[5];
    char stringdata13[16];
    char stringdata14[16];
    char stringdata15[10];
    char stringdata16[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTaskViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTaskViewENDCLASS_t qt_meta_stringdata_CLASSTaskViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "TaskView"
        QT_MOC_LITERAL(9, 19),  // "createTaskRequested"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 6),  // "header"
        QT_MOC_LITERAL(37, 11),  // "description"
        QT_MOC_LITERAL(49, 8),  // "priority"
        QT_MOC_LITERAL(58, 5),  // "token"
        QT_MOC_LITERAL(64, 19),  // "deleteTaskRequested"
        QT_MOC_LITERAL(84, 6),  // "taskId"
        QT_MOC_LITERAL(91, 19),  // "updateTaskRequested"
        QT_MOC_LITERAL(111, 17),  // "getTasksRequested"
        QT_MOC_LITERAL(129, 15),  // "showTaskCreated"
        QT_MOC_LITERAL(145, 4),  // "task"
        QT_MOC_LITERAL(150, 15),  // "showTaskDeleted"
        QT_MOC_LITERAL(166, 15),  // "showTaskUpdated"
        QT_MOC_LITERAL(182, 9),  // "showTasks"
        QT_MOC_LITERAL(192, 5)   // "tasks"
    },
    "TaskView",
    "createTaskRequested",
    "",
    "header",
    "description",
    "priority",
    "token",
    "deleteTaskRequested",
    "taskId",
    "updateTaskRequested",
    "getTasksRequested",
    "showTaskCreated",
    "task",
    "showTaskDeleted",
    "showTaskUpdated",
    "showTasks",
    "tasks"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTaskViewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   62,    2, 0x06,    1 /* Public */,
       7,    2,   71,    2, 0x06,    6 /* Public */,
       9,    5,   76,    2, 0x06,    9 /* Public */,
      10,    1,   87,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   90,    2, 0x0a,   17 /* Public */,
      13,    0,   93,    2, 0x0a,   19 /* Public */,
      14,    1,   94,    2, 0x0a,   20 /* Public */,
      15,    1,   97,    2, 0x0a,   22 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    8,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   12,
    QMetaType::Void, QMetaType::QJsonArray,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject TaskView::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSTaskViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTaskViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTaskViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskView, std::true_type>,
        // method 'createTaskRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteTaskRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateTaskRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getTasksRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showTaskCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'showTaskDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showTaskUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'showTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>
    >,
    nullptr
} };

void TaskView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createTaskRequested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 1: _t->deleteTaskRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->updateTaskRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 3: _t->getTasksRequested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->showTaskCreated((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 5: _t->showTaskDeleted(); break;
        case 6: _t->showTaskUpdated((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 7: _t->showTasks((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskView::*)(const QString & , const QString & , int , const QString & );
            if (_t _q_method = &TaskView::createTaskRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TaskView::*)(int , const QString & );
            if (_t _q_method = &TaskView::deleteTaskRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TaskView::*)(int , const QString & , const QString & , int , const QString & );
            if (_t _q_method = &TaskView::updateTaskRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TaskView::*)(const QString & );
            if (_t _q_method = &TaskView::getTasksRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *TaskView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTaskViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TaskView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TaskView::createTaskRequested(const QString & _t1, const QString & _t2, int _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TaskView::deleteTaskRequested(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TaskView::updateTaskRequested(int _t1, const QString & _t2, const QString & _t3, int _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TaskView::getTasksRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
