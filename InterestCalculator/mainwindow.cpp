#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_calculatePI_clicked()
{
    double A=0; //amount after including interest
    double P = ui->lineEdit_amount->text().toDouble();
    double r = ui->lineEdit_rate->text().toDouble()/100.0;
    int t = ui->lineEdit_time->text().toInt();

    A =P*(1 + r*t);
    QString text ="Value after " + QString::number(t) +" years= " + QString::number(A);
    ui->lbl_interestPI->setText(text);
}

void MainWindow::on_btn_calculateCI_clicked()
{
    double A =0;
    double P=ui->lineEdit_P->text().toDouble();
    double r= ui->lineEdit_r->text().toDouble()/100.0;
    int t = ui->lineEdit_t->text().toInt();
    int n = ui->lineEdit_n->text().toInt();

    int power = n*t;

    A = P*std::pow((1 + r/n),power);
    QString text ="Value after " + QString::number(t) +" years= " + QString::number(A);
    ui->label_A->setText(text);


}
