#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("John");

    clapTrap.attack("Enemy");
    clapTrap.takeDamage(20);
    clapTrap.beRepaired(10);

    return 0;
}