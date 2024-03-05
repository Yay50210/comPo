#ifndef PAYMENT_H
#define PAYMENT_H
#include <QString>
#include"otp.h"
#include <QDialog>

namespace Ui {
class Payment;
}

class Payment : public QDialog
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent = nullptr);
    ~Payment();

private slots:
   // void on_buttonBox_accepted();
     void on_okbutton_clicked();

private:
    Ui::Payment *ui;
    otp*otp;
    //function declear here
    bool check_credit_num(const QString &creditCardNumber);
    bool check_credit_cvv(const QString &cvv);
};

#endif // PAYMENT_H
