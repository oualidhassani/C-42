#include "Fixed.hpp"

const int Fixed::num_frac = 8;

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() : fixed_var(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fx)
{
    std::cout << "Copy Constructor called" << std::endl;

    fixed_var = fx.getRawBits();
}

Fixed&  Fixed::operator=(const Fixed &fx)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if(this == &fx)
        return *this;
    
    this->fixed_var = fx.getRawBits();

    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_var;
}

void Fixed::setRawBits( int const raw )
{
    fixed_var = raw;
}