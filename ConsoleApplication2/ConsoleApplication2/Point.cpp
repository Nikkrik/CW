#include "Point.h"

Point::Point()
{
    this->x = 0.0;
    this->y = 0.0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::Point(const Point& other)
{
    this->x = other.x;
    this->y = other.y;
}

Point::~Point()
{

}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getX()
{
    return this->x;
}

double Point::getY()
{
    return this->y;
}

double Point::calcDistance(Point& anotherPoint)
{
    return sqrt((anotherPoint.x - this->x) * (anotherPoint.x - this->x) + (anotherPoint.y - this->y) * (anotherPoint.y - this->y));
}

std::istream& operator>>(std::istream& in, Point& other)
{
    in >> other.x >> other.y;
    return in;
}

std::ostream& operator<<(std::ostream& out, Point& other)
{
    out << "{" << other.x << "," << other.y << "}";
    return out;
}
