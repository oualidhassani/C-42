#include "Fixed.hpp"

bool Fixed::operator>(Fixed const& oth) const
{
    return(this->fixed_var > oth.fixed_var);
}

bool Fixed::operator<(Fixed const &oth) const
{
    return(this->fixed_var < oth.fixed_var);
}

bool Fixed::operator>=(Fixed const &oth) const 
{
    return(this->fixed_var >= oth.fixed_var);
}

bool Fixed::operator<=(Fixed const &oth) const
{
    return(this->fixed_var <= oth.fixed_var);
}

bool Fixed::operator==(Fixed const &oth) const
{
    return(this->fixed_var == oth.fixed_var);
}

bool Fixed::operator!=(Fixed const &oth) const
{
    return(this->fixed_var != oth.fixed_var);
}


Fixed Fixed::operator++()
{
    this->fixed_var++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp =(*this);
    this->fixed_var++;
    return(tmp);
}

Fixed Fixed::operator--()
{
    this->fixed_var--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp =(*this);
    this->fixed_var--;
    return(tmp);
}

Fixed Fixed::operator*(Fixed const &oth)
{
    Fixed result;

    result.fixed_var = roundf((this->toFloat() * oth.toFloat()) * (1 << Fixed::num_frac));

    return result;
}

Fixed Fixed::operator/(Fixed const &oth)
{
    Fixed result;

    result.fixed_var = roundf((this->toFloat() / oth.toFloat()) * (1 << Fixed::num_frac));

    return result;
}

 Fixed& Fixed::min(Fixed  &oth1, Fixed &oth2)
 {
    return(oth1 < oth2) ? oth1 : oth2;
 }


const Fixed& Fixed::min(const Fixed& oth1, const Fixed& oth2) {
    return (oth1 < oth2) ? oth1 : oth2;
}

 Fixed& Fixed::max(Fixed  &oth1, Fixed &oth2)
 {
    return(oth1 > oth2) ? oth1 : oth2;
 }


const Fixed& Fixed::max(const Fixed& oth1, const Fixed& oth2) {
    return (oth1 > oth2) ? oth1 : oth2;
}

Fixed	Fixed::operator-(Fixed const &other) const {
	Fixed	ret;
	ret.setRawBits(getRawBits() - other.getRawBits());
	return ret;
}

Fixed	Fixed::operator+(Fixed const &other) const {
	Fixed	ret;
	ret.setRawBits(getRawBits() + other.getRawBits());
	return ret;
}