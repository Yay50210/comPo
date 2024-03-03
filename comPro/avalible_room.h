#ifndef AVALIBLE_ROOM_H
#define AVALIBLE_ROOM_H

#include <QDialog>

namespace Ui {
class avalible_room;
}

class avalible_room : public QDialog
{
    Q_OBJECT

public:
    explicit avalible_room(QWidget *parent = nullptr);
    ~avalible_room();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::avalible_room *ui;
};

#endif // AVALIBLE_ROOM_H
