#ifndef LIST_H
#define LIST_H
#include <QDialog>
#include <QDebug>

#include <QDialog>

namespace Ui {
class list;
}

class list : public QDialog
{
    Q_OBJECT

public:
    explicit list(QWidget *parent = nullptr);
    ~list();

private slots:
    void on_btnrefresh_clicked();

private:
    Ui::list *ui;
};

#endif // LIST_H
