#ifndef EVENT_H
#define EVENT_H

#include <cell.h>
#include <QWidget>
#include<QLabel>
#include<iostream>
#include<ctime>
#include <QKeyEvent>
#include "result.h"

class Event : public QWidget
{
    Q_OBJECT

public:
    explicit Event(QWidget *parent = 0 ,result *res = 0);
    ~Event();
    void Init();
    void MapMove(int* start ,int* add);
    void MapAdd(int* start ,int* add);
    int left_start[4];
    int right_start[4];
    int up_start[4];
    int down_start[4];
    int left_add[4];
    int right_add[4];
    int up_add[4];
    int down_add[4];
    int map[16];
    int map_last[16];
    bool test[16];
    int sc;
    QString s;
    cell *label[16];
protected:
    void keyPressEvent(QKeyEvent *event);
    result *resWindow;
    QLabel *score;

};

#endif // EVENT_H
