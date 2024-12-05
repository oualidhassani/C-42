#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        void guardGate();
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();
};





#endif