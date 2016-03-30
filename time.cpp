#include <iostream>
#include "time.h"

Time::Time(int hr, int mi, int se)
{
    setTime(hr, mi, se);
}

void Time::setHour (int h)
{
    hour = (h > 0 && h <= 24) ? h : 0;
}

void Time::setMinute (int m)
{ 
    min = (m >= 0 && m < 60) ? m : 0; 
}

void Time::setSecond (int s)
{ 
    sec = (s >= 0 && s < 60) ? s : 0;
}

void Time::setTime (int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

int Time::getHour()const
{ 
    return hour; 
}

int Time::getMinute()const
{
    return min;
}

int Time::getSecond()const
{
    return sec;
}

void Time::printStandard()const
{
    std::cout << ((hour == 12) ? hour : hour % 12) << ":" << ((min < 10)? "0" : "") << min << ":" << ((sec < 10)? "0" : "") << sec << ((hour < 12)? "AM" : "PM") << std::endl;
}
