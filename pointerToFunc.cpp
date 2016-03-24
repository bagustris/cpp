/*
 * pointerToFunc.cpp: 
 *
 * 03/17/2016 04:08:19 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */

#include <iostream>

using namespace std;

int add(int first, int second) {
    return first + second;
}

int subtract(int first, int second) {
    return first - second;
}

int operation(int first, int second, int (*functocall)(int, int)) {
    return (*functocall)(first, second);
}

int main() {
    int  a, b;
    int  (*plus)(int, int) = add;
    int (*minus)(int, int) = subtract;

    a = operation(7, 5, plus);
    b = operation(20, a, minus);
    cout << "a = " << a << " and b = " << b << endl;
    return 0;
}
