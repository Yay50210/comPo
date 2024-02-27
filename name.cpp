#include "name.h"
#include "ui_name.h"
#include "payment.h"

name::name(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::name)
{
    ui->setupUi(this);
}

name::~name()
{
    delete ui;
}

void name::on_buttonBox_accepted()
{
Payment list;
list.setModal(true);
list.exec();

}

