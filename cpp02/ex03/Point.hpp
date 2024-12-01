#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    private:
        Fixed const  x;
        Fixed const  y;
    public:
        Point();
        Point(const float a, const float b);
        Point(const Point& fx);
        Point& operator=(const Point &fx);
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
        Fixed area(Point const p1, Point const p2, Point const p3);
        bool bsp( Point const a, Point const b, Point const c, Point const point);
};



#endif