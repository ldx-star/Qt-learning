#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>
#include <QIcon>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *button = new QPushButton(this);
    button->setText("button");
    button->move(200,200);
    connect(button,&QPushButton::clicked,this,&Widget::handle);
    QIcon icon(":/wukong.png");
    this->setWindowIcon(icon);
    QPixmap pixmap(":/wukong.png");
    pixmap = pixmap.scaled(50,50);
    QCursor cursor(pixmap);
    this->setCursor(cursor);
    button->setToolTip("hhhhhh");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handle()
{
    qDebug() << this->geometry();
    qDebug() << this->frameGeometry();
    this->setWindowOpacity(0.7);
}

