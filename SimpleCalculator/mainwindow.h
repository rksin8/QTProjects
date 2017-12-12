#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_decimal_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_plusMinus_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_plus_clicked();

private:
    Ui::MainWindow *ui;
    double left, right;
    bool add=false;
    bool subs=false;
    bool mult=false;
    bool div=false;
    bool decimal=false;


};

#endif // MAINWINDOW_H
