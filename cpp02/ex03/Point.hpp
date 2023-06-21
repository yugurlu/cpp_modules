
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point() : x(0), y(0) {}
        ~Point();
        Point(const Fixed, const Fixed);
        Point(const Point &);
        Point &operator = (const Point &);
};

#endif