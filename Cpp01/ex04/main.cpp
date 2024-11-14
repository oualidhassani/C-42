#include "main.hpp"

int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string file;
        std::string s1;
        std::string s2;
        
        file = av[1];
        s1 = av[2];
        s2 = av[3];

        std::fstream Filename;
        Filename.open(file, std::ios::out);        
        if(Filename) 
        {
            std::string content;
            std::getline(Filename, content);

            
            
        }
        else
            std::cout << "fail to open the file";
    }   
    else
        std::cout << "need to enter arguments like this: <file name> s1 s2";
}