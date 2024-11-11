#include "Zombie.hpp"

Zombie::~Zombie()
{
}

void Zombie::announce(void)
{
    std::cout << "<" << name <<  ">: BraiiiiiiinnnzzzZ..." <<std::endl;
}
Zombie::Zombie(std::string name) : name(name)
{
}
Zombie::Zombie() : name("no named zombbie")
{
}

Zombie* zombieHorde(int N, std::string name)
{
    if(N <= 0)
        exit(1);
    int n = 0;
    Zombie    *obj = new Zombie[N];
    if(!obj)
        return (NULL);
    while(N > n)
    {
        obj[n] =  Zombie(name);
        n++;
    }
    return(obj);
}
