#ifndef SLEEP
#define SLEEP
#include <QThread>
class Sleep : public QThread
{
public:
    static void usleep(unsigned long usecs){QThread::usleep(usecs);} // 10 microseconds
    static void msleep(unsigned long msecs){QThread::msleep(msecs);} // 10 miliseconds
    static void sleep(unsigned long secs){QThread::sleep(secs);}  // 10 seconds
};

#endif // SLEEP

