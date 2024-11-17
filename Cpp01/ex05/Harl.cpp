#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

 void   Harl::debug(void)
 {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
 }

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for  years whereas you started working here since last month." << std::endl;
}
void    Harl::error(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain(std::string level)
{
    if (level.empty())
    {
        std::cout << "Invalid level enter a valid one" << std::endl;
        return;
    }
    
    typedef void (Harl::*MemberFuncPtr)();
    MemberFuncPtr functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"debug", "info", "warning", "error"};
    bool valid = false;

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            valid = true;
            break;
        }
    }
    if (!valid)
    {
        std::cout << "Invalid level: enter a valid one" << std::endl;
    }
}

void Harl::complain(const char* level)
{
    if (level)
        complain(std::string(level));
    else
        std::cout << "Invalid level enter a valid one" << std::endl;
}