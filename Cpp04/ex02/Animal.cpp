#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Animal Default constructor is called " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor is called " << std::endl;
}

Animal::Animal(const Animal&  other)
{
    std::cout << "Animal Copy constructor is called" << std::endl;
    *this = other;   
}

Animal& Animal::operator=(const Animal&  other)
{
    std::cout << "Animal Copy asignement operator is called" << std::endl;
    if(this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}
