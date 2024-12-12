#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString readFromFile(const QString &filePath);
    void writeToFile(const QString &filePath, const QString &data);

public slots:
    void on_buttonComputerScience_clicked();
    void on_buttonGeographicInfoScience_clicked();
    void on_buttonComputerInfoSystems_clicked();
    void on_buttonComputerNetworkTech_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
