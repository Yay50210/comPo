#include "payment.h"
#include "ui_payment.h"
#include "payment.h"
#include "./ui_payment.h"
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QRandomGenerator>
#include"otp.h"

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
/*
void Payment::on_buttonBox_accepted()
{
    otp list;
    list.setModal(true);
    list.exec();
}
*/


void Payment::on_okbutton_clicked()
{
    QString creditCardNumber = ui->creditinput->text();
    QString cvv = ui->cvvinput->text();


    if (check_credit_num(creditCardNumber) && check_credit_cvv(cvv) == true) {
        otp = new class otp(this);
        otp->show();

    } else if((check_credit_num(creditCardNumber)==false && check_credit_cvv(cvv) == true)){
        QMessageBox::warning(this, "Error", "Invalid Credit Card");
    }else if((check_credit_num(creditCardNumber)==true && check_credit_cvv(cvv) == false)){
        QMessageBox::warning(this, "Error", "Invalid CVV");
    } else if((check_credit_num(creditCardNumber)==false && check_credit_cvv(cvv) == false)){
        QMessageBox::warning(this, "Error", "Invalid Credit Card Code and Invalid CVV");
    }
}

bool Payment::check_credit_num(const QString &creditCardNumber)
{
    int sum = 0;
    bool alternate = true;

    if(creditCardNumber.length()==16||creditCardNumber.length()==15||creditCardNumber.length()==19){
        for (int i = 0; i < creditCardNumber.length(); ++i) {
            QChar digit = creditCardNumber.at(i);

            if (digit.isDigit()) {
                int digit_num = digit.digitValue();

                if (alternate) {
                    digit_num *= 2;
                    if (digit_num > 9) {
                        digit_num = (digit_num % 10) + 1;
                    }
                }

                sum += digit_num;
                alternate = !alternate;
            } else {
                continue;
            }
        }
    }else{
        sum=1;
    }
    return (sum % 10 == 0);
}


bool Payment::check_credit_cvv(const QString &cvv)
{
    int count_cvv = 0;

    for (int j = 0; j < cvv.length(); j++) {
        QChar digit_cvv = cvv.at(j);

        if (digit_cvv.isDigit()) {
            int digitValue = digit_cvv.digitValue();

            if (digitValue >= 0 && digitValue <= 9) {
                count_cvv++;
            } else {
                return false;
            }
        } else {
            continue;
        }
    }

    return (count_cvv == 3);
}


