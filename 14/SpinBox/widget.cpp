#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->spinBox->setRange(1,5);
    ui->spinBox->setValue(1);
}

Widget::~Widget()
{
    delete ui;
}

