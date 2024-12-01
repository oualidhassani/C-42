#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int fixed_var;
        static const int num_frac;
    public:
        Fixed(const int a);
        Fixed(const float b);
        Fixed();
        Fixed(const Fixed& fx);
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
        Fixed operator-(Fixed const &other) const;
        Fixed operator+(Fixed const &other) const;
        static Fixed& min(Fixed  &oth1, Fixed &oth2);
        static const Fixed& min(Fixed const &oth1, Fixed const &oth2);
        static Fixed& max(Fixed  &oth1, Fixed &oth2);
        static const Fixed& max(Fixed const &oth1, Fixed const &oth2);
        int getRawBits(void) const;
        void setRawBits( int const raw );


};

std::ostream& operator<<(std::ostream& os, const Fixed& fx);


#endif