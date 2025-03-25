#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{
	x = 1;
	y = 1;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

Point::Point(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
}

Point& Point::operator=(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
	return *this;
}

void Point::printInfo()
{
	printf("Point1: %d\n", x);
	printf("Point2: %d\n", y);
}

int Point::getx()
{
	return x;
}

int Point::gety()
{
	return y;
}

void Point::setx(int newx)
{
	x = newx;
}

void Point::sety(int newy)
{
	y = newy;
}


std::ostream& operator<<(std::ostream& os, const Point& dt)
{
	os << "{" << dt.x << "," << dt.y << "}" << std::endl;
	return os;
}

istream& operator>>(istream is, Point& cl)
{
	is >> cl.x >> cl.y;
	return is;
}
