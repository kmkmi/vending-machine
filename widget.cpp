#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <string>

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    check_button();
}

Widget::~Widget()
{
    delete ui;
}

int money = 0;

void Widget::on_pb_10_clicked()
{
    money+= 10;
    ui->lcdNumber->display(money);
    check_button();
}

void Widget::on_pb_50_clicked()
{

    money+= 50;
    ui->lcdNumber->display(money);
    check_button();
}

void Widget::on_pb_100_clicked()
{

    money+= 100;
    ui->lcdNumber->display(money);
    check_button();
}

void Widget::on_pb_500_clicked()
{

    money+= 500;
    ui->lcdNumber->display(money);
    check_button();
}

void Widget::check_button(){

    if(money < 100)
        ui->pb_Coffee->setEnabled(false);
    else
        ui->pb_Coffee->setEnabled(true);

    if(money < 150)
        ui->pb_Tea->setEnabled(false);
    else
        ui->pb_Tea->setEnabled(true);

    if(money < 200)
        ui->pb_Milk->setEnabled(false);
    else
        ui->pb_Milk->setEnabled(true);


}

void Widget::on_pb_Coffee_clicked()
{

    if(money >= 100){
        money-= 100;
        ui->lcdNumber->display(money);
    }
    check_button();
}

void Widget::on_pb_Tea_clicked()
{

    if(money >= 150){
        money-= 150;
        ui->lcdNumber->display(money);
    }
    check_button();
}

void Widget::on_pb_Milk_clicked()
{

    if(money >= 200){
        money-= 200;
        ui->lcdNumber->display(money);
    }
    check_button();
}

void Widget::on_pb_Reset_clicked()
{

    std::string mes = "Change : "+std::to_string(money);
    QMessageBox::StandardButton ret  = QMessageBox::information(this, tr("Reset"),
                                        tr(mes.c_str()) ,QMessageBox::Yes,  QMessageBox::Cancel );
    if (ret == QMessageBox::Yes){
        money = 0;
        ui->lcdNumber->display(money);
        check_button();
    }
}
