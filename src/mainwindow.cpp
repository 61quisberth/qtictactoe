#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// [0,0]
void MainWindow::on_pushButton_3_clicked()
{
  ui->pushButton_3->setText("ouch!");
}

// [0,1]
void MainWindow::on_pushButton_11_clicked()
{

}

// [0,2]
void MainWindow::on_pushButton_8_clicked()
{

}

// [1,0]
void MainWindow::on_pushButton_clicked()
{

}

// [1,1]
void MainWindow::on_pushButton_12_clicked()
{

}

// [1,2]
void MainWindow::on_pushButton_6_clicked()
{

}

// [2,0]
void MainWindow::on_pushButton_2_clicked()
{

}

// [2,1]
void MainWindow::on_pushButton_10_clicked()
{

}

// [2,2]
void MainWindow::on_pushButton_7_clicked()
{

}
