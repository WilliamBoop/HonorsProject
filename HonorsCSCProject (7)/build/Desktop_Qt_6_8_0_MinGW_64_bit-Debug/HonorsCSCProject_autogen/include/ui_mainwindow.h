/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *buttonComputerScience;
    QPushButton *buttonGeographicInfoScience;
    QPushButton *buttonComputerNetworkTech;
    QPushButton *buttonComputerInfoSystems;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(938, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background: qradialgradient(\n"
"    cx: 0.5, cy: 0.5, radius: 0.8, \n"
"    fx: 0.5, fy: 0.5, \n"
"    stop: 0 #87CEEB, \n"
"    stop: 0.6 #4682B4, \n"
"    stop: 1 #1E3A8A);\n"
"border: 2px solid #1E90FF;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"color: black;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setContentsMargins(-1, -1, 13, -1);
        buttonComputerScience = new QPushButton(centralwidget);
        buttonComputerScience->setObjectName("buttonComputerScience");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        buttonComputerScience->setFont(font);

        gridLayout->addWidget(buttonComputerScience, 1, 0, 1, 1);

        buttonGeographicInfoScience = new QPushButton(centralwidget);
        buttonGeographicInfoScience->setObjectName("buttonGeographicInfoScience");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(18);
        font1.setBold(true);
        buttonGeographicInfoScience->setFont(font1);

        gridLayout->addWidget(buttonGeographicInfoScience, 1, 1, 1, 1);

        buttonComputerNetworkTech = new QPushButton(centralwidget);
        buttonComputerNetworkTech->setObjectName("buttonComputerNetworkTech");
        buttonComputerNetworkTech->setFont(font);

        gridLayout->addWidget(buttonComputerNetworkTech, 0, 1, 1, 1);

        buttonComputerInfoSystems = new QPushButton(centralwidget);
        buttonComputerInfoSystems->setObjectName("buttonComputerInfoSystems");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonComputerInfoSystems->sizePolicy().hasHeightForWidth());
        buttonComputerInfoSystems->setSizePolicy(sizePolicy1);
        buttonComputerInfoSystems->setFont(font);

        gridLayout->addWidget(buttonComputerInfoSystems, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 938, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Choose your major</span></p></body></html>", nullptr));
        buttonComputerScience->setText(QCoreApplication::translate("MainWindow", "Computer Science", nullptr));
        buttonGeographicInfoScience->setText(QCoreApplication::translate("MainWindow", "Geography Information Science", nullptr));
        buttonComputerNetworkTech->setText(QCoreApplication::translate("MainWindow", "Computer Network Technology", nullptr));
        buttonComputerInfoSystems->setText(QCoreApplication::translate("MainWindow", "Computer Information Systems", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
