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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManageClass
{
public:
    QWidget *centralWidget;
    QPushButton *LoginBTN;
    QLineEdit *passwordInput;
    QLineEdit *usernameInput;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskManageClass)
    {
        if (TaskManageClass->objectName().isEmpty())
            TaskManageClass->setObjectName("TaskManageClass");
        TaskManageClass->resize(726, 613);
        centralWidget = new QWidget(TaskManageClass);
        centralWidget->setObjectName("centralWidget");
        LoginBTN = new QPushButton(centralWidget);
        LoginBTN->setObjectName("LoginBTN");
        LoginBTN->setGeometry(QRect(260, 330, 75, 24));
        passwordInput = new QLineEdit(centralWidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(250, 290, 113, 22));
        usernameInput = new QLineEdit(centralWidget);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(250, 250, 113, 22));
        TaskManageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TaskManageClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 726, 22));
        TaskManageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskManageClass);
        mainToolBar->setObjectName("mainToolBar");
        TaskManageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TaskManageClass);
        statusBar->setObjectName("statusBar");
        TaskManageClass->setStatusBar(statusBar);

        retranslateUi(TaskManageClass);

        QMetaObject::connectSlotsByName(TaskManageClass);
    } // setupUi

    void retranslateUi(QMainWindow *TaskManageClass)
    {
        TaskManageClass->setWindowTitle(QCoreApplication::translate("TaskManageClass", "TaskManage", nullptr));
        LoginBTN->setText(QCoreApplication::translate("TaskManageClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManageClass: public Ui_TaskManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGE_H
