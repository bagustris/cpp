#include <iostream>
//construc2.cpp : demo constructor can accept parameters
using namespace std;

class Point {
public:
    double x, y;
    Point(double nx, double ny) {
    x = nx; y = ny; 
    cout << "2-parameter constructor" << endl;
}
};

int main() {
Point p(2.0, 3.0); // 2-parameter constructor
cout<<"x= "<<p.x<<" ,y= "<<p.y<<endl;
}
