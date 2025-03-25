#pragma once
#include "Point.h"
#include <iostream>
class MyCircle
{
private:
	int a;
	int b;
	int r;
	Point d;
	

public:
	MyCircle();

	MyCircle(int a, int b, int r, Point d);

	~MyCircle();

	MyCircle(const MyCircle& another);

	MyCircle& operator=(const MyCircle& another);

	int geta();
	int getb();
	int getr();
	Point getd();

	void seta(int newa);
	void setb(int newb);
	void setr(int newr);
	void setd(Point newd);

	friend std::ostream& operator<<(std::ostream& os, const MyCircle& circle);

};

