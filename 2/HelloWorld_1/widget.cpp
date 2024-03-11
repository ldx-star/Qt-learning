#include "widget.h"
#include "ui_widget.h"
#include <QLineEdit>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLineEdit *edit = new QLineEdit(this);
    edit->setText("Hello World");
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::handleClick);
    button = new QPushButton(this);
    button->setText("hello button");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleClick()
{
    if(ui->pushButton->text() == QString("Hello World"))
        ui->pushButton->setText("Hello Qt");
    else
        ui->pushButton->setText("Hello World");
}
