#include<iostream>
using namespace std;

class Point {
public: double x, y;
};

class Vector {
public: 
    Point start, end;
    
    void offset(double offsetX, double offsetY) {
        start.x += offsetX;
        end.x += offsetX;
        start.y += offsetY;
        end.y += offsetY;
    }
    
    void print() {
        cout << "(" << start.x << "," << start.y << ") -> (" << end.x <<
        "," << end.y << ")" << endl;
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
