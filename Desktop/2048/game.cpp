#include "game.h"
#include "ui_game.h"

#include<iostream>
#include<ctime>

int map[16];
game::game(QWidget *parent, result *res):QWidget(parent),ui(new Ui::game)
{
    ui->setupUi(this);
    srand(time(NULL));
    int a=rand()%6;
    if(a==0)
    ui->label_3->setStyleSheet("background-image:url(:/FOR1.tif);");
    if(a==1)
    ui->label_3->setStyleSheet("background-image:url(:/FOR2.tif);");
    if(a==2)
    ui->label_3->setStyleSheet("background-image:url(:/FOR3.tif);");
    if(a==3)
    ui->label_3->setStyleSheet("background-image:url(:/CAS1.tif);");
    if(a==4)
    ui->label_3->setStyleSheet("background-image:url(:/SKY1.tif);");
    if(a==5)
    ui->label_3->setStyleSheet("background-image:url(:/SKY2.tif);");
    mainWindow=parent;
    resWindow=res;

    ev=new Event(this ,resWindow);
    ev->Init();
    ev->setFont(QFont("Courier New", 25, QFont::Bold));
    ev->setFocus();


}
game::~game()
{
    delete ui;
}

