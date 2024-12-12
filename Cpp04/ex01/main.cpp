#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const int size_of_array = 4;
    const Animal *array[size_of_array];

    for(int i = 0; size_of_array / 2 > i ; i++)
    {
        array[i] = new Dog();
    }

    for(int i = size_of_array / 2; i < size_of_array; i++)
    {
        array[i] = new Cat();
    }

    for(int i = 0; size_of_array > i ; i++)
    {
        delete array[i];
    }
}