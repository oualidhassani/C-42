#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

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