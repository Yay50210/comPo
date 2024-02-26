#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // void        about    โชข้อความ
    // void        abotQt  โชเกี่ยวกับแอป qt
    // StandardButton critical  โชเครื่องหมาย กากบาท
    // StandardButton information  โชเครื่องหมาย ตกใจ
    // StandardButton question  โชเครื่องหมาย คำถาม มีตอบ yes no           ****
    // StandardButton warning  โชเครื่องหมาย กากบาท

    //QMessageBox::about(this, "My title", "This is my custom message");
   // QMessageBox::aboutQt(this, "My title");    useless
    //QMessageBox::critical(this, "My title", "This is my custom message");
    QMessageBox::StandardButton reply =  QMessageBox::information(this,
                                        "My title", "This is my custom message",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    } else {
        qDebug() << "No is clicked";
    }
}

