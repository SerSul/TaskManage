#include "TaskView.h"

TaskView::TaskView(QWidget* parent)
    : QMainWindow(parent)
{

}


void TaskView::showTaskCreated(const QJsonObject& task) {
    // Обновите представление для отображения созданной задачи
}

void TaskView::showTaskDeleted() {
    // Обновите представление после удаления задачи
}

void TaskView::showTaskUpdated(const QJsonObject& task) {
    // Обновите представление после обновления задачи
}

void TaskView::showTasks(const QJsonArray& tasks) {
    // Обновите представление для отображения списка задач
}
