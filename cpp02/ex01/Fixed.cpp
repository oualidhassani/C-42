#include "Fixed.hpp"

const int Fixed::num_frac = 8;

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;

    fixed_var = 0;
}

Fixed::Fixed(const Fixed& fx)
{
    std::cout << "Copy Constructor called" << std::endl;

    fixed_var = fx.fixed_var;
    // *this = fx;
}

Fixed&  Fixed::operator=(const Fixed &fx)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if(this == &fx)
        return *this;
    
    this->fixed_var = fx.fixed_var;

    return *this;
}

Fixed::Fixed(const int a)
{
    std::cout << "int constructor called " << std::endl;
    fixed_var =  roundf(a << num_frac);
}

Fixed::Fixed(const float b)
{
    std::cout << "float constructor is called " << std::endl;
    fixed_var = roundf (b * (1 << num_frac));
}
