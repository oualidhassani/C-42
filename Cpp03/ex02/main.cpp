#include "FragTrap.hpp"

int main()
{
    FragTrap obj("oualid");

    obj.attack("Enemy");
    obj.takeDamage(5);
    obj.beRepaired(10);
    obj.highFivesGuys();

    std::cout<<std::endl;   
    FragTrap copyObj(obj);

    std::cout<<std::endl;
    copyObj.attack("Another Enemy");
    copyObj.takeDamage(10);
    copyObj.beRepaired(5);
    copyObj.highFivesGuys();

}