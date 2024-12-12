/********************************************************************************
** Form generated from reading UI file 'coursetemplatepage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSETEMPLATEPAGE_H
#define UI_COURSETEMPLATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseTemplatePage
{
public:
    QLabel *labelMajor;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CourseTemplatePage)
    {
        if (CourseTemplatePage->objectName().isEmpty())
            CourseTemplatePage->setObjectName("CourseTemplatePage");
        CourseTemplatePage->resize(973, 528);
        labelMajor = new QLabel(CourseTemplatePage);
        labelMajor->setObjectName("labelMajor");
        labelMajor->setGeometry(QRect(50, 30, 381, 20));
        tableWidget = new QTableWidget(CourseTemplatePage);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 90, 581, 251));

        retranslateUi(CourseTemplatePage);

        QMetaObject::connectSlotsByName(CourseTemplatePage);
    } // setupUi

    void retranslateUi(QWidget *CourseTemplatePage)
    {
        CourseTemplatePage->setWindowTitle(QCoreApplication::translate("CourseTemplatePage", "Form", nullptr));
        labelMajor->setText(QCoreApplication::translate("CourseTemplatePage", "Computer Science", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CourseTemplatePage", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CourseTemplatePage", "New Column", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseTemplatePage: public Ui_CourseTemplatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSETEMPLATEPAGE_H
