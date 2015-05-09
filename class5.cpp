#include<iostream>
using namespace std;

class Point {
public:
    double x, y;
    void offset(double offsetX, double offsetY) {
    x += offsetX; y += offsetY;
    }
    
    void print() {
    cout << "(" << x << "," << y << ")";
}
};

//methods of fields can be called
class Vector {
public:
    Point start, end;
    
    void offset(double offsetX, double offsetY) {
        start.offset(offsetX, offsetY);
        end.offset(offsetX, offsetY);
    }
    
    void print() {
        start.print();
        cout << " -> ";
        end.print();
        cout << endl;
    }
};

int main() {
Vector vec;
vec.start.x = 1.2; vec.end.x = 2.0; 
vec.start.y = 0.4; vec.end.y = 1.6;
vec.print();
vec.offset(1.0, 1.5);
vec.print();
}
