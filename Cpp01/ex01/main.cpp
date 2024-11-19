#include "Zombie.hpp"

int main()
{
    Zombie *Z1;
    
    Z1  = zombieHorde(2, "oualiddd");

    for(int n = 0; n < 2; n++)
    {
        Z1[n].announce();
    }

    delete[] Z1; 
}
