#include "Weapon.hpp"

Weapon::~Weapon()
{
}

Weapon::Weapon()
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
   type = newone;
}