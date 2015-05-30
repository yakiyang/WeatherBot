#include "event.h"

Event::Event(QWidget *parent, result *res) :
    QWidget(parent)
{
    resWindow=res;

    int i ,j ,k;
    srand(time(NULL));
    for(i=0;i<16;i++)
       map[i]=0;
    i=rand()%16;
    map[i]=2;

    sc=0;
    score=new QLabel(this);
    score->setGeometry(10,40,100,30);
    score->setAlignment(Qt::AlignCenter);
    score->setStyleSheet("font-size : 24px;"
                         "background-color: rgba(255, 255, 255, 0);"
                         "selection-color: rgb(255, 255, 255);"
                         "color: rgb(255, 255, 255);");

    for(i = 0, k = 0; i < 4; i++, k = k + 4)
    {
        for(j = 0; j < 4; j++)
        {
            label[k + j] = new cell(this ,i,j);
            label[k + j]->set(map[k+j]);
        }
    }
}
Event::~Event(){}
void Event::Init()
{

    srand(time(NULL));
    int i ,j;
    for(i=0;i<4;i++)
        up_start[i]=i;
    for(i=12,j=0;i<4,j<4;i++,j++)
        down_start[j]=i;
    for(i=3,j=0;i<16 ,j<4;i=i+4,j++)
        right_start[j]=i;
    for(i=0,j=0;i<16,j<4;i=i+4,j++)
        left_start[j]=i;

    for(i=0;i<4;i++)
    {
        up_add[i]=4*i;
        down_add[i]=-4*i;
        right_add[i]=-i;
        left_add[i]=i;
    }

}
void Event::MapMove(int* start ,int* add)
{
    int i ,j ,k ,sp ,sp1;
    for(j=0;j<4;j++)
    {
        for(i=0;i<4;i++)
        {
            sp=start[j]+add[i];
            if(map[sp]!=0)
            {
                for(k=0;k<i;k++)
                {
                    sp1=start[j]+add[k];
                    if(map[sp1]==0)
                    {
                        map[sp1]=map[sp];
                        map[sp]=0;
                        break;
                    }
                }
            }
        }
    }
}
void Event::MapAdd(int* start ,int* add)
{
    int i ,j ,lastsp ,sp;
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
        {
            lastsp=start[i]+add[j];
            sp=start[i]+add[j+1];
            if(map[sp]==0)
                break;
            if(map[sp]==map[lastsp])
            {
                map[lastsp]=map[sp]+map[lastsp];
                map[sp]=0;
            }
        }

}
void Event::keyPressEvent(QKeyEvent *event)
{
    int i ,j ,n;
    srand(time(NULL));
    switch (event->key()){
    case Qt::Key_Left:
        MapMove(left_start ,left_add);
        MapAdd(left_start ,left_add);
        MapMove(left_start ,left_add);
        break;
    case Qt::Key_Right:
        MapMove(right_start ,right_add);
        MapAdd(right_start ,right_add);
        MapMove(right_start ,right_add);
        break;
    case Qt::Key_Up:
        MapMove(up_start ,up_add);
        MapAdd(up_start ,up_add);
        MapMove(up_start ,up_add);
        break;
    case Qt::Key_Down:
        MapMove(down_start ,down_add);
        MapAdd(down_start ,down_add);
        MapMove(down_start ,down_add);
        break;
    default:
        break;
    }
    n=0;
    for(i=0;i<16;i++)
        test[i]=true;
    while(1==1)
    {
        i=rand()%16;
        if(map[i]==0&&test[i]==true)
        {
            map[i]=2;
            break;
        }
        test[i]=false;
        for(j=0;j<16;j++)
            if(test[j]==false)
                n++;
        if(n==16)
            break;
        n=0;
    }
    n=0;
    for(i=0;i<16;i++)
    {
        label[i]->set(map[i]);
        sc=sc+map[i];
        s = s.setNum(sc);
        score->setText(s);
        if(map_last[i]==map[i]&&map[i]!=0)
            n++;
        if(map[i]==2048)
        {
            resWindow->setWinner('w');
            resWindow->show();
        }
    }
    if(n==16)
    {
        resWindow->setWinner('l');
        resWindow->show();
    }
    for(i=0;i<16;i++)
        map_last[i]=map[i];

}
