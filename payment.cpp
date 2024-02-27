#include "payment.h"
#include "ui_payment.h"
#include "otp.h"
Payment::Payment(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Payment)
{
    ui->setupUi(this);
}

Payment::~Payment()
{
    delete ui;
}

void Payment::on_buttonBox_accepted()
{
    otp list;
    list.setModal(true);
    list.exec();
}

