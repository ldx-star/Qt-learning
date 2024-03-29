#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("male");
    ui->comboBox->addItem("female");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_submit_clicked()
{
    qDebug() << ui->comboBox->currentText();
}
