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
    
    Fixed result = (p1.getX() * (p2.getY() - p3.getY()) + 
                    p2.getX() * (p3.getY() - p1.getY()) + 
                    p3.getX() * (p1.getY() - p2.getY())) / Fixed(2);
    
    return result;
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed area1;
    Fixed area2;
    Fixed area3;
    Fixed areapoint;
    Fixed resultfinal;

    area1 = area(a,b,point);
    area2 = area(a, point, c);
    area3 = area(point,b , c);
    areapoint = area(a,b, c);

    resultfinal = area1 + area2 + area3;


    if(resultfinal <= areapoint)
        return true;
    return false;

}