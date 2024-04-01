#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *button1 = new QPushButton("button1");
    QPushButton *button2 = new QPushButton("button2");
    QPushButton *button3 = new QPushButton("button3");
    QPushButton *button4 = new QPushButton("button4");
    QPushButton *button5 = new QPushButton("button5");
    QPushButton *button6 = new QPushButton("button6");

    button1->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    button2->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    button3->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    button4->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    button5->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    button6->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    QGridLayout *layout = new QGridLayout();
    layout->addWidget(button1,0,0);
    layout->addWidget(button2,0,1);
    layout->addWidget(button3,0,2);
    layout->addWidget(button4,1,0);
    layout->addWidget(button5,1,1);
    layout->addWidget(button6,1,2);

    this->setLayout(layout);

    layout->setColumnStretch(0,0);
    layout->setColumnStretch(1,1);
    layout->setColumnStretch(2,3);

    layout->setRowStretch(0,0);
    layout->setRowStretch(1,1);

}

Widget::~Widget()
{
    delete ui;
}

