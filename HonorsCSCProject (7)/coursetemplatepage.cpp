#include "coursetemplatepage.h"
#include "ui_coursetemplatepage.h"

CourseTemplatePage::CourseTemplatePage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CourseTemplatePage)
{
    ui->setupUi(this);

    qDebug() << "Verifying CourseTemplatePage UI elements...";
    if (!ui->labelMajor) qDebug() << "Error: labelMajor is missing!";
    if (!ui->tableWidget) qDebug() << "Error: tableWidget is missing!";
    qDebug() << "CourseTemplatePage UI elements verified.";

    // Initialize curriculum requirements
    curriculumRequirements["Computer Science"] = {
        QPair<QString, QString>("CSC 211", "3"),
        QPair<QString, QString>("CSC 215", "3"),
        QPair<QString, QString>("CSC 231", "4"),
        QPair<QString, QString>("MAT 301", "4"),
        QPair<QString, QString>("CSC 331", "3"),
        QPair<QString, QString>("CSC 350", "3"),
        QPair<QString, QString>("MAT 302", "4"),
        QPair<QString, QString>("STEM ELECTIVE", "3"),
        QPair<QString, QString>("STEM ELECTIVE", "3"),
        QPair<QString, QString>("STEM ELECTIVE", "3"),
        QPair<QString, QString>("STEM ELECTIVE", "3")
    };

    curriculumRequirements["Computer Information Systems"] = {
        QPair<QString, QString>("CSC 210", "3"),
        QPair<QString, QString>("CIS 345", "4"),
        QPair<QString, QString>("CIS 385", "3"),
        QPair<QString, QString>("CIS 395", "3"),
        QPair<QString, QString>("CIS 440", "3"),
        QPair<QString, QString>("CIS 485", "3"),
        QPair<QString, QString>("CIS 495", "3"),
        QPair<QString, QString>("ACC 122", "3"),
        QPair<QString, QString>("BUS 104", "3"),
        QPair<QString, QString>("GIS ELECTIVE", "3"),
        QPair<QString, QString>("CIS ELECTIVE", "3"),
        QPair<QString, QString>("ELECTIVE", "3")
    };

    curriculumRequirements["Geographic Information Science"] = {
        QPair<QString, QString>("CIS 395", "3"),
        QPair<QString, QString>("GIS 201", "4"),
        QPair<QString, QString>("GIS 261", "3"),
        QPair<QString, QString>("GIS 201", "3"),
        QPair<QString, QString>("GIS 361", "3"),
        QPair<QString, QString>("AFL 161", "3"),
        QPair<QString, QString>("MAT 209", "4"),
        QPair<QString, QString>("GEO 226", "3"),
        QPair<QString, QString>("GIS 325 Or GEO 241", "3"),
        QPair<QString, QString>("ELECTIVE", "3"),
        QPair<QString, QString>("ELECTIVE", "3")
    };

    curriculumRequirements["Computer Network Technology"] = {
        QPair<QString, QString>("CIS 165", "3"),
        QPair<QString, QString>("CIS 225", "3"),
        QPair<QString, QString>("ACC 122", "3"),
        QPair<QString, QString>("BUS 104", "3"),
        QPair<QString, QString>("CIS 255", "3"),
        QPair<QString, QString>("CIS 345", "3"),
        QPair<QString, QString>("ELECTIVE", "3"),
        QPair<QString, QString>("ELECTIVE", "3"),
        QPair<QString, QString>("CIS 440", "3"),
        QPair<QString, QString>("CIS 445", "3"),
        QPair<QString, QString>("CIS 455", "3"),
        QPair<QString, QString>("GIS ELECTIVE", "3"),
        QPair<QString, QString>("CIS ELECTIVE", "3")
    };
}

CourseTemplatePage::~CourseTemplatePage()
{
    delete ui;
}

void CourseTemplatePage::initTable()
{
    qDebug() << "Initializing main table...";

    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(2); // Course and Credits columns
    ui->tableWidget->setHorizontalHeaderLabels({"Course", "Credits"});

    QFont headerFont = ui->tableWidget->horizontalHeader()->font();
    headerFont.setBold(true);
    ui->tableWidget->horizontalHeader()->setFont(headerFont);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);

    ui->tableWidget->setAlternatingRowColors(true);

    qDebug() << "Main table initialized.";
}

void CourseTemplatePage::setupTableWidget(QTableWidget *tableWidget)
{
    tableWidget->setColumnCount(2);
    tableWidget->setHorizontalHeaderLabels({"Course", "Credits"});

    QFont headerFont = tableWidget->horizontalHeader()->font();
    headerFont.setBold(true);
    tableWidget->horizontalHeader()->setFont(headerFont);

    tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
}

void CourseTemplatePage::populateSemester(QTableWidget *tableWidget, const QString &semesterName, const QStringList &courses, const QStringList &credits)
{
    int currentRow = tableWidget->rowCount();

    // Add semester header
    tableWidget->insertRow(currentRow);
    QTableWidgetItem *semesterHeader = new QTableWidgetItem(semesterName);
    QFont boldFont;
    boldFont.setBold(true);
    semesterHeader->setFont(boldFont);
    semesterHeader->setTextAlignment(Qt::AlignCenter);
    tableWidget->setItem(currentRow, 0, semesterHeader);
    tableWidget->setSpan(currentRow, 0, 1, 2); // Merge cells across both columns
    currentRow++;

    // Add courses and credits
    int totalCredits = 0;
    for (int i = 0; i < courses.size(); ++i) {
        tableWidget->insertRow(currentRow);
        tableWidget->setItem(currentRow, 0, new QTableWidgetItem(courses[i]));
        tableWidget->setItem(currentRow, 1, new QTableWidgetItem(credits[i]));
        totalCredits += credits[i].toInt();
        currentRow++;
    }

    // Add total row
    tableWidget->insertRow(currentRow);
    QTableWidgetItem *totalLabel = new QTableWidgetItem("Total");
    QFont totalFont;
    totalFont.setBold(true);
    totalLabel->setFont(totalFont);
    totalLabel->setTextAlignment(Qt::AlignRight);
    tableWidget->setItem(currentRow, 0, totalLabel);
    tableWidget->setItem(currentRow, 1, new QTableWidgetItem(QString::number(totalCredits)));
}

void CourseTemplatePage::populateTable(const QStringList &remainingCourses, const QString &major)
{
    qDebug() << "Populating main table for major:" << major;

    // Populate remaining courses
    int row = 0;
    for (const QString &course : remainingCourses) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(course));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem("3"));
        row++;
    }

    // Populate curriculum requirements for the selected major
    if (curriculumRequirements.contains(major)) {
        const QList<QPair<QString, QString>> &requirements = curriculumRequirements[major];
        QStringList courses;
        QStringList credits;

        int semesterCounter = 1;
        for (const auto &requirement : requirements) {
            courses.append(requirement.first);
            credits.append(requirement.second);

            // If 4 courses have been added, create a semester
            if (courses.size() == 4) {
                populateSemester(ui->tableWidget, "Semester " + QString::number(semesterCounter), courses, credits);
                courses.clear();
                credits.clear();
                semesterCounter++;
            }
        }

        // Populate remaining courses that didn't fill a semester
        if (!courses.isEmpty()) {
            populateSemester(ui->tableWidget, "Semester " + QString::number(semesterCounter), courses, credits);
        }
    } else {
        qDebug() << "Error: Curriculum requirements not found for major:" << major;
    }

    qDebug() << "Table populated successfully.";
}


void CourseTemplatePage::initialize(const QString &major, const QStringList &remainingCourses)
{
    qDebug() << "Initializing CourseTemplatePage for major:" << major;

    QString processedMajor = major;
    if (processedMajor.startsWith("Major: ")) {
        processedMajor = processedMajor.mid(7).trimmed(); // Remove "Major: " prefix
    }

    ui->labelMajor->setText("Sample Curriculum for Major: " + processedMajor);

    initTable();
    populateTable(remainingCourses, processedMajor);

    qDebug() << "CourseTemplatePage initialized successfully.";
}
