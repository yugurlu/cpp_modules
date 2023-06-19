
#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
    private:
        int number;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &);
        Fixed &operator=(const Fixed &);
        int getRawBits(void);
        void setRawBits(int);
        //float toFloat(void) const;
        //int toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed &fixed);

#endif