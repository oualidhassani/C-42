#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj("oualid");

    obj.attack("Enemy");
    obj.takeDamage(5);
    obj.beRepaired(10);
    obj.guardGate();

    
    // std::cout << std::endl;
    // ScavTrap obj1(obj);
    // obj1.attack("Enemy");
    // obj1.takeDamage(5);
    // obj1.beRepaired(10);
    // obj.guardGate();

}
