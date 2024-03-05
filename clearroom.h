#ifndef CLEARROOM_H
#define CLEARROOM_H

#include <QDialog>

namespace Ui {
class ClearRoom;
}

class ClearRoom : public QDialog
{
    Q_OBJECT

public:
    explicit ClearRoom(QWidget *parent = nullptr);
    ~ClearRoom();

private slots:
    void on_btnclear_clicked();

    void on_btncheck_clicked();


private:
    Ui::ClearRoom *ui;
};

#endif // CLEARROOM_H
