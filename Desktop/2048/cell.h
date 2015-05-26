#ifndef CELL_H
#define CELL_H

#include <QLabel>
#include <QObject>
#include <QWidget>

class cell : public QObject
{
    Q_OBJECT

public:
    explicit cell(QWidget *parent, int Row, int Col);
    ~cell();
    void set(int num);
private:
    QLabel *label;
    int row,col;
    int *Turn;
    QString s;
};

#endif // CELL_H
