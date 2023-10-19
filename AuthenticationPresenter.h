// authenticationpresenter.h
#pragma once

#include <QObject>
#include "authenticationmodel.h"
#include "TaskManage.h"

class AuthenticationPresenter : public QObject {
    Q_OBJECT
public:
    AuthenticationPresenter(AuthenticationModel* model, TaskManage* view, QObject* parent = nullptr);
    void handleAuthenticationSuccess(const QString& token);
    void handleAuthenticationFailed();

public slots:
    void handleAuthenticationAttempt(const QString& username, const QString& password);
    void handleAuthenticationResult(bool success);
private:

    AuthenticationModel* model;
    TaskManage* view;
};

