#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

Zombie* newZombie(std::string name)
{
    Zombie *new_one = new Zombie(name);
    if(!new_one)
        return(NULL);
    return new_one;
}
