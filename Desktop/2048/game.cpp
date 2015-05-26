#include "game.h"
#include "ui_game.h"

#include<iostream>
#include<ctime>

int map[16];
game::game(QWidget *parent, result *res):QWidget(parent),ui(new Ui::game)
{
    ui->setupUi(this);
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

