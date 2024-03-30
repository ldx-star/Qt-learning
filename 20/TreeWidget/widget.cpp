#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->treeWidget->setHeaderLabel("animal");


    QTreeWidgetItem *item1 = new QTreeWidgetItem();
    item1->setText(0,"cat");
    ui->treeWidget->addTopLevelItem(item1);

    QTreeWidgetItem *item1_1 = new QTreeWidgetItem();
    item1_1->setText(0,"hello kety");

    item1->addChild(item1_1);

    QTreeWidgetItem *item2 = new QTreeWidgetItem();
    item2->setText(0,"dog");
    ui->treeWidget->addTopLevelItem(item2);



}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_addTop_clicked()
{
    const QString &name = ui->lineEdit->text();
    QTreeWidgetItem *item = new QTreeWidgetItem();
    item->setText(0,name);
    ui->treeWidget->addTopLevelItem(item);
}

void Widget::on_pushButton_addSelected_clicked()
{
    QTreeWidgetItem *cur_item = ui->treeWidget->currentItem();
    if(!cur_item) return;

    const QString &name = ui->lineEdit->text();
    QTreeWidgetItem *item = new QTreeWidgetItem();
    item->setText(0,name);

    cur_item->addChild(item);
}

void Widget::on_pushButton_delete_clicked()
{
    QTreeWidgetItem *cur_item = ui->treeWidget->currentItem();
    if(!cur_item) return;

    QTreeWidgetItem *parent = cur_item->parent();
    if(parent){
        parent->removeChild(cur_item);
    }else{
        int index = ui->treeWidget->indexOfTopLevelItem(cur_item);
        ui->treeWidget->takeTopLevelItem(index);
    }
}
