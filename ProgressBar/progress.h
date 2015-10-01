#ifndef PROGRESS_H
#define PROGRESS_H
#include "sleep.h"

#include <QThread>

class Progress : public QThread
{
    Q_OBJECT

public:
    static Progress* progress;
    Progress* getProgress();
    void run();
    void setProgValue(int val);
    virtual ~Progress()
    {
        delete progress;
    }

private:
    Progress()
    {
        value = 0;
    }
    int value;
signals:
    void valueChanged(int value);

public slots:

};


#endif // PROGRESS_H
