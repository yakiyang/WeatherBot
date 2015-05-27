/********************************************************************************
** Form generated from reading UI file 'event.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT_H
#define UI_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_event
{
public:

    void setupUi(QWidget *event)
    {
        if (event->objectName().isEmpty())
            event->setObjectName(QStringLiteral("event"));
        event->resize(400, 300);

        retranslateUi(event);

        QMetaObject::connectSlotsByName(event);
    } // setupUi

    void retranslateUi(QWidget *event)
    {
        event->setWindowTitle(QApplication::translate("event", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class event: public Ui_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT_H
