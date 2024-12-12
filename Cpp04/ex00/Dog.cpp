#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog default constructor is called " << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    this->type = "Dog";
    std::cout << "Dog copy constructor is called " << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy asignement operator is called " << std::endl;
    if (this == &other)
        return *this;
    
    Animal::operator=(other);
    this->type = other.type;
    
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor is called " << std::endl;
}

std::string Dog::getType() const
{
    return type;
}

void Dog::makeSound() const
{
    std::cout << "HAW" << std::endl;
}