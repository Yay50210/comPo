#include "databaseheader.h"
#include "ui_databaseheader.h"

databaseHeader::databaseHeader(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::databaseHeader)
{
    ui->setupUi(this);
}

databaseHeader::~databaseHeader()
{
    delete ui;
}
