#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QDateTime timeOld = ui->dateTimeEdit->dateTime();
    QDateTime timeNew = ui->dateTimeEdit_2->dateTime();

//    int days = timeOld.daysTo(timeNew);
    int seconds = timeOld.secsTo(timeNew);
    int hours = (seconds / 3600) % 24;
    int days = (seconds / 3600) / 24;
    ui->label->setText(QString::number(days) + " days and " + QString::number(hours) + " hours" );
}
