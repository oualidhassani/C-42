#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constructor is called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "Constructor is called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor is called " << std::endl;

    Name = other.Name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignement operator is called " << std::endl;

    if (this == &other)
        return *this;
    
    this->Name = other.Name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor is called " << std::endl;
}

std::string ClapTrap::getName() const
{
    return Name;
}

int ClapTrap::getHitPoints() const
{
    return Hit_points;
}

int ClapTrap::getEnergyPoints() const
{
    return Energy_points;
}

int ClapTrap::getAttackDamage() const
{
    return Attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        this->Hit_points--;
        this->Energy_points--;
        std::cout << getName() << " attacks " << target << " with damage " << getAttackDamage() << std::endl;
    }
    else
        std::cout << "no energy points to attack with " << std::endl;
}

 void ClapTrap::takeDamage(unsigned int amount)
 {
    if(amount > static_cast<unsigned int>(Hit_points))
        Hit_points = 0;
    if(getHitPoints() > 0 && static_cast<unsigned int>(Hit_points) > amount)
    {
        this->Hit_points = getHitPoints() - amount;
        std::cout << "ClapTrap has lost " << getHitPoints() << std::endl; 
    }
    else
        std::cout << "no hit points " << std::endl;
 }

 void ClapTrap::beRepaired(unsigned int amount)
 {
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        this->Hit_points += amount;
        this->Energy_points--;
        std::cout << "ClapTrap repaired with " << amount << " hit points" << std::endl;
    }
    else
        std::cout << "no energy points to repair with " << std::endl;
 }