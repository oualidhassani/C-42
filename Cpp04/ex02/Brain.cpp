#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Constructor of brain is called ";
    for(int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = "Default Brain ";
    }
}

Brain::Brain(const Brain &other)
{
    std::cout << "copy Constructor of brain is called ";
    for(int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout << "copy assignement operator of brain is called ";
    for(int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain desturctor is called " << std::endl;
}
