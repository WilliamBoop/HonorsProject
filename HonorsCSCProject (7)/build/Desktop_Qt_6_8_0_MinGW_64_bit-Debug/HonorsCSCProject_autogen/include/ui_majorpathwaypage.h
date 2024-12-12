/********************************************************************************
** Form generated from reading UI file 'majorpathwaypage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJORPATHWAYPAGE_H
#define UI_MAJORPATHWAYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MajorPathwayPage
{
public:
    QLabel *labelMajor;
    QLabel *labelPrerequisites;
    QLabel *labelCommonCoreQuestion;
    QLabel *labelFlexibleCoreQuestion;
    QGroupBox *groupBoxCommonCore;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxHistory;
    QCheckBox *checkBoxEnglish;
    QCheckBox *checkBoxScience;
    QCheckBox *checkBoxMath;
    QGroupBox *groupBoxFlexibleCore;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QPushButton *pushButtonNext;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioCommonCoreYes;
    QRadioButton *radioCommonCoreNo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioFlexibleCoreYes;
    QRadioButton *radioFlexibleCoreNo;

    void setupUi(QWidget *MajorPathwayPage)
    {
        if (MajorPathwayPage->objectName().isEmpty())
            MajorPathwayPage->setObjectName("MajorPathwayPage");
        MajorPathwayPage->resize(942, 499);
        labelMajor = new QLabel(MajorPathwayPage);
        labelMajor->setObjectName("labelMajor");
        labelMajor->setGeometry(QRect(10, 10, 351, 81));
        labelPrerequisites = new QLabel(MajorPathwayPage);
        labelPrerequisites->setObjectName("labelPrerequisites");
        labelPrerequisites->setGeometry(QRect(0, 120, 121, 71));
        labelCommonCoreQuestion = new QLabel(MajorPathwayPage);
        labelCommonCoreQuestion->setObjectName("labelCommonCoreQuestion");
        labelCommonCoreQuestion->setGeometry(QRect(270, 10, 341, 71));
        labelFlexibleCoreQuestion = new QLabel(MajorPathwayPage);
        labelFlexibleCoreQuestion->setObjectName("labelFlexibleCoreQuestion");
        labelFlexibleCoreQuestion->setGeometry(QRect(270, 130, 331, 51));
        groupBoxCommonCore = new QGroupBox(MajorPathwayPage);
        groupBoxCommonCore->setObjectName("groupBoxCommonCore");
        groupBoxCommonCore->setGeometry(QRect(60, 250, 301, 161));
        verticalLayout_3 = new QVBoxLayout(groupBoxCommonCore);
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkBoxHistory = new QCheckBox(groupBoxCommonCore);
        checkBoxHistory->setObjectName("checkBoxHistory");

        verticalLayout_3->addWidget(checkBoxHistory);

        checkBoxEnglish = new QCheckBox(groupBoxCommonCore);
        checkBoxEnglish->setObjectName("checkBoxEnglish");

        verticalLayout_3->addWidget(checkBoxEnglish);

        checkBoxScience = new QCheckBox(groupBoxCommonCore);
        checkBoxScience->setObjectName("checkBoxScience");

        verticalLayout_3->addWidget(checkBoxScience);

        checkBoxMath = new QCheckBox(groupBoxCommonCore);
        checkBoxMath->setObjectName("checkBoxMath");

        verticalLayout_3->addWidget(checkBoxMath);

        groupBoxFlexibleCore = new QGroupBox(MajorPathwayPage);
        groupBoxFlexibleCore->setObjectName("groupBoxFlexibleCore");
        groupBoxFlexibleCore->setGeometry(QRect(430, 230, 441, 191));
        verticalLayout_4 = new QVBoxLayout(groupBoxFlexibleCore);
        verticalLayout_4->setObjectName("verticalLayout_4");
        checkBox_3 = new QCheckBox(groupBoxFlexibleCore);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_4->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBoxFlexibleCore);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout_4->addWidget(checkBox_4);

        checkBox_6 = new QCheckBox(groupBoxFlexibleCore);
        checkBox_6->setObjectName("checkBox_6");

        verticalLayout_4->addWidget(checkBox_6);

        checkBox_5 = new QCheckBox(groupBoxFlexibleCore);
        checkBox_5->setObjectName("checkBox_5");

        verticalLayout_4->addWidget(checkBox_5);

        checkBox_2 = new QCheckBox(groupBoxFlexibleCore);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_4->addWidget(checkBox_2);

        checkBox = new QCheckBox(groupBoxFlexibleCore);
        checkBox->setObjectName("checkBox");

        verticalLayout_4->addWidget(checkBox);

        pushButtonNext = new QPushButton(MajorPathwayPage);
        pushButtonNext->setObjectName("pushButtonNext");
        pushButtonNext->setGeometry(QRect(310, 400, 93, 29));
        layoutWidget = new QWidget(MajorPathwayPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 70, 50, 57));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioCommonCoreYes = new QRadioButton(layoutWidget);
        radioCommonCoreYes->setObjectName("radioCommonCoreYes");

        verticalLayout->addWidget(radioCommonCoreYes);

        radioCommonCoreNo = new QRadioButton(layoutWidget);
        radioCommonCoreNo->setObjectName("radioCommonCoreNo");

        verticalLayout->addWidget(radioCommonCoreNo);

        layoutWidget1 = new QWidget(MajorPathwayPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(270, 180, 50, 57));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioFlexibleCoreYes = new QRadioButton(layoutWidget1);
        radioFlexibleCoreYes->setObjectName("radioFlexibleCoreYes");

        verticalLayout_2->addWidget(radioFlexibleCoreYes);

        radioFlexibleCoreNo = new QRadioButton(layoutWidget1);
        radioFlexibleCoreNo->setObjectName("radioFlexibleCoreNo");

        verticalLayout_2->addWidget(radioFlexibleCoreNo);


        retranslateUi(MajorPathwayPage);

        QMetaObject::connectSlotsByName(MajorPathwayPage);
    } // setupUi

    void retranslateUi(QWidget *MajorPathwayPage)
    {
        MajorPathwayPage->setWindowTitle(QCoreApplication::translate("MajorPathwayPage", "Form", nullptr));
        labelMajor->setText(QCoreApplication::translate("MajorPathwayPage", "MAJOR", nullptr));
        labelPrerequisites->setText(QCoreApplication::translate("MajorPathwayPage", "Prequisities", nullptr));
        labelCommonCoreQuestion->setText(QCoreApplication::translate("MajorPathwayPage", "Have you completed your commo core classes?", nullptr));
        labelFlexibleCoreQuestion->setText(QCoreApplication::translate("MajorPathwayPage", "Have you completed your flexible core classes?", nullptr));
        groupBoxCommonCore->setTitle(QCoreApplication::translate("MajorPathwayPage", "Common Core Classes", nullptr));
        checkBoxHistory->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBoxEnglish->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBoxScience->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBoxMath->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        groupBoxFlexibleCore->setTitle(QCoreApplication::translate("MajorPathwayPage", "Flexible Core Classes", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        checkBox->setText(QCoreApplication::translate("MajorPathwayPage", "CheckBox", nullptr));
        pushButtonNext->setText(QCoreApplication::translate("MajorPathwayPage", "Next", nullptr));
        radioCommonCoreYes->setText(QCoreApplication::translate("MajorPathwayPage", "Yes", nullptr));
        radioCommonCoreNo->setText(QCoreApplication::translate("MajorPathwayPage", "No", nullptr));
        radioFlexibleCoreYes->setText(QCoreApplication::translate("MajorPathwayPage", "Yes", nullptr));
        radioFlexibleCoreNo->setText(QCoreApplication::translate("MajorPathwayPage", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MajorPathwayPage: public Ui_MajorPathwayPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJORPATHWAYPAGE_H
