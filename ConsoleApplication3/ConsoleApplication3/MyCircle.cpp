#include "MyCircle.h"
#include "Point.h"

MyCircle::MyCircle()
{
	a = 1;
	b = 1;
	r = 1;
	d = Point();
}

MyCircle::MyCircle(int a, int b, int r, Point d)
{
	this->a = a;
	this->b = b;
	this->r = r;
	this->d = d;
}

MyCircle::~MyCircle()
{
}

MyCircle::MyCircle(const MyCircle& another)
{
	this->a = another.a;
	this->b = another.b;
	this->r = another.r;
	this->d = another.d;
}

MyCircle& MyCircle::operator=(const MyCircle& another)
{
	this->a = another.a;
	this->b = another.b;
	this->r = another.r;
	this->d = another.d;
	return *this;
}

int MyCircle::geta()
{
	return a;
}

int MyCircle::getb()
{
	return b;
}

int MyCircle::getr()
{
	return r;
}

Point MyCircle::getd()
{
	return d;
}

void MyCircle::seta(int newa)
{
	a = newa;
}

void MyCircle::setb(int newb)
{
	b = newb;
}

void MyCircle::setr(int newr)
{
	r = newr;
}

void MyCircle::setd(Point newd)
{
	d = newd;
}

std::ostream& operator<<(std::ostream& os, const MyCircle& circle)
{
	os << "{{" << circle.a << ", " << circle.b << "};{" << circle.r << "}}";
	return os;
}
