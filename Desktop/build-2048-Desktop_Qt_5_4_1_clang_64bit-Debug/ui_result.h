/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *result)
    {
        if (result->objectName().isEmpty())
            result->setObjectName(QStringLiteral("result"));
        result->resize(466, 409);
        result->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(result);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 230, 121, 41));
        QFont font;
        font.setFamily(QStringLiteral("Stone Sans ITC TT"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(204, 255, 102);"));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(result);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 240, 115, 32));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(204, 255, 102);"));
        pushButton_2->setFlat(true);
        label = new QLabel(result);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 110, 171, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("Stone Sans ITC TT"));
        font1.setPointSize(72);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(result);

        QMetaObject::connectSlotsByName(result);
    } // setupUi

    void retranslateUi(QWidget *result)
    {
        result->setWindowTitle(QApplication::translate("result", "Form", 0));
        pushButton->setText(QApplication::translate("result", "Reset", 0));
        pushButton_2->setText(QApplication::translate("result", "Quit", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
