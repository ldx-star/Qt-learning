#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,&Widget::mySignal,this,&Widget::handelMySignal);
    QPushButton *button = new QPushButton(this);
    int n = 100;
    button->move(200,n);
    button->setText("button1");
    connect(button,&QPushButton::clicked,this,[=](){
        button->move(200,300);
//        this->move(200,100);
    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::handelMySignal()
{
    this->setWindowTitle("handle mySignal");
}


void Widget::on_pushButton_clicked()
{
    emit mySignal();
}
