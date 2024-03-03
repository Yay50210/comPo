#ifndef NEWNAME_H
#define NEWNAME_H

#include <QDialog>
#include "databaseheader.h"
namespace Ui {
class NewName;
}

class NewName : public QDialog
{
    Q_OBJECT

public:
    explicit NewName(QWidget *parent = nullptr);
    ~NewName();

private slots:
    void on_btnsave_clicked();

private:
    Ui::NewName *ui;
};

#endif // NEWNAME_H
