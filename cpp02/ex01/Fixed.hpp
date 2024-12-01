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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fx);


#endif