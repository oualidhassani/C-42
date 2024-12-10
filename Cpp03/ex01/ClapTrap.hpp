#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
        virtual ~ClapTrap();
        virtual void attack(const std::string& target);
         void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
};

#endif