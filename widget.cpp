#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->on_pushButton, SIGNAL(clicked()), this, SLOT(change_text()));
    ui->on_pushButton->setText(on_light);
    ui->on_picture->hide();
    ui->off_picture->hide();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::change_text()
{

    if (ui->on_pushButton->text()==(on_light))
    {
        ui->on_pushButton->setText(off_light);
        ui->on_picture->show();
        ui->off_picture->hide();
    }
    else{
        ui->on_pushButton->setText(on_light);
        ui->on_picture->hide();
        ui->off_picture->show();
    }


}






