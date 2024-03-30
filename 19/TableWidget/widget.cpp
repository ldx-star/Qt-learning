#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tableWidget->insertRow(0);
    ui->tableWidget->insertRow(1);
    ui->tableWidget->insertRow(2);

    ui->tableWidget->insertColumn(0);
    ui->tableWidget->insertColumn(1);
    ui->tableWidget->insertColumn(2);

    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("id"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("name"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("age"));

    ui->tableWidget->setItem(0,0,new QTableWidgetItem("1001"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("ZhangSan"));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem("20"));

    ui->tableWidget->setItem(1,0,new QTableWidgetItem("1002"));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem("LiSi"));
    ui->tableWidget->setItem(1,2,new QTableWidgetItem("25"));

    ui->tableWidget->setItem(2,0,new QTableWidgetItem("1003"));
    ui->tableWidget->setItem(2,1,new QTableWidgetItem("WangWu"));
    ui->tableWidget->setItem(2,2,new QTableWidgetItem("23"));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_addRow_clicked()
{
    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowCount);
}

void Widget::on_pushButton_addCol_clicked()
{
    const QString &col_name = ui->lineEdit->text();
    if(!col_name.size()) return ;

    int colCount = ui->tableWidget->columnCount();
    ui->tableWidget->insertColumn(colCount);
    ui->tableWidget->setHorizontalHeaderItem(colCount,new QTableWidgetItem(col_name));
}

void Widget::on_pushButton_delRow_clicked()
{
    int selected_row = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(selected_row);
}

void Widget::on_pushButton_delCol_clicked()
{
    int selected_col = ui->tableWidget->currentColumn();
    ui->tableWidget->removeColumn(selected_col);
}
