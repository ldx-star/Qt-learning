#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QFormLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QFormLayout *layout = new QFormLayout();
    this->setLayout(layout);

    QLabel *label1 = new QLabel("name");
    QLabel *label2 = new QLabel("age");

    QLineEdit *edit1 = new QLineEdit();
    QLineEdit *edit2 = new QLineEdit();

    QPushButton *button1 = new QPushButton("submit");

    layout->addRow(label1,edit1);
    layout->addRow(label2,edit2);
    layout->addRow(nullptr,button1);
}

Widget::~Widget()
{
    delete ui;
}

