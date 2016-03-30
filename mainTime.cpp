#include <iostream>
#include "time.h"

int main()
{
    Time night(24,10,15);

    int hour = night.getHour();
    std::cout << hour << std::endl;
}
