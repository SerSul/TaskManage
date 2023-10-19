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
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *LoginBTN;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskManageClass)
    {
        if (TaskManageClass->objectName().isEmpty())
            TaskManageClass->setObjectName("TaskManageClass");
        TaskManageClass->resize(1698, 626);
        centralWidget = new QWidget(TaskManageClass);
        centralWidget->setObjectName("centralWidget");
        usernameInput = new QLineEdit(centralWidget);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(540, 230, 113, 22));
        passwordInput = new QLineEdit(centralWidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(540, 270, 113, 22));
        LoginBTN = new QPushButton(centralWidget);
        LoginBTN->setObjectName("LoginBTN");
        LoginBTN->setGeometry(QRect(560, 310, 75, 24));
        TaskManageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TaskManageClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1698, 22));
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
        LoginBTN->setText(QCoreApplication::translate("TaskManageClass", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManageClass: public Ui_TaskManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGE_H
