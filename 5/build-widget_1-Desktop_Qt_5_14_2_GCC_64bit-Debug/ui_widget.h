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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_target;
    QPushButton *pushButton_up;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_right;
    QPushButton *pushButton_down;
    QPushButton *pushButton_left;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(800, 600);
        pushButton_target = new QPushButton(Widget);
        pushButton_target->setObjectName(QString::fromUtf8("pushButton_target"));
        pushButton_target->setGeometry(QRect(290, 140, 89, 25));
        pushButton_up = new QPushButton(Widget);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(310, 370, 51, 41));
        pushButton_stop = new QPushButton(Widget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(310, 410, 51, 41));
        pushButton_right = new QPushButton(Widget);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        pushButton_right->setGeometry(QRect(360, 410, 51, 41));
        pushButton_down = new QPushButton(Widget);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(310, 450, 51, 41));
        pushButton_left = new QPushButton(Widget);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        pushButton_left->setGeometry(QRect(260, 410, 51, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_target->setText(QCoreApplication::translate("Widget", "target", nullptr));
        pushButton_up->setText(QCoreApplication::translate("Widget", "up", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("Widget", "stop", nullptr));
        pushButton_right->setText(QCoreApplication::translate("Widget", "right", nullptr));
        pushButton_down->setText(QCoreApplication::translate("Widget", "down", nullptr));
        pushButton_left->setText(QCoreApplication::translate("Widget", "left", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
