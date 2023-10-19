// authenticationmodel.h
#pragma once

#include <QObject>
#include <QNetworkAccessManager>

class AuthenticationModel : public QObject {
    Q_OBJECT
public:
    AuthenticationModel(QObject* parent = nullptr);
    void authenticateUser(const QString& username, const QString& password);
signals:
    void authenticationSuccess(const QString& token);
    void authenticationFailed();
private:
    QNetworkAccessManager* networkManager;
};
