#include <iostream>
#include "time.h"

Time::Time(int hr, int mi, int se)
{ setTime(hr, mi, se); }

void Time::setHour (int h)
{ hour = h; }

void Time::setMinute (int m)
{ min = m; }

void Time::setSecond (int s)
{ sec = s; }

void setTime (int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

int Time::getHour()
{ return hour; }

int Time::getMinute()
{ return min; }

int Time::getSecond()
{ return sec; }
