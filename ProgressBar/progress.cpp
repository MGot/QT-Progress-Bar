#include "progress.h"

Progress* Progress::progress = nullptr;


Progress* Progress::getProgress()
{
    if(progress == nullptr)
        progress = new Progress();
    return progress;
}

void Progress::setProgValue(int val)
{
    value = val;
}


void Progress::run()
{
    while(1)
    {
        value++;
        emit(valueChanged(value));
        Sleep::sleep(1);
    }
}

