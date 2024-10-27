#include "Phonebook.hpp"

void PhoneBook::search_contact()
{
        int i = 0;
        std::string line;
        bool valid = true;
        if(add_counter == 0)
        {
                std::cout << "its an empty phone contact, ADD some infos";
                std::cout << std::endl;

        }
        else
        {
                std::cout << "|-------------------------------------------|" << std::endl;
                std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
                std::cout << "|-------------------------------------------|" << std::endl;
        }

     while (i < add_counter)
    {
       std::string  firstname = contacts[i].getFirstName(); 
       std::string lastname = contacts[i].getLastName(); 
       std::string nickname = contacts[i].getNickname(); 

        if(firstname.length() > 10)
                firstname = firstname.substr(0, 9) + ".";
        if(firstname.length() > 10)
                firstname = lastname.substr(0, 9) + ".";
        if(firstname.length() > 10)
                firstname = nickname.substr(0, 9) + ".";

        std::cout << "|         " << i << "|";
        std::cout << std::setw(10) << firstname << "|"; 
        std::cout << std::setw(10) << lastname << "|";  
        std::cout << std::setw(10) << nickname << "|" << std::endl;
        std::cout << "|-------------------------------------------|" << std::endl;

        i++;
}

        std::cout << "Enter the index of what information you need: ";
        
        // if(std::getline(std::cin >> std::ws ,line))
        if(std::getline(std::cin >> std::ws ,line))
        //std::cin.fail()
    
                std::cout << "input fail";

        for(size_t j =0; line.length() > j; j++)
        {
                char c = line[j];
                if(!std::isdigit(c))
                {
                        valid = false;
                        break;
                }
        }

    if(valid)
    {
        int input = std::atoi(line.c_str());
        if(input >= 0 && input < add_counter)
        {
                std::cout << "First Name: " << contacts[input].getFirstName() << std::endl;
                std::cout << "Last Name: " << contacts[input].getLastName() << std::endl;
                std::cout << "Nickname: " << contacts[input].getNickname() << std::endl;
                std::cout << "Phone Number: " << contacts[input].getPhoneNumber() << std::endl;
                std::cout << "Darkest Secret: " << contacts[input].getDarkestSecret() << std::endl;
        }
        else
        {
                std::cout << "Invalid index! Please enter a number between 0 and " 
                        << (add_counter - 1) << std::endl;
        }        

    }
    else
    {
        std::cout << "Invalid input! Please enter a number." << std::endl;
    }
}
