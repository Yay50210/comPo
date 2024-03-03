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





void name::on_btnsave_clicked()
{


    QString NameSurname = ui->txtName->text();
    QString PhoneNumber = ui->txtPhone->text();
    QString Member = ui->txtMember->text();
    QString Date = ui ->txtDate->text();

    qDebug()<<"NameSurname "<<NameSurname<<"PhoneNumber "<<PhoneNumber<<"Member "<< Member<<"Date "<<Date;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/User/Documents/kkk/database/data");


    QSqlQuery query(database);
    query.prepare("insert into database(Name,Phone,Member,Date ) values('" + NameSurname + "','" + PhoneNumber + "','" + Member + "','" + Date + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();
    database.close();

    Payment list;
    list.setModal(true);
    list.exec();
}


