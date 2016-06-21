#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_test,SIGNAL(clicked(bool)),this,SLOT(button_clicked_slot()));
    connect(&m_thread,SIGNAL(emitThreadOver()),this,SLOT(Thread_Over_slot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_clicked_slot()
{
 //   m_logic.DoSomething("first","second");
  //  qDebug()<<"continue clicked thing";
    m_thread.SetMsg("first","second");
    m_thread.start();
}

void MainWindow::Thread_Over_slot()
{
    qDebug()<<"continue clicked things";
}
