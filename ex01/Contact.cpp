#include "Contact.hpp"
#include "Phonebook.hpp"

void PhoneBook::add_contact()
{
    Contact newcontact;
    std::string input;

  

    std::cout << "Enter first name :";
    std::getline(std::cin, input);
    newcontact.setFirstName(input);

    std::cout << "Enter last name :";
    std::getline(std::cin, input);
    newcontact.setLastName(input);
    
    std::cout << "Enter nick name :";
    std::getline(std::cin, input);
    newcontact.setNickname(input);

    std::cout << "Enter a phone number :";
    std::getline(std::cin, input);
    newcontact.setPhoneNumber(input);


    std::cout << "Enter a Darkest secret :";
    std::getline(std::cin, input);
    newcontact.setDarkestSecret(input);

    if(add_counter < 8)
    {
        contacts[add_counter] = newcontact;
        add_counter++;
    }
    else
        {
            contacts[oldest] = newcontact;
            oldest = oldest + 1 % 8;
        }
}
