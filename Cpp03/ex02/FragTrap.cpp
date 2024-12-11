#include "FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap("DefaultClapTrap")
{
    std::cout<< "FragTrap default constructor called" << std::endl;
    this->Name = "";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<< "FragTrap constructor called" << std::endl;

    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap  &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor is called " << std::endl;

    *this = other;

}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap Copy assignement operator is called " << std::endl;
    if (this == &other)
        return *this;
    this->Name = other.Name;
    this->Hit_points = other.Hit_points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high five to you " << getName() << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        this->Energy_points--;
        std::cout << getName() << " FragTrap attacks " << target << " with damage " << getAttackDamage() << std::endl;
    }
    else
        std::cout << "no energy points to attack with " << std::endl;
}
