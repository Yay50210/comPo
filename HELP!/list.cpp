#include "list.h"
#include "ui_list.h"

list::list(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::list)
{
    ui->setupUi(this);
    ui->listWidget->addItem("501");
    ui->listWidget->addItem("502");
    ui->listWidget->addItem("503");
    ui->listWidget->addItem("504");


}

list::~list()
{
    delete ui;
}
