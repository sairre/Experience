#ifndef MY_THREAD_H
#define MY_THREAD_H
#include <QThread>
#include <QDebug>
#include <QString>

#include "logicthing.h"
class My_Thread : public QThread
{
    Q_OBJECT
public:
    My_Thread();
    void SetMsg(QString,QString);
protected:
    void run();
signals:

    void emitThreadOver();

private:
    QString m_tmp_first;
    QString m_tmp_second;

    LogicThing m_logic;
};

#endif // MY_THREAD_H
