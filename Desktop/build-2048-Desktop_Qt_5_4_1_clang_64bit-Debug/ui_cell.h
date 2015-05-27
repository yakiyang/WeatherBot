/********************************************************************************
** Form generated from reading UI file 'cell.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_H
#define UI_CELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cell
{
public:

    void setupUi(QWidget *cell)
    {
        if (cell->objectName().isEmpty())
            cell->setObjectName(QStringLiteral("cell"));
        cell->resize(400, 300);

        retranslateUi(cell);

        QMetaObject::connectSlotsByName(cell);
    } // setupUi

    void retranslateUi(QWidget *cell)
    {
        cell->setWindowTitle(QApplication::translate("cell", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class cell: public Ui_cell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_H
