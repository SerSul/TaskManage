// authenticationmodel.cpp
#include "authenticationmodel.h"
#include <QNetworkRequest>
#include <QNetworkReply>

AuthenticationModel::AuthenticationModel(QObject* parent) : QObject(parent) {

    networkManager = new QNetworkAccessManager(this);
}

void AuthenticationModel::authenticateUser(const QString& username, const QString& password) {
    QNetworkRequest request(QUrl("http://localhost:8080/api/auth/signin")); 

    QByteArray requestData = "username=" + username.toUtf8() + "&password=" + password.toUtf8();

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QNetworkReply* reply = networkManager->post(request, requestData);

    connect(reply, &QNetworkReply::finished, this, [this, reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response = reply->readAll();
            qDebug() << response;

            emit authenticationResult(true); 

            emit authenticationResult(false); 
        }
        else {

            emit authenticationResult(false); 
        }

        reply->deleteLater();
        });
}
