#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
    std::cout << "WrongAnimal Default constructor is called " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor is called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal&  other)
{
    std::cout << "WrongAnimal Copy constructor is called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal&  other)
{
    std::cout << "WrongAnimal Copy asignement operator is called" << std::endl;
    if(this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal have undefined sound " << std::endl ;
}


std::string WrongAnimal::getType() const
{
    return type;
}
