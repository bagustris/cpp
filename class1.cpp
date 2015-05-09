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

int main() {
    Vector vec1;
    vec1.Start.x = 3.0;
    vec1.Start.y = 4.0;
    vec1.End.x = 5.0;
    vec1.End.y = 6.0;
    Vector vec2;
    vec2.Start.x = vec1.Start.x;
    cout<<"Vector 2, x= "<<vec2.Start.x<<endl;
    vec2.Start.x = 7.0;
    cout<<"Vector 2, x= "<<vec2.Start.x<<endl;
}
