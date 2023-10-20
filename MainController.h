#include <QObject>
#include "authenticationmodel.h"
#include "authenticationpresenter.h"
#include "authenticationview.h"
#include "taskmodel.h"
#include "taskpresenter.h"
#include "taskview.h"

class MainController : public QObject {
    Q_OBJECT
public:
    MainController(QObject* parent = nullptr)
        : QObject(parent), authModel(nullptr), authPresenter(nullptr), authView(nullptr),
        taskModel(nullptr), taskPresenter(nullptr), taskView(nullptr) {
        authModel = new AuthenticationModel(this);
        authView = new AuthenticationView();
        authPresenter = new AuthenticationPresenter(authModel, authView, this);

        connect(authPresenter, &AuthenticationPresenter::ChangeVisibillity, this, &MainController::handleChangeVisibillity);
    }

    void startApplication() {
        authView->show();
    }

public slots:
    void handleChangeVisibillity(const QString& token);

private:
    AuthenticationModel* authModel;
    AuthenticationPresenter* authPresenter;
    AuthenticationView* authView;

    TaskModel* taskModel;
    TaskPresenter* taskPresenter;
    TaskView* taskView;
};
