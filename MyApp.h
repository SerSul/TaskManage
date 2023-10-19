#pragma once
#include <QApplication>
#include "authenticationview.h"
#include "authenticationpresenter.h"
#include "taskview.h"
#include "taskpresenter.h"
#include "TaskModel.h"

class MyApp
{
public:
    MyApp(int argc, char* argv[]) : app(argc, argv) {

        AuthenticationPresenter authenticationPresenter(&authenticationModel, &authenticationView);

        showAuthenticationView();
    }

    void run() {
        app.exec();
    }

private:
    QApplication app;

    void showAuthenticationView() {
        authenticationView.show();
    }

    void showTaskView() {

    }

    AuthenticationModel authenticationModel;
    AuthenticationView authenticationView;
};
