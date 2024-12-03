#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int fixed_var;
        static const int num_frac;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& fx);
        Fixed& operator=(const Fixed &fx);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

 
#endif