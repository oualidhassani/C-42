#include "Zombie.hpp"

Zombie::Zombie(std::string name1)
{
    name = name1;
}
void Zombie::announce(void)
{
    std::cout << "<" << name <<  ">: BraiiiiiiinnnzzzZ..." <<std::endl;
}
