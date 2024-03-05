#ifndef NAME_H
#define NAME_H

#include <QDialog>
#include "databaseheader.h"




namespace Ui {
class name;
}

class name : public QDialog
{
    Q_OBJECT

public:
    explicit name(QWidget *parent = nullptr);
    ~name();

private slots:






    void on_btnsave_clicked();

private:
    Ui::name *ui;
};

#endif // NAME_H
