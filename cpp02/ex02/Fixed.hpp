#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int fixed_var;
        static const int num_frac;
    public:
        Fixed();
        Fixed(const int a);
        Fixed(const Fixed& fx);
        Fixed(const float b);
        Fixed& operator=(const Fixed &fx);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(Fixed const &oth) const;
        bool operator<(Fixed const &oth) const;
        bool operator>=(Fixed const &oth) const;
        bool operator<=(Fixed const &oth) const;
        bool operator==(Fixed const &oth) const;
        bool operator!=(Fixed const &oth) const;

        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        Fixed operator*(Fixed const &oth);
        Fixed operator/(Fixed const &oth);

        static Fixed& min(Fixed  &oth1, Fixed &oth2);
        static const Fixed& min(Fixed const &oth1, Fixed const &oth2);
        static Fixed& max(Fixed  &oth1, Fixed &oth2);
        static const Fixed& max(Fixed const &oth1, Fixed const &oth2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fx) ;

#endif