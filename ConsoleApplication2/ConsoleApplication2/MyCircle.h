#pragma once
#include "Point.h"

class MyCircle
{
    Point o;
    double r;

    double dabsd(double n);
public:
    MyCircle();
    MyCircle(Point o, double r);
    MyCircle(MyCircle& other);
    ~MyCircle();

    void setPoint(Point o);
    void setR(double r);

    Point getPoint();
    double getR();

    friend std::istream& operator>>(std::istream& in, MyCircle& other);
    friend std::ostream& operator<<(std::ostream& out, MyCircle& other);

    double calculateSquare();
    double calculatePerimetr();
    bool isIntersect(MyCircle& anotherRectangle);

    bool operator ==(MyCircle& other);
    bool operator >(MyCircle& other);
    bool operator <(MyCircle& other);
    bool operator >=(MyCircle& other);
    bool operator <=(MyCircle& other);
    bool operator !=(MyCircle& other);
};



