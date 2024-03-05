#ifndef OTP_H
#define OTP_H

#include <QDialog>

namespace Ui {
class otp;
}

class otp : public QDialog
{
    Q_OBJECT

public:
    explicit otp(QWidget *parent = nullptr);
    ~otp();


private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();


private:
    Ui::otp *ui;
    QString generatedOTP;
    QString GenerateOTP(int length);
};

#endif // OTP_H
