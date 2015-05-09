// modifier3.cpp : Public vs Private
#include<iostream>
using namespace std;

class Point {
    private:
        double x, y;
    public:
        Point(double nx, double ny) {
        x = nx; y = ny;
        }   
        double getX() { return x; }
        double getY() { return y; }
};

int main() {
Point p(2.0,3.0);
cout <<"P, x= " << p.getX() << endl; // allowed
cout <<"P, y= " << p.getY() << endl; // allowed
}
