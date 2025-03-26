#pragma once
#include <iostream>
#include <cmath>

class Point
{
    double x;
    double y;
public:
    Point();
    Point(double x, double y);
    Point(const Point& other);
    ~Point();

    void setX(double x);
    void setY(double y);

    double getX();
    double getY();

    friend std::istream& operator>>(std::istream& in, Point& other);
    friend std::ostream& operator<<(std::ostream& out, Point& other);


    double calcDistance(Point& anotherPoint);
};



