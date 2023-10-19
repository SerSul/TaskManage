// authenticationpresenter.cpp
#include "authenticationpresenter.h"



AuthenticationPresenter::AuthenticationPresenter(AuthenticationModel* model, TaskManage* view, QObject* parent)
    : QObject(parent), model(model), view(view)
{
    connect(view, &TaskManage::loginButtonClicked, this, &AuthenticationPresenter::handleAuthenticationAttempt);

    connect(model, &AuthenticationModel::authenticationSuccess, this, &AuthenticationPresenter::handleAuthenticationSuccess);
    connect(model, &AuthenticationModel::authenticationFailed, this, &AuthenticationPresenter::handleAuthenticationFailed);
}


void AuthenticationPresenter::handleAuthenticationResult(bool success) {

}

void AuthenticationPresenter::handleAuthenticationAttempt(const QString& username, const QString& password) {
    model->authenticateUser(username, password);

}


void AuthenticationPresenter::handleAuthenticationSuccess(const QString& token) {

    qDebug() << token;
}

void AuthenticationPresenter::handleAuthenticationFailed() {
    qDebug() << "unauthorized";
}