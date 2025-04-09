#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->on_picture->hide();
    ui->off_picture->hide();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_on_pushButton_clicked()
{
    ui->on_picture->show();
    ui->off_picture->hide();
}


void Widget::on_off_pushButton_clicked()
{
    ui->on_picture->hide();
    ui->off_picture->show();
}

