#include "Zombie.hpp"

int main()
{
    Zombie *Z1;
    
    Z1  = zombieHorde(0, "oualiddd");

    for(int n = 0; n < 3; n++)
    {
        Z1[n].announce();
    }

    delete[] Z1; 
}
