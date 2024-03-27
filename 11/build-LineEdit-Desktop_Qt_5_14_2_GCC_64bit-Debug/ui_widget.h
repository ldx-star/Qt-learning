/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_submit;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_comfirm_password;
    QLabel *label_5;
    QLabel *label_comfirm_password;
    QCheckBox *checkBox_display;
    QCheckBox *checkBox_display_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 150, 91, 41));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 210, 91, 41));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 330, 91, 41));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 380, 91, 41));
        pushButton_submit = new QPushButton(Widget);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setEnabled(false);
        pushButton_submit->setGeometry(QRect(270, 450, 201, 25));
        lineEdit_name = new QLineEdit(Widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(270, 180, 201, 25));
        lineEdit_password = new QLineEdit(Widget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(270, 240, 201, 25));
        radioButton_male = new QRadioButton(Widget);
        radioButton_male->setObjectName(QString::fromUtf8("radioButton_male"));
        radioButton_male->setGeometry(QRect(270, 360, 112, 23));
        radioButton_female = new QRadioButton(Widget);
        radioButton_female->setObjectName(QString::fromUtf8("radioButton_female"));
        radioButton_female->setGeometry(QRect(380, 360, 112, 23));
        lineEdit_phone = new QLineEdit(Widget);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        lineEdit_phone->setGeometry(QRect(270, 410, 201, 25));
        lineEdit_comfirm_password = new QLineEdit(Widget);
        lineEdit_comfirm_password->setObjectName(QString::fromUtf8("lineEdit_comfirm_password"));
        lineEdit_comfirm_password->setGeometry(QRect(270, 300, 201, 25));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 270, 131, 41));
        label_comfirm_password = new QLabel(Widget);
        label_comfirm_password->setObjectName(QString::fromUtf8("label_comfirm_password"));
        label_comfirm_password->setGeometry(QRect(560, 300, 161, 31));
        checkBox_display = new QCheckBox(Widget);
        checkBox_display->setObjectName(QString::fromUtf8("checkBox_display"));
        checkBox_display->setGeometry(QRect(480, 240, 92, 23));
        checkBox_display_2 = new QCheckBox(Widget);
        checkBox_display_2->setObjectName(QString::fromUtf8("checkBox_display_2"));
        checkBox_display_2->setGeometry(QRect(480, 300, 101, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "name", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "password", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "sex", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "tele", nullptr));
        pushButton_submit->setText(QCoreApplication::translate("Widget", "submit", nullptr));
        radioButton_male->setText(QCoreApplication::translate("Widget", "male", nullptr));
        radioButton_female->setText(QCoreApplication::translate("Widget", "female", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "comfirm password", nullptr));
        label_comfirm_password->setText(QCoreApplication::translate("Widget", "password different", nullptr));
        checkBox_display->setText(QCoreApplication::translate("Widget", "display", nullptr));
        checkBox_display_2->setText(QCoreApplication::translate("Widget", "display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
