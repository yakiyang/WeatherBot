#include "result.h"
#include "ui_result.h"

result::result(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::result)
{
    ui->setupUi(this);
}

result::~result()
{
    delete ui;
}
void result::setWinner(char winner)
{
    if(winner=='w')
        ui->label->setText("Win");
    else if(winner=='l')
        ui->label->setText("Lose");
}

void result::on_pushButton_2_clicked()
{
    QApplication::exit(0);
}

void result::on_pushButton_clicked()
{
    emit reset();
}
