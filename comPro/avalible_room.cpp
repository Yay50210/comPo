#include "avalible_room.h"
#include "ui_avalible_room.h"
#include "newname.h"

avalible_room::avalible_room(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::avalible_room)
{
    ui->setupUi(this);
}

avalible_room::~avalible_room()
{
    delete ui;
}

void avalible_room::on_pushButton_clicked()
{

NewName list;
list.setModal(true);
list.exec();
list.setStyleSheet("background-color: red;");

}


void avalible_room::on_pushButton_2_clicked()
{
    NewName list;
    list.setModal(true);
    list.exec();

}


void avalible_room::on_pushButton_3_clicked()
{
    NewName list;
    list.setModal(true);
    list.exec();
}


void avalible_room::on_pushButton_5_clicked()
{
    NewName list;
    list.setModal(true);
    list.exec();
}

