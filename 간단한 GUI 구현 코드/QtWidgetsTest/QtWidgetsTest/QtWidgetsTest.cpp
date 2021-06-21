#include "QtWidgetsTest.h"

static int sum = 0;

QtWidgetsTest::QtWidgetsTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.btn_run, SIGNAL(clicked()), this, SLOT(on_btn_run()));


    connect(ui.radio_1, SIGNAL(clicked()), this, SLOT(on_radio_run));
    connect(ui.radio_2, SIGNAL(clicked()), this, SLOT(on_radio_run));
    connect(ui.radio_3, SIGNAL(clicked()), this, SLOT(on_radio_run));


    connect(ui.chk_1, SIGNAL(clicked()), this, SLOT(on_checkbox_run));
    connect(ui.chk_2, SIGNAL(clicked()), this, SLOT(on_checkbox_run));
    connect(ui.chk_3, SIGNAL(clicked()), this, SLOT(on_checkbox_run));


    ui.comboBox->addItem("Male");
    ui.comboBox->addItem("Female");
}

void QtWidgetsTest::on_btn_run()
{
    
    // comboBox
    QString str;
    str.append(QString::fromLocal8Bit("����:"));
    if (ui.comboBox->currentIndex() == 0) {
        str.append(QString::fromLocal8Bit("����"));
    }
    else {
        str.append(QString::fromLocal8Bit("����"));
    }

    ui.label_output1->setText(str);

    // spinBox

    QString str1;
    str1.append(QString::fromLocal8Bit("����:"));
    str1.append(QString("%1").arg(ui.spinBox->cleanText()));
    ui.label_output2->setText(str1);


    // Radio Box

    QString str2;
    str2.append(QString::fromLocal8Bit("�����:"));
    
    if (ui.radio_1->isChecked()) {
        str2.append(QString::fromLocal8Bit("���"));
    }

    if (ui.radio_2->isChecked()) {
        str2.append(QString::fromLocal8Bit("����"));
    }

    if (ui.radio_3->isChecked()) {
        str2.append(QString::fromLocal8Bit("��û"));
    }

    ui.label_output3->setText(str2);


    // Check Box



    QString str3;
    str3.append(QString::fromLocal8Bit("���:"));
    
    

    if (ui.chk_1->isChecked()) {
        str3.append(QString::fromLocal8Bit(" ��ȭ����"));
        sum += 1;
    }

    if (ui.chk_2->isChecked()) {
        str3.append(QString::fromLocal8Bit(" �"));
        sum += 1;
    }

    if (ui.chk_3->isChecked()) {
        str3.append(QString::fromLocal8Bit(" ���ǰ���"));
        sum += 1;
    }

    if (ui.chk_4->isChecked()) {
        str3.append(QString::fromLocal8Bit(" �ֿϵ���"));
        sum += 1;
    }

    if (sum > 3) {
        ui.label_output4->setText("Please choose only three hobbies!");
        sum = 0;
    }
    else {
        ui.label_output4->setText(str3);
    }
}

void QtWidgetsTest::on_radio_run()
{

}

void QtWidgetsTest::on_checkbox_run()
{
}
