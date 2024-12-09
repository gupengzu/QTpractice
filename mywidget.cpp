#include "mywidget.h"
#include<QpushButton>
#include"mypushbutton.h"
#include<QDebug>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{

    QPushButton* btn=new QPushButton;
   // btn->show();//show以顶层方式弹出窗口控制插件
    //让btn对象依赖在myWidget窗口中
    btn->setParent(this);
    //显示文本
    btn->setText("第一个");
    //第二个
    QPushButton*btn2=new QPushButton("second",this);

    btn2->move(100,200);

    resize(600,400);
    setWindowTitle("第一个窗口");
    setFixedSize(600,400);

    mypushButton*myBtn=new mypushButton;
    myBtn->setText("我自己的按钮");
    myBtn->move(200,0);
    myBtn->setParent(this);

    connect(myBtn,&QPushButton::clicked,this,&myWidget::close);

}

myWidget::~myWidget()
{
    qDebug()<<"";
}
