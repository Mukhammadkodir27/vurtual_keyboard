#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //ui->textBrowser->setText("Q");
    setText("Q");
}


void MainWindow::on_pushButton_2_clicked()
{
     //ui->textBrowser->setText("W");
    setText("W");
}


void MainWindow::on_pushButton_3_clicked()
{
     //ui->textBrowser->setText("E");
    setText("E");
}


void MainWindow::on_pushButton_4_clicked()
{
     //ui->textBrowser->setText("R");
    setText("R");
}


void MainWindow::on_pushButton_5_clicked()
{
     //ui->textBrowser->setText("T");
    setText("T");
}



void MainWindow::on_pushButton_6_clicked()
{
     //ui->textBrowser->setText("Y");
    setText("Y");
}


void MainWindow::on_pushButton_7_clicked()
{
     //ui->textBrowser->setText("U");
    setText("U");
}


void MainWindow::on_pushButton_8_clicked()
{
    // ui->textBrowser->setText("I");
    setText("I");
}


void MainWindow::on_pushButton_9_clicked()
{
     //ui->textBrowser->setText("O");
    setText("O");
}


void MainWindow::on_pushButton_10_clicked()
{
    // ui->textBrowser->setText("P");
    setText("P");
}


void MainWindow::on_pushButton_11_clicked()
{
     // ui->textBrowser->setText("{");
    setText("{");
}


void MainWindow::on_pushButton_12_clicked()
{
     // ui->textBrowser->setText("}");
    setText("}");
}


void MainWindow::on_pushButton_13_clicked()
{
      ui->textBrowser->setText("A");
}


void MainWindow::on_pushButton_14_clicked()
{
      ui->textBrowser->setText("S");
}


void MainWindow::on_pushButton_15_clicked()
{
      ui->textBrowser->setText("D");
}


void MainWindow::on_pushButton_16_clicked()
{
    ui->textBrowser->setText("F");
}


void MainWindow::on_pushButton_17_clicked()
{
    ui->textBrowser->setText("G");
}


void MainWindow::on_pushButton_18_clicked()
{
    ui->textBrowser->setText("H");
}



void MainWindow::on_pushButton_19_clicked()
{
    ui->textBrowser->setText("J");
}


void MainWindow::on_pushButton_20_clicked()
{
    ui->textBrowser->setText("K");
}


void MainWindow::on_pushButton_21_clicked()
{
    ui->textBrowser->setText("L");
}


void MainWindow::on_pushButton_22_clicked()
{
    ui->textBrowser->setText(";");
}


void MainWindow::on_pushButton_23_clicked()
{
    ui->textBrowser->setText("\"");
}


void MainWindow::on_pushButton_24_clicked()
{
    ui->textBrowser->setText("Z");
}


void MainWindow::on_pushButton_25_clicked()
{
    ui->textBrowser->setText("X");
}


void MainWindow::on_pushButton_26_clicked()
{
    ui->textBrowser->setText("C");
}


void MainWindow::on_pushButton_27_clicked()
{
    ui->textBrowser->setText("V");
}


void MainWindow::on_pushButton_28_clicked()
{
    ui->textBrowser->setText("B");
}


void MainWindow::on_pushButton_29_clicked()
{
    ui->textBrowser->setText("N");
}


void MainWindow::on_pushButton_30_clicked()
{
    ui->textBrowser->setText("M");
}




void MainWindow::on_pushButton_31_clicked()
{
    ui->textBrowser->setText("<");
}


void MainWindow::on_pushButton_32_clicked()
{
    ui->textBrowser->setText(">");
}


void MainWindow::on_pushButton_33_clicked()
{
    ui->textBrowser->setText("?");
}

//============================================
void MainWindow::setText(QString s)
{
     addText(s, VecText);
    //ui->textBrowser->setText(s);
}
//=============================================


void MainWindow::addText(QString s,QVector<QString> VecText)
{
    VecText.push_back(s);
    for(int i=0; i<VecText.size(); ++i)
    {
      ui->textBrowser->setText(s);
    }
}

