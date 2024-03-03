#ifndef PAYMENT_H
#define PAYMENT_H

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
    void on_buttonBox_accepted();

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
