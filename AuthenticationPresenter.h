// authenticationpresenter.h
#pragma once

#include <QObject>
#include "authenticationmodel.h"
#include "TaskManage.h"

class AuthenticationPresenter : public QObject {
    Q_OBJECT
public:
    AuthenticationPresenter(AuthenticationModel* model, TaskManage* view, QObject* parent = nullptr);


public slots:
    void handleAuthenticationAttempt();
    void handleAuthenticationResult(bool success);
private:

    AuthenticationModel* model;
    TaskManage* view;
};

