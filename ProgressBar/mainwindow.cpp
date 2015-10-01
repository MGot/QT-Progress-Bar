#include "progress.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exitButton_clicked()
{
    close();
}

void MainWindow::on_startButton_clicked()
{
    Progress* prog = nullptr;
    prog = prog->getProgress();
    long int address = reinterpret_cast<long int>(prog);
    QString QSaddress = QString::number(address);
    ui->label->setText("Adres singletonu: " + QSaddress);
    connect(prog,SIGNAL(valueChanged(int)), this, SLOT(on_progressBar_valueChanged(int)));
    prog->setProgValue(ui->progressBar->value());
    prog->start();

}

void MainWindow::on_stopButton_clicked()
{
    Progress* prog = nullptr;
    prog = prog->getProgress();
    if(prog->isRunning())
    {
        prog->terminate();
        ui->label->setText("Proces zatrzymany!");
    }
}

void MainWindow::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void MainWindow::on_newButton_clicked()
{
    Progress* prog = nullptr;
    prog = prog->getProgress();
    prog->setProgValue(0);
    ui->progressBar->setValue(0);
}
