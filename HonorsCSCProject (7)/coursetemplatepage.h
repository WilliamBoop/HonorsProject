#ifndef COURSETEMPLATEPAGE_H
#define COURSETEMPLATEPAGE_H

#include <QWidget>
#include <QTableWidget> // Include for QTableWidget
#include <QMap>

namespace Ui {
class CourseTemplatePage;
}

class CourseTemplatePage : public QWidget
{
    Q_OBJECT

public:
    explicit CourseTemplatePage(QWidget *parent = nullptr);
    ~CourseTemplatePage();

    void initTable();
    void initialize(const QString &major, const QStringList &remainingCourses);

private:
    Ui::CourseTemplatePage *ui;

    // Curriculum requirements mapping
    QMap<QString, QList<QPair<QString, QString>>> curriculumRequirements;

    void setupTableWidget(QTableWidget *tableWidget);
    void populateSemester(QTableWidget *tableWidget, const QString &semesterName, const QStringList &courses, const QStringList &credits);

    // Add this declaration
    void populateTable(const QStringList &remainingCourses, const QString &major);
};

#endif // COURSETEMPLATEPAGE_H
