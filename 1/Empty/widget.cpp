#include "widget.h"
#include "ui_widget.h"
#include "mylabel.h"
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // By creating label through the "new" form,the lifecycel of label can be managed by the object tree
    QLabel *label = new QLabel(this); // this: assign parent for the object
    // label can free memory by parent automatically
    label->setText("hello world");

    MyLabel *mylabel = new MyLabel(this);
    mylabel->setText("hello ldx");

}

Widget::~Widget()
{
    delete ui;
}

