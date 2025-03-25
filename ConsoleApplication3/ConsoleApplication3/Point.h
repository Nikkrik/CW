#pragma once
#include <iostream>

using namespace std;

	class Point
	{
	private:
		int x;
		int y;
	public:
		Point(); //����������� �� ���������

		Point(int x, int y); //����������� � �����������

		~Point(); //����������

		Point(const Point& other); //����������� �����������

		Point& operator=(const Point& other);

		void printInfo();

		int getx();
		int gety();

		void setx(int newx);
		void sety(int newy);

		friend std::ostream& operator<<(std::ostream& os, const Point& dt);
		friend istream& operator>>(istream is, Point& cl);



};


