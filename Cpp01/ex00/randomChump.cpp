#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie *new_one = new Zombie(name);
    if(!new_one)
        return ;
    new_one->announce();
    delete(new_one);
}