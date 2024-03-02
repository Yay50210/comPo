#include "avalible_room.h"
#include "ui_avalible_room.h"
#include "name.h"

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

name list;
list.setModal(true);
list.exec();

}


void avalible_room::on_pushButton_2_clicked()
{
    name list;
    list.setModal(true);
    list.exec();
}


void avalible_room::on_pushButton_3_clicked()
{
    name list;
    list.setModal(true);
    list.exec();
}


void avalible_room::on_pushButton_5_clicked()
{
    name list;
    list.setModal(true);
    list.exec();
}

