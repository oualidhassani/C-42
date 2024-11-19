#include "HumanB.hpp"

HumanB::HumanB(const std::string New_name) : name(New_name), weapon(nullptr)
{
}

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if(weapon)
        std::cout << "<" << name << "> attacks with their " << weapon->getType() << std::endl;   
    else
        std::cout << "<" << name << " there is no weapon to atack with it" << std::endl;

}

void   HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}