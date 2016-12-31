#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    i=0;
    data.resize(9);
    ui->label->setText("神在創造你的時候?");
    ui->label_2->setPixmap(QPixmap(":/godcreator.png"));
    ui->pushButton->setText("start");
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    //ui->label->adjustSize();
    i++;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    switch (i) {
    case 1:
        ui->label->setText("宇宙之神宙斯需要在凡間挑選一位可以成\n為精靈的人，而你幸運的被選中了，他現在要\n借助一種天體向你傳達他的旨意，你認為會是\n那種天體?");
        ui->label_2->setPixmap(QPixmap(":/12165626_904151329633628_1213194373_o.jpg"));
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton_4->setVisible(true);
        ui->pushButton->setText("太陽");
        ui->pushButton_2->setText("月亮");
        ui->pushButton_3->setText("水星");
        ui->pushButton_4->setText("土星");
        i++;
        break;
    case 2:
        data[0]=1;
        ui->label->setText("從前有一天，XXX走進了一座森林里\n遇到了一群小小兵\n小小兵們正在舉行耍憨趴踢並邀請你當作評審");
        //ui->label->setText("你選擇了「太陽」\n具權威感和支配力的魔力守護神：太陽神阿波羅\n你的個性一目了然，\n周身都散發著一種貴族氣質和王者風範，\n會權威的管轄你周圍的一切，做事獨立，\n非常懂得用權術和能力達到目的。\n同時具有正義感，為人正直忠誠，\n很喜歡交朋友，人緣相當不錯，\n極強的坦誠和樂觀的個性使你能夠成為很好的領袖。");
        ui->label_2->setPixmap(QPixmap(":/banana.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 4:
        ui->label->setText("在party進行到一半時敵軍來襲為了\n幫助小小兵們格魯決定賜給你武器");
        ui->label_2->setPixmap(QPixmap(":/804492_904146672967427_1072666401_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 6:
        ui->label->setText("你利用武器打敗敵軍但是卻\n被下了詛咒每次上廁所的時候都會遇到恐怖的事");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 8:
        ui->label->setText("後來你又發現名偵探柯南的其中一人和你是複製人");
        ui->label_2->setPixmap(QPixmap(":/12170206_904158786299549_1639660594_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 10:
        ui->label->setText("然後你覺得肚子很餓在森林中走著走著\n發現了一棵長滿水果的樹但樹下有個告示牌寫著\n\"只能摘一顆水果，不然水果會把你吃掉\"");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 12:
        ui->label->setText("走著走著突然下起大雨");
        ui->label_2->setPixmap(QPixmap(":/12170735_904141902967904_1996025238_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 14:
        ui->label->setText("走出小七之後，你發現神從你的面前迎來");
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 16:
        ui->label->setText("但是不論躲在哪棵樹後面都沒用，還是被神經病捉走，送到精神病院去，醫生要你填一份問卷");
        ui->pushButton->setVisible(false);
        ui->pushButton->setIcon(QIcon(QPixmap("")));
        ui->pushButton_2->setIcon(QIcon(QPixmap("")));
        ui->pushButton_3->setIcon(QIcon(QPixmap("")));
        ui->pushButton->setGeometry(100,300,400,50);
        ui->pushButton_2->setGeometry(100,360,400,50);
        ui->pushButton_3->setGeometry(100,420,400,50);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("next");
        ui->pushButton_4->setIcon(QIcon(QPixmap("")));
        ui->pushButton_4->setGeometry(100,480,400,50);
        i++;
        break;
    case 17:
        ui->label->setText("1.你很愛照鏡子,但每次照鏡子你都不滿意,請問理由為何呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("不滿意自己的外貌");
        ui->pushButton_2->setText("臉上有傷口");
        ui->pushButton_3->setText("胖了");
        ui->pushButton_4->setText("鏡子太髒");
        i++;
        break;
    case 18:
        ui->label->setText("2.無人居住的住宅內掛著一副在戰爭中負傷的軍人的肖像畫.這個軍人受傷的地方是哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("頭");
        ui->pushButton_2->setText("手臂");
        ui->pushButton_3->setText("眼睛");
        ui->pushButton_4->setText("心臟");
        i++;
        break;
    case 19:
        ui->label->setText("3.你在一個黑暗的森林中,眼前有一個亭子.當你正望著亭子發呆時,突然背後有東西咻地經過.那個東西是甚麼呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("野獸");
        ui->pushButton_2->setText("某位異性");
        ui->pushButton_3->setText("狗");
        ui->pushButton_4->setText("鬼");
        i++;
        break;
    case 20:
        ui->label->setText("4.你因為口渴而找了個販賣機奇怪的是這販賣機裡頭的飲料全都沒有商標.那麼你所選的飲料(液體)會是什麼顏色呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("藍");
        ui->pushButton_2->setText("紅");
        ui->pushButton_3->setText("透明");
        ui->pushButton_4->setText("其他");
        i++;
        break;
    case 21:
        ui->label->setText("5.黑暗的房間裡只有你一個人,而殺人魔在外面拿著刀子正在找你，由於沒有任何防身的東西,所以你選擇躲起來。請問你會躲在哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("門後面");
        ui->pushButton_2->setText("床下");
        ui->pushButton_3->setText("窗外");
        ui->pushButton_4->setText("衣櫃裡");
        i++;
        break;
    case 22:
        ui->label->setText("6.你終於下定決心要殺了憎恨長達10年的人。正在買刀子的你,眼前有一把150圓的刀與一把1500圓的刀，而你毫不猶豫地就選擇了150圓的刀。理由為何?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("我堅持不買貴的刀");
        ui->pushButton_2->setText("要讓他死得更痛苦");
        ui->pushButton_3->setText("150的刀看起來比較利");
        ui->pushButton_4->setText("手頭錢不夠");
        i++;
        break;


    default:
        break;
    }


}

void MainWindow::on_pushButton_2_clicked()
{
    switch(i){
    case 2:
        data[0]=2;
        ui->label->setText("從前有一天，XXX走進了一座森林里\n遇到了一群小小兵\n小小兵們正在舉行耍憨趴踢並邀請你當作評審");
        ui->label_2->setPixmap(QPixmap(":/banana.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 4:
        ui->label->setText("在party進行到一半時敵軍來襲為了\n幫助小小兵們格魯決定賜給你武器");
        ui->label_2->setPixmap(QPixmap(":/804492_904146672967427_1072666401_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 6:
        ui->label->setText("你利用武器打敗敵軍但是卻\n被下了詛咒每次上廁所的時候都會遇到恐怖的事");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 8:
        ui->label->setText("後來你又發現名偵探柯南的其中一人和你是複製人");
        ui->label_2->setPixmap(QPixmap(":/12170206_904158786299549_1639660594_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 10:
        ui->label->setText("然後你覺得肚子很餓在森林中走著走著\n發現了一棵長滿水果的樹但樹下有個告示牌寫著\n\"只能摘一顆水果，不然水果會把你吃掉\"");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 12:
        ui->label->setText("走著走著突然下起大雨");
        ui->label_2->setPixmap(QPixmap(":/12170735_904141902967904_1996025238_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 14:
        ui->label->setText("走出小七之後，你發現神從你的面前迎來");
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 16:
        ui->label->setText("但是不論躲在哪棵樹後面都沒用，還是被神經病捉走，送到精神病院去，醫生要你填一份問卷");
        ui->pushButton->setVisible(false);
        ui->pushButton->setIcon(QIcon(QPixmap("")));
        ui->pushButton_2->setIcon(QIcon(QPixmap("")));
        ui->pushButton_3->setIcon(QIcon(QPixmap("")));
        ui->pushButton->setGeometry(100,300,400,50);
        ui->pushButton_2->setGeometry(100,360,400,50);
        ui->pushButton_3->setGeometry(100,420,400,50);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("next");
        ui->pushButton_4->setIcon(QIcon(QPixmap("")));
        ui->pushButton_4->setGeometry(100,480,400,50);
        i++;
        break;
    case 17:
        ui->label->setText("1.你很愛照鏡子,但每次照鏡子你都不滿意,請問理由為何呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("不滿意自己的外貌");
        ui->pushButton_2->setText("臉上有傷口");
        ui->pushButton_3->setText("胖了");
        ui->pushButton_4->setText("鏡子太髒");
        i++;
        break;
    case 18:
        ui->label->setText("2.無人居住的住宅內掛著一副在戰爭中負傷的軍人的肖像畫.這個軍人受傷的地方是哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("頭");
        ui->pushButton_2->setText("手臂");
        ui->pushButton_3->setText("眼睛");
        ui->pushButton_4->setText("心臟");
        i++;
        break;
    case 19:
        ui->label->setText("3.你在一個黑暗的森林中,眼前有一個亭子.當你正望著亭子發呆時,突然背後有東西咻地經過.那個東西是甚麼呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("野獸");
        ui->pushButton_2->setText("某位異性");
        ui->pushButton_3->setText("狗");
        ui->pushButton_4->setText("鬼");
        i++;
        break;
    case 20:
        ui->label->setText("4.你因為口渴而找了個販賣機奇怪的是這販賣機裡頭的飲料全都沒有商標.那麼你所選的飲料(液體)會是什麼顏色呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("藍");
        ui->pushButton_2->setText("紅");
        ui->pushButton_3->setText("透明");
        ui->pushButton_4->setText("其他");
        i++;
        break;
    case 21:
        ui->label->setText("5.黑暗的房間裡只有你一個人,而殺人魔在外面拿著刀子正在找你，由於沒有任何防身的東西,所以你選擇躲起來。請問你會躲在哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("門後面");
        ui->pushButton_2->setText("床下");
        ui->pushButton_3->setText("窗外");
        ui->pushButton_4->setText("衣櫃裡");
        i++;
        break;
    case 22:
        ui->label->setText("6.你終於下定決心要殺了憎恨長達10年的人。正在買刀子的你,眼前有一把150圓的刀與一把1500圓的刀，而你毫不猶豫地就選擇了150圓的刀。理由為何?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("我堅持不買貴的刀");
        ui->pushButton_2->setText("要讓他死得更痛苦");
        ui->pushButton_3->setText("150的刀看起來比較利");
        ui->pushButton_4->setText("手頭錢不夠");
        i++;
        break;


    }

}

void MainWindow::on_pushButton_3_clicked()
{
    switch(i){
    case 2:
        data[0]=3;
        ui->label->setText("從前有一天，XXX走進了一座森林里\n遇到了一群小小兵\n小小兵們正在舉行耍憨趴踢並邀請你當作評審");
        ui->label_2->setPixmap(QPixmap(":/banana.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 4:
        ui->label->setText("在party進行到一半時敵軍來襲為了\n幫助小小兵們格魯決定賜給你武器");
        ui->label_2->setPixmap(QPixmap(":/804492_904146672967427_1072666401_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 6:
        ui->label->setText("你利用武器打敗敵軍但是卻\n被下了詛咒每次上廁所的時候都會遇到恐怖的事");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 8:
        ui->label->setText("後來你又發現名偵探柯南的其中一人和你是複製人");
        ui->label_2->setPixmap(QPixmap(":/12170206_904158786299549_1639660594_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 10:
        ui->label->setText("然後你覺得肚子很餓在森林中走著走著\n發現了一棵長滿水果的樹但樹下有個告示牌寫著\n\"只能摘一顆水果，不然水果會把你吃掉\"");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 12:
        ui->label->setText("走著走著突然下起大雨");
        ui->label_2->setPixmap(QPixmap(":/12170735_904141902967904_1996025238_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 14:
        ui->label->setText("走出小七之後，你發現神從你的面前迎來");
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 16:
        ui->label->setText("但是不論躲在哪棵樹後面都沒用，還是被神經病捉走，送到精神病院去，醫生要你填一份問卷");
        ui->pushButton->setVisible(false);
        ui->pushButton->setIcon(QIcon(QPixmap("")));
        ui->pushButton_2->setIcon(QIcon(QPixmap("")));
        ui->pushButton_3->setIcon(QIcon(QPixmap("")));
        ui->pushButton->setGeometry(100,300,400,50);
        ui->pushButton_2->setGeometry(100,360,400,50);
        ui->pushButton_3->setGeometry(100,420,400,50);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("next");
        ui->pushButton_4->setIcon(QIcon(QPixmap("")));
        ui->pushButton_4->setGeometry(100,480,400,50);
        i++;
        break;
    case 17:
        ui->label->setText("1.你很愛照鏡子,但每次照鏡子你都不滿意,請問理由為何呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("不滿意自己的外貌");
        ui->pushButton_2->setText("臉上有傷口");
        ui->pushButton_3->setText("胖了");
        ui->pushButton_4->setText("鏡子太髒");
        i++;
        break;
    case 18:
        ui->label->setText("2.無人居住的住宅內掛著一副在戰爭中負傷的軍人的肖像畫.這個軍人受傷的地方是哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("頭");
        ui->pushButton_2->setText("手臂");
        ui->pushButton_3->setText("眼睛");
        ui->pushButton_4->setText("心臟");
        i++;
        break;
    case 19:
        ui->label->setText("3.你在一個黑暗的森林中,眼前有一個亭子.當你正望著亭子發呆時,突然背後有東西咻地經過.那個東西是甚麼呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("野獸");
        ui->pushButton_2->setText("某位異性");
        ui->pushButton_3->setText("狗");
        ui->pushButton_4->setText("鬼");
        i++;
        break;
    case 20:
        ui->label->setText("4.你因為口渴而找了個販賣機奇怪的是這販賣機裡頭的飲料全都沒有商標.那麼你所選的飲料(液體)會是什麼顏色呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("藍");
        ui->pushButton_2->setText("紅");
        ui->pushButton_3->setText("透明");
        ui->pushButton_4->setText("其他");
        i++;
        break;
    case 21:
        ui->label->setText("5.黑暗的房間裡只有你一個人,而殺人魔在外面拿著刀子正在找你，由於沒有任何防身的東西,所以你選擇躲起來。請問你會躲在哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("門後面");
        ui->pushButton_2->setText("床下");
        ui->pushButton_3->setText("窗外");
        ui->pushButton_4->setText("衣櫃裡");
        i++;
        break;
    case 22:
        ui->label->setText("6.你終於下定決心要殺了憎恨長達10年的人。正在買刀子的你,眼前有一把150圓的刀與一把1500圓的刀，而你毫不猶豫地就選擇了150圓的刀。理由為何?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("我堅持不買貴的刀");
        ui->pushButton_2->setText("要讓他死得更痛苦");
        ui->pushButton_3->setText("150的刀看起來比較利");
        ui->pushButton_4->setText("手頭錢不夠");
        i++;
        break;







    }

}

void MainWindow::on_pushButton_4_clicked()
{
    switch(i){
    case 2:
        data[0]=4;
        ui->label->setText("從前有一天，XXX走進了一座森林里\n遇到了一群小小兵\n小小兵們正在舉行耍憨趴踢並邀請你當作評審");
        ui->label_2->setPixmap(QPixmap(":/banana.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 3:
        data[1]=4;
        ui->label->setText("請選出一隻你覺得最憨的小小兵");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("1號小小兵");
        ui->pushButton->setGeometry(200,300,200,50);
        ui->pushButton_2->setText("2號小小兵");
        ui->pushButton_2->setGeometry(200,360,200,50);
        ui->pushButton_3->setText("3號小小兵");
        ui->pushButton_3->setGeometry(200,420,200,50);
        ui->pushButton_4->setText("4號小小兵");
        ui->pushButton_4->setGeometry(200,480,200,50);
        i++;
        break;
    case 4:
        ui->label->setText("在party進行到一半時敵軍來襲為了\n幫助小小兵們格魯決定賜給你武器");
        ui->label_2->setPixmap(QPixmap(":/804492_904146672967427_1072666401_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 5:
        data[2]=4;
        ui->label->setText("面對強大的敵人軍隊\n你會想選擇下面哪一種武器呢？");
        ui->pushButton->setVisible(true);
        //ui->pushButton->setGeometry(100,150,200,200);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("武器A");
        ui->pushButton_2->setText("武器B");
        ui->pushButton_3->setText("武器C");
        ui->pushButton_4->setText("武器D");
        i++;
        break;
    case 6:
        ui->label->setText("你利用武器打敗敵軍但是卻被下了詛咒\n每次上廁所的時候都會遇到恐怖的事");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 7:
        ui->label->setText("你覺得會是哪一種？");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("進去會搖晃，然後會聽到嬰兒淒厲的哭聲");
        ui->pushButton->setGeometry(100,300,400,50);
        ui->pushButton->setFont(QFont("algerian",12,QFont::Bold));
        ui->pushButton_2->setText("進去會看見一個女鬼在吃自己眼球，問你要不要嚐一口");
        ui->pushButton_2->setGeometry(100,360,400,50);
        ui->pushButton_2->setFont(QFont("algerian",10,QFont::Bold));
        ui->pushButton_3->setText("使用中的廁所，但不知道裡面是誰");
        ui->pushButton_3->setGeometry(100,420,400,50);
        ui->pushButton_3->setFont(QFont("algerian",12,QFont::Bold));
        ui->pushButton_4->setText("冒著會拉在自己褲子裡的風險，死命忍住回家再上");
        ui->pushButton_4->setGeometry(100,480,400,50);
        ui->pushButton_4->setFont(QFont("algerian",12,QFont::Bold));
        i++;
        break;
    case 8:
        ui->label->setText("後來你又發現名偵探柯南\n的其中一人和你是複製人");
        ui->label_2->setPixmap(QPixmap(":/12170206_904158786299549_1639660594_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 9:
        ui->label->setText("所以請發揮柯南的觀察及推理能力\n觀察下面兩途有幾處不同");
        ui->pushButton->setVisible(true);
        //ui->pushButton->setGeometry(100,150,200,200);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("1-3個");
        ui->pushButton->setFont(QFont("algerian",20,QFont::Bold));
        ui->pushButton_2->setText("4-6個");
        ui->pushButton_2->setFont(QFont("algerian",20,QFont::Bold));
        ui->pushButton_3->setText("7-9個");
        ui->pushButton_3->setFont(QFont("algerian",20,QFont::Bold));
        ui->pushButton_4->setText("誰有時間一個一個找");
        ui->pushButton_4->setFont(QFont("algerian",20,QFont::Bold));
        i++;
        break;
    case 10:
        ui->label->setText("然後你覺得肚子很餓在森林中走著走著\n發現了一棵長滿水果的樹但樹下有個告示牌寫著\n\"只能摘一顆水果，不然水果會把你吃掉\"");
        ui->label_2->setPixmap(QPixmap(":/11990892_904137492968345_569674446_o.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 11:
        ui->label->setText("請選擇一種你最想吃的水果");
        ui->pushButton->setVisible(true);
        //ui->pushButton->setGeometry(100,150,200,200);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("蘋果");
        ui->pushButton_2->setText("芒果");
        ui->pushButton_3->setText("橘子");
        ui->pushButton_4->setText("木瓜");
        i++;
        break;
    case 12:
        ui->label->setText("走著走著突然下起大雨");
        ui->label_2->setPixmap(QPixmap(":/12170735_904141902967904_1996025238_n.jpg"));
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 13:
        ui->label->setText("匆忙躲進小七的你會選擇哪一把傘?");
        ui->pushButton->setVisible(true);
        //ui->pushButton->setGeometry(100,150,200,200);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("動物圖案");
        ui->pushButton_2->setText("圓點雨傘");
        ui->pushButton_3->setText("折疊雨傘");
        ui->pushButton_4->setText("淨色雨傘");
        i++;
        break;
    case 14:
        ui->label->setText("走出小七之後，你發現神從你的面前迎來");
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("Next");
        i++;
        break;
    case 15:
        ui->label->setText("這時候你會選擇躲在哪一棵樹後面？");
        ui->pushButton->setVisible(true);
        //ui->pushButton->setGeometry(100,150,200,200);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("");
        ui->pushButton->setGeometry(150,200,150,150);
        ui->pushButton->setIcon(QIcon(QPixmap(":/12166354_904120829636678_1458824845_n.jpg")));
        ui->pushButton->setIconSize(QSize(200,200));
        ui->pushButton_2->setText("");
        ui->pushButton_2->setGeometry(360,200,150,150);
        ui->pushButton_2->setIcon(QIcon(QPixmap(":/12167330_904120832970011_657808024_n.jpg")));
        ui->pushButton_2->setIconSize(QSize(150,150));
        ui->pushButton_3->setText("");
        ui->pushButton_3->setGeometry(150,360,150,150);
        ui->pushButton_3->setIcon(QIcon(QPixmap(":/12167163_904120826303345_927354916_n.jpg")));
        ui->pushButton_3->setIconSize(QSize(150,150));
        ui->pushButton_4->setText("");
        ui->pushButton_4->setGeometry(360,360,150,150);
        ui->pushButton_4->setIcon(QIcon(QPixmap(":/12166664_904120822970012_1077366550_n.jpg")));
        ui->pushButton_4->setIconSize(QSize(150,150));
        i++;
        break;
    case 16:
        ui->label->setText("但是不論躲在哪棵樹後面都沒用，還是被神經病捉走，送到精神病院去，醫生要你填一份問卷");
        ui->pushButton->setVisible(false);
        ui->pushButton->setIcon(QIcon(QPixmap("")));
        ui->pushButton_2->setIcon(QIcon(QPixmap("")));
        ui->pushButton_3->setIcon(QIcon(QPixmap("")));
        ui->pushButton->setGeometry(100,300,400,50);
        ui->pushButton_2->setGeometry(100,360,400,50);
        ui->pushButton_3->setGeometry(100,420,400,50);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setText("next");
        ui->pushButton_4->setIcon(QIcon(QPixmap("")));
        ui->pushButton_4->setGeometry(100,480,400,50);
        i++;
        break;
    case 17:
        ui->label->setText("1.你很愛照鏡子,但每次照鏡子你都不滿意,請問理由為何呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("不滿意自己的外貌");
        ui->pushButton_2->setText("臉上有傷口");
        ui->pushButton_3->setText("胖了");
        ui->pushButton_4->setText("鏡子太髒");
        i++;
        break;
    case 18:
        ui->label->setText("2.無人居住的住宅內掛著一副在戰爭中負傷的軍人的肖像畫.這個軍人受傷的地方是哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("頭");
        ui->pushButton_2->setText("手臂");
        ui->pushButton_3->setText("眼睛");
        ui->pushButton_4->setText("心臟");
        i++;
        break;
    case 19:
        ui->label->setText("3.你在一個黑暗的森林中,眼前有一個亭子.當你正望著亭子發呆時,突然背後有東西咻地經過.那個東西是甚麼呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("野獸");
        ui->pushButton_2->setText("某位異性");
        ui->pushButton_3->setText("狗");
        ui->pushButton_4->setText("鬼");
        i++;
        break;
    case 20:
        ui->label->setText("4.你因為口渴而找了個販賣機奇怪的是這販賣機裡頭的飲料全都沒有商標.那麼你所選的飲料(液體)會是什麼顏色呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("藍");
        ui->pushButton_2->setText("紅");
        ui->pushButton_3->setText("透明");
        ui->pushButton_4->setText("其他");
        i++;
        break;
    case 21:
        ui->label->setText("5.黑暗的房間裡只有你一個人,而殺人魔在外面拿著刀子正在找你，由於沒有任何防身的東西,所以你選擇躲起來。請問你會躲在哪裡呢?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("門後面");
        ui->pushButton_2->setText("床下");
        ui->pushButton_3->setText("窗外");
        ui->pushButton_4->setText("衣櫃裡");
        i++;
        break;
    case 22:
        ui->label->setText("6.你終於下定決心要殺了憎恨長達10年的人。正在買刀子的你,眼前有一把150圓的刀與一把1500圓的刀，而你毫不猶豫地就選擇了150圓的刀。理由為何?");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton->setText("我堅持不買貴的刀");
        ui->pushButton_2->setText("要讓他死得更痛苦");
        ui->pushButton_3->setText("150的刀看起來比較利");
        ui->pushButton_4->setText("手頭錢不夠");
        i++;
        break;















    }
}
