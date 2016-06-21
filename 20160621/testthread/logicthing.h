#ifndef LOGICTHING_H
#define LOGICTHING_H

#include <QtDebug>
#include <QString>
class LogicThing
{
public:
    LogicThing();
    bool DoSomething(QString,QString);
private:
    QString m_first;
    QString m_second;
    void DoPrivateSomething();
};

#endif // LOGICTHING_H
