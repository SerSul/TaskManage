#include "AuthenticationView.h"
#include <QtWidgets/QApplication>

#include <iostream>
#include "MainController.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    // Создайте экземпляр MainController
    MainController mainController;

    // Запустите приложение
    mainController.startApplication();

    return a.exec();
}
