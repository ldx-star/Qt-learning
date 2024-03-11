#include "mylabel.h"
#include <iostream>
#include <QDebug>

MyLabel::MyLabel(QWidget *parent):QLabel(parent) // call the constructor of the parent class
{

}
MyLabel::~MyLabel()
{
//       std::cout << "MyLabel has been destoyed" << std::endl;
    qDebug() << "MyLabel has been destroyed";
}
