#include <iostream>
#include "Point.h"
#include "MyCircle.h"

using namespace std;

int main()
{
    Point _new;
    _new.printInfo();

    Point newPoint = Point(1, 2);
    newPoint.printInfo();

    Point newPointother = Point(2, 2);
    newPointother.printInfo();

    Point newPointother1 = Point(1, 2);
    newPointother1.printInfo();

    Point p1(1, 2);
    cout << "Point p1: " << p1 << std::endl; 

    MyCircle circle1(7, 4, 2);
    cout << circle1 << std::endl; // Вывод: {{7, 4};{2}}




}
