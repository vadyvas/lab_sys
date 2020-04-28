#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_clicked();

    void on_min_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_sin_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
