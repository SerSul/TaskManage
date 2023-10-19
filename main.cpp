#include "TaskManage.h"
#include <QtWidgets/QApplication>
#include "AuthenticationModel.h"
#include "AuthenticationPresenter.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    TaskManage taskmanager;
    AuthenticationModel authenticationmodel;
    AuthenticationPresenter presenter(&authenticationmodel, &taskmanager);
    taskmanager.show();
    return a.exec();
}