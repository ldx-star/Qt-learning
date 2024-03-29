#include "widget.h"
#include "ui_widget.h"
#include <QShortcut>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(100);
    ui->horizontalSlider->setMaximum(2000);
    ui->horizontalSlider->setValue(800);
//    ui->horizontalSlider->setSingleStep(50);

    ui->verticalSlider->setMinimum(100);
    ui->verticalSlider->setMaximum(1500);
    ui->verticalSlider->setValue(600);
//    ui->verticalSlider->setSingleStep(50);

    QShortcut *shortcut_1 = new QShortcut(this);
    QShortcut *shortcut_2 = new QShortcut(this);
    QShortcut *shortcut_3 = new QShortcut(this);
    QShortcut *shortcut_4 = new QShortcut(this);
    shortcut_1->setKey(QKeySequence(Qt::Key_Up));
    shortcut_2->setKey(QKeySequence(Qt::Key_Down));
    shortcut_3->setKey(QKeySequence(Qt::Key_Left));
    shortcut_4->setKey(QKeySequence(Qt::Key_Right));

    connect(shortcut_1,&QShortcut::activated,this,&Widget::upValue);
    connect(shortcut_2,&QShortcut::activated,this,&Widget::downValue);
    connect(shortcut_3,&QShortcut::activated,this,&Widget::leftValue);
    connect(shortcut_4,&QShortcut::activated,this,&Widget::rightValue);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_horizontalSlider_valueChanged(int value)
{
    ui->label->setNum(value);
    const QRect &rect = this->geometry();
    this->setGeometry(rect.x(),rect.y(),value,rect.height());
}

void Widget::on_verticalSlider_valueChanged(int value)
{
    ui->label_2->setNum(value);
    const QRect &rect = this->geometry();
    this->setGeometry(rect.x(),rect.y(),rect.width(),value);
}

void Widget::upValue()
{
    int value = ui->horizontalSlider->value();
    if(value >= ui->horizontalSlider->maximum()) return ;
    ui->horizontalSlider->setValue(value + 10);
}

void Widget::downValue()
{
    int value = ui->horizontalSlider->value();
    if(value <= ui->horizontalSlider->minimum()) return ;
    ui->horizontalSlider->setValue(value - 10);
}

void Widget::leftValue()
{
    int value = ui->verticalSlider->value();
    if(value <= ui->verticalSlider->minimum()) return ;
    ui->verticalSlider->setValue(value - 10);
}

void Widget::rightValue()
{
    int value = ui->verticalSlider->value();
    if(value >= ui->verticalSlider->maximum()) return ;
    ui->verticalSlider->setValue(value + 10);
}
