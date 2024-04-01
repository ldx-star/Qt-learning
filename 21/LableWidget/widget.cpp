#include "widget.h"
#include "ui_widget.h"
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel *label1 = new QLabel(ui->tab);
    label1->setText("page 1");
    label1->resize(100,50);
    QLabel *label2 = new QLabel(ui->tab_2);
    label2->setText("page 2");
    label2->resize(100,50);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_add_clicked()
{
    QWidget *w = new QWidget();
    int count = ui->tabWidget->count();
    ui->tabWidget->addTab(w,QString("tab") + QString::number(count + 1));
    QLabel *label = new QLabel(w);
    label->setText(QString("page") + QString::number(count+1));
    label->resize(100,50);
    ui->tabWidget->setCurrentIndex(count);
}

void Widget::on_pushButton_delete_clicked()
{
    int index = ui->tabWidget->currentIndex();
    ui->tabWidget->removeTab(index);
}
