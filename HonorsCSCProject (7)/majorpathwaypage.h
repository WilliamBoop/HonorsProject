#ifndef MAJORPATHWAYPAGE_H
#define MAJORPATHWAYPAGE_H

#include <QWidget>
#include <QGroupBox>

namespace Ui {
class MajorPathwayPage;
}

class MajorPathwayPage : public QWidget
{
    Q_OBJECT

public:
    explicit MajorPathwayPage(QWidget *parent = nullptr);
    ~MajorPathwayPage();

    // Function to set the major and display prerequisites
    void setMajor(const QString &major);

private slots:
    void on_radioCommonCoreYes_toggled(bool checked);
    void on_radioCommonCoreNo_toggled(bool checked);
    void on_radioFlexibleCoreYes_toggled(bool checked);
    void on_radioFlexibleCoreNo_toggled(bool checked);
    void on_pushButtonNext_clicked();
    void navigateToCourseTemplatePage(const QStringList &remainingCourses);

private:
    Ui::MajorPathwayPage *ui;
    QMap<QString, QStringList> commonCoreClasses;
    QMap<QString, QStringList> flexibleCoreClasses;
    QStringList getRemainingClasses(QGroupBox *groupBox);
    void populateCheckBoxes(const QString &major);
    void clearGroupBox(QGroupBox *groupBox);
};

#endif // MAJORPATHWAYPAGE_H
