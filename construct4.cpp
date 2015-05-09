// construc4.cpp; demo copy of constructor
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
Point q(1.0,2.0); // default constructor
cout<<"Point P, x= "<<q.x<<" ,y= "<<q.y<<endl;
Point r=q;
cout<<"Point R, x= "<<r.x<<" ,y= "<<r.y<<endl;
}

