#include "clearroom.h"
#include "ui_clearroom.h"
#include "databaseheader.h"
ClearRoom::ClearRoom(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClearRoom)
{
    ui->setupUi(this);
}

ClearRoom::~ClearRoom()
{
    delete ui;
}

void ClearRoom::on_btnclear_clicked()
{

    QString Room =ui->clearnum->text();
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/User/Documents/kkk/compro.db");

    database.open();
    QSqlQuery query(database);

    query.prepare("Delete from Name where room='" + Room + "'");
    query.exec();

    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();
    database.close();

}


void ClearRoom::on_btncheck_clicked()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/User/Documents/kkk/compro.db");

    database.open();
    QSqlQuery query(database);
    QSqlQueryModel * model=new QSqlQueryModel();
    query.prepare("select * from Name");
    query.exec();
    model->setQuery(std::move(query));
    ui->tableView->setModel(model);

    database.close();
}

