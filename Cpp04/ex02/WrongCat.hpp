#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &other);
        ~WrongCat();
        std::string getType() const;
        void makeSound() const;
};


#endif