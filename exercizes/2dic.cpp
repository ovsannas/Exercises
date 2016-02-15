#include <iostream>
#include <fstream>
#include <string>
#include <map>

bool read_dictionary(std::string, std::map<std::string, int> &);

int main (int argc, char* argv[])
{
    std::map<std::string, int> Dic;

    if(argc < 4)
    {
        return 1;
        std::cout << "Ֆայլերի քանակը ճիշտ չէ " << std::endl;
    }

    for (int i = 1; i < argc -1; i++)
    {
        std::string Fname{argv[i]};
        read_dictionary(Fname, Dic);
    }

    std::ofstream Out{argv[argc-1]};

    for (auto & elD : Dic)
        Out << elD.first << " " << elD.second << "\n";

    Out.close();
    

    return 0;
}

bool read_dictionary(std::string f_name, std::map<std::string, int> & dic)
{
    std::ifstream D(f_name);

    if(!D)
        return false;
    
    std::string word;
    int wCount = 0;

    while (D >> word >> wCount)
            dic[word] += wCount;  

    D.close();    
}
