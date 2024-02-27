#include "otp.h"
#include "ui_otp.h"

otp::otp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::otp)
{
    ui->setupUi(this);
}

otp::~otp()
{
    delete ui;
}
