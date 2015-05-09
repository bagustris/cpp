#include <iostream>
using namespace std;

class Point {
public:
    double x, y;
};

class Vector {
public:
    Point Start, End;
};

void offsetPoint(Point &p, double x, double y) { // does nothing
    p.x += x;
    p.y += y;
}

int main() {
    Point p;
    p.x = 3.0;
    p.y = 4.0;
    offsetPoint(p, 1.0, 2.0); // works
    cout << "(" << p.x << "," << p.y << ")"<<endl; // (4.0,6.0)
}
