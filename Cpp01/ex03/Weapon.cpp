#include "Weapon.hpp"

Weapon::~Weapon()
{
}
Weapon::Weapon(std::string New_type) : type(New_type)
{
}

std::string const& Weapon::getType()
{
    return(type);
}
void Weapon::setType(std::string newone)
{
    newone = type;
}
HumanA::HumanA(const std::string &New_name, Weapon &new_type) : name(New_name), weapon(new_type)
{
}

HumanB::HumanB(const std::string New_name) : name(New_name)
{
}

HumanA::~HumanA()
{
}

HumanB::~HumanB()
{
}

void HumanA::attack()
{
    std::cout << "<" << name << "> attacks with their " << weapon.getType() << std::endl;
}

void HumanB::attack()
{
    if(weapon)
    {
        std::cout << "<" << name << "> attacks with their " << weapon->getType() << std::endl;
    }
        std::cout << "<" << name << " there is no weapon to atack with it" << std::endl;

}

void   HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}