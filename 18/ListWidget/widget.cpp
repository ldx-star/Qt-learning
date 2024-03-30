#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->addItem("C++");
    ui->listWidget->addItem("Java");
    ui->listWidget->addItem("Python");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_add_clicked()
{
    const QString &text = ui->lineEdit->text();
    ui->listWidget->addItem(text);
}

void Widget::on_pushButton_delete_clicked()
{
    int row = ui->listWidget->currentRow();
    if(row < 0) return ;
    ui->listWidget->takeItem(row);
}

void Widget::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    if(current != nullptr) qDebug() << "current selection :" << current->text();
    if(previous != nullptr) qDebug() << "previous selection :" << previous->text();
}
