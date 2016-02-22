#include <iostream>
#include <fstream>
#include <map>
#include <string>

void splitText (std::string &, std::map<std::string, int> &);

int main(int argc, char* argv[])
{
    if( argc != 3 )
        return 3;

    std::string inp{argv[1]}, out{argv[2]};

    std::map <std::string, int> Words;

    std::ifstream T{inp};     // բացում ենք ֆայլ, որտեղից պետք է կարդանք տեքստը
    std::ofstream F{out};     // բացում ենք ֆայլ բառարանի համար

    std::string Text;           // string փոփոխականի մեջ պետք է կարդանք տեքստը

    if (!T) return 1;
    if (!F) return 2;

    while (! T.eof())
    {
        std::getline(T, Text);

        splitText (Text, Words);
    }

    for (auto &w : Words)
        F << w.first << " " << w.second << "\n";
    
    T.close();
    F.close();

    return 0;
}


void splitText (std::string & text, std::map<std::string, int> & words)
{
    std::string bar;
    
    for (char c : text)
    {
        c = tolower(c);
        if (isalpha(c))
        {
            bar += c;
        }

        else
        {
            if(!bar.empty())
            {
                words[bar]++;
            }
            bar = "";
        }

    }
    if(!bar.empty())
    {
        words[bar]++;
    }

}

