#include "my_thread.h"

My_Thread::My_Thread()
{

}

void My_Thread::SetMsg(QString _first, QString _second)
{
    m_tmp_first = _first;
    m_tmp_second = _second;
}

void My_Thread::run()
{
    for(int i = 0 ;i != 111000;i++)
    {
        m_logic.DoSomething(m_tmp_first,m_tmp_second);
    }




    emit emitThreadOver();
}

