// authenticationpresenter.cpp
#include "authenticationpresenter.h"



AuthenticationPresenter::AuthenticationPresenter(AuthenticationModel* model, TaskManage* view, QObject* parent)
    : QObject(parent), model(model), view(view)
{
    connect(view, &TaskManage::loginButtonClicked, this, &AuthenticationPresenter::handleAuthenticationAttempt);
}


void AuthenticationPresenter::handleAuthenticationResult(bool success) {
    // Обработка результата аутентификации, например, обновление UI
    // ...
}

void AuthenticationPresenter::handleAuthenticationAttempt(const QString& username, const QString& password) {
    model->authenticateUser(username, password);
}
