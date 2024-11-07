#include <iostream>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std::cout << std::endl;
    }
    
    if(ac > 1)
    {
        for(int i = 1; i < ac ;i++)
        {
            for(int j = 0; av[i][j]; j++)
            {
                if(av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] = (char)toupper(av[i][j]);
                std::cout << av[i][j];
            }
        }
        std::cout << std::endl;
    }
}
