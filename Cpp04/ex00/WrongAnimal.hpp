#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal&  other);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& other);
        std::string getType() const;
        void makeSound() const;

};

#endif