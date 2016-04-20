#include <iostream>
#include "intSet.h"

IntegerSet::IntegerSet()
{
    for(int i = 0; i < 101; i++)
        arraySet[i] = false;
}

IntegerSet::IntegerSet(int a, int b, int c, int d, int e)
{
    if(a == -1)
        arraySet[a] = false;
    else
        if(a >= 0 && a <= 100)
            arraySet[a] = true;

    if(b == -1)
        arraySet[b] = false;
    else
        if(b >= 0 && b <= 100)
            arraySet[b] = true;

    if(c == -1)
        arraySet[c] = false;
    else
        if(c >= 0 && c <= 100)
            arraySet[c] = true;

    if(d == -1)
        arraySet[d] = false;
    else
        if(d >= 0 && d <= 100)
            arraySet[d] = true;

    if(e == -1)
        arraySet[e] = false;
    else
        if(e >= 0 && e <= 100)
            arraySet[e] = true;
}

void IntegerSet::insertElement(int k)
{
    if(k < 0 || k > 100)
    {
        std::cout << "Ներմուծվել է սխալ էլեմենտ" << std::endl;
    }
    else
        arraySet[k] = true;
}

void IntegerSet::deleteElement(int m)
{
    if(m < 0 || m > 100)
    {
        std::cout << "Նշված է սխալ էլեմենտ՝ ջնջելու համար" << std::endl;
    }
    else
        arraySet[m] = false;
}

bool IntegerSet::containElement(int j)
{
    if(j < 0 || j > 100)
        std::cout << "Ստուգում եք սխալ էլեմենտ" << std::endl;
    else
        return arraySet[j];
}

void IntegerSet::Union(IntegerSet & S, IntegerSet & unionSet)
{
    for(int i = 0; i < 101; i++)
    {
        if (containElement(i) || S.containElement(i))
            unionSet.insertElement(i);
    }

}

void IntegerSet::Intersection(IntegerSet & S, IntegerSet & intersecSet)
{
    for(int i = 0; i < 101; i++)
    {
        if (containElement(i) && S.containElement(i))
            intersecSet.insertElement(i);
    }
}

bool IntegerSet::isEqualTo(IntegerSet & S)
{
}

void IntegerSet::Print()
{
    for(int i = 0; i < 101; i++)
    {
        if(arraySet[i] == true)
        {
            std::cout << i << " ";
        }

    }

    std::cout << std::endl;
}


