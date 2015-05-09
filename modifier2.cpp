#include<iostream>
using namespace std;

class Point {
private:
double x, y;
Point(double nx, double ny) {
x = nx; y = ny;
}
};
int main() {
Point p(2.0,3.0);
p.x = 5.0; // allowed
cout<<p.x<<endl;
}
