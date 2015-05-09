#include<iostream>
using namespace std;

class Point {
public:
    double x, y;
    Point() {
    x = 0.0; y = 0.0; cout << "default constructor" << endl;
    }

    Point(double nx, double ny) {
    x = nx; y = ny; cout << "2-parameter constructor" << endl;
    }
};

int main() {
Point p; // default constructor
cout<<"Point P, x= "<<p.x<<" ,y= "<<p.y<<endl;
Point q(2.0, 3.0); // 2-parameter constructor
cout<<"Point Q, x= "<<q.x<<" ,y= "<<q.y<<endl;
}
