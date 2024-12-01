#include "Fixed.hpp"

const int Fixed::num_frac = 8;

Fixed::~Fixed()
{
}

Fixed::Fixed()
{
    fixed_var = 0;
}

Fixed::Fixed(const Fixed& fx)
{
    fixed_var = fx.fixed_var;
}

Fixed&  Fixed::operator=(const Fixed &fx)
{
    if(this == &fx)
        return *this;
    
    this->fixed_var = fx.fixed_var;

    return *this;
}

Fixed::Fixed(const int a)
{
    fixed_var =  a << num_frac;
}

Fixed::Fixed(const float b)
{
    fixed_var = roundf(b * (1 << num_frac));
}



int Fixed::toInt( void ) const
{
    return fixed_var >> num_frac;
}


float Fixed::toFloat( void ) const
{
    return static_cast<float>(fixed_var) / (1 << num_frac);
}

int Fixed::getRawBits(void) const
{
    return fixed_var;
}

void Fixed::setRawBits( int const raw )
{
    fixed_var = raw;
}