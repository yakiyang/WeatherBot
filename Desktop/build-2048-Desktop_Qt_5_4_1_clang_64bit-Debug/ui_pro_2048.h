/********************************************************************************
** Form generated from reading UI file 'pro_2048.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRO_2048_H
#define UI_PRO_2048_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pro_2048
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *pro_2048)
    {
        if (pro_2048->objectName().isEmpty())
            pro_2048->setObjectName(QStringLiteral("pro_2048"));
        pro_2048->resize(559, 554);
        pro_2048->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(pro_2048);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 170, 381, 131));
        QFont font;
        font.setFamily(QStringLiteral("Stone Sans ITC TT"));
        font.setPointSize(144);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(204, 255, 102);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 300, 141, 91));
        QFont font1;
        font1.setFamily(QStringLiteral("Stone Sans ITC TT"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setMouseTracking(true);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton->setAcceptDrops(false);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(204, 255, 102);"));
        pushButton->setAutoRepeatDelay(100);
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(true);
        pro_2048->setCentralWidget(centralWidget);

        retranslateUi(pro_2048);

        QMetaObject::connectSlotsByName(pro_2048);
    } // setupUi

    void retranslateUi(QMainWindow *pro_2048)
    {
        pro_2048->setWindowTitle(QApplication::translate("pro_2048", "pro_2048", 0));
        label->setText(QApplication::translate("pro_2048", "2048", 0));
        pushButton->setText(QApplication::translate("pro_2048", "start", 0));
    } // retranslateUi

};

namespace Ui {
    class pro_2048: public Ui_pro_2048 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRO_2048_H
