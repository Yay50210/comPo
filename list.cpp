#include "list.h"
#include "ui_list.h"
#include "databaseheader.h"
list::list(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::list)
{
    ui->setupUi(this);



}

list::~list()
{
    delete ui;
}

void list::on_btnrefresh_clicked()
{


}

