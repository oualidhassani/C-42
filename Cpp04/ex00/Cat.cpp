#include "Cat.hpp"

Cat::Cat() : Animal() 
{
    this->type = "Cat";
    std::cout << "Cat default constructor is called " << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    this->type = "Cat";
    std::cout << "Cat copy constructor is called " << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy asignement operator is called " << std::endl;
    if (this == &other)
        return *this;
    
    Animal::operator=(other);
    this->type = other.type;
    
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor is called " << std::endl;
}

std::string Cat::getType() const
{
    return type;
}

void Cat::makeSound() const
{
    std::cout << "MEAW" << std::endl;
}