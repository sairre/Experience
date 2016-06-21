#include "logicthing.h"

LogicThing::LogicThing()
{

}
void LogicThing::DoPrivateSomething()
{
    qDebug()<<"We are doing something";
    qDebug()<<m_first;
    qDebug()<<m_second;
}

bool LogicThing::DoSomething(QString _first,QString _second)
{
    m_first = _first;
    m_second = _second;
    DoPrivateSomething();

    return true;
}
