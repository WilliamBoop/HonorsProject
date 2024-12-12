#include "majorpathwaypage.h"
#include "ui_majorpathwaypage.h"
#include "coursetemplatepage.h"
#include <QMessageBox>
#include <QDebug>

MajorPathwayPage::MajorPathwayPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MajorPathwayPage)
{
    qDebug() << "Initializing MajorPathwayPage...";
    ui->setupUi(this);
    qDebug() << "MajorPathwayPage initialized successfully.";

    // Debugging critical UI elements
    qDebug() << "Checking UI elements...";
    if (!ui->groupBoxCommonCore) qDebug() << "Error: groupBoxCommonCore is null.";
    if (!ui->groupBoxFlexibleCore) qDebug() << "Error: groupBoxFlexibleCore is null.";
    if (!ui->labelMajor) qDebug() << "Error: labelMajor is null.";
    if (!ui->pushButtonNext) qDebug() << "Error: pushButtonNext is null.";

    qDebug() << "UI elements checked.";
    qDebug() << "MajorPathwayPage constructor completed.";

    // Initialize class lists
    commonCoreClasses = {
        {"Computer Science", {"ENG 101", "ENG 201", "MAT 206/206.5", "PHY 215"}},
        {"Geographic Information Science", {"ENG 101","ENG 201", "MAT 206", "GLY 210"}},
        {"Computer Information Systems", {"ENG 101","ENG 201", "MAT 206/206.5", "AST 110 or PHY 110"}},
        {"Computer Network Technology", {"ENG 101", "ENG 201", "MAT 206/206.5", "AST 110 or PHY 110"}}
    };

    flexibleCoreClasses = {
        {"Computer Science", {"CSC 101", "CSC 111", "SPE 100 or SPE 102", "Indiviual && Society (Class of your choice)", "U.S. Experience in Its Diversity (Class of your choice)", "World Culture && Global Issues (Class of your choice)"}},
        {"Geographic Information Science", {"GIS 101", "CSC 110", "Creative Expression (Class of your choice)", "Individual && Society (Class of your choice)", "U.S. Experience in Its Diversity", "World Culture && Global Issues"}},
        {"Computer Information Systems", {"CSC 101", "CSC 110 or CSC 111", "Creative Expression (Class of your choice)", "Individual && Society (Class of your choice)", "U.S. Experience in Its Diversity (Class of your choice)", "World Culture && Global Issues (Class of your choice)"}},
        {"Computer Network Technology", {"CSC 101", "CSC 110 or CSC 111", "Creative Expression (Class of your choice)", "Individual && Society (Class of your choice)", "U.S. Experience in Its Diversity (Class of your choice)", "World Culture && Global Issues (Class of your choice)" }}
    };

    // Hide the group boxes initially
    ui->groupBoxCommonCore->hide();
    ui->groupBoxFlexibleCore->hide();
    qDebug() << "MajorPathwayPage initialized successfully.";
}

MajorPathwayPage::~MajorPathwayPage()
{
    delete ui;
}

void MajorPathwayPage::setMajor(const QString &major)
{
    ui->labelMajor->setText("Major: " + major);

    QString prerequisites;
    if (major == "Computer Science") {
        prerequisites = "Prerequisites:\n- Intro to CSC\n- Progamming Fundamentals \n- Data Structures";
    } else if (major == "Geographic Information Science") {
        prerequisites = "Prerequisites:\n- Intro to GIS\n- Cartography\n- Spatial Analysis";
    } else if (major == "Computer Information Systems") {
        prerequisites = "Prerequisites:\n- Intro to IT\n- Database Systems\n- System Analysis";
    } else if (major == "Computer Network Technology") {
        prerequisites = "Prerequisites:\n- Networking Basics\n- Network Security\n- Protocols";
    }

    ui->labelPrerequisites->setText(prerequisites);

    // Populate checkboxes for the selected major
    populateCheckBoxes(major);
}

QStringList MajorPathwayPage::getRemainingClasses(QGroupBox *groupBox)
{
    QStringList remainingClasses;

    // Iterate through checkboxes in the group box
    for (QCheckBox *checkBox : groupBox->findChildren<QCheckBox *>()) {
        if (!checkBox->isChecked()) {
            remainingClasses << checkBox->text();
        }
    }

    return remainingClasses;
}

void MajorPathwayPage::on_pushButtonNext_clicked()
{
    // Validate that both questions are answered
    if (!ui->radioCommonCoreYes->isChecked() && !ui->radioCommonCoreNo->isChecked()) {
        QMessageBox::warning(this, "Incomplete Selection", "Please answer the common core question.");
        return;
    }

    if (!ui->radioFlexibleCoreYes->isChecked() && !ui->radioFlexibleCoreNo->isChecked()) {
        QMessageBox::warning(this, "Incomplete Selection", "Please answer the flexible core question.");
        return;
    }

    // Collect remaining classes
    QStringList remainingClasses;
    if (ui->radioCommonCoreNo->isChecked()) {
        remainingClasses += getRemainingClasses(ui->groupBoxCommonCore);
    }
    if (ui->radioFlexibleCoreNo->isChecked()) {
        remainingClasses += getRemainingClasses(ui->groupBoxFlexibleCore);
    }

    // Debugging: Ensure proper data
    qDebug() << "Remaining classes:" << remainingClasses;

    // If both are "Yes," no remaining classes
    if (ui->radioCommonCoreYes->isChecked() && ui->radioFlexibleCoreYes->isChecked()) {
        QMessageBox::information(this, "Next Step", "You are ready for the next step!");
        remainingClasses.clear(); // Clear remaining classes as none are left
    } else if (!remainingClasses.isEmpty()) {
        // Display remaining classes if any
        QString message = "You still need to complete the following classes:\n" + remainingClasses.join("\n");
        QMessageBox::information(this, "Remaining Classes", message);
    }

    // Navigate to the CourseTemplatePage
    navigateToCourseTemplatePage(remainingClasses);

}


void MajorPathwayPage::on_radioCommonCoreYes_toggled(bool checked)
{
    if (checked) {
        ui->groupBoxCommonCore->hide();
    }
}

void MajorPathwayPage::on_radioCommonCoreNo_toggled(bool checked)
{
    if (checked) {
        ui->groupBoxCommonCore->show();
    }
}

void MajorPathwayPage::on_radioFlexibleCoreYes_toggled(bool checked)
{
    if (checked) {
        ui->groupBoxFlexibleCore->hide();
    }
}

void MajorPathwayPage::on_radioFlexibleCoreNo_toggled(bool checked)
{
    if (checked) {
        ui->groupBoxFlexibleCore->show();
    }
}

void MajorPathwayPage::populateCheckBoxes(const QString &major)
{
    qDebug() << "Populating checkboxes for major:" << major;

    // Ensure layouts are assigned
    if (!ui->groupBoxCommonCore->layout()) {
        qDebug() << "Error: groupBoxCommonCore has no layout! Assigning QVBoxLayout.";
        ui->groupBoxCommonCore->setLayout(new QVBoxLayout);
    }

    if (!ui->groupBoxFlexibleCore->layout()) {
        qDebug() << "Error: groupBoxFlexibleCore has no layout! Assigning QVBoxLayout.";
        ui->groupBoxFlexibleCore->setLayout(new QVBoxLayout);
    }

    // Check that the major exists in maps
    if (!commonCoreClasses.contains(major)) {
        qDebug() << "Error: Major not found in commonCoreClasses:" << major;
        return;
    }

    if (!flexibleCoreClasses.contains(major)) {
        qDebug() << "Error: Major not found in flexibleCoreClasses:" << major;
        return;
    }

    // Clear current checkboxes
    clearGroupBox(ui->groupBoxCommonCore);
    clearGroupBox(ui->groupBoxFlexibleCore);

    // Populate common core checkboxes
    qDebug() << "Adding common core checkboxes for:" << major;
    for (const QString &className : commonCoreClasses[major]) {
        qDebug() << "Creating checkbox for:" << className;
        QCheckBox *checkBox = new QCheckBox(className, ui->groupBoxCommonCore);
        ui->groupBoxCommonCore->layout()->addWidget(checkBox);
    }

    // Populate flexible core checkboxes
    qDebug() << "Adding flexible core checkboxes for:" << major;
    for (const QString &className : flexibleCoreClasses[major]) {
        qDebug() << "Creating checkbox for:" << className;
        QCheckBox *checkBox = new QCheckBox(className, ui->groupBoxFlexibleCore);
        ui->groupBoxFlexibleCore->layout()->addWidget(checkBox);
    }

    qDebug() << "Finished populating checkboxes.";
}

// Utility function to clear all widgets in a group box
void MajorPathwayPage::clearGroupBox(QGroupBox *groupBox)
{
    QLayout *layout = groupBox->layout();
    while (QLayoutItem *item = layout->takeAt(0)) {
        delete item->widget();
        delete item;
    }
}

void MajorPathwayPage::navigateToCourseTemplatePage(const QStringList &remainingCourses)
{
    // Debugging: Ensure correct flow and data
    qDebug() << "Navigating with major:" << ui->labelMajor->text();
    qDebug() << "Remaining courses:" << remainingCourses;

    // Create the CourseTemplatePage instance
    CourseTemplatePage *templatePage = new CourseTemplatePage(nullptr);
    templatePage->setAttribute(Qt::WA_DeleteOnClose);

    // Validate major and pass remainingCourses
    QString major = ui->labelMajor->text();
    if (major.isEmpty()) {
        qDebug() << "Error: Major is empty, cannot proceed.";
        return;
    }

    // Initialize the page with the selected major and remaining courses
    templatePage->initialize(major, remainingCourses);

    // Show the CourseTemplatePage and hide the current page
    templatePage->show();
    this->hide();

    qDebug() << "MajorPathwayPage hidden, CourseTemplatePage shown.";
}



