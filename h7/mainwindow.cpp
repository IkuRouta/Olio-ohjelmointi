#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , counter(0)
{
    ui->setupUi(this);



    ui->lineEdit->setText(QString::number(counter));
    ui->labelInfo->setText("Painiketta Count painettu 0 kertaa");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;

    QString s = QString::number(counter);

    ui->lineEdit->setText(s);
    ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;

    ui->lineEdit->setText("0");
    ui->labelInfo->setText("Painiketta Count painettu 0 kertaa");
}
