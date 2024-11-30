#include "Fixed.hpp"

int Fixed::toInt( void ) const
{
    return fixed_var >> num_frac;
}


float Fixed::toFloat( void ) const
{

    return static_cast<float>(fixed_var) / (1 << num_frac);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fx) 
{
    os << fx.toFloat();
    return os;
}