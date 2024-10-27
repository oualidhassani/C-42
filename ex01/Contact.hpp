#ifndef Contact_HPP
#define Contact_HPP
#include <string>
#include <iostream>

class Contact
{
private: 
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact()
    {
        first_name = "";
        last_name  = "";
        nickname = "";
        phone_number = "";
        darkest_secret = "";
    }


    void setFirstName(std::string& newfirstname) { first_name = newfirstname; }
    void setLastName(std::string& newlastname) { last_name = newlastname; }
    void setNickname(std::string& newnickname) { nickname = newnickname; }
    void setPhoneNumber(std::string& newnumber) { phone_number = newnumber; }
    void setDarkestSecret(std::string& newsecret) { darkest_secret = newsecret; }

    std::string getFirstName() {return first_name;}
    std::string getLastName() {return last_name;}
    std::string getNickname() {return nickname;}
    std::string getPhoneNumber() {return phone_number;}
    std::string getDarkestSecret() {return darkest_secret;}

};

void search_contact();
void add_contact();

#endif