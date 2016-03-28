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

// TODO: repl repeated code w/ something smarter

// [0,0]
bool MainWindow::on_pushButton_3_clicked()
{
  char mark = main_game.player_move(0,0);
  ui->pushButton_3->setText(&mark);
  ui->pushButton_3->setEnabled(false);
  return true;
}

// [0,1]
bool MainWindow::on_pushButton_11_clicked()
{
  char mark = main_game.player_move(0,1);
  ui->pushButton_11->setText(&mark);
  ui->pushButton_11->setEnabled(false);
  return true;
}

// [0,2]
bool MainWindow::on_pushButton_8_clicked()
{
  char mark = main_game.player_move(0,2);
  ui->pushButton_8->setText(&mark);
  ui->pushButton_8->setEnabled(false);
  return true;

}

// [1,0]
bool MainWindow::on_pushButton_clicked()
{
  char mark = main_game.player_move(1,0);
  ui->pushButton->setText(&mark);
  ui->pushButton->setEnabled(false);
  return true;
}

// [1,1]
bool MainWindow::on_pushButton_12_clicked()
{
  char mark = main_game.player_move(1,1);
  ui->pushButton_12->setText(&mark);
  ui->pushButton_12->setEnabled(false);
  return true;
}

// [1,2]
bool MainWindow::on_pushButton_6_clicked()
{
  char mark = main_game.player_move(1,2);
  ui->pushButton_6->setText(&mark);
  ui->pushButton_6->setEnabled(false);
  return true;
}

// [2,0]
bool MainWindow::on_pushButton_2_clicked()
{
  char mark = main_game.player_move(2,0);
  ui->pushButton_2->setText(&mark);
  ui->pushButton_2->setEnabled(false);
  return true;
}

// [2,1]
bool MainWindow::on_pushButton_10_clicked()
{
  char mark = main_game.player_move(2,1);
  ui->pushButton_10->setText(&mark);
  ui->pushButton_10->setEnabled(false);
  return true;
}

// [2,2]
bool MainWindow::on_pushButton_7_clicked()
{
  char mark = main_game.player_move(2,2);
  ui->pushButton_7->setText(&mark);
  ui->pushButton_7->setEnabled(false);
  return true;
}
