#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal(), brain(new  Brain())
{
    this->type = "Cat";
    std::cout << "Cat default constructor is called " << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
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
    delete this->brain;
    this->brain = new Brain(*other.brain);
    
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
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