#include "TaskView.h"

TaskView::TaskView(QWidget* parent)
    : QMainWindow(parent)
{

}


void TaskView::showTaskCreated(const QJsonObject& task) {
    // �������� ������������� ��� ����������� ��������� ������
}

void TaskView::showTaskDeleted() {
    // �������� ������������� ����� �������� ������
}

void TaskView::showTaskUpdated(const QJsonObject& task) {
    // �������� ������������� ����� ���������� ������
}

void TaskView::showTasks(const QJsonArray& tasks) {
    // �������� ������������� ��� ����������� ������ �����
}
