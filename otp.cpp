#include "otp.h"
#include "ui_otp.h"
#include <QRandomGenerator>
#include <QMessageBox>


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

void otp::on_pushButton_2_clicked()
{
    generatedOTP = GenerateOTP(6);
    qDebug() << "your OTP is " << generatedOTP;
}

QString otp::GenerateOTP(int length)
{
    QString otp;
    for (int i = 0; i < length; i++) {
        otp.append(QString::number(QRandomGenerator::global()->bounded(10)));//random0-9
    }
    return otp;
}

void otp::on_pushButton_clicked()
{
    QString randomOTP = ui->otpinput->text();
if(randomOTP.isEmpty()){
    QMessageBox::warning(this, "", "OTP Not Correct");
}else{
    if (randomOTP == generatedOTP) {
        QMessageBox::information(this, "", "Purchased");
        qApp->quit();//when clicked ok app will quit suddenly
        /*
         *
         *
         * จ่ายเงินเสร็จอยากให้ทำไรคือช่องนี้นะะะะะะะะะะะะะะะะะะะะะะะะะะะะะะ
         *
         *
         *
         */

    }else{
        QMessageBox::warning(this, "", "OTP Not Correct");
    }
}
}
