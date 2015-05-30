#include "cell.h"
#include<QObject>
#include<QPalette>

cell::cell(QWidget *parent, int Row, int Col) :
    QObject(parent)
{
    row=Row;
    col=Col;
    label=new QLabel(parent);
    label->setGeometry(100*col+80,100*row+90,100,100);
    label->setMinimumSize(40, 0);
    label->setFrameStyle(QFrame::Box);
    label->setAlignment(Qt::AlignCenter);
    label->setStyleSheet("font-size : 24px;"
                         "background-color: rgba(255, 255, 255, 100);"
                         "selection-color: rgb(255, 255, 255);"
                         );
    label->setText(s);
}

cell::~cell()
{
    delete label;
}

void cell::set(int num)
{
    s = s.setNum(num);
    label->setText(s);
}
