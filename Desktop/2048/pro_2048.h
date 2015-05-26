#ifndef PRO_2048_H
#define PRO_2048_H

#include <QMainWindow>
#include "game.h"
#include "result.h"
namespace Ui {
class pro_2048;
}

class pro_2048 : public QMainWindow
{
    Q_OBJECT

public:
    explicit pro_2048(QWidget *parent = 0);
    ~pro_2048();
private slots:
    void StartClick();
    void resetGame();
private:
    Ui::pro_2048 *ui;
    game *Gamewindow;
    result *resDialog;
};

#endif // PRO_2048_H
