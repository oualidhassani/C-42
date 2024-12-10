#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultClaptrap")
{
    std::cout << "ScavTrap default Constructor is called " << std::endl;
    this->Name = "";
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor is called " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor is called " << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    std::cout << "Scavtrap Copy assignement operator is called " << std::endl;

    this->Name = other.Name;
    Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Scavtrap Copy assignement operator is called " << std::endl;

    if (this == &other)
        return *this;
    
    ClapTrap::operator=(other);
    this->Name = other.Name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        this->Energy_points--;
        std::cout << getName() << " attacks " << target << " with damage " << getAttackDamage() << std::endl;
    }
    else
        std::cout << "no energy points to attack with " << std::endl;
}

 void ScavTrap::takeDamage(unsigned int amount)
 {
    if(amount > static_cast<unsigned int>(Hit_points))
        Hit_points = 0;
    if(getHitPoints() > 0 && static_cast<unsigned int>(Hit_points) > amount)
    {
        this->Hit_points = getHitPoints() - amount;
        std::cout << "ScavTrap has now " << getHitPoints() << std::endl; 
    }
    else
        std::cout << "no hit points " << std::endl;
 }

 void ScavTrap::beRepaired(unsigned int amount)
 {
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        this->Hit_points += amount;
        this->Energy_points--;
        std::cout << "ScavTrap repaired with " << amount << " hit points" << std::endl;
    }
    else
        std::cout << "no energy points to repair with " << std::endl;
 }