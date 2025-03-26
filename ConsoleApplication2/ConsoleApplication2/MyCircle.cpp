#include "MyCircle.h"

double MyCircle::dabsd(double n)
{
    return n > 0 ? n : -n;
}

MyCircle::MyCircle()
{
    r = 0.0;
}

MyCircle::MyCircle(Point o, double r)
{
    this->o = o;
    this->o = o;
    this->r = dabsd(r);
}

MyCircle::MyCircle(MyCircle& other)
{
    this->o.setX(other.o.getX());
    this->o.setY(other.o.getY());
    this->r = other.r;
}

MyCircle::~MyCircle()
{

}

void MyCircle::setPoint(Point o)
{
    this->o.setX(o.getX());
    this->o.setY(o.getY());
}

void MyCircle::setR(double r)
{
    this->r = r;
}

Point MyCircle::getPoint()
{
    return o;
}

double MyCircle::getR()
{
    return r;
}

double MyCircle::calculateSquare()
{
    return 3.1415926535 * r * r;
}

double MyCircle::calculatePerimetr()
{
    return 2 * 3.1415926535 * r;
}

bool MyCircle::isIntersect(MyCircle& other)
{
    return (this->o.calcDistance(other.o) <= (this->r + other.r));
}

bool MyCircle::operator >(MyCircle& other)
{
    return this->calculateSquare() > other.calculateSquare() and !(*(this) == other);
}

bool MyCircle::operator <(MyCircle& other)
{
    return this->calculateSquare() < other.calculateSquare() and !(*(this) == other);
}

bool MyCircle::operator ==(MyCircle& other)
{
    return dabsd(this->calculateSquare() - other.calculateSquare()) <= 0.0000001;
}

bool MyCircle::operator >=(MyCircle& other)
{
    return this->calculateSquare() > other.calculateSquare() or (*(this) == other);
}


bool MyCircle::operator <=(MyCircle& other)
{
    return this->calculateSquare() < other.calculateSquare() or (*(this) == other);
}

bool MyCircle::operator !=(MyCircle& other)
{
    return !(*(this) == other);
}

std::istream& operator>>(std::istream& in, MyCircle& other)
{
    in >> other.o >> other.r;
    return in;
}

std::ostream& operator<<(std::ostream& out, MyCircle& other)
{
    Point a(other.o.getX() + other.r, other.o.getY());
    out << "{" << other.o << ";" << a << "}";
    return out;
}
