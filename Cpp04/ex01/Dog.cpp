#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal() , brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog default constructor is called " << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
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
    delete this->brain;
    this->brain  = new Brain(*other.brain);
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
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