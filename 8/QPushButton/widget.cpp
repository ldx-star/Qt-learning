#include "widget.h"
#include "ui_widget.h"
#include <QIcon>
#include <QResizeEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QIcon icon(":/5t5.png");
    ui->pushButton_target->setIcon(icon);
    ui->pushButton_target->setIconSize(QSize(100,100));

    ui->pushButton_up->setShortcut(QKeySequence(Qt::Key_Up));
    ui->pushButton_down->setShortcut(QKeySequence(Qt::Key_Down));
    ui->pushButton_left->setShortcut(QKeySequence(Qt::Key_Left));
    ui->pushButton_right->setShortcut(QKeySequence(Qt::Key_Right));

    ui->pushButton_up->setAutoRepeat(true);
    ui->pushButton_down->setAutoRepeat(true);
    ui->pushButton_left->setAutoRepeat(true);
    ui->pushButton_right->setAutoRepeat(true);

    QRect rect = this->geometry();
    ui->label_2->setGeometry(0,0,rect.width(),rect.height());
    QPixmap pixmap(":/5t5.png");
//    ui->label_2->setPixmap(pixmap);
//    ui->label_2->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    ui->label_2->setGeometry(0,0,event->size().width(),event->size().height());
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

void Widget::on_pushButton_left_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x()-10,rect.y(),rect.width(),rect.height());
}

void Widget::on_pushButton_right_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x()+10,rect.y(),rect.width(),rect.height());
}

void Widget::on_radioButton_male_clicked()
{
    ui->label->setText("the option is : mael");
}

void Widget::on_radioButton_female_clicked()
{
    ui->label->setText("the option is : femael");
}

