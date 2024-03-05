#include "help.h"
#include "ui_help.h"
#include <QPixmap>
Help::Help(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Help)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/Map.jpg");
    ui->label_pic_2->setPixmap(pix.scaled(325,325,Qt::KeepAspectRatio));

}

Help::~Help()
{
    delete ui;
}
