#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "test/test.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Test test = Test();
    QString* buildName = test.getBuildInfo();
    buildName->prepend("Linux build version: \n");
    ui->buildNameLabel->setText(*buildName);
}

MainWindow::~MainWindow()
{
    delete ui;
}
