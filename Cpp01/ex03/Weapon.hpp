#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
    Weapon(std::string type);
    ~Weapon();
    std::string const& getType();
    void setType(std::string type);

};

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(const std::string &New_name,Weapon &new_type);
        ~HumanA();
        void    attack();
};

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(const std::string New_name);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon &weapon);
};

#endif