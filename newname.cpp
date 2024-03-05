#include "newname.h"
#include "ui_newname.h"
#include "Payment.h"
#include "avalible_room.h"
NewName::NewName(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewName)
{
    ui->setupUi(this);
}

NewName::~NewName()
{
    delete ui;
}

void NewName::on_btnsave_clicked()
{

    QString Room = ui->txtroom->text();
    QString NameSurname = ui->txtName->text();
    QString PhoneNumber = ui->txtPhone->text();
    QString Member = ui->txtMember->text();
    QString Date = ui ->txtDate->text();

    qDebug()<<"NameSurname "<<NameSurname<<"PhoneNumber "<<PhoneNumber<<"Member "<< Member<<"Date "<<Date;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/User/Documents/kkk/compro.db");

    database.open();
    QSqlQuery query(database);

    query.prepare("insert into Name(room,name,phone,member,date ) values('" + Room + "','" + NameSurname + "','" + PhoneNumber + "','" + Member + "','" + Date + "')");
    query.exec();

    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();
    database.close();

    Payment list;
    list.setModal(true);
    list.exec();

}

