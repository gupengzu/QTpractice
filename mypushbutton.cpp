#include "mypushbutton.h"
#include<QDebug>
mypushButton::mypushButton(QWidget *parent)
    : QPushButton{parent}
{
    qDebug()<<"我的按钮类的构造";
}
mypushButton::~mypushButton()
{
    qDebug()<<"我的按钮类的析构";
}
