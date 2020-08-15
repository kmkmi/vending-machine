#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void check_button();

    void on_pb_10_clicked();

    void on_pb_50_clicked();

    void on_pb_100_clicked();

    void on_pb_500_clicked();

    void on_pb_Coffee_clicked();

    void on_pb_Tea_clicked();

    void on_pb_Milk_clicked();

    void on_pb_Reset_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
