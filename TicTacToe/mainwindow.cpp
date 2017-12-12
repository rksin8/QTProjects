#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player1Move=true;
    moveCount=1;
    MainWindow::initializeInputArray();
    ui->label_move->setText("Current Move: Player 1");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    if(player1Move){
        ui->pushButton_1->setText("X");
        MainWindow::player1Entry[0][0]=1;
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
    }else{
        ui->pushButton_1->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[0][0]=1;
    }
    ui->pushButton_1->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_2_clicked()
{
    if(player1Move){
        ui->pushButton_2->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[0][1]=1;
    }else{
        ui->pushButton_2->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[0][1]=1;
    }
    ui->pushButton_2->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_3_clicked()
{
    if(player1Move){
        ui->pushButton_3->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[0][2]=1;
    }else{
        ui->pushButton_3->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[0][2]=1;
    }
    ui->pushButton_3->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_4_clicked()
{
    if(player1Move){
        ui->pushButton_4->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[1][0]=1;
    }else{
        ui->pushButton_4->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[1][0]=1;
    }
ui->pushButton_4->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_5_clicked()
{
    if(player1Move){
        ui->pushButton_5->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[1][1]=1;
    }else{
        ui->pushButton_5->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[1][1]=1;
    }
    ui->pushButton_5->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_6_clicked()
{
    if(player1Move){
        ui->pushButton_6->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[1][2]=1;
    }else{
        ui->pushButton_6->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[1][2]=1;
    }
ui->pushButton_6->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_7_clicked()
{
    if(player1Move){
        ui->pushButton_7->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[2][0]=1;
    }else{
        ui->pushButton_7->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[2][0]=1;
    }
ui->pushButton_7->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_8_clicked()
{
    if(player1Move){
        ui->pushButton_8->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[2][1]=1;
    }else{
        ui->pushButton_8->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[2][1]=1;
    }
    ui->pushButton_8->setDisabled(true);
    displayResult();
}

void MainWindow::on_pushButton_9_clicked()
{
    if(player1Move){
        ui->pushButton_9->setText("X");
        player1Move=false;
        ui->label_move->setText("Current Move: Player 2");
        MainWindow::player1Entry[2][2]=1;
    }else{
        ui->pushButton_9->setText("O");
        player1Move=true;
        ui->label_move->setText("Current Move: Player 1");
        MainWindow::player2Entry[2][2]=1;
    }

    ui->pushButton_9->setDisabled(true);
    displayResult();
}

bool MainWindow::checkWin(int x[3][3]){
    result=false;

    if(x[0][0]==x[0][1] && x[0][1]==x[0][2]){// row 1 check
        result=true;
    }else if(x[1][0]==x[1][1] && x[1][1]==x[1][2]){// row 2 check
        result=true;
    }else if(x[2][0]==x[2][1] && x[2][1]==x[2][2]){// row 3 check
        result=true;
    }else if (x[0][0]==x[1][0] && x[1][0]==x[2][0]){// col 1 check
        result=true;
    }else if(x[0][1]==x[1][1] && x[1][1]==x[2][1]){// col 2 check
        result=true;
    }else if(x[0][2]==x[1][2] && x[1][2]==x[2][2]){// col 2 check
        result=true;
    }else if(x[0][0]==x[1][1] && x[1][1]==x[2][2]){// dia1 check
        result=true;
    }else if(x[2][0]==x[1][1] && x[1][1]==x[0][2]){//dia 2 check
        result=true;
    }

    return result;

}

void MainWindow::displayResult(){
    moveCount++;
    if (moveCount<=9){
        if(checkWin(MainWindow::player1Entry)){
            ui->label_move->setText("Player 1 Won!");

            QMessageBox::StandardButton reply;
              reply = QMessageBox::question(this, "Player 1 won!", "Player 1 won! Play Again?",
                                            QMessageBox::Yes|QMessageBox::No);
              if (reply == QMessageBox::Yes) {
                newGame();

              } else {
                QApplication::quit();
              }

            result=false;

        }else if(checkWin(MainWindow::player2Entry)){
            ui->label_move->setText("Player 2 Won!");
            QMessageBox::StandardButton reply;
              reply = QMessageBox::question(this, "Player 2 won!", "Player 2 won! Play Again?",
                                            QMessageBox::Yes|QMessageBox::No);
              if (reply == QMessageBox::Yes) {
                newGame();

              } else {
                QApplication::quit();
              }
            result=false;
        }
    }else{
        ui->label_move->setText("Draw!");
    }
}

void MainWindow::initializeInputArray(){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            player1Entry[i][j]=(12+i)*(1+j);
            player2Entry[j][i]=(1+i)*2*(1+j);
        }
    }
}

void MainWindow::newGame(){
    ui->pushButton_1->setText("");
    ui->pushButton_1->setDisabled(false);
    ui->pushButton_2->setText("");
    ui->pushButton_2->setDisabled(false);
    ui->pushButton_3->setText("");
    ui->pushButton_3->setDisabled(false);
    ui->pushButton_4->setText("");
    ui->pushButton_4->setDisabled(false);
    ui->pushButton_5->setText("");
    ui->pushButton_5->setDisabled(false);
    ui->pushButton_6->setText("");
    ui->pushButton_6->setDisabled(false);
    ui->pushButton_7->setText("");
    ui->pushButton_7->setDisabled(false);
    ui->pushButton_8->setText("");
    ui->pushButton_8->setDisabled(false);
    ui->pushButton_9->setText("");
    ui->pushButton_9->setDisabled(false);
    ui->label_move->setText("");
    player1Move=true;
    result=false;
    moveCount=1;
    initializeInputArray();

}
