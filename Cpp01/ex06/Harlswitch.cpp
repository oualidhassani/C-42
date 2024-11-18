#include "Harl.hpp"

void Harl::switch_function(std::string &level)
{
    Harl obj;
    std::string s1;
    std::string s2;
    std::string s3;
    std::string s4;

    s1 = "DEBUG";
    s2 = "INFO";
    s3 = "WARNING";
    s4 = "ERROR";

    int i;
    i = 0;
    if(level == s1)
        i = 0;
    else if(level == s2)
        i = 1;
    else if(level == s3)
        i = 2;
    else if(level == s4)
        i = 3;

    switch(i)
    {
        case 0:
        std::cout << "[DEBUGING]" << std::endl;
            obj.debug();
        std::cout << "[INFO]" << std::endl;

            obj.info();
        std::cout << "[WARNING]" << std::endl;
            obj.warning();
        std::cout << "[ERROR]" << std::endl;
            obj.error();
            break;
        case 1:
        std::cout << "[INFO]" << std::endl;
            obj.info();
        std::cout << "[WARNING]" << std::endl;
            obj.warning();
        std::cout << "[ERROR]" << std::endl;
            obj.error();
            break;

        case 2:
        std::cout << "[WARNING]" << std::endl;
            obj.warning();
        std::cout << "[ERROR]" << std::endl;
            obj.error();
            break;
        case 3:
        std::cout << "[ERROR]" << std::endl;
            obj.error();
            break;
    }
    
}