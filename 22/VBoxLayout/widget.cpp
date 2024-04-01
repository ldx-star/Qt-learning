#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *button1 = new QPushButton("button1");
    QPushButton *button2 = new QPushButton("button2");
    QPushButton *button3 = new QPushButton("button3");

    QVBoxLayout *VLayout = new QVBoxLayout();
    VLayout->addWidget(button1);
    VLayout->addWidget(button2);
    VLayout->addWidget(button3);

    this->setLayout(VLayout);

    QPushButton *button4 = new QPushButton("button4");
    QPushButton *button5 = new QPushButton("button5");
    QPushButton *button6 = new QPushButton("button6");

    QHBoxLayout *HLayout = new QHBoxLayout();
    HLayout->addWidget(button4);
    HLayout->addWidget(button5);
    HLayout->addWidget(button6);

    VLayout->addLayout(HLayout);




}

Widget::~Widget()
{
    delete ui;
}

