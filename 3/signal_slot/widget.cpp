#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *button = new QPushButton(this);
    button->move(100,200);
    button->setText("close");
    connect(button,&QPushButton::clicked,this,&Widget::close );
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    this->setWindowTitle("hhhhhhhhhhh");
}
