#ifndef GAME_H
#define GAME_H

#include<QLabel>
#include <QWidget>
#include <QPushButton>
#include <cell.h>
#include "result.h"
#include "event.h"

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    explicit game(QWidget *parent ,result *res);
    ~game();
private:

    Event *ev;
    Ui::game *ui;
    QWidget *mainWindow;
    result *resWindow;

};

#endif // GAME_H
