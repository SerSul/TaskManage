#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TaskManage.h"

class TaskManage : public QMainWindow
{
    Q_OBJECT

public:
    TaskManage(QWidget *parent = nullptr);
    ~TaskManage();

private:
    QPushButton* loginButton;
    QLineEdit* usernameInput;
    QLineEdit* passwordInput;
private slots:
    void handleLoginButtonClicked();
private:
    Ui::TaskManageClass ui;
};
