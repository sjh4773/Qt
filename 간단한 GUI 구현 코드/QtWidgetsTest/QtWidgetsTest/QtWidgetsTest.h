#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsTest.h"

class QtWidgetsTest : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsTestClass ui;

public slots:
    void on_btn_run(); // ��ư�� ������ �� �����ϴ� �Լ�
    void on_radio_run();
    void on_checkbox_run();
};
