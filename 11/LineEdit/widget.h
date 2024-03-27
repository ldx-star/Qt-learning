#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_submit_clicked();

    void on_lineEdit_phone_textEdited(const QString &arg1);

    void on_lineEdit_comfirm_password_textEdited(const QString &arg1);

    void on_checkBox_display_toggled(bool checked);

    void on_checkBox_display_2_toggled(bool checked);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
