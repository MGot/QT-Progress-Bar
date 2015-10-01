#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_exitButton_clicked();

    void on_startButton_clicked();

    void on_stopButton_clicked();

    void on_progressBar_valueChanged(int value);

    void on_newButton_clicked();

private:
    Ui::MainWindow *ui;
signals:

};


#endif // MAINWINDOW_H
