#include <iostream>
#include "intSet.h"

int main()
{
    IntegerSet Set1(6,7,8,9,10);
    IntegerSet Set2(11,12,13,14,-1);
    IntegerSet Set12;
    IntegerSet Set3;

    Set1.Print();
    Set2.Print();

    Set1.insertElement(3);
    Set1.insertElement(4);
    Set1.insertElement(5);
    Set2.insertElement(3);
    Set2.insertElement(4);
    Set2.insertElement(5);

    Set1.Print();
    Set2.Print();

    Set1.Union(Set2,Set12);
    Set12.Print();

    Set1.Intersection(Set2, Set3);
    Set3.Print();

    if (Set1.IsEqualTo(Set2))
        std::cout << "Բազմությունները հավասար են" << std::endl;
    else
        std::cout << "Բազմությունները հավասար չեն" << std::endl;


    return 0;
}
