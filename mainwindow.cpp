#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "avalible_room.h"
#include "list.h"
#include "help.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/User/Desktop/New folder/Hotel");
    ui->label_pic->setPixmap(pix.scaled(700,700,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    avalible_room list;
    list.setModal(true);
    list.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    list list;
    list.setModal(true);
    list.exec();

}


void MainWindow::on_pushButton_5_clicked()
{
    Help list;
    list.setModal(true);
    list.exec();
}

