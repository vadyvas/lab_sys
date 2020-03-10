#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

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
    double a = 0.98,
            c = 1.1;
    int b[3][3] ={ {1,2 ,3}, {4, 5, 6}, {7,8,9,}};
    double p = 1,
            s = 0;
    for (int i(0); i < 3; i++)
    {
        p *= a * x(b, i) + c;
        s += a * x(b, i) + c;
    }

    double f = p + a * s;
    ui->result->setText(QString::number(f));
}

double MainWindow::x(int b[3][3], int i)
{
    double s = 0;
    for (int j(0); j < 3; j++)
    {
        s += sin(b[i][j]);
    }
    return s;
}
