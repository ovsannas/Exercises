#include <iostream>
#include "time.h"

int main()
{
    Time wakeUp(7,15,0);
    wakeUp.setHour(6);
    std::cout << wakeUp.getHour() << std::endl;

    Time morn(9,5,25);
    morn.printStandard();

    Time eve(19,56,7);
    eve.printStandard();

    int e = eve.getHour();
    std::cout << e << std::endl;


    return 0;
}
