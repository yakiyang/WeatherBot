#include "pro_2048.h"
#include "ui_pro_2048.h"

pro_2048::pro_2048(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pro_2048)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(StartClick()));
    Gamewindow=NULL;
    resDialog=new result;
}

pro_2048::~pro_2048()
{
    delete ui;
}
void pro_2048::StartClick()
{
    Gamewindow=new game(this,resDialog);
    connect(resDialog,SIGNAL(reset()),this,SLOT(resetGame()));
    this->setCentralWidget(Gamewindow);
}

void pro_2048::resetGame()
{
    resDialog->hide();
    if(Gamewindow!=NULL){
        delete Gamewindow;
    }
    Gamewindow=new game(this,resDialog);
    this->setCentralWidget(Gamewindow);
}
