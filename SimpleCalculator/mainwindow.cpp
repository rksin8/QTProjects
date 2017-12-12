#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QMessageBox>


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

void MainWindow::on_pushButton_1_clicked()
{
    QString text=ui->lineEdit->text() + "1";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString text=ui->lineEdit->text() + "2";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString text=ui->lineEdit->text() + "3";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString text=ui->lineEdit->text() + "4";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString text=ui->lineEdit->text() + "5";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString text=ui->lineEdit->text() + "6";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString text=ui->lineEdit->text() + "7";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString text=ui->lineEdit->text() + "8";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString text=ui->lineEdit->text() + "9";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_0_clicked()
{
    QString text=ui->lineEdit->text() + "0";
    ui->lineEdit->setText(text);
}

void MainWindow::on_pushButton_decimal_clicked()
{
    if(!decimal){
    QString text=ui->lineEdit->text() + ".";
    ui->lineEdit->setText(text);
    decimal = true;
    }else{
        QMessageBox::information(
            this,
            tr("Error"),
            tr("decimal already pressed!") );
    }
}

void MainWindow::on_pushButton_C_clicked()
{
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_plusMinus_clicked()
{
    double num = ui->lineEdit->text().toDouble();
    if(num>=0){
        num = -num;
    }else{
        num = std::abs(num);
    }
    ui->lineEdit->setText(QString::number(num));
    decimal=false;
}

void MainWindow::on_pushButton_plus_clicked()
{
    MainWindow::left = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
    add=true;
    decimal=false;

}

void MainWindow::on_pushButton_minus_clicked()
{
    MainWindow::left = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
    subs=true;
     decimal=false;
}

void MainWindow::on_pushButton_mul_clicked()
{
    MainWindow::left = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
    mult=true;
     decimal=false;
}

void MainWindow::on_pushButton_div_clicked()
{
    MainWindow::left = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
    div=true;
     decimal=false;
}

void MainWindow::on_pushButton_equal_clicked()
{
    MainWindow::right = ui->lineEdit->text().toDouble();
    double result=0;
    if(add){
        result= left+right;
    }else if(subs){
        result= left-right;
    }else if(mult){
        result= left*right;
    }else if(div) {
        result= left/right;
    }
    ui->lineEdit->setText(QString::number(result));

    add = subs= mult=div=false;
    decimal=false;
}








