#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "Contact.hpp"
#include <cstring>
#include <iostream>
#include <iomanip> 
class PhoneBook
{
    private:
    Contact contacts[8];
    int     add_counter;
    int     oldest;
    public:
        PhoneBook()
        {
            add_counter = 0; 
            oldest = 0;
    }
    void add_contact();
    void search_contact();

};

#endif