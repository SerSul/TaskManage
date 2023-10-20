#pragma once
#pragma once

#include <QObject>
#include "taskmodel.h"
#include "taskview.h"

class TaskPresenter : public QObject {
    Q_OBJECT
public:
    TaskPresenter(TaskModel* model, TaskView* view, QObject* parent = nullptr);

public slots:


private:
    TaskModel* model;
    TaskView* view;
};