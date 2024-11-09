#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}
Zombie* newZombie(std::string name)
{
    Zombie *new_one = new Zombie(name);
    return new_one;
}
