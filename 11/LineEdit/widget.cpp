#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QRegExpValidator>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //init lineEdit_name
    ui->lineEdit_name->setPlaceholderText("your name");
    ui->lineEdit_name->setClearButtonEnabled(true);

    //init lineEdit_password
    ui->lineEdit_password->setPlaceholderText("your password");
    ui->lineEdit_password->setClearButtonEnabled(true);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);

    ui->lineEdit_comfirm_password->setPlaceholderText("comfirm your password");
    ui->lineEdit_comfirm_password->setClearButtonEnabled(true);
    ui->lineEdit_comfirm_password->setEchoMode(QLineEdit::Password);

    //init lineEidt_phone
    ui->lineEdit_phone->setPlaceholderText("your telephone number");
    ui->lineEdit_phone->setClearButtonEnabled(true);

    QRegExp regExp("^1\\d{10}$");
    ui->lineEdit_phone->setValidator(new QRegExpValidator(regExp));

    ui->label_comfirm_password->setStyleSheet("color:red");
    ui->label_comfirm_password->setHidden(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_submit_clicked()
{
    QString gender = ui->radioButton_male->isChecked() ? "male" : "female";
    qDebug() << "name: " << ui->lineEdit_name->text() << endl
             << "password: " << ui->lineEdit_password->text() << endl
             << "gender: " << gender << endl
             << "telephone: " << ui->lineEdit_phone->text();
}

void Widget::on_lineEdit_phone_textEdited(const QString &text)
{
    QString content = text;
    int pos = 0;
    if(ui->lineEdit_phone->validator()->validate(content,pos) == QValidator::Acceptable){
        ui->pushButton_submit->setEnabled(true);
    }else{
        ui->pushButton_submit->setEnabled(false);
    }
}

void Widget::on_lineEdit_comfirm_password_textEdited(const QString &arg1)
{
    (void)arg1;
    const QString &s1 = ui->lineEdit_password->text();
    const QString &s2 = ui->lineEdit_comfirm_password->text();
    if(s1 != s2){
        ui->label_comfirm_password->setHidden(false);
    }else{
        ui->label_comfirm_password->setHidden(true);
    }
}

void Widget::on_checkBox_display_toggled(bool checked)
{
    if(checked){
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
    }else{
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    }
}


void Widget::on_checkBox_display_2_toggled(bool checked)
{
    if(checked){
        ui->lineEdit_comfirm_password->setEchoMode(QLineEdit::Normal);
    }else{
        ui->lineEdit_comfirm_password->setEchoMode(QLineEdit::Password);
    }
}
