#include "MyCircle.h"
using namespace std;


int main()
{
    Point oa(12, 3);
    Point ob(31, -3);
    MyCircle a(oa, 3);
    MyCircle b(ob, 7);
    
    cout << "Intersection: " << a.isIntersect(b) << endl;
    cout << a << " " << b << endl;
    b.setR(100);
    cout << "Intersection: " << a.isIntersect(b) << endl;
    cout << a << " " << b << endl;
    
    cout << a.calculateSquare() << " " << b.calculateSquare() << endl;
    cout << a.calculatePerimetr() << " " << b.calculatePerimetr() << endl;
    
    cout << (a > b) << " " << (a < b) << " " << (a == b) << " " << (a >= b) << " " << (a <= b) << " " << (a != b) << endl;
    cout << (a > a) << " " << (a < a) << " " << (a == a) << " " << (a >= a) << " " << (a <= a) << " " << (a != a) << endl;
    cout << (b > b) << " " << (b < b) << " " << (b == b) << " " << (b >= b) << " " << (b <= b) << " " << (b != b) << endl;
 }
