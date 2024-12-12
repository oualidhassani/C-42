#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor is called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    this->type = "WrongCat";
    std::cout << "WrongCat copy constructor is called " << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Copy asignement operator is called" << std::endl;

    if (this == &other)
        return *this;
    
    WrongAnimal::operator=(other);
    this->type = "WrongCat";
    this->type = other.type;
    
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor is called " << std::endl;
}

std::string WrongCat::getType() const
{
    return type;
}

void WrongCat::makeSound() const
{
    std::cout << "MEAW" << std::endl;
}