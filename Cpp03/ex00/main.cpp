#include "ClapTrap.hpp"

int main()
{
    
    ClapTrap obj;
    ClapTrap clapTrap("John");

    clapTrap.attack("Enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(10);

    std::cout << std::endl;
    obj = clapTrap;
    obj.attack("Enemy");
    obj.takeDamage(5);
    obj.beRepaired(10);

    return 0;
}