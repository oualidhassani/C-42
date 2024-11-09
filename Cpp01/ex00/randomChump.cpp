#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie *new_one = new Zombie(name);
    new_one->announce();
    delete(new_one);
}