#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushbutton>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QString on_light = "开灯!";
    QString off_light = "关灯!";


private slots:

    void change_text();


private:
    Ui::Widget *ui;
    QPushButton on_pushButton;
};
#endif // WIDGET_H
