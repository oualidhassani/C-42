#include "Point.hpp"

Point::Point():x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point& fx)
{
    (void)fx;
    return *this;
}

Point::~Point()
{
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}


Fixed Point::area(Point const p1, Point const p2, Point const p3)
{
    
    Fixed result = std::abs((p1.getX() * (p2.getY() - p3.getY()) + 
                           p2.getX() * (p3.getY() - p1.getY()) + 
                           p3.getX() * (p1.getY() - p2.getY())).toFloat()) / 2.0f;
    
    return result;
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point) 
{
    Fixed areaABC = Point::area(a, b, c);
    Fixed areaPAB = Point::area(point, a, b);
    Fixed areaPBC = Point::area(point, b, c);
    Fixed areaPCA = Point::area(point, c, a);

    return (areaABC == (areaPAB + areaPBC + areaPCA));
}