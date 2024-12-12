#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "majorpathwaypage.h" // Include the MajorPathwayPage header file
#include <QFile>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qDebug() << "Initializing MainWindow...";
    ui->setupUi(this);

    // Load previously saved data
    QString savedMajor = readFromFile("selected_major.txt");
    if (!savedMajor.isEmpty()) {
        qDebug() << "Previously selected major:" << savedMajor;
        // Optionally, display the saved major in the UI
        ui->labelSavedMajor->setText("Previously selected: " + savedMajor);
    }

    qDebug() << "MainWindow initialized successfully.";
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Button click handlers for navigating to Major Pathway page
void MainWindow::on_buttonComputerScience_clicked()
{
    try {
        qDebug() << "Button: Computer Science clicked.";
        writeToFile("selected_major.txt", "Computer Science"); // Save data to a file

        MajorPathwayPage *pathwayPage = new MajorPathwayPage(nullptr); // Ensure parent is MainWindow
        pathwayPage->setAttribute(Qt::WA_DeleteOnClose); // Cleanup when closed
        qDebug() << "MajorPathwayPage created.";
        pathwayPage->setMajor("Computer Science");
        qDebug() << "Major set to Computer Science.";
        pathwayPage->show();
        qDebug() << "MajorPathwayPage shown.";
        this->hide(); // Hide the MainWindow instead of closing it
        qDebug() << "MainWindow hidden.";
    } catch (const std::exception &e) {
        qDebug() << "Exception caught:" << e.what();
    } catch (...) {
        qDebug() << "Unknown exception caught.";
    }
}

void MainWindow::on_buttonGeographicInfoScience_clicked()
{
    writeToFile("selected_major.txt", "Geographic Information Science");
    MajorPathwayPage *pathwayPage = new MajorPathwayPage(nullptr);
    pathwayPage->setMajor("Geographic Information Science");
    pathwayPage->show();
    this->hide(); // Hide the MainWindow
}

void MainWindow::on_buttonComputerInfoSystems_clicked()
{
    writeToFile("selected_major.txt", "Computer Information Systems");
    MajorPathwayPage *pathwayPage = new MajorPathwayPage(nullptr);
    pathwayPage->setMajor("Computer Information Systems");
    pathwayPage->show();
    this->hide(); // Hide the MainWindow
}

void MainWindow::on_buttonComputerNetworkTech_clicked()
{
    writeToFile("selected_major.txt", "Computer Network Technology");
    MajorPathwayPage *pathwayPage = new MajorPathwayPage(nullptr);
    pathwayPage->setMajor("Computer Network Technology");
    pathwayPage->show();
    this->hide(); // Hide the MainWindow
}

// File I/O methods
QString MainWindow::readFromFile(const QString &filePath)
{
    QFile file(filePath);
    QString data;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        data = in.readAll();
        file.close();
        qDebug() << "Data read from file successfully.";
    } else {
        qDebug() << "Failed to open file for reading:" << file.errorString();
    }
    return data;
}

void MainWindow::writeToFile(const QString &filePath, const QString &data)
{
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << data;
        file.close();
        qDebug() << "Data written to file successfully.";
    } else {
        qDebug() << "Failed to open file for writing:" << file.errorString();
    }
}
