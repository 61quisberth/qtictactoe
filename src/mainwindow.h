#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    bool on_pushButton_3_clicked();

    bool on_pushButton_11_clicked();

    bool on_pushButton_8_clicked();

    bool on_pushButton_clicked();

    bool on_pushButton_12_clicked();

    bool on_pushButton_6_clicked();

    bool on_pushButton_2_clicked();

    bool on_pushButton_10_clicked();

    bool on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    game main_game;
};

#endif // MAINWINDOW_H
