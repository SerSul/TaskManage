#pragma once

#include <QtWidgets/QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>

class TaskView : public QMainWindow{
    Q_OBJECT
public:
    TaskView(QWidget* parent = nullptr);

signals:
    void createTaskRequested(const QString& header, const QString& description, int priority, const QString& token);
    void deleteTaskRequested(int taskId, const QString& token);
    void updateTaskRequested(int taskId, const QString& header, const QString& description, int priority, const QString& token);
    void getTasksRequested(const QString& token);

public slots:
    void showTaskCreated(const QJsonObject& task);
    void showTaskDeleted();
    void showTaskUpdated(const QJsonObject& task);
    void showTasks(const QJsonArray& tasks);

private:

};

