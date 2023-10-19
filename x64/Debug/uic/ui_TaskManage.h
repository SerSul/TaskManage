/********************************************************************************
** Form generated from reading UI file 'TaskManage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGE_H
#define UI_TASKMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManageClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskManageClass)
    {
        if (TaskManageClass->objectName().isEmpty())
            TaskManageClass->setObjectName("TaskManageClass");
        TaskManageClass->resize(600, 400);
        menuBar = new QMenuBar(TaskManageClass);
        menuBar->setObjectName("menuBar");
        TaskManageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskManageClass);
        mainToolBar->setObjectName("mainToolBar");
        TaskManageClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TaskManageClass);
        centralWidget->setObjectName("centralWidget");
        TaskManageClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TaskManageClass);
        statusBar->setObjectName("statusBar");
        TaskManageClass->setStatusBar(statusBar);

        retranslateUi(TaskManageClass);

        QMetaObject::connectSlotsByName(TaskManageClass);
    } // setupUi

    void retranslateUi(QMainWindow *TaskManageClass)
    {
        TaskManageClass->setWindowTitle(QCoreApplication::translate("TaskManageClass", "TaskManage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManageClass: public Ui_TaskManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGE_H
