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

private:
    Ui::otp *ui;
};

#endif // OTP_H
