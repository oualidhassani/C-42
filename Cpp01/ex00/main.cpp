#include "Zombie.hpp"

int main()
{
    Zombie *Z2;
    Zombie Z1("oualid");
    Z1.announce();
    Z2 = newZombie("ziyad");
    randomChump("ayman");
    delete Z2;
    return 0;
}