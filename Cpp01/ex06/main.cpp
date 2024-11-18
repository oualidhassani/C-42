#include "Harl.hpp"

int main(int ac, char **av)
{
    std::string input = av[1];
    if(ac == 2)
    {
        if((input == "WARNING" )|| (input == "ERROR" )||( input == "DEBUG") ||( input == "INFO"))
        {
            Harl newobj;
            newobj.switch_function(input);
        }
        else
            std::cout << "[ Probably complaining about insignificant problems ]"  << std::endl;
    }
    else
        std::cout << "enter a valid number of arguments !";    
}