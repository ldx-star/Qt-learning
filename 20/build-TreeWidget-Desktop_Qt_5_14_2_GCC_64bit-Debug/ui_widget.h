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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTreeWidget *treeWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_addTop;
    QPushButton *pushButton_addSelected;
    QPushButton *pushButton_delete;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        treeWidget = new QTreeWidget(Widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(40, 50, 441, 471));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(522, 110, 191, 25));
        pushButton_addTop = new QPushButton(Widget);
        pushButton_addTop->setObjectName(QString::fromUtf8("pushButton_addTop"));
        pushButton_addTop->setGeometry(QRect(580, 160, 89, 25));
        pushButton_addSelected = new QPushButton(Widget);
        pushButton_addSelected->setObjectName(QString::fromUtf8("pushButton_addSelected"));
        pushButton_addSelected->setGeometry(QRect(580, 210, 89, 25));
        pushButton_delete = new QPushButton(Widget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(580, 260, 89, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Widget", "node name", nullptr));
        pushButton_addTop->setText(QCoreApplication::translate("Widget", "top", nullptr));
        pushButton_addSelected->setText(QCoreApplication::translate("Widget", "selected", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Widget", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
