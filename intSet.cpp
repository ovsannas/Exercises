#include <iostream>
#include "intSet.h"

IntegerSet::IntegerSet()
{
    for(int i = 0; i < 100; i++)
        intSet[i] = false;
}

IntegerSet::IntegerSet(int a, int b, int c, int d, int e)
{
    if(a == -1)
        intSet[a] = false;
    else
        if(a >= 0 && a < 100)
            intSet[a] = true;

    if(b == -1)
        intSet[b] = false;
    else
        if(b >= 0 && b < 100)
            intSet[b] = true;

    if(c == -1)
        intSet[c] = false;
    else
        if(c >= 0 && c < 100)
            intSet[c] = true;

    if(d == -1)
        intSet[d] = false;
    else
        if(d >= 0 && d < 100)
            intSet[d] = true;

    if(e == -1)
        intSet[e] = false;
    else
        if(e >= 0 && e < 100)
            intSet[e] = true;
}

void IntegerSet::insertElement(int k)
{
    if(k < 0 || k >= 100)
    {
        std::cout << "Ներմուծվել է սխալ էլեմենտ" << std::endl;
    }
    else
        intSet[k] = true;
}

void IntegerSet::deleteElement(int m)
{
    if(m < 0 || m >= 100)
    {
        std::cout << "Նշված է սխալ էլեմենտ՝ ջնջելու համար" << std::endl;
    }
    else
        intSet[m] = false;
}

bool IntegerSet::containElement(int j)
{
    if(j < 0 || j >= 100)
        std::cout << "Ստուգում եք սխալ էլեմենտ" << std::endl;
    else
        return intSet[j];
}

void IntegerSet::Union(IntegerSet & S, IntegerSet & unionSet)
{
    for(int i = 0; i < 100; i++)
    {
        if (containElement(i) || S.containElement(i))
            unionSet.insertElement(i);
    }

}

void IntegerSet::Intersection(IntegerSet & S, IntegerSet & intersecSet)
{
    for(int i = 0; i < 100; i++)
    {
        if (containElement(i) && S.containElement(i))
            intersecSet.insertElement(i);
    }
}

bool IntegerSet::IsEqualTo(IntegerSet & S)
{
    int i;
    for(i = 0; i < 100; i++)
        return containElement(i) && S.containElement(i);
}


void IntegerSet::Print()
{
    for(int i = 0; i < 100; i++)
    {
        if(intSet[i] == true)
        {
            std::cout << i << " ";
        }

    }

    std::cout << std::endl;
}


