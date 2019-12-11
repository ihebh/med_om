#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"dossier_medical.h"
#include"medicament.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
dossier_medical ajtmp;
medicament ajt ;

};

#endif // MAINWINDOW_H
