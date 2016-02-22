#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream L("text.txt");    //բացում ենք ֆայլը
    std::ofstream F("text1.txt");   //բացում ենք ֆայլ գրելու համար

    std::string Str;        // հայտարարում ենք string փոփ․, որի մեջ պետք է կարդանք ֆայլի տողը
    

    if(!L) return 1;
    if(!F) return 2;

    while (! L.eof())
    {
        std::getline(L, Str);

        F << Str << "\n";

    }

    F.close();
    L.close();


    return 0;
}
