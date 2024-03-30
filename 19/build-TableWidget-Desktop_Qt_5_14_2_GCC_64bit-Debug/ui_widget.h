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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton_addRow;
    QPushButton *pushButton_addCol;
    QPushButton *pushButton_delRow;
    QPushButton *pushButton_delCol;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(70, 30, 641, 341));
        pushButton_addRow = new QPushButton(Widget);
        pushButton_addRow->setObjectName(QString::fromUtf8("pushButton_addRow"));
        pushButton_addRow->setGeometry(QRect(70, 400, 181, 25));
        pushButton_addCol = new QPushButton(Widget);
        pushButton_addCol->setObjectName(QString::fromUtf8("pushButton_addCol"));
        pushButton_addCol->setGeometry(QRect(260, 400, 181, 25));
        pushButton_delRow = new QPushButton(Widget);
        pushButton_delRow->setObjectName(QString::fromUtf8("pushButton_delRow"));
        pushButton_delRow->setGeometry(QRect(70, 450, 181, 25));
        pushButton_delCol = new QPushButton(Widget);
        pushButton_delCol->setObjectName(QString::fromUtf8("pushButton_delCol"));
        pushButton_delCol->setGeometry(QRect(260, 450, 181, 25));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(500, 430, 191, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_addRow->setText(QCoreApplication::translate("Widget", "add row", nullptr));
        pushButton_addCol->setText(QCoreApplication::translate("Widget", "add col", nullptr));
        pushButton_delRow->setText(QCoreApplication::translate("Widget", "del selected row", nullptr));
        pushButton_delCol->setText(QCoreApplication::translate("Widget", "del selected col", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Widget", "new column name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
