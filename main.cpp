#include "TaskManage.h"
#include <QtWidgets/QApplication>
#include "AuthenticationModel.h"
#include "AuthenticationPresenter.h"
#include <iostream>
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    TaskManage taskmanager;
    AuthenticationModel authenticationmodel;
    AuthenticationPresenter presenter(&authenticationmodel, &taskmanager);
    const std::type_info& typeInfo = typeid(taskmanager);
    taskmanager.show();
    return a.exec();
}