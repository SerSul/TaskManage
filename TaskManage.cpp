#include "TaskManage.h"

TaskManage::TaskManage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    loginButton = findChild<QPushButton*>("LoginBTN");
    usernameInput = findChild<QLineEdit*>("usernameInput");
    passwordInput = findChild<QLineEdit*>("passwordInput");


    connect(loginButton, &QPushButton::clicked, this, &TaskManage::handleLoginButtonClicked);
}

TaskManage::~TaskManage()
{}


void TaskManage::handleLoginButtonClicked() {
    QString username = usernameInput->text();
    QString password = passwordInput->text();

}