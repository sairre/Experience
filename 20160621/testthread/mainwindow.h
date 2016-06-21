#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logicthing.h"
#include "my_thread.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void button_clicked_slot();
    void Thread_Over_slot();
private:
    Ui::MainWindow *ui;
  //  LogicThing m_logic;
    My_Thread m_thread;
};

#endif // MAINWINDOW_H
