#include "Phonebook.hpp"

int main(int ac, char **av)
{
    (void)av;
    PhoneBook phone;
    std::string input;
    if(ac == 1)
    {
        while(1)
        {

            if(std::cin.eof())
                exit(1);
            std::cout << "Enter command: ";
            std::getline(std::cin, input);
  
            if(input == "ADD")
                phone.add_contact();
            else if(input == "SEARCH")
                phone.search_contact();
            else if(input == "EXIT")
                exit(0);
            else if(!input.empty())
            {
                std::cout << "not a valid command !";
                std::cout << std::endl;
            }
            else
                std::cout << std::endl;
        }
    }
}