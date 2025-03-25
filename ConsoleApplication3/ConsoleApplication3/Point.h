#pragma once
#include <iostream>

using namespace std;

	class Point
	{
	private:
		int x;
		int y;
	public:
		Point(); //конструктор по умолчанию

		Point(int x, int y); //конструктор с параметрами

		~Point(); //деструктор

		Point(const Point& other); //конструктор копирования

		Point& operator=(const Point& other);

		void printInfo();

		int getx();
		int gety();

		void setx(int newx);
		void sety(int newy);

		friend std::ostream& operator<<(std::ostream& os, const Point& dt);
		friend istream& operator>>(istream is, Point& cl);



};


