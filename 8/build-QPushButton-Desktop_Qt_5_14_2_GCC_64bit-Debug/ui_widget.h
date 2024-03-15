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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_target;
    QPushButton *pushButton_up;
    QPushButton *pushButton_down;
    QPushButton *pushButton_right;
    QPushButton *pushButton_left;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton_target = new QPushButton(Widget);
        pushButton_target->setObjectName(QString::fromUtf8("pushButton_target"));
        pushButton_target->setGeometry(QRect(310, 120, 161, 71));
        pushButton_up = new QPushButton(Widget);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(360, 370, 51, 41));
        pushButton_down = new QPushButton(Widget);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(360, 450, 51, 41));
        pushButton_right = new QPushButton(Widget);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        pushButton_right->setGeometry(QRect(410, 410, 51, 41));
        pushButton_left = new QPushButton(Widget);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        pushButton_left->setGeometry(QRect(310, 410, 51, 41));
        radioButton_male = new QRadioButton(Widget);
        radioButton_male->setObjectName(QString::fromUtf8("radioButton_male"));
        radioButton_male->setGeometry(QRect(580, 280, 112, 23));
        radioButton_female = new QRadioButton(Widget);
        radioButton_female->setObjectName(QString::fromUtf8("radioButton_female"));
        radioButton_female->setGeometry(QRect(580, 320, 112, 23));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 220, 181, 41));
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(50, 200, 92, 23));
        checkBox_2 = new QCheckBox(Widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(50, 250, 92, 23));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(550, 60, 191, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_target->setText(QString());
        pushButton_up->setText(QCoreApplication::translate("Widget", "up", nullptr));
        pushButton_down->setText(QCoreApplication::translate("Widget", "down", nullptr));
        pushButton_right->setText(QCoreApplication::translate("Widget", "right", nullptr));
        pushButton_left->setText(QCoreApplication::translate("Widget", "left", nullptr));
        radioButton_male->setText(QCoreApplication::translate("Widget", "male", nullptr));
        radioButton_female->setText(QCoreApplication::translate("Widget", "female", nullptr));
        label->setText(QCoreApplication::translate("Widget", "the option is :", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "CheckBox", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
