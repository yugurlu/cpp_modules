
#ifndef FIXED_HPP
#define FIXED_HPP

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
        Fixed(const Fixed &);
        Fixed	&operator=(const Fixed &);
        void setRawBits(int);
        int getRawBits(void);

};


#endif