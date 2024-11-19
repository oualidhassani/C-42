#include "HumanA.hpp" 

HumanA::HumanA(const std::string &New_name, Weapon &new_type) : name(New_name), weapon(new_type)
{
}

HumanA::HumanA()
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << "<" << name << "> attacks with their " << weapon.getType() << std::endl;
}
