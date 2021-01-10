#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <math.h>

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
    int current = ui->spinBox->value();
    int addition = ui->spinBox_2->value();

    long long int cash = 0;
    long long int oil = 0;
    long long int ore = 0;
    long long int gold = 0;
    long long int uranium = 0;
    long long int diamond = 0;

    int new_current =0;
    int total = current + addition;
    int new_total = total +1;
    int calculate = new_total - new_current;

    switch (ui->comboBox->currentIndex()) {

    case 0:
        cash = pow(calculate * 300, 1.5);
        oil = pow(calculate * 160, 1.5);
        ore = pow(calculate * 90, 1.5);
        gold = pow(calculate * 2160, 1.5);
        diamond = pow(calculate * 0, 1.5);
        uranium = pow(calculate * 0, 1);
        break;

    case 1:
        cash = pow(calculate * 300, 1.5);
        oil = pow(calculate * 160, 1.5);
        ore = pow(calculate * 90, 1.5);
        gold = pow(calculate * 2160, 1.5);
        diamond = pow(calculate * 0, 1.5);
        uranium = pow(calculate * 0, 1);
        break;

    case 2:
        cash = pow(calculate * 300, 1.5);
        oil = pow(calculate * 160, 1.5);
        ore = pow(calculate * 90, 1.5);
        gold = pow(calculate * 2160, 1.5);
        diamond = pow(calculate * 0, 1.5);
        uranium = pow(calculate * 0, 1);
        break;

    case 3:
        cash = pow(calculate * 1000, 1.5);
        oil = pow(calculate * 10, 1.5);
        ore = pow(calculate * 10, 1.5);
        gold = pow(calculate * 180, 1.5);
        diamond = pow(calculate * 10, 0.7);
        uranium = pow(calculate * 0, 1);
        break;

    case 4:
        cash = pow(calculate * 1000, 1.5);
        oil = pow(calculate * 10, 1.5);
        ore = pow(calculate * 10, 1.5);
        gold = pow(calculate * 180, 1.5);
        diamond = pow(calculate * 10, 0.7);
        uranium = pow(calculate * 0, 1);
        break;

    case 5:
        cash = pow(calculate * 2000, 1.5);
        oil = pow(calculate * 90, 1.5);
        ore = pow(calculate * 25, 1.5);
        gold = pow(calculate * 25, 1.5);
        diamond = pow(calculate * 5, 0.7);
        uranium = pow(calculate * 20, 1.5);
        break;

    case 6:
        cash = pow(calculate * 30, 1.5);
        oil = pow(calculate * 216, 1.5);
        ore = pow(calculate * 16, 1.5);
        gold = pow(calculate * 9, 1.5);
        diamond = pow(calculate * 0, 0.7);
        uranium = pow(calculate * 0, 1.5);
        break;

    case 7:
        cash = pow(calculate * 1000, 1.5);
        oil = pow(calculate * 10, 1.5);
        ore = pow(calculate * 10, 1.5);
        gold = pow(calculate * 180, 1.5);
        diamond = pow(calculate * 10, 0.7);
        uranium = pow(calculate * 0, 1);
        break;

    case 8:
        cash = pow(calculate * 300, 1.5);
        oil = pow(calculate * 160, 1.5);
        ore = pow(calculate * 90, 1.5);
        gold = pow(calculate * 2160, 1.5);
        diamond = pow(calculate * 0, 1.5);
        uranium = pow(calculate * 0, 1);
        break;
    }

    ui->lineEdit-> setText(QString::number(ore));
    ui->lineEdit_2-> setText(QString::number(gold));
    ui->lineEdit_3-> setText(QString::number(cash));
    ui->lineEdit_4-> setText(QString::number(oil));
    ui->lineEdit_5-> setText(QString::number(uranium));
    ui->lineEdit_6-> setText(QString::number(diamond));


}
