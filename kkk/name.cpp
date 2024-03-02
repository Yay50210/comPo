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

void name::on_btnOK_accepted()
{
Payment list;
list.setModal(true);
list.exec();

    QString NameSurname = ui->txtName->text();
    QString PhoneNumber = ui->txtPhone->text();
    QString Member = ui->txtMember->text();
    QString Date = ui ->txtDate->text();

    qDebug()<<"NameSurname "<<NameSurname<<"PhoneNumber "<<PhoneNumber<<"Member "<< Member<<"Date "<<Date;



}

