#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
    srand(time(0));
}


void Widget::on_pushButton_stop_clicked()
{
    if(ui->pushButton_up->isEnabled() && ui->pushButton_down->isEnabled()&&ui->pushButton_left->isEnabled()&&ui->pushButton_right->isEnabled()){
        ui->pushButton_up->setEnabled(false);
        ui->pushButton_down->setEnabled(false);
        ui->pushButton_left->setEnabled(false);
        ui->pushButton_right->setEnabled(false);
    }else{
        ui->pushButton_up->setEnabled(true);
        ui->pushButton_down->setEnabled(true);
        ui->pushButton_left->setEnabled(true);
        ui->pushButton_right->setEnabled(true);
    }

}

void Widget::on_pushButton_up_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x(),rect.y()-10,rect.width(),rect.height());
}

void Widget::on_pushButton_down_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x(),rect.y()+10,rect.width(),rect.height());
}

void Widget::on_pushButton_right_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x()+10,rect.y(),rect.width(),rect.height());
}

void Widget::on_pushButton_left_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x()-10,rect.y(),rect.width(),rect.height());
}

void Widget::on_pushButton_right_pressed()
{
    int w = this->width();
    int h = this->height();
    int x = rand() % w;
    int y = rand() % h;
    ui->pushButton_right->move(x,y);
}
